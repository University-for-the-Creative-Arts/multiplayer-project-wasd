// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerProject_init() {}
	MULTIPLAYERPROJECT_API UFunction* Z_Construct_UDelegateFunction_MultiplayerProject_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerProject_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9EEFA2FF,
				0xB2982145,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerProject(Z_Construct_UPackage__Script_MultiplayerProject, TEXT("/Script/MultiplayerProject"), Z_Registration_Info_UPackage__Script_MultiplayerProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9EEFA2FF, 0xB2982145));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
