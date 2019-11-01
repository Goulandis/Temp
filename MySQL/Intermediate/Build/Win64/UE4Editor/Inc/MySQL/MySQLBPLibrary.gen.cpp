// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySQL/Public/MySQLBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLBPLibrary() {}
// Cross Module References
	MYSQL_API UFunction* Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MySQL();
	MYSQL_API UEnum* Z_Construct_UEnum_MySQL_EMysqlSuccessStatus();
	MYSQL_API UEnum* Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState();
	MYSQL_API UEnum* Z_Construct_UEnum_MySQL_EMySQLConnectionState();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLBPLibrary_NoRegister();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MySQL, nullptr, "QueryExecuting__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMysqlSuccessStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MySQL_EMysqlSuccessStatus, Z_Construct_UPackage__Script_MySQL(), TEXT("EMysqlSuccessStatus"));
		}
		return Singleton;
	}
	template<> MYSQL_API UEnum* StaticEnum<EMysqlSuccessStatus>()
	{
		return EMysqlSuccessStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMysqlSuccessStatus(EMysqlSuccessStatus_StaticEnum, TEXT("/Script/MySQL"), TEXT("EMysqlSuccessStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MySQL_EMysqlSuccessStatus_Hash() { return 1616522593U; }
	UEnum* Z_Construct_UEnum_MySQL_EMysqlSuccessStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMysqlSuccessStatus"), 0, Get_Z_Construct_UEnum_MySQL_EMysqlSuccessStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMysqlSuccessStatus::Busy", (int64)EMysqlSuccessStatus::Busy },
				{ "EMysqlSuccessStatus::Success", (int64)EMysqlSuccessStatus::Success },
				{ "EMysqlSuccessStatus::Failed", (int64)EMysqlSuccessStatus::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Busy.DisplayName", "Busy" },
				{ "Failed.DisplayName", "Failed" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "Success.DisplayName", "Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MySQL,
				nullptr,
				"EMysqlSuccessStatus",
				"EMysqlSuccessStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMySQLQueryExecutionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState, Z_Construct_UPackage__Script_MySQL(), TEXT("EMySQLQueryExecutionState"));
		}
		return Singleton;
	}
	template<> MYSQL_API UEnum* StaticEnum<EMySQLQueryExecutionState>()
	{
		return EMySQLQueryExecutionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMySQLQueryExecutionState(EMySQLQueryExecutionState_StaticEnum, TEXT("/Script/MySQL"), TEXT("EMySQLQueryExecutionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState_Hash() { return 2287431222U; }
	UEnum* Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMySQLQueryExecutionState"), 0, Get_Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMySQLQueryExecutionState::Executing", (int64)EMySQLQueryExecutionState::Executing },
				{ "EMySQLQueryExecutionState::Success", (int64)EMySQLQueryExecutionState::Success },
				{ "EMySQLQueryExecutionState::Failed", (int64)EMySQLQueryExecutionState::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Executing.DisplayName", "Executing" },
				{ "Failed.DisplayName", "Failed" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "Success.DisplayName", "Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MySQL,
				nullptr,
				"EMySQLQueryExecutionState",
				"EMySQLQueryExecutionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMySQLConnectionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MySQL_EMySQLConnectionState, Z_Construct_UPackage__Script_MySQL(), TEXT("EMySQLConnectionState"));
		}
		return Singleton;
	}
	template<> MYSQL_API UEnum* StaticEnum<EMySQLConnectionState>()
	{
		return EMySQLConnectionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMySQLConnectionState(EMySQLConnectionState_StaticEnum, TEXT("/Script/MySQL"), TEXT("EMySQLConnectionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MySQL_EMySQLConnectionState_Hash() { return 3023030868U; }
	UEnum* Z_Construct_UEnum_MySQL_EMySQLConnectionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMySQLConnectionState"), 0, Get_Z_Construct_UEnum_MySQL_EMySQLConnectionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMySQLConnectionState::Broken", (int64)EMySQLConnectionState::Broken },
				{ "EMySQLConnectionState::Closed", (int64)EMySQLConnectionState::Closed },
				{ "EMySQLConnectionState::Connecting", (int64)EMySQLConnectionState::Connecting },
				{ "EMySQLConnectionState::Executing", (int64)EMySQLConnectionState::Executing },
				{ "EMySQLConnectionState::Fetching", (int64)EMySQLConnectionState::Fetching },
				{ "EMySQLConnectionState::Open", (int64)EMySQLConnectionState::Open },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Broken.DisplayName", "Broken" },
				{ "Closed.DisplayName", "Closed" },
				{ "Connecting.DisplayName", "Connecting" },
				{ "Executing.DisplayName", "Executing" },
				{ "Fetching.DisplayName", "Fetching" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "Open.DisplayName", "Open" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MySQL,
				nullptr,
				"EMySQLConnectionState",
				"EMySQLConnectionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMySQLDataRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYSQL_API uint32 Get_Z_Construct_UScriptStruct_FMySQLDataRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataRow, Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataRow"), sizeof(FMySQLDataRow), Get_Z_Construct_UScriptStruct_FMySQLDataRow_Hash());
	}
	return Singleton;
}
template<> MYSQL_API UScriptStruct* StaticStruct<FMySQLDataRow>()
{
	return FMySQLDataRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLDataRow(FMySQLDataRow::StaticStruct, TEXT("/Script/MySQL"), TEXT("MySQLDataRow"), false, nullptr, nullptr);
static struct FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataRow
{
	FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLDataRow")),new UScriptStruct::TCppStructOps<FMySQLDataRow>);
	}
} ScriptStruct_MySQL_StaticRegisterNativesFMySQLDataRow;
	struct Z_Construct_UScriptStruct_FMySQLDataRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MySql|Tables" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData[] = {
		{ "Category", "SQLDataRow" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData = { "RowData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLDataRow, RowData), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_Inner = { "RowData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
		nullptr,
		&NewStructOps,
		"MySQLDataRow",
		sizeof(FMySQLDataRow),
		alignof(FMySQLDataRow),
		Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLDataRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLDataRow"), sizeof(FMySQLDataRow), Get_Z_Construct_UScriptStruct_FMySQLDataRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLDataRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLDataRow_Hash() { return 4265233976U; }
class UScriptStruct* FMySQLDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYSQL_API uint32 Get_Z_Construct_UScriptStruct_FMySQLDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataTable, Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataTable"), sizeof(FMySQLDataTable), Get_Z_Construct_UScriptStruct_FMySQLDataTable_Hash());
	}
	return Singleton;
}
template<> MYSQL_API UScriptStruct* StaticStruct<FMySQLDataTable>()
{
	return FMySQLDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLDataTable(FMySQLDataTable::StaticStruct, TEXT("/Script/MySQL"), TEXT("MySQLDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataTable
{
	FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLDataTable")),new UScriptStruct::TCppStructOps<FMySQLDataTable>);
	}
} ScriptStruct_MySQL_StaticRegisterNativesFMySQLDataTable;
	struct Z_Construct_UScriptStruct_FMySQLDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColumnData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MySql|Tables" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData[] = {
		{ "Category", "SQLDataTable" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData = { "ColumnData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLDataTable, ColumnData), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_Inner = { "ColumnData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "SQLDataTable" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLDataTable, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
		nullptr,
		&NewStructOps,
		"MySQLDataTable",
		sizeof(FMySQLDataTable),
		alignof(FMySQLDataTable),
		Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLDataTable"), sizeof(FMySQLDataTable), Get_Z_Construct_UScriptStruct_FMySQLDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySQLDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLDataTable_Hash() { return 880631328U; }
	void UMySQLBPLibrary::StaticRegisterNativesUMySQLBPLibrary()
	{
		UClass* Class = UMySQLBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateUser", &UMySQLBPLibrary::execAuthenticateUser },
			{ "BrowseFile", &UMySQLBPLibrary::execBrowseFile },
			{ "CheckConnectionState", &UMySQLBPLibrary::execCheckConnectionState },
			{ "CheckQueryExecutionState", &UMySQLBPLibrary::execCheckQueryExecutionState },
			{ "GetCurrentDomain", &UMySQLBPLibrary::execGetCurrentDomain },
			{ "GetCurrentUser", &UMySQLBPLibrary::execGetCurrentUser },
			{ "GetSelectedTable", &UMySQLBPLibrary::execGetSelectedTable },
			{ "SelectDataFromQuery", &UMySQLBPLibrary::execSelectDataFromQuery },
			{ "SelectDataFromQueryAsync", &UMySQLBPLibrary::execSelectDataFromQueryAsync },
			{ "SelectImageFromQuery", &UMySQLBPLibrary::execSelectImageFromQuery },
			{ "SetConnectionProperties", &UMySQLBPLibrary::execSetConnectionProperties },
			{ "UpdateDataFromQuery", &UMySQLBPLibrary::execUpdateDataFromQuery },
			{ "UpdateDataFromQueryAsync", &UMySQLBPLibrary::execUpdateDataFromQueryAsync },
			{ "UpdateImageFromQuery", &UMySQLBPLibrary::execUpdateImageFromQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics
	{
		struct MySQLBPLibrary_eventAuthenticateUser_Parms
		{
			FString UserName;
			FString Password;
			FString Domain;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Domain;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLBPLibrary_eventAuthenticateUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLBPLibrary_eventAuthenticateUser_Parms), &Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventAuthenticateUser_Parms, Domain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventAuthenticateUser_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventAuthenticateUser_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_Domain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::NewProp_UserName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "LDAP" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Authenticates the User against the Windows Credentials. This only works if the current Windows user requires a password to login\n\n@param        UserName        Windows UserName. Can be obtained from the GetCurrentUser() function\n@param        Password        Windows Password\n@param        Domain      PC Domain. Can be obtained from the GetCurrentDomain() function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "AuthenticateUser", sizeof(MySQLBPLibrary_eventAuthenticateUser_Parms), Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics
	{
		struct MySQLBPLibrary_eventBrowseFile_Parms
		{
			FString DialogueTitle;
			FString FileTypes;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventBrowseFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventBrowseFile_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::NewProp_DialogueTitle = { "DialogueTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventBrowseFile_Parms, DialogueTitle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::NewProp_FileTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::NewProp_DialogueTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Browse File from Hard drive\n\n@param        DialogueTitle    Title that will show up in the Browse Dialogue\n@param        FileTypes            Filtered File Types that will be displayed in the Browse Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "BrowseFile", sizeof(MySQLBPLibrary_eventBrowseFile_Parms), Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics
	{
		struct MySQLBPLibrary_eventCheckConnectionState_Parms
		{
			FString ErrorMessage;
			EMySQLConnectionState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventCheckConnectionState_Parms, ReturnValue), Z_Construct_UEnum_MySQL_EMySQLConnectionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventCheckConnectionState_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Checks the current connection state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "CheckConnectionState", sizeof(MySQLBPLibrary_eventCheckConnectionState_Parms), Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics
	{
		struct MySQLBPLibrary_eventCheckQueryExecutionState_Parms
		{
			FString ErrorMessage;
			EMySQLQueryExecutionState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventCheckQueryExecutionState_Parms, ReturnValue), Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventCheckQueryExecutionState_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Update" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Checks for the completion of Asynchronous exceution of Update or Select query\n\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "CheckQueryExecutionState", sizeof(MySQLBPLibrary_eventCheckQueryExecutionState_Parms), Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics
	{
		struct MySQLBPLibrary_eventGetCurrentDomain_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventGetCurrentDomain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "LDAP" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Gets the Current Domain of the PC" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "GetCurrentDomain", sizeof(MySQLBPLibrary_eventGetCurrentDomain_Parms), Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics
	{
		struct MySQLBPLibrary_eventGetCurrentUser_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventGetCurrentUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "LDAP" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Gets the Current Windows Login User Name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "GetCurrentUser", sizeof(MySQLBPLibrary_eventGetCurrentUser_Parms), Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics
	{
		struct MySQLBPLibrary_eventGetSelectedTable_Parms
		{
			TArray<FMySQLDataTable> ResultByColumn;
			TArray<FMySQLDataRow> ResultByRow;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByRow;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByRow_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByColumn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByColumn_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByRow = { "ResultByRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventGetSelectedTable_Parms, ResultByRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByRow_Inner = { "ResultByRow", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLDataRow, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByColumn = { "ResultByColumn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventGetSelectedTable_Parms, ResultByColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByColumn_Inner = { "ResultByColumn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLDataTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByRow_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::NewProp_ResultByColumn_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Select" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Gets the Selected data from the database after the asynchronous select query has been successfully executed\n\n@param        ResultByColumn  Returns the result of the Selected Query as an array of SQLDataTable structure\n@param        ResultByRow     Returns the result of the Selected Query as an array of SQLDataRow structure" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "GetSelectedTable", sizeof(MySQLBPLibrary_eventGetSelectedTable_Parms), Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics
	{
		struct MySQLBPLibrary_eventSelectDataFromQuery_Parms
		{
			FString Query;
			EMysqlSuccessStatus SuccessStatus;
			FString ErrorMessage;
			TArray<FMySQLDataTable> ResultByColumn;
			TArray<FMySQLDataRow> ResultByRow;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByRow;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByRow_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByColumn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByColumn_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuccessStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuccessStatus_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByRow = { "ResultByRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, ResultByRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByRow_Inner = { "ResultByRow", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLDataRow, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByColumn = { "ResultByColumn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, ResultByColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByColumn_Inner = { "ResultByColumn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLDataTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_SuccessStatus = { "SuccessStatus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, SuccessStatus), Z_Construct_UEnum_MySQL_EMysqlSuccessStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_SuccessStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByRow_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ResultByColumn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_SuccessStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_SuccessStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Select" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Selects data from the database\n\n@param        Query           Select Query which selects data from the database\n@param        SuccessStatus   Returns the status of Query execution , or busy if the connection is already busy\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails\n@param        ResultByColumn  Returns the result of the Selected Query as an array of SQLDataTable structure\n@param        ResultByRow     Returns the result of the Selected Query as an array of SQLDataRow structure" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "SelectDataFromQuery", sizeof(MySQLBPLibrary_eventSelectDataFromQuery_Parms), Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics
	{
		struct MySQLBPLibrary_eventSelectDataFromQueryAsync_Parms
		{
			FString Query;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Select" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Asynchronously executes select query to the database\n\n@param        Query           Select Query which selects data from the database" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "SelectDataFromQueryAsync", sizeof(MySQLBPLibrary_eventSelectDataFromQueryAsync_Parms), Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics
	{
		struct MySQLBPLibrary_eventSelectImageFromQuery_Parms
		{
			FString Query;
			bool IsSuccess;
			FString ErrorMessage;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectImageFromQuery_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectImageFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLBPLibrary_eventSelectImageFromQuery_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLBPLibrary_eventSelectImageFromQuery_Parms), &Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSelectImageFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Select" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Selects image from the database and returns Texture2D format of the selected image\n\n@param        Query           Select Query which fetches a single image from the database\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "SelectImageFromQuery", sizeof(MySQLBPLibrary_eventSelectImageFromQuery_Parms), Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics
	{
		struct MySQLBPLibrary_eventSetConnectionProperties_Parms
		{
			FString Server;
			FString DBName;
			FString UserID;
			FString Password;
			FString ExtraParam;
			bool IsTrusted;
		};
		static void NewProp_IsTrusted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrusted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DBName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Server;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_IsTrusted_SetBit(void* Obj)
	{
		((MySQLBPLibrary_eventSetConnectionProperties_Parms*)Obj)->IsTrusted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_IsTrusted = { "IsTrusted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLBPLibrary_eventSetConnectionProperties_Parms), &Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_IsTrusted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_ExtraParam = { "ExtraParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, ExtraParam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, UserID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_DBName = { "DBName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, DBName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, Server), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_IsTrusted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_ExtraParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_DBName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::NewProp_Server,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Sets the Connection Properties in order to be able to connect to the Database. This function must be called before performing any\n         Database Operations\n\n@param        Server          SQL Server Name\n@param        DBName          Initial Database Name to be connected to\n@param        UserID          SQL Server UserID. Not relevant while using Windows Authentication\n@param        Password        SQL Server Password. Not relevant while using Windows Authentication\n@param        ExtraParam      Additional Connection Parameter to be included\n@param        IsTrusted       Should be checked if user is using Windows Authentication Mode, unchecked for MySQL Server Authentication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "SetConnectionProperties", sizeof(MySQLBPLibrary_eventSetConnectionProperties_Parms), Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics
	{
		struct MySQLBPLibrary_eventUpdateDataFromQuery_Parms
		{
			FString Query;
			EMysqlSuccessStatus SuccessStatus;
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuccessStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuccessStatus_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_SuccessStatus = { "SuccessStatus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQuery_Parms, SuccessStatus), Z_Construct_UEnum_MySQL_EMysqlSuccessStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_SuccessStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_SuccessStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_SuccessStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Update" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Executes a Query to the database\n\n@param        Query           Query which is to be executed to the database\n@param        SuccessStatus   Returns the status of Query execution , or busy if the connection is already busy\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "UpdateDataFromQuery", sizeof(MySQLBPLibrary_eventUpdateDataFromQuery_Parms), Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics
	{
		struct MySQLBPLibrary_eventUpdateDataFromQueryAsync_Parms
		{
			FString Query;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Update" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Asynchronously Executes a Query to the database\n\n@param        Query           Query which is to be executed to the database" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "UpdateDataFromQueryAsync", sizeof(MySQLBPLibrary_eventUpdateDataFromQueryAsync_Parms), Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics
	{
		struct MySQLBPLibrary_eventUpdateImageFromQuery_Parms
		{
			FString Query;
			FString UpdateParameter;
			FString ImagePath;
			bool IsSuccess;
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateParameter;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((MySQLBPLibrary_eventUpdateImageFromQuery_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLBPLibrary_eventUpdateImageFromQuery_Parms), &Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, ImagePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_UpdateParameter = { "UpdateParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, UpdateParameter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_UpdateParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server|Update" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Updates image to the database from the hard drive\n\n@param        Query           Update Query which inserts or updates image to the database\n@param        UpdateParameter Value which has been passed as a parameter for updating the image in the previous input,\n                                                               without the @ symbol\n@param        ImagePath       Path of the Image that needs to be updated in the SQL Server\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, nullptr, "UpdateImageFromQuery", sizeof(MySQLBPLibrary_eventUpdateImageFromQuery_Parms), Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMySQLBPLibrary_NoRegister()
	{
		return UMySQLBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMySQLBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySQLBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySQLBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser, "AuthenticateUser" }, // 1241119539
		{ &Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile, "BrowseFile" }, // 459984571
		{ &Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState, "CheckConnectionState" }, // 403121960
		{ &Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState, "CheckQueryExecutionState" }, // 2615902880
		{ &Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain, "GetCurrentDomain" }, // 2087858859
		{ &Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser, "GetCurrentUser" }, // 2519431919
		{ &Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable, "GetSelectedTable" }, // 758792856
		{ &Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery, "SelectDataFromQuery" }, // 1968727829
		{ &Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync, "SelectDataFromQueryAsync" }, // 559124618
		{ &Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery, "SelectImageFromQuery" }, // 2829793518
		{ &Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties, "SetConnectionProperties" }, // 2911292862
		{ &Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery, "UpdateDataFromQuery" }, // 59115409
		{ &Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync, "UpdateDataFromQueryAsync" }, // 260587064
		{ &Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery, "UpdateImageFromQuery" }, // 3299440386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MySQLBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Contains all the methods that are used to connect to the C# dll\nwhich takes care of connecting to the MySQL server and executing\nthe given queries. These methods can be directly called from GetErrorMessage\nthe Blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySQLBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySQLBPLibrary_Statics::ClassParams = {
		&UMySQLBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySQLBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMySQLBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySQLBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySQLBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySQLBPLibrary, 2534857375);
	template<> MYSQL_API UClass* StaticClass<UMySQLBPLibrary>()
	{
		return UMySQLBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySQLBPLibrary(Z_Construct_UClass_UMySQLBPLibrary, &UMySQLBPLibrary::StaticClass, TEXT("/Script/MySQL"), TEXT("UMySQLBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
