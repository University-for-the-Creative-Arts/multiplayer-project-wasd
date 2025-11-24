// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiplayerProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AMultiplayerProjectGameMode();
MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AMultiplayerProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMultiplayerProjectGameMode **********************************************
void AMultiplayerProjectGameMode::StaticRegisterNativesAMultiplayerProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMultiplayerProjectGameMode;
UClass* AMultiplayerProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AMultiplayerProjectGameMode;
	if (!Z_Registration_Info_UClass_AMultiplayerProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MultiplayerProjectGameMode"),
			Z_Registration_Info_UClass_AMultiplayerProjectGameMode.InnerSingleton,
			StaticRegisterNativesAMultiplayerProjectGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMultiplayerProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMultiplayerProjectGameMode_NoRegister()
{
	return AMultiplayerProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMultiplayerProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerProjectGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiplayerProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerProjectGameMode_Statics::ClassParams = {
	&AMultiplayerProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiplayerProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerProjectGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerProjectGameMode);
AMultiplayerProjectGameMode::~AMultiplayerProjectGameMode() {}
// ********** End Class AMultiplayerProjectGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectGameMode_h__Script_MultiplayerProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerProjectGameMode, AMultiplayerProjectGameMode::StaticClass, TEXT("AMultiplayerProjectGameMode"), &Z_Registration_Info_UClass_AMultiplayerProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerProjectGameMode), 4097280328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectGameMode_h__Script_MultiplayerProject_2062846135(TEXT("/Script/MultiplayerProject"),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectGameMode_h__Script_MultiplayerProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectGameMode_h__Script_MultiplayerProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
