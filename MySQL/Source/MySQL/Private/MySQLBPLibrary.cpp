// Copyright 2018-2019, Sameek Kundu. All Rights Reserved. 


#include "MySQLBPLibrary.h"
#include "IImageWrapper.h"
#include "XmlParser.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "IImageWrapperModule.h"

#if PLATFORM_WINDOWS

#include <codecvt>

using namespace std;



/**
* Gets the DllFilePath from the game plugin directory (Exists if the plugin is installed as project plugin , not as engine plugin)
*/
static FString GameDllFilePath = FPaths::Combine(*FPaths::ProjectPluginsDir(), TEXT("MySQL/Source/SQLLib"), TEXT("SQL.dll"));

/**
* Gets the DllFilePath from the engine plugin directory under marketplace plugins (Exists if the plugin is downloaded from the marketplace and installed as engine plugin)
*/
static FString MarketplaceDllFilePath = FPaths::Combine(*FPaths::EnginePluginsDir(), TEXT("Marketplace/MySQL/Source/SQLLib"), TEXT("SQL.dll"));

/**
* Gets the DllFilePath from the engine plugin directory (Exists if the plugin is installed as engine plugin but not inside marketplace folder)
*/
static FString EngineDllFilePath = FPaths::Combine(*FPaths::EnginePluginsDir(),
	TEXT("MySQL/Source/SQLLib"), TEXT("SQL.dll"));



static FString GetFilePath()
{
	//Checks for the Plugin path from the current plugin directory. 
	FString Pluginpath = IPluginManager::Get().FindPlugin(TEXT("MySQL"))->GetBaseDir();

	FString DllPath = FPaths::Combine(*Pluginpath, TEXT("Source/SQLLib"), TEXT("SQL.dll"));

	if (FPaths::FileExists(DllPath))
	{
		return DllPath;
	}
	else if (FPaths::FileExists(MarketplaceDllFilePath))
	{
		return MarketplaceDllFilePath;
	}
	else if (FPaths::FileExists(GameDllFilePath))
	{

		return GameDllFilePath;
	}
	else
	{
		return EngineDllFilePath;
	}
}


wchar_t* UMySQLBPLibrary::GetWCharfromChar(const char* Input)
{
	const size_t length = 1 + strlen(Input);
	wchar_t* wcsText = new wchar_t[length];

	size_t convertedSize = 0;

	_locale_t local = _create_locale(LC_ALL, "Chinese");
	errno_t ret = _mbstowcs_s_l(&convertedSize, wcsText, length, Input, _TRUNCATE, local);

	return wcsText;
}


char* UMySQLBPLibrary::GetCharfromFString(FString Query)
{
	const TCHAR* queryTChar = *Query;

	size_t len;
	_locale_t local = _create_locale(LC_ALL, "Chinese");

	_wcstombs_s_l(&len, NULL, 0, queryTChar, 0, local);

	size_t convertedSize = 0;

	char *charBuffer = (char *)malloc(len);
	_wcstombs_s_l(&convertedSize, charBuffer, len,
		queryTChar, _TRUNCATE, local);

	return charBuffer;
}



void UnloadDLL(void *DLLHandle)
{
	if (DLLHandle != nullptr)
	{
		FPlatformProcess::FreeDllHandle(DLLHandle);
		DLLHandle = nullptr;
	}
}


FString UMySQLBPLibrary::GetCurrentDomain()
{
	typedef const char*(*_GetDomain)(bool res);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}


	if (DLLHandle != NULL)
	{
		_GetDomain DLLFuncPtr = NULL;
		FString procName = "GetDomain";
		DLLFuncPtr = (_GetDomain)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FString output(result);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			return output;
		}
	}
	return "";
}

FString UMySQLBPLibrary::GetCurrentUser()
{
	typedef const char*(*_GetUserName)(bool res);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_GetUserName DLLFuncPtr = NULL;
		FString procName = "GetUserName";
		DLLFuncPtr = (_GetUserName)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FString output(result);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			return output;
		}
	}
	return "";
}



void UMySQLBPLibrary::SetConnectionProperties(FString Server, FString DBName, FString UserID, FString Password, FString ExtraParam, bool IsTrusted)
{


	string server(TCHAR_TO_UTF8(*Server));
	char* sv = _strdup(server.c_str());
	string dbname(TCHAR_TO_UTF8(*DBName));
	char* db = _strdup(dbname.c_str());
	string userid(TCHAR_TO_UTF8(*UserID));
	char* uid = _strdup(userid.c_str());
	string password(TCHAR_TO_UTF8(*Password));
	char* pw = _strdup(password.c_str());
	string eparam(TCHAR_TO_UTF8(*ExtraParam));
	char* ep = _strdup(eparam.c_str());

	FString trustedString = (IsTrusted ? "true" : "false");
	string istrusted(TCHAR_TO_UTF8(*trustedString));
	char* t = _strdup(istrusted.c_str());

	typedef void(*_SetConnectionProperties)(char* server, char* dbname, char* userid, char* password, char* eparam, char* isTrusted);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle)
	{
		_SetConnectionProperties DLLFuncPtr = NULL;
		FString procName = "SetConnectionProperties";
		DLLFuncPtr = (_SetConnectionProperties)FPlatformProcess::GetDllExport(DLLHandle, *procName);

		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(sv, db, uid, pw, ep, t);
		}

		UnloadDLL(DLLHandle);
	}
}


bool UMySQLBPLibrary::AuthenticateUser(FString UserName, FString Password, FString Domain)
{
	string domain(TCHAR_TO_UTF8(*Domain));
	char* d = _strdup(domain.c_str());
	string username(TCHAR_TO_UTF8(*UserName));
	char* u = _strdup(username.c_str());
	string password(TCHAR_TO_UTF8(*Password));
	char* p = _strdup(password.c_str());
	typedef bool(*_Authenticate)(char* UserName, char* Password, char* Domain);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_Authenticate DLLFuncPtr = NULL;
		FString procName = "Authenticate";
		DLLFuncPtr = (_Authenticate)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{

			bool result = DLLFuncPtr(u, p, d);
			UnloadDLL(DLLHandle);
			return result;

		}
		UnloadDLL(DLLHandle);

	}


	return false;


}


UTexture2D* UMySQLBPLibrary::SelectImageFromQuery(FString SelectQuery, bool &IsSuccess, FString &ErrorMessage)
{

	typedef const char*(*_SelectImageFromQuery)(char* query);
	string query(TCHAR_TO_UTF8(*SelectQuery));
	char* q = _strdup(query.c_str());

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_SelectImageFromQuery DLLFuncPtr = NULL;
		FString procName = "SelectImageFromQuery";
		DLLFuncPtr = (_SelectImageFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(q);
			UnloadDLL(DLLHandle);
			ErrorMessage = GetErrorMessage();

			if (ErrorMessage.IsEmpty())
			{
				IsSuccess = true;
				UTexture2D* ImageTexture = LoadTextureFromPath(FString(result));
				return ImageTexture;
			}
			else
				IsSuccess = false;
		}

		UnloadDLL(DLLHandle);

	}

	return NULL;

}

FString UMySQLBPLibrary::BrowseFile(FString DialogueTitle, FString FileTypes)
{

	string title(TCHAR_TO_UTF8(*DialogueTitle));
	char* t = _strdup(title.c_str());
	string types(TCHAR_TO_UTF8(*FileTypes));
	char* ty = _strdup(types.c_str());
	typedef const char*(*_FileBrowser)(char* title, char* types);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_FileBrowser DLLFuncPtr = NULL;
		FString procName = "FileBrowser";
		DLLFuncPtr = (_FileBrowser)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(t, ty);
			UnloadDLL(DLLHandle);
			return result;
		}
		UnloadDLL(DLLHandle);

	}

	return "";

}

bool UMySQLBPLibrary::GetConnectionBusyStatus()
{
	typedef bool(*_GetConnectionBusyStatus)(bool res);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_GetConnectionBusyStatus DLLFuncPtr = NULL;
		FString procName = "GetConnectionBusyStatus";
		DLLFuncPtr = (_GetConnectionBusyStatus)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			bool result = DLLFuncPtr(false);
			UnloadDLL(DLLHandle);
			return result;
		}

		UnloadDLL(DLLHandle);

	}

	return false;

}

FString UMySQLBPLibrary::GetErrorMessage()
{

	typedef const char*(*_GetErrorMessage)(bool res);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_GetErrorMessage DLLFuncPtr = NULL;
		FString procName = "GetErrorMessage";
		DLLFuncPtr = (_GetErrorMessage)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			UnloadDLL(DLLHandle);
			return FString(result);
		}
		UnloadDLL(DLLHandle);

	}

	return "";
}


