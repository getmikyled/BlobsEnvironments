// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniInstancedActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniInstancedActorComponent_generated_h
#error "HoudiniInstancedActorComponent.generated.h already included, missing '#pragma once' in HoudiniInstancedActorComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniInstancedActorComponent_generated_h

#define FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniInstancedActorComponent, NO_API)


#define FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniInstancedActorComponent(); \
	friend struct Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniInstancedActorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniInstancedActorComponent) \
	FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_37_ARCHIVESERIALIZER


#define FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniInstancedActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniInstancedActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniInstancedActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniInstancedActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniInstancedActorComponent(UHoudiniInstancedActorComponent&&); \
	UHoudiniInstancedActorComponent(const UHoudiniInstancedActorComponent&); \
public: \
	NO_API virtual ~UHoudiniInstancedActorComponent();


#define FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_34_PROLOG
#define FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_37_INCLASS \
	FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniInstancedActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlobsEnvironments_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
