// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpellParts/AMEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAMAugment;
class UAMSpell;
struct FGameplayTag;
#ifdef ART_OF_MAGIC_AMEffect_generated_h
#error "AMEffect.generated.h already included, missing '#pragma once' in AMEffect.h"
#endif
#define ART_OF_MAGIC_AMEffect_generated_h

#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_16_DELEGATE \
ART_OF_MAGIC_API void FOnEffectComplete_DelegateWrapper(const FMulticastScriptDelegate& OnEffectComplete, const TArray<AActor*>& Targets, bool KeepTargets);


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_SPARSE_DATA
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EffectEnd_Implementation(); \
	virtual void TriggerEffect_Implementation(); \
	virtual void PreCastPrepare_Implementation(); \
	virtual void Initiate_Implementation(); \
 \
	DECLARE_FUNCTION(execPreCastPrepare_CPP); \
	DECLARE_FUNCTION(execEffectEnd_CPP); \
	DECLARE_FUNCTION(execTriggerEffect_CPP); \
	DECLARE_FUNCTION(execInitiate_CPP); \
	DECLARE_FUNCTION(execSetShouldKeepTargets); \
	DECLARE_FUNCTION(execAddAugment); \
	DECLARE_FUNCTION(execAddAugments); \
	DECLARE_FUNCTION(execGetActorsInRange); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execGetCompatibleAugments); \
	DECLARE_FUNCTION(execGetCost); \
	DECLARE_FUNCTION(execSetParentSpell); \
	DECLARE_FUNCTION(execGetParentSpell); \
	DECLARE_FUNCTION(execRemoveTargets); \
	DECLARE_FUNCTION(execAddTargets); \
	DECLARE_FUNCTION(execEffectEnd); \
	DECLARE_FUNCTION(execTriggerEffect); \
	DECLARE_FUNCTION(execPreCastPrepare); \
	DECLARE_FUNCTION(execInitiate); \
	DECLARE_FUNCTION(execModifyStat); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetName);


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_CALLBACK_WRAPPERS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAMEffect(); \
	friend struct Z_Construct_UClass_UAMEffect_Statics; \
public: \
	DECLARE_CLASS(UAMEffect, UDASReplicatedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Art_of_Magic"), NO_API) \
	DECLARE_SERIALIZER(UAMEffect) \
	virtual UObject* _getUObject() const override { return const_cast<UAMEffect*>(this); }


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAMEffect(UAMEffect&&); \
	NO_API UAMEffect(const UAMEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAMEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAMEffect); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAMEffect) \
	NO_API virtual ~UAMEffect();


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_17_PROLOG
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_SPARSE_DATA \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_CALLBACK_WRAPPERS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_INCLASS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ART_OF_MAGIC_API UClass* StaticClass<class UAMEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
