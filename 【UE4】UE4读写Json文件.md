# 一、准备工作

如果我们想要在UE4中读写Json文件，那么我们必须使UE4包含<font color=red>Json和JsonUtilities</font>这两个模块，那么UE4如何添加模块呢？

UE4添加预定义模块的方法很简单，我只需打开工程的.Biuld.cs文件，在其中的`PublicDependencyModuleNames.AddRange()`函数中追加两个模块即可，如：

```C++
using UnrealBuildTool;

public class DATA_sys : ModuleRules
{
	public DATA_sys(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" ,"Json","JsonUtilities"});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
```

如果我们要添加自定义模块就有点麻烦了，当然这里就不赘述了。

包含这两个模块之后，我们还需要用到<font color=red> Json.h、JsonObject.h、JsonSerializer.h</font>三个头文件，其中JsonSerializer.h是用于Json序列化与反序列化用的。

至此我们就可以使用UE4自带的工具进行Json文件的读写工作了。

# 二、Json文件写

## 1.非序列化写入

```C++
void AMysqlJsonCpp::CreatJson()
{
	FString filePath = FPaths::GameContentDir() + TEXT("MysqlConfig/Connect.json");
	FString jsonStr;
	TSharedRef<TJsonWriter<>> jsonWriter = TJsonWriterFactory<>::Create(&jsonStr);
	jsonWriter->WriteObjectStart();
	jsonWriter->WriteValue(TEXT("server"), TEXT("127.0.0.1"));
	jsonWriter->WriteObjectEnd();
	jsonWriter->Close();
	FFileHelper::SaveStringToFile(jsonStr, *filePath);
}
```

- `FPaths::GameContentDir()`返回当前工程目录的Content文件夹的路径，FPaths为UE4的路径读写工具；

- `FString jsonStr`的作用是用于关联UE4的Json写工具TJsonWriter<>，作为输入流载体，且JsonStr必须是FString类型；

- `TShareRef<T>`是UE4自身的共享指针类型；

- `TJsonWriter<>`是UE4专门用于写Json的模板类，其中类型参数通常为TCHAR，其中有多个方法供开发者使用：

  | 函数                                          | 作用                 |
  | --------------------------------------------- | -------------------- |
  | Close()                                       | 关闭写工具           |
  | WriterArrayStart()                            | 开始一个Json数组     |
  | WriterArrayEnd()                              | 结束一个Json数组     |
  | WriterNull(FString)                           | 为一个键写一个空值   |
  | WriterObjectStart()                           | 开始一个Json对象     |
  | WriterObjectEnd()                             | 结束一个Json对象     |
  | WriterValue(FString,FString/int32/float/bool) | 向Json文件写入键值对 |

  

- `TJsonWriterFactory<>::Create(FString)`是UE4用来生成Json写工具TJsonWriter<>的类，TJsonFactory<>只有一个方法就是Create；

- `FFileHelper`UE4的文件读写工具，方法`SaveStringToFile(TJsonWriter*,FString*)`函数的作用就是将Json写工具中的Json数据写到FString字符串中的路径文件中。

使用非序列化方式写入Json时，写入方式需要严格按照Json的语法格式来做，如最开始需要使用WriterObjectStart()创建一个根前括号，即Json语法中最外面一层的`{`，所有写入结束后需要使用WriterObjectEnd()声明根对象结束，即Json语法中的最外面一层的`}`，同理数组也需要按对象一样的方法进行处理。如此才能写入一个结构完整的Json文本。

## 2.序列化写入