void UMySQLBPLibrary::SelectDataFromQuery(FString Query, EMysqlSuccessStatus &SuccessStatus, FString &ErrorMessage,
	TArray<FMySQLDataTable> &ResultByColumn, TArray<FMySQLDataRow> &ResultByRow)
{

	char* q = GetCharfromFString(Query);

	typedef const char*(*_SelectDataFromQuery)(char* query);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}


	TArray<FString> Results;
	if (DLLHandle != NULL)
	{
		_SelectDataFromQuery DLLFuncPtr = NULL;
		FString procName = "SelectDataFromQuery";
		DLLFuncPtr = (_SelectDataFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				SuccessStatus = EMysqlSuccessStatus::Success;
			else
				SuccessStatus = EMysqlSuccessStatus::Failed;

			GetSelectedTable(ResultByColumn, ResultByRow);

		}
		UnloadDLL(DLLHandle);

	}


}

template <class DLLFunctionType>
DLLFunctionType GetDLLFunction(FString procname)
{
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		DLLFunctionType DLLFuncPtr = NULL;
		DLLFuncPtr = (DLLFunctionType)FPlatformProcess::GetDllExport(DLLHandle, *procname);
		return DLLFuncPtr;
	}
	return NULL;
}

void UMySQLBPLibrary::GetSelectedTable(TArray<FMySQLDataTable>	&ResultByColumn, TArray<FMySQLDataRow> &ResultByRow)
{
	int rowcount = -1;
	int columncount = -1;

	typedef int(*_GetSelectedTableRowCount)(bool result);
	_GetSelectedTableRowCount DLLFuncPtrRow = GetDLLFunction<_GetSelectedTableRowCount>("GetSelectedTableRowCount");
	if (DLLFuncPtrRow != NULL)
	{
		rowcount = DLLFuncPtrRow(false);
	}

	typedef int(*_GetSelectedTableColumnCount)(bool result);
	_GetSelectedTableColumnCount DLLFuncPtrCol = GetDLLFunction<_GetSelectedTableColumnCount>("GetSelectedTableColumnCount");
	if (DLLFuncPtrCol != NULL)
	{
		columncount = DLLFuncPtrCol(false);
	}

	typedef const char*(*_GetSelectedTableColumnByIndex)(int index);
	_GetSelectedTableColumnByIndex DLLFuncPtrColName = GetDLLFunction<_GetSelectedTableColumnByIndex>("GetSelectedTableColumnByIndex");
	if (DLLFuncPtrColName != NULL)
	{

		FMySQLDataTable data;
		for (int i = 0; i < columncount; i++)
		{
			const char* cvalue = DLLFuncPtrColName(i);
			wchar_t* wcvalue = GetWCharfromChar(cvalue);

			FString value = FString(wcvalue);
			data.ColumnName = value;
			ResultByColumn.Add(data);

			delete[](wcvalue);

		}
	}

	//Row Iteration
	typedef const char*(*_GetSelectedTableValueByIndex)(int rowindex, int columnindex);
	_GetSelectedTableValueByIndex DLLFuncPtrRowValue = GetDLLFunction<_GetSelectedTableValueByIndex>("GetSelectedTableValueByIndex");
	if (DLLFuncPtrRowValue != NULL)
	{

		for (int i = 0; i < rowcount; i++)
		{
			TArray<FString> RowData;
			//Column Iteration
			for (int j = 0; j < columncount; j++)
			{
				const char* cvalue = DLLFuncPtrRowValue(i, j);
				wchar_t* wcvalue = GetWCharfromChar(cvalue);

				FString value = FString(wcvalue);
				ResultByColumn[j].ColumnData.Add(value);
				RowData.Add(value);

				delete[](wcvalue);

			}

			FMySQLDataRow Row;
			Row.RowData = RowData;
			ResultByRow.Add(Row);
		}
	}
}


EMySQLConnectionState UMySQLBPLibrary::CheckConnectionState(FString &ErrorMessage)
{

	typedef int(*_CheckConnectionState)(bool res);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_CheckConnectionState DLLFuncPtr = NULL;
		FString procName = "CheckConnectionState";
		DLLFuncPtr = (_CheckConnectionState)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			int r = DLLFuncPtr(false);
			ErrorMessage = GetErrorMessage();
			switch (r)
			{
			case 0:
				return EMySQLConnectionState::Broken;
			case 1:
				return EMySQLConnectionState::Closed;
			case 2:
				return EMySQLConnectionState::Connecting;
			case 3:
				return EMySQLConnectionState::Executing;
			case 4:
				return EMySQLConnectionState::Fetching;
			case 5:
				return EMySQLConnectionState::Open;
			default:
				return EMySQLConnectionState::Broken;
			}
			FPlatformProcess::FreeDllHandle(DLLHandle);
		}
	}

	return EMySQLConnectionState::Broken;

}

