```C++
void AMysqlJsonCpp::CreatJson()
{
	FString filePath = FPaths::GameContentDir() + TEXT("MysqlConfig/Connect.json");
	FString jsonStr;
	//TArray<TSharedPtr<FJsonValue>> arr;
	TSharedRef<TJsonWriter<>> jsonWriter = TJsonWriterFactory<>::Create(&jsonStr);
	//FJsonSerializer::Serialize(arr, jsonWriter);
	jsonWriter->WriteObjectStart();
	jsonWriter->WriteValue(TEXT("server"), TEXT("127.0.0.1"));
	jsonWriter->WriteObjectEnd();
	jsonWriter->Close();
	//FFileHelper::SaveArrayToFile(jsonStr, *filePath);
	FFileHelper::SaveStringToFile(jsonStr, *filePath);
}

TArray<FName> AMysqlJsonCpp::ReadMysqlConnectConfig()
{
	FString filePath = FPaths::GameContentDir() + TEXT("MysqlConfig/Connect.json");
	if (FPaths::FileExists(filePath))
	{
		/*FArchive *fileAr = IFileManager::Get().CreateFileReader(*filePath);
		TSharedPtr<FJsonObject> rootObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<TCHAR>> jsonReader = TJsonReaderFactory<TCHAR>::Create(fileAr);
		FJsonSerializer::Deserialize(jsonReader, rootObject);
		FString server = rootObject->GetStringField("server");*/
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

# Deserialize只支持utf16编码的json文件

# 一、Json文件写

## 1.非序列化写入

```C++
void AMysqlJsonCpp::CreatJson()
{
	FString filePath = FPaths::GameContentDir() + TEXT("MysqlConfig/Connect.json");
	FString jsonStr;
	//TArray<TSharedPtr<FJsonValue>> arr;
	TSharedRef<TJsonWriter<>> jsonWriter = TJsonWriterFactory<>::Create(&jsonStr);
	//FJsonSerializer::Serialize(arr, jsonWriter);
	jsonWriter->WriteObjectStart();
	jsonWriter->WriteValue(TEXT("server"), TEXT("127.0.0.1"));
	jsonWriter->WriteObjectEnd();
	jsonWriter->Close();
	//FFileHelper::SaveArrayToFile(jsonStr, *filePath);
	FFileHelper::SaveStringToFile(jsonStr, *filePath);
}
```

- FPaths::GameContentDir()返回当前工程目录的Content文件夹的路径；
- FString jsonStr的作用是用于关联