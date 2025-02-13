// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpellCrafter/AMSpellTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAMAugment;
class UAMCastingMethod;
class UAMEffect;
class UAMSpell;
class UDASAbilityController;
struct FAugmentedEffects;
struct FGameplayTag;
#ifdef ART_OF_MAGIC_AMSpellTable_generated_h
#error "AMSpellTable.generated.h already included, missing '#pragma once' in AMSpellTable.h"
#endif
#define ART_OF_MAGIC_AMSpellTable_generated_h

#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_SPARSE_DATA
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnWidget_Implementation(); \
 \
	DECLARE_FUNCTION(execSpawnWidget_CPP); \
	DECLARE_FUNCTION(execSetAbilityController); \
	DECLARE_FUNCTION(execApplySpell); \
	DECLARE_FUNCTION(execCreateSpell); \
	DECLARE_FUNCTION(execInstantiateSpellParts); \
	DECLARE_FUNCTION(execGetAugment); \
	DECLARE_FUNCTION(execGetCastingMethod); \
	DECLARE_FUNCTION(execGetEffects); \
	DECLARE_FUNCTION(execSpawnWidget);


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_CALLBACK_WRAPPERS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAMSpellTable(); \
	friend struct Z_Construct_UClass_AAMSpellTable_Statics; \
public: \
	DECLARE_CLASS(AAMSpellTable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Art_of_Magic"), NO_API) \
	DECLARE_SERIALIZER(AAMSpellTable)


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAMSpellTable(AAMSpellTable&&); \
	NO_API AAMSpellTable(const AAMSpellTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMSpellTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMSpellTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAMSpellTable) \
	NO_API virtual ~AAMSpellTable();


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_14_PROLOG
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_SPARSE_DATA \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_CALLBACK_WRAPPERS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_INCLASS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ART_OF_MAGIC_API UClass* StaticClass<class AAMSpellTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
