// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
class USceneComponent;
class AActor;
struct FVector;
#ifdef HELL_OF_A_GAME_ACC_PlayerFunctions_generated_h
#error "ACC_PlayerFunctions.generated.h already included, missing '#pragma once' in ACC_PlayerFunctions.h"
#endif
#define HELL_OF_A_GAME_ACC_PlayerFunctions_generated_h

#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_SPARSE_DATA
#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNewRotation); \
	DECLARE_FUNCTION(execMelee); \
	DECLARE_FUNCTION(execUnlockedShoot); \
	DECLARE_FUNCTION(execLockedShoot); \
	DECLARE_FUNCTION(execGetShotEnd); \
	DECLARE_FUNCTION(execGetShotStart);


#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNewRotation); \
	DECLARE_FUNCTION(execMelee); \
	DECLARE_FUNCTION(execUnlockedShoot); \
	DECLARE_FUNCTION(execLockedShoot); \
	DECLARE_FUNCTION(execGetShotEnd); \
	DECLARE_FUNCTION(execGetShotStart);


#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACC_PlayerFunctions(); \
	friend struct Z_Construct_UClass_UACC_PlayerFunctions_Statics; \
public: \
	DECLARE_CLASS(UACC_PlayerFunctions, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hell_Of_A_Game"), NO_API) \
	DECLARE_SERIALIZER(UACC_PlayerFunctions)


#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUACC_PlayerFunctions(); \
	friend struct Z_Construct_UClass_UACC_PlayerFunctions_Statics; \
public: \
	DECLARE_CLASS(UACC_PlayerFunctions, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hell_Of_A_Game"), NO_API) \
	DECLARE_SERIALIZER(UACC_PlayerFunctions)


#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACC_PlayerFunctions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACC_PlayerFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACC_PlayerFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACC_PlayerFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACC_PlayerFunctions(UACC_PlayerFunctions&&); \
	NO_API UACC_PlayerFunctions(const UACC_PlayerFunctions&); \
public:


#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACC_PlayerFunctions(UACC_PlayerFunctions&&); \
	NO_API UACC_PlayerFunctions(const UACC_PlayerFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACC_PlayerFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACC_PlayerFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACC_PlayerFunctions)


#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_PRIVATE_PROPERTY_OFFSET
#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_15_PROLOG
#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_PRIVATE_PROPERTY_OFFSET \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_SPARSE_DATA \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_RPC_WRAPPERS \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_INCLASS \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_PRIVATE_PROPERTY_OFFSET \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_SPARSE_DATA \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_INCLASS_NO_PURE_DECLS \
	Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELL_OF_A_GAME_API UClass* StaticClass<class UACC_PlayerFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hell_Of_A_Game_Source_Hell_Of_A_Game_Public_ACC_PlayerFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
