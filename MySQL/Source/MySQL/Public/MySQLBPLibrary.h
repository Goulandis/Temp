// Copyright 2018-2019, Sameek Kundu. All Rights Reserved. 

#pragma once


#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#include "MySQLBPLibrary.generated.h"

USTRUCT(BlueprintType, Category = "MySql|Tables")
struct FMySQLDataTable
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQLDataTable")
		FString ColumnName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQLDataTable")
		TArray<FString> ColumnData;
};

USTRUCT(BlueprintType, Category = "MySql|Tables")
struct FMySQLDataRow
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQLDataRow")
		TArray<FString> RowData;
};

UENUM(BlueprintType)
enum class EMySQLConnectionState : uint8
{
	Broken 	UMETA(DisplayName = "Broken"),
	Closed 	UMETA(DisplayName = "Closed"),
	Connecting	UMETA(DisplayName = "Connecting"),
	Executing 	UMETA(DisplayName = "Executing"),
	Fetching 	UMETA(DisplayName = "Fetching"),
	Open	UMETA(DisplayName = "Open")
};

UENUM(BlueprintType)
enum class EMySQLQueryExecutionState : uint8
{
	Executing 	UMETA(DisplayName = "Executing"),
	Success 	UMETA(DisplayName = "Success"),
	Failed	UMETA(DisplayName = "Failed")
};

UENUM(BlueprintType)
enum class EMysqlSuccessStatus : uint8
{
	Busy 	UMETA(DisplayName = "Busy"),
	Success 	UMETA(DisplayName = "Success"),
	Failed	UMETA(DisplayName = "Failed")
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQueryExecuting);

/**
* Contains all the methods that are used to connect to the C# dll
* which takes care of connecting to the MySQL server and executing
* the given queries. These methods can be directly called from GetErrorMessage
* the Blueprints.

*/
UCLASS()
class UMySQLBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:


	/**
	* Gets the current error message when a Query Execution fails
	*/
	static FString GetErrorMessage();

	/**
	* Check if Current Connection is Busy
	*/
	static bool GetConnectionBusyStatus();


	static char* GetCharfromFString(FString Query);
	static wchar_t* GetWCharfromChar(const char* Input);
	/**
	* Loads an image into UE4 texture from a given path
	*
	* @param	Path	The path of the image file
	*/
	static UTexture2D* LoadTextureFromPath(const FString& Path);


	//TEMPLATE Load Obj From Path
	template <typename ObjClass>
	static FORCEINLINE ObjClass* LoadObjFromPath(const FName& Path)
	{
		if (Path == NAME_None) return NULL;
		return Cast<ObjClass>(StaticLoadObject(ObjClass::StaticClass(), NULL, *Path.ToString()));
	}

