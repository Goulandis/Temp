// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMySQLQueryExecutionState : uint8;
enum class EMysqlSuccessStatus : uint8;
struct FMySQLDataTable;
struct FMySQLDataRow;
class UTexture2D;
enum class EMySQLConnectionState : uint8;
#ifdef MYSQL_MySQLBPLibrary_generated_h
#error "MySQLBPLibrary.generated.h already included, missing '#pragma once' in MySQLBPLibrary.h"
#endif
#define MYSQL_MySQLBPLibrary_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLDataRow_Statics; \
	MYSQL_API static class UScriptStruct* StaticStruct();


template<> MYSQL_API UScriptStruct* StaticStruct<struct FMySQLDataRow>();

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLDataTable_Statics; \
	MYSQL_API static class UScriptStruct* StaticStruct();


template<> MYSQL_API UScriptStruct* StaticStruct<struct FMySQLDataTable>();

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_63_DELEGATE \
static inline void FQueryExecuting_DelegateWrapper(const FMulticastScriptDelegate& QueryExecuting) \
{ \
	QueryExecuting.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBrowseFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMySQLBPLibrary::BrowseFile(Z_Param_DialogueTitle,Z_Param_FileTypes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UpdateParameter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::UpdateImageFromQuery(Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ImagePath,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckQueryExecutionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMySQLQueryExecutionState*)Z_Param__Result=UMySQLBPLibrary::CheckQueryExecutionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::UpdateDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_ENUM_REF(EMysqlSuccessStatus,Z_Param_Out_SuccessStatus); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::UpdateDataFromQuery(Z_Param_Query,(EMysqlSuccessStatus&)(Z_Param_Out_SuccessStatus),Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTable) \
	{ \
		P_GET_TARRAY_REF(FMySQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMySQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::GetSelectedTable(Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::SelectDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_ENUM_REF(EMysqlSuccessStatus,Z_Param_Out_SuccessStatus); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_GET_TARRAY_REF(FMySQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMySQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::SelectDataFromQuery(Z_Param_Query,(EMysqlSuccessStatus&)(Z_Param_Out_SuccessStatus),Z_Param_Out_ErrorMessage,Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMySQLBPLibrary::SelectImageFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConnectionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMySQLConnectionState*)Z_Param__Result=UMySQLBPLibrary::CheckConnectionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConnectionProperties) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Server); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DBName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExtraParam); \
		P_GET_UBOOL(Z_Param_IsTrusted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::SetConnectionProperties(Z_Param_Server,Z_Param_DBName,Z_Param_UserID,Z_Param_Password,Z_Param_ExtraParam,Z_Param_IsTrusted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAuthenticateUser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLBPLibrary::AuthenticateUser(Z_Param_UserName,Z_Param_Password,Z_Param_Domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMySQLBPLibrary::GetCurrentUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDomain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMySQLBPLibrary::GetCurrentDomain(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBrowseFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMySQLBPLibrary::BrowseFile(Z_Param_DialogueTitle,Z_Param_FileTypes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UpdateParameter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::UpdateImageFromQuery(Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ImagePath,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckQueryExecutionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMySQLQueryExecutionState*)Z_Param__Result=UMySQLBPLibrary::CheckQueryExecutionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::UpdateDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_ENUM_REF(EMysqlSuccessStatus,Z_Param_Out_SuccessStatus); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::UpdateDataFromQuery(Z_Param_Query,(EMysqlSuccessStatus&)(Z_Param_Out_SuccessStatus),Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTable) \
	{ \
		P_GET_TARRAY_REF(FMySQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMySQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::GetSelectedTable(Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::SelectDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_ENUM_REF(EMysqlSuccessStatus,Z_Param_Out_SuccessStatus); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_GET_TARRAY_REF(FMySQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMySQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::SelectDataFromQuery(Z_Param_Query,(EMysqlSuccessStatus&)(Z_Param_Out_SuccessStatus),Z_Param_Out_ErrorMessage,Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMySQLBPLibrary::SelectImageFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConnectionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMySQLConnectionState*)Z_Param__Result=UMySQLBPLibrary::CheckConnectionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConnectionProperties) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Server); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DBName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExtraParam); \
		P_GET_UBOOL(Z_Param_IsTrusted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMySQLBPLibrary::SetConnectionProperties(Z_Param_Server,Z_Param_DBName,Z_Param_UserID,Z_Param_Password,Z_Param_ExtraParam,Z_Param_IsTrusted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAuthenticateUser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMySQLBPLibrary::AuthenticateUser(Z_Param_UserName,Z_Param_Password,Z_Param_Domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMySQLBPLibrary::GetCurrentUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDomain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMySQLBPLibrary::GetCurrentDomain(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySQLBPLibrary(); \
	friend struct Z_Construct_UClass_UMySQLBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMySQLBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySQL"), NO_API) \
	DECLARE_SERIALIZER(UMySQLBPLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUMySQLBPLibrary(); \
	friend struct Z_Construct_UClass_UMySQLBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMySQLBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySQL"), NO_API) \
	DECLARE_SERIALIZER(UMySQLBPLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLBPLibrary(UMySQLBPLibrary&&); \
	NO_API UMySQLBPLibrary(const UMySQLBPLibrary&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLBPLibrary(UMySQLBPLibrary&&); \
	NO_API UMySQLBPLibrary(const UMySQLBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLBPLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_72_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSQL_API UClass* StaticClass<class UMySQLBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h


#define FOREACH_ENUM_EMYSQLSUCCESSSTATUS(op) \
	op(EMysqlSuccessStatus::Busy) \
	op(EMysqlSuccessStatus::Success) \
	op(EMysqlSuccessStatus::Failed) 

enum class EMysqlSuccessStatus : uint8;
template<> MYSQL_API UEnum* StaticEnum<EMysqlSuccessStatus>();

#define FOREACH_ENUM_EMYSQLQUERYEXECUTIONSTATE(op) \
	op(EMySQLQueryExecutionState::Executing) \
	op(EMySQLQueryExecutionState::Success) \
	op(EMySQLQueryExecutionState::Failed) 

enum class EMySQLQueryExecutionState : uint8;
template<> MYSQL_API UEnum* StaticEnum<EMySQLQueryExecutionState>();

#define FOREACH_ENUM_EMYSQLCONNECTIONSTATE(op) \
	op(EMySQLConnectionState::Broken) \
	op(EMySQLConnectionState::Closed) \
	op(EMySQLConnectionState::Connecting) \
	op(EMySQLConnectionState::Executing) \
	op(EMySQLConnectionState::Fetching) \
	op(EMySQLConnectionState::Open) 

enum class EMySQLConnectionState : uint8;
template<> MYSQL_API UEnum* StaticEnum<EMySQLConnectionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