```c++
void AMyActor::Test()
{
	TSharedPtr<FJsonObject> rootObj = MakeShareable(new FJsonObject());
	rootObj->SetStringField("root", "1");
	TArray<TSharedPtr<FJsonValue>> arrValue;
	TSharedPtr<FJsonValueString> tmp = MakeShareable(new FJsonValueString("array"));
	arrValue.Add(tmp);
	rootObj->SetArrayField("array", arrValue);
	FString filePath = FPaths::GameContentDir() + TEXT("MysqlConfig/text.json");
	FString jsonStr;
	TSharedRef<TJsonWriter<TCHAR>> jsonWriter = TJsonWriterFactory<TCHAR>::Create(&jsonStr);
	FJsonSerializer::Serialize(rootObj.ToSharedRef(), jsonWriter);
	FFileHelper::SaveStringToFile(jsonStr, *filePath);
	UE_LOG(LogTemp, Error, TEXT("%s"),*filePath);
}
```

序列化的写入方式则无需考虑按Json的语法结构进行写入，序列化的写入方式是通过一个FJsonObject对象进行Json文本的写入。

- 首先使用MakeSahreable()函数创建一个FJsonObject对象并使用共享指针引用。
- 然后我们便可以使用FJsonObject对象中的`SetArrayField(FString,TArray<FSharePtr<FJsonValue>>)`、`SetBoolFiled(FString,bool)`、`SetNumberField(FString,Number)`、`SetStringField(FString,FString)`、`SetObjectField(FString,TSharePtr<FJsonObject>)`、`SetField(FString,TSharePtr<FJsonValue>)`等函数向FJsonObject对象中写分别入数组、bool值、数字、字符串、对象和Json键值对。其中数组的写入较为麻烦，我们需要先向创建Json键值对类型共享指针的TArray数组`TArray<TSharePtr<FJsonValue>>`。并向数组中添加指向FJsonValue对象的共享指针后然后才可以使用SetArrayField进行数组的Json文本写入。
- 我们序列化写好的FJsonObject对象需要转化为FString字符串才能向文本中写入数据，FJsonObject转化为FString输入流的方式就是`FJsonSerializer::Serialize(TSharePtr<FJsonObject>.ToShareRef(),TSharePtr<FJsonWriter>)`;其中`TSharePtr<FJsonWriter>`和非序列化写入一样需要绑定一个FString作为输入流载体。
- 最后就可以通过FFileHelper::SaveStringToFile(FString,\*FString)，前一个FString是输入流载体，后一个\*FString是Json文件的存储路径。

# 三、Json文件读

## 1.反序列化读取



```C++
TArray<FName> AMysqlJsonCpp::ReadMysqlConnectConfig()
{
	FString filePath = FPaths::GameContentDir() + TEXT("MysqlConfig/Connect.json");
	if (FPaths::FileExists(filePath))
	{
		FString server;
		FString dbName;
		FString userId;
		FString passwd;
		TArray<FName> connectConfig;
		FString fileStr;
		FFileHelper::LoadFileToString(fileStr, *filePath);
		TSharedPtr<FJsonObject> rootObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> jsonReader = TJsonReaderFactory<>::Create(fileStr);
		if (FJsonSerializer::Deserialize(jsonReader, rootObject))
		{
			server = rootObject->GetStringField("server");
			dbName = rootObject->GetStringField("dbName");
			userId = rootObject->GetStringField("userId");
			passwd = rootObject->GetStringField("passwd");
		}
		connectConfig.Add(FName(*server));
		connectConfig.Add(FName(*dbName));
		connectConfig.Add(FName(*userId));
		connectConfig.Add(FName(*passwd));
	}

	return TArray<FName>();
}

```

- 首先Json文本的读取需要将Json文本以字符串的形式读入到一个FString的输入流载体中；
- 然后我们需要将这个输入流载体绑定到TJsonReader<>读出工具上；
- 然后使用`FJsonSerializer::Deserialize(TSharePtr<TJsonReader<>>,TSahrePtr<FJsonObject>)`将输入流载体的Json数据反序列化到FJsonObject对象中；
- 最后我们就可以使用FJsonObject对象中的`GetArrayField(FString)`、`GetBoolFiled(FString)`、`GetNumberField(FString)`、`GetStringField(FString)`、`GetObjectField(FString)`、`GetField(FString)`等方法从Json对象中读取指定键的值了。