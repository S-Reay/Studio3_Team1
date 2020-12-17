// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hell_Of_A_Game/Public/ACC_PlayerFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACC_PlayerFunctions() {}
// Cross Module References
	HELL_OF_A_GAME_API UClass* Z_Construct_UClass_UACC_PlayerFunctions_NoRegister();
	HELL_OF_A_GAME_API UClass* Z_Construct_UClass_UACC_PlayerFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Hell_Of_A_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UACC_PlayerFunctions::execGetNewRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_ControlRotation);
		P_GET_OBJECT(USceneComponent,Z_Param_Camera);
		P_GET_OBJECT(AActor,Z_Param_TargetEnemy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetNewRotation(Z_Param_ControlRotation,Z_Param_Camera,Z_Param_TargetEnemy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACC_PlayerFunctions::execMelee)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_MeleeOrigin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MeleeRange);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_HitEnemies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Melee(Z_Param_MeleeOrigin,Z_Param_MeleeRange,Z_Param_Out_HitEnemies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACC_PlayerFunctions::execUnlockedShoot)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ShotOrigin);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_returnedHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnlockedShoot(Z_Param_ShotOrigin,Z_Param_Out_returnedHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACC_PlayerFunctions::execLockedShoot)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ShotOrigin);
		P_GET_OBJECT(AActor,Z_Param_TargetEnemy);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_returnedHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LockedShoot(Z_Param_ShotOrigin,Z_Param_TargetEnemy,Z_Param_Out_returnedHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACC_PlayerFunctions::execGetShotEnd)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ShotOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetShotEnd(Z_Param_ShotOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACC_PlayerFunctions::execGetShotStart)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ShotOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetShotStart(Z_Param_ShotOrigin);
		P_NATIVE_END;
	}
	void UACC_PlayerFunctions::StaticRegisterNativesUACC_PlayerFunctions()
	{
		UClass* Class = UACC_PlayerFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewRotation", &UACC_PlayerFunctions::execGetNewRotation },
			{ "GetShotEnd", &UACC_PlayerFunctions::execGetShotEnd },
			{ "GetShotStart", &UACC_PlayerFunctions::execGetShotStart },
			{ "LockedShoot", &UACC_PlayerFunctions::execLockedShoot },
			{ "Melee", &UACC_PlayerFunctions::execMelee },
			{ "UnlockedShoot", &UACC_PlayerFunctions::execUnlockedShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics
	{
		struct ACC_PlayerFunctions_eventGetNewRotation_Parms
		{
			FRotator ControlRotation;
			USceneComponent* Camera;
			AActor* TargetEnemy;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetNewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_TargetEnemy = { "TargetEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetNewRotation_Parms, TargetEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetNewRotation_Parms, Camera), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetNewRotation_Parms, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_TargetEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::NewProp_ControlRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerComat" },
		{ "ModuleRelativePath", "Public/ACC_PlayerFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACC_PlayerFunctions, nullptr, "GetNewRotation", nullptr, nullptr, sizeof(ACC_PlayerFunctions_eventGetNewRotation_Parms), Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics
	{
		struct ACC_PlayerFunctions_eventGetShotEnd_Parms
		{
			USceneComponent* ShotOrigin;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShotOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetShotEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::NewProp_ShotOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::NewProp_ShotOrigin = { "ShotOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetShotEnd_Parms, ShotOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::NewProp_ShotOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::NewProp_ShotOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::NewProp_ShotOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCombat" },
		{ "ModuleRelativePath", "Public/ACC_PlayerFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACC_PlayerFunctions, nullptr, "GetShotEnd", nullptr, nullptr, sizeof(ACC_PlayerFunctions_eventGetShotEnd_Parms), Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics
	{
		struct ACC_PlayerFunctions_eventGetShotStart_Parms
		{
			USceneComponent* ShotOrigin;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShotOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetShotStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::NewProp_ShotOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::NewProp_ShotOrigin = { "ShotOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventGetShotStart_Parms, ShotOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::NewProp_ShotOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::NewProp_ShotOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::NewProp_ShotOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCombat" },
		{ "ModuleRelativePath", "Public/ACC_PlayerFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACC_PlayerFunctions, nullptr, "GetShotStart", nullptr, nullptr, sizeof(ACC_PlayerFunctions_eventGetShotStart_Parms), Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics
	{
		struct ACC_PlayerFunctions_eventLockedShoot_Parms
		{
			USceneComponent* ShotOrigin;
			AActor* TargetEnemy;
			AActor* returnedHit;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_returnedHit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShotOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACC_PlayerFunctions_eventLockedShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACC_PlayerFunctions_eventLockedShoot_Parms), &Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_returnedHit = { "returnedHit", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventLockedShoot_Parms, returnedHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_TargetEnemy = { "TargetEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventLockedShoot_Parms, TargetEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ShotOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ShotOrigin = { "ShotOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventLockedShoot_Parms, ShotOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ShotOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ShotOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_returnedHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_TargetEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::NewProp_ShotOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCombat" },
		{ "ModuleRelativePath", "Public/ACC_PlayerFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACC_PlayerFunctions, nullptr, "LockedShoot", nullptr, nullptr, sizeof(ACC_PlayerFunctions_eventLockedShoot_Parms), Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics
	{
		struct ACC_PlayerFunctions_eventMelee_Parms
		{
			USceneComponent* MeleeOrigin;
			float MeleeRange;
			TArray<AActor*> HitEnemies;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitEnemies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitEnemies_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACC_PlayerFunctions_eventMelee_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACC_PlayerFunctions_eventMelee_Parms), &Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_HitEnemies = { "HitEnemies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventMelee_Parms, HitEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_HitEnemies_Inner = { "HitEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_MeleeRange = { "MeleeRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventMelee_Parms, MeleeRange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_MeleeOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_MeleeOrigin = { "MeleeOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventMelee_Parms, MeleeOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_MeleeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_MeleeOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_HitEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_HitEnemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_MeleeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::NewProp_MeleeOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCombat" },
		{ "ModuleRelativePath", "Public/ACC_PlayerFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACC_PlayerFunctions, nullptr, "Melee", nullptr, nullptr, sizeof(ACC_PlayerFunctions_eventMelee_Parms), Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACC_PlayerFunctions_Melee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACC_PlayerFunctions_Melee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics
	{
		struct ACC_PlayerFunctions_eventUnlockedShoot_Parms
		{
			USceneComponent* ShotOrigin;
			AActor* returnedHit;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_returnedHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShotOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACC_PlayerFunctions_eventUnlockedShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACC_PlayerFunctions_eventUnlockedShoot_Parms), &Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_returnedHit = { "returnedHit", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventUnlockedShoot_Parms, returnedHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ShotOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ShotOrigin = { "ShotOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACC_PlayerFunctions_eventUnlockedShoot_Parms, ShotOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ShotOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ShotOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_returnedHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::NewProp_ShotOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCombat" },
		{ "ModuleRelativePath", "Public/ACC_PlayerFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACC_PlayerFunctions, nullptr, "UnlockedShoot", nullptr, nullptr, sizeof(ACC_PlayerFunctions_eventUnlockedShoot_Parms), Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACC_PlayerFunctions_NoRegister()
	{
		return UACC_PlayerFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UACC_PlayerFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACC_PlayerFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Hell_Of_A_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACC_PlayerFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACC_PlayerFunctions_GetNewRotation, "GetNewRotation" }, // 3547859878
		{ &Z_Construct_UFunction_UACC_PlayerFunctions_GetShotEnd, "GetShotEnd" }, // 1736611596
		{ &Z_Construct_UFunction_UACC_PlayerFunctions_GetShotStart, "GetShotStart" }, // 3608344301
		{ &Z_Construct_UFunction_UACC_PlayerFunctions_LockedShoot, "LockedShoot" }, // 1733893115
		{ &Z_Construct_UFunction_UACC_PlayerFunctions_Melee, "Melee" }, // 2271554719
		{ &Z_Construct_UFunction_UACC_PlayerFunctions_UnlockedShoot, "UnlockedShoot" }, // 4224217792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACC_PlayerFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ACC_PlayerFunctions.h" },
		{ "ModuleRelativePath", "Public/ACC_PlayerFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACC_PlayerFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACC_PlayerFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UACC_PlayerFunctions_Statics::ClassParams = {
		&UACC_PlayerFunctions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UACC_PlayerFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACC_PlayerFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACC_PlayerFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACC_PlayerFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACC_PlayerFunctions, 3748423459);
	template<> HELL_OF_A_GAME_API UClass* StaticClass<UACC_PlayerFunctions>()
	{
		return UACC_PlayerFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACC_PlayerFunctions(Z_Construct_UClass_UACC_PlayerFunctions, &UACC_PlayerFunctions::StaticClass, TEXT("/Script/Hell_Of_A_Game"), TEXT("UACC_PlayerFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACC_PlayerFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
