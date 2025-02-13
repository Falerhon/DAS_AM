// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/AMAbilityController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAMSpell;
class UAMSpellAbility;
struct FGameplayTag;
#ifdef ART_OF_MAGIC_AMAbilityController_generated_h
#error "AMAbilityController.generated.h already included, missing '#pragma once' in AMAbilityController.h"
#endif
#define ART_OF_MAGIC_AMAbilityController_generated_h

#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_SPARSE_DATA
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpellInstance); \
	DECLARE_FUNCTION(execSetSpellInstance);


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAMAbilityController(); \
	friend struct Z_Construct_UClass_UAMAbilityController_Statics; \
public: \
	DECLARE_CLASS(UAMAbilityController, UDASAbilityController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Art_of_Magic"), NO_API) \
	DECLARE_SERIALIZER(UAMAbilityController)


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAMAbilityController(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAMAbilityController(UAMAbilityController&&); \
	NO_API UAMAbilityController(const UAMAbilityController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAMAbilityController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAMAbilityController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAMAbilityController) \
	NO_API virtual ~UAMAbilityController();


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_15_PROLOG
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_SPARSE_DATA \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ART_OF_MAGIC_API UClass* StaticClass<class UAMAbilityController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
