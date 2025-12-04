// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameStateTimer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameStateTimer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameState();
MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AGameStateTimer();
MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AGameStateTimer_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameStateTimer Function OnRoundEnded ************************************
struct Z_Construct_UFunction_AGameStateTimer_OnRoundEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when round ends\n" },
#endif
		{ "ModuleRelativePath", "Public/GameStateTimer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when round ends" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateTimer_OnRoundEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateTimer, nullptr, "OnRoundEnded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateTimer_OnRoundEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateTimer_OnRoundEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameStateTimer_OnRoundEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateTimer_OnRoundEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateTimer::execOnRoundEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoundEnded();
	P_NATIVE_END;
}
// ********** End Class AGameStateTimer Function OnRoundEnded **************************************

// ********** Begin Class AGameStateTimer Function StartRoundTimer *********************************
struct Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics
{
	struct GameStateTimer_eventStartRoundTimer_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start the round timer\n" },
#endif
		{ "ModuleRelativePath", "Public/GameStateTimer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the round timer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateTimer_eventStartRoundTimer_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateTimer, nullptr, "StartRoundTimer", Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::GameStateTimer_eventStartRoundTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::GameStateTimer_eventStartRoundTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateTimer_StartRoundTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateTimer_StartRoundTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateTimer::execStartRoundTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRoundTimer(Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class AGameStateTimer Function StartRoundTimer ***********************************

// ********** Begin Class AGameStateTimer Function UpdateTimer *************************************
struct Z_Construct_UFunction_AGameStateTimer_UpdateTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates the timer (server only)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameStateTimer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the timer (server only)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateTimer_UpdateTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameStateTimer, nullptr, "UpdateTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateTimer_UpdateTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateTimer_UpdateTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameStateTimer_UpdateTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateTimer_UpdateTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateTimer::execUpdateTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTimer();
	P_NATIVE_END;
}
// ********** End Class AGameStateTimer Function UpdateTimer ***************************************

// ********** Begin Class AGameStateTimer **********************************************************
void AGameStateTimer::StaticRegisterNativesAGameStateTimer()
{
	UClass* Class = AGameStateTimer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRoundEnded", &AGameStateTimer::execOnRoundEnded },
		{ "StartRoundTimer", &AGameStateTimer::execStartRoundTimer },
		{ "UpdateTimer", &AGameStateTimer::execUpdateTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameStateTimer;
UClass* AGameStateTimer::GetPrivateStaticClass()
{
	using TClass = AGameStateTimer;
	if (!Z_Registration_Info_UClass_AGameStateTimer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameStateTimer"),
			Z_Registration_Info_UClass_AGameStateTimer.InnerSingleton,
			StaticRegisterNativesAGameStateTimer,
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
	return Z_Registration_Info_UClass_AGameStateTimer.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameStateTimer_NoRegister()
{
	return AGameStateTimer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameStateTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameStateTimer.h" },
		{ "ModuleRelativePath", "Public/GameStateTimer.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundTimeRemaining_MetaData[] = {
		{ "Category", "Round" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated timer properties\n" },
#endif
		{ "ModuleRelativePath", "Public/GameStateTimer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated timer properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundActive_MetaData[] = {
		{ "Category", "Round" },
		{ "ModuleRelativePath", "Public/GameStateTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundTimeRemaining;
	static void NewProp_bRoundActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameStateTimer_OnRoundEnded, "OnRoundEnded" }, // 1598097273
		{ &Z_Construct_UFunction_AGameStateTimer_StartRoundTimer, "StartRoundTimer" }, // 1587699624
		{ &Z_Construct_UFunction_AGameStateTimer_UpdateTimer, "UpdateTimer" }, // 2067736524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameStateTimer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameStateTimer_Statics::NewProp_RoundTimeRemaining = { "RoundTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateTimer, RoundTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundTimeRemaining_MetaData), NewProp_RoundTimeRemaining_MetaData) };
void Z_Construct_UClass_AGameStateTimer_Statics::NewProp_bRoundActive_SetBit(void* Obj)
{
	((AGameStateTimer*)Obj)->bRoundActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameStateTimer_Statics::NewProp_bRoundActive = { "bRoundActive", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameStateTimer), &Z_Construct_UClass_AGameStateTimer_Statics::NewProp_bRoundActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundActive_MetaData), NewProp_bRoundActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameStateTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateTimer_Statics::NewProp_RoundTimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateTimer_Statics::NewProp_bRoundActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateTimer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameStateTimer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateTimer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameStateTimer_Statics::ClassParams = {
	&AGameStateTimer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameStateTimer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateTimer_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateTimer_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameStateTimer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameStateTimer()
{
	if (!Z_Registration_Info_UClass_AGameStateTimer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameStateTimer.OuterSingleton, Z_Construct_UClass_AGameStateTimer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameStateTimer.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AGameStateTimer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_RoundTimeRemaining(TEXT("RoundTimeRemaining"));
	static FName Name_bRoundActive(TEXT("bRoundActive"));
	const bool bIsValid = true
		&& Name_RoundTimeRemaining == ClassReps[(int32)ENetFields_Private::RoundTimeRemaining].Property->GetFName()
		&& Name_bRoundActive == ClassReps[(int32)ENetFields_Private::bRoundActive].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameStateTimer"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameStateTimer);
AGameStateTimer::~AGameStateTimer() {}
// ********** End Class AGameStateTimer ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h__Script_MultiplayerProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameStateTimer, AGameStateTimer::StaticClass, TEXT("AGameStateTimer"), &Z_Registration_Info_UClass_AGameStateTimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameStateTimer), 1886995362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h__Script_MultiplayerProject_4196982114(TEXT("/Script/MultiplayerProject"),
	Z_CompiledInDeferFile_FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h__Script_MultiplayerProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h__Script_MultiplayerProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