public:


	/**
	* Gets the Current Domain of the PC
	*/
	UFUNCTION(BlueprintPure, Category = "LDAP")
		static FString GetCurrentDomain();

	/**
	* Gets the Current Windows Login User Name
	*/
	UFUNCTION(BlueprintPure, Category = "LDAP")
		static FString GetCurrentUser();

	/**
	* Authenticates the User against the Windows Credentials. This only works if the current Windows user requires a password to login
	*
	* @param	UserName	Windows UserName. Can be obtained from the GetCurrentUser() function
	* @param	Password	Windows Password
	* @param	Domain	    PC Domain. Can be obtained from the GetCurrentDomain() function
	*/
	UFUNCTION(BlueprintCallable, Category = "LDAP")
		static bool AuthenticateUser(FString UserName, FString Password, FString Domain);

	/**
	* Sets the Connection Properties in order to be able to connect to the Database. This function must be called before performing any
	  Database Operations
	*
	* @param	Server          SQL Server Name
	* @param	DBName	        Initial Database Name to be connected to
	* @param	UserID	        SQL Server UserID. Not relevant while using Windows Authentication
	* @param	Password    	SQL Server Password. Not relevant while using Windows Authentication
	* @param	ExtraParam   	Additional Connection Parameter to be included
	* @param	IsTrusted    	Should be checked if user is using Windows Authentication Mode, unchecked for MySQL Server Authentication
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server")
		static void SetConnectionProperties(FString Server, FString DBName, FString UserID, FString Password,
			FString ExtraParam, bool IsTrusted);

	/**
* Checks the current connection state
*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server")
		static EMySQLConnectionState CheckConnectionState(FString &ErrorMessage);

	/**
	* Selects image from the database and returns Texture2D format of the selected image
	*
	* @param	Query           Select Query which fetches a single image from the database
	* @param	IsSuccess	    Returns true if the Query execution is successful
	* @param	ErrorMessage	Returns the exception message thrown if the Query execution fails
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Select")
		static UTexture2D* SelectImageFromQuery(FString Query, bool &IsSuccess, FString &ErrorMessage);

	/**
	* Selects data from the database
	*
	* @param	Query           Select Query which selects data from the database
	* @param	SuccessStatus	Returns the status of Query execution , or busy if the connection is already busy
	* @param	ErrorMessage	Returns the exception message thrown if the Query execution fails
	* @param	ResultByColumn	Returns the result of the Selected Query as an array of SQLDataTable structure
	* @param	ResultByRow  	Returns the result of the Selected Query as an array of SQLDataRow structure
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Select")
		static void SelectDataFromQuery(FString Query, EMysqlSuccessStatus &SuccessStatus, FString &ErrorMessage, TArray<FMySQLDataTable>
			&ResultByColumn, TArray<FMySQLDataRow> &ResultByRow);

	/**
	* Asynchronously executes select query to the database
	*
	* @param	Query           Select Query which selects data from the database
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Select")
		static void SelectDataFromQueryAsync(FString Query);


	/**
	* Gets the Selected data from the database after the asynchronous select query has been successfully executed
	*
	* @param	ResultByColumn	Returns the result of the Selected Query as an array of SQLDataTable structure
	* @param	ResultByRow  	Returns the result of the Selected Query as an array of SQLDataRow structure
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Select")
		static void GetSelectedTable(TArray<FMySQLDataTable>
			&ResultByColumn, TArray<FMySQLDataRow> &ResultByRow);

	/**
	* Executes a Query to the database
	*
	* @param	Query           Query which is to be executed to the database
	* @param	SuccessStatus	Returns the status of Query execution , or busy if the connection is already busy
	* @param	ErrorMessage	Returns the exception message thrown if the Query execution fails
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Update")
		static void UpdateDataFromQuery(FString Query, EMysqlSuccessStatus &SuccessStatus, FString &ErrorMessage);

	/**
	* Asynchronously Executes a Query to the database
	*
	* @param	Query           Query which is to be executed to the database
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Update")
		static void UpdateDataFromQueryAsync(FString Query);

	/**
	* Checks for the completion of Asynchronous exceution of Update or Select query
	*
	* @param	ErrorMessage	Returns the exception message thrown if the Query execution fails
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Update")
		static EMySQLQueryExecutionState CheckQueryExecutionState(FString &ErrorMessage);
	/**
	* Updates image to the database from the hard drive
	*
	* @param	Query           Update Query which inserts or updates image to the database
	* @param	UpdateParameter Value which has been passed as a parameter for updating the image in the previous input,
								without the @ symbol
	* @param	ImagePath       Path of the Image that needs to be updated in the SQL Server
	* @param	IsSuccess	    Returns true if the Query execution is successful
	* @param	ErrorMessage	Returns the exception message thrown if the Query execution fails
	*/
	UFUNCTION(BlueprintCallable, Category = "MySql Server|Update")
		static void UpdateImageFromQuery(FString Query, FString UpdateParameter, FString ImagePath, bool &IsSuccess, FString &ErrorMessage);

	/**
	* Browse File from Hard drive
	*
	* @param	DialogueTitle    Title that will show up in the Browse Dialogue
	* @param	FileTypes	     Filtered File Types that will be displayed in the Browse Dialogue
	*/
	UFUNCTION(BlueprintCallable, Category = "Utilities")
		static FString BrowseFile(FString DialogueTitle, FString FileTypes);



};