void UMySQLBPLibrary::UpdateDataFromQueryAsync(FString Query)
{
	char* q = GetCharfromFString(Query);

	typedef void(*_UpdateDataFromQueryAsync)(char* query);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_UpdateDataFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "UpdateDataFromQueryAsync";
		DLLFuncPtr = (_UpdateDataFromQueryAsync)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
		}

		UnloadDLL(DLLHandle);

	}


}

void UMySQLBPLibrary::SelectDataFromQueryAsync(FString Query)
{
	char* q = GetCharfromFString(Query);

	typedef void(*_SelectDataFromQueryAsync)(char* query);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_SelectDataFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "SelectDataFromQueryAsync";
		DLLFuncPtr = (_SelectDataFromQueryAsync)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
		}

		UnloadDLL(DLLHandle);

	}


}



EMySQLQueryExecutionState UMySQLBPLibrary::CheckQueryExecutionState(FString &ErrorMessage)
{
	typedef int(*_CheckQueryExecutionState)(bool res);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_CheckQueryExecutionState DLLFuncPtr = NULL;
		FString procName = "CheckQueryExecutionState";
		DLLFuncPtr = (_CheckQueryExecutionState)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			int r = DLLFuncPtr(false);
			UnloadDLL(DLLHandle);

			switch (r)
			{
			case 0:
				return EMySQLQueryExecutionState::Executing;
			case 1:
				return EMySQLQueryExecutionState::Success;
			case -1:
				ErrorMessage = GetErrorMessage();
				return EMySQLQueryExecutionState::Failed;
			}
		}

		UnloadDLL(DLLHandle);

	}

	ErrorMessage = GetErrorMessage();
	return EMySQLQueryExecutionState::Failed;

}



void UMySQLBPLibrary::UpdateDataFromQuery(FString Query, EMysqlSuccessStatus &SuccessStatus, FString &ErrorMessage)
{

	char* q = GetCharfromFString(Query);

	typedef void(*_UpdateDataFromQuery)(char* query1);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}


	if (DLLHandle != NULL)
	{
		_UpdateDataFromQuery DLLFuncPtr = NULL;
		FString procName = "UpdateDataFromQuery";
		DLLFuncPtr = (_UpdateDataFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				SuccessStatus = EMysqlSuccessStatus::Success;
			else
				SuccessStatus = EMysqlSuccessStatus::Failed;

		}
		UnloadDLL(DLLHandle);

	}

}

void UMySQLBPLibrary::UpdateImageFromQuery(FString Query, FString UpdateParameter, FString ImagePath, bool &IsSuccess, FString &ErrorMessage)
{
	string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());

	string param(TCHAR_TO_UTF8(*UpdateParameter));
	char* pm = _strdup(param.c_str());

	string path(TCHAR_TO_UTF8(*ImagePath));
	char* pt = _strdup(path.c_str());


	typedef bool(*_UpdateImageFromQuery)(char* query, char* param, char* path);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	TArray<FString> Results;
	TArray<FMySQLDataTable> SQLDataTable;
	if (DLLHandle != NULL)
	{
		_UpdateImageFromQuery DLLFuncPtr = NULL;
		FString procName = "UpdateImageFromQuery";
		DLLFuncPtr = (_UpdateImageFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q, pm, pt);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				IsSuccess = true;
			else
				IsSuccess = false;

		}

		UnloadDLL(DLLHandle);

	}



}

UTexture2D* UMySQLBPLibrary::LoadTextureFromPath(const FString& Path)
{
	if (Path.IsEmpty()) return NULL;
	EImageFormat imagetype = EImageFormat::Invalid;

	if (Path.ToUpper().EndsWith(".PNG"))
	{
		imagetype = EImageFormat::PNG;
	}
	else if (Path.ToUpper().EndsWith(".JPEG") || Path.ToUpper().EndsWith(".JPG"))
	{
		imagetype = EImageFormat::JPEG;
	}
	else if (Path.ToUpper().EndsWith(".BMP"))
	{
		imagetype = EImageFormat::BMP;
	}

	IImageWrapperModule* ImageWrapperModule =
		FModuleManager::LoadModulePtr<IImageWrapperModule>(FName("ImageWrapper"));

	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule->CreateImageWrapper(imagetype);
	TArray<uint8> RawFileData;
	if (FFileHelper::LoadFileToArray(RawFileData, *Path))
	{
		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
		{
			const TArray<uint8>* UncompressedBGRA = NULL;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				UTexture2D* Image = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

				void* TextureData = Image->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
				Image->PlatformData->Mips[0].BulkData.Unlock();

				// Update the rendering resource from data.
				Image->UpdateResource();
				return Image;
			}

		}
	}
	return Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *(Path)));
}


#endif

