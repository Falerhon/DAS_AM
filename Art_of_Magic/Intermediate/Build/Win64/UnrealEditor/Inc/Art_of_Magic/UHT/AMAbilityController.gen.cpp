// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/Controller/AMAbilityController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMAbilityController() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAbilityController();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAbilityController_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpell_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpellAbility_NoRegister();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbilityController();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	DEFINE_FUNCTION(UAMAbilityController::execGetSpellInstance)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilitySlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAMSpellAbility**)Z_Param__Result=P_THIS->GetSpellInstance(Z_Param_AbilitySlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMAbilityController::execSetSpellInstance)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilitySlot);
		P_GET_OBJECT(UAMSpell,Z_Param_Spell);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpellInstance(Z_Param_AbilitySlot,Z_Param_Spell);
		P_NATIVE_END;
	}
	void UAMAbilityController::StaticRegisterNativesUAMAbilityController()
	{
		UClass* Class = UAMAbilityController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpellInstance", &UAMAbilityController::execGetSpellInstance },
			{ "SetSpellInstance", &UAMAbilityController::execSetSpellInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics
	{
		struct AMAbilityController_eventGetSpellInstance_Parms
		{
			FGameplayTag AbilitySlot;
			UAMSpellAbility* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySlot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::NewProp_AbilitySlot = { "AbilitySlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAbilityController_eventGetSpellInstance_Parms, AbilitySlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAbilityController_eventGetSpellInstance_Parms, ReturnValue), Z_Construct_UClass_UAMSpellAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::NewProp_AbilitySlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets the spell instance in the given slot\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/AMAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the spell instance in the given slot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAbilityController, nullptr, "GetSpellInstance", nullptr, nullptr, Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::AMAbilityController_eventGetSpellInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::AMAbilityController_eventGetSpellInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMAbilityController_GetSpellInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAbilityController_GetSpellInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics
	{
		struct AMAbilityController_eventSetSpellInstance_Parms
		{
			FGameplayTag AbilitySlot;
			UAMSpell* Spell;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySlot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spell;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::NewProp_AbilitySlot = { "AbilitySlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAbilityController_eventSetSpellInstance_Parms, AbilitySlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::NewProp_Spell = { "Spell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAbilityController_eventSetSpellInstance_Parms, Spell), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::NewProp_AbilitySlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::NewProp_Spell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the spell used by the USpellAbility in the given slot\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/AMAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the spell used by the USpellAbility in the given slot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAbilityController, nullptr, "SetSpellInstance", nullptr, nullptr, Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::AMAbilityController_eventSetSpellInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::AMAbilityController_eventSetSpellInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMAbilityController_SetSpellInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAbilityController_SetSpellInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMAbilityController);
	UClass* Z_Construct_UClass_UAMAbilityController_NoRegister()
	{
		return UAMAbilityController::StaticClass();
	}
	struct Z_Construct_UClass_UAMAbilityController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMAbilityController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDASAbilityController,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAbilityController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAMAbilityController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAMAbilityController_GetSpellInstance, "GetSpellInstance" }, // 2075813240
		{ &Z_Construct_UFunction_UAMAbilityController_SetSpellInstance, "SetSpellInstance" }, // 489006379
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAbilityController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAbilityController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Same as a  UDASAbilityController, but allows\n * the modification of the spells in the ability\n */" },
#endif
		{ "IncludePath", "Controller/AMAbilityController.h" },
		{ "ModuleRelativePath", "Public/Controller/AMAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as a  UDASAbilityController, but allows\nthe modification of the spells in the ability" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMAbilityController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMAbilityController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMAbilityController_Statics::ClassParams = {
		&UAMAbilityController::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAbilityController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMAbilityController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAMAbilityController()
	{
		if (!Z_Registration_Info_UClass_UAMAbilityController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMAbilityController.OuterSingleton, Z_Construct_UClass_UAMAbilityController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMAbilityController.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMAbilityController>()
	{
		return UAMAbilityController::StaticClass();
	}
	UAMAbilityController::UAMAbilityController() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMAbilityController);
	UAMAbilityController::~UAMAbilityController() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMAbilityController, UAMAbilityController::StaticClass, TEXT("UAMAbilityController"), &Z_Registration_Info_UClass_UAMAbilityController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMAbilityController), 3245311556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_1719789920(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_Controller_AMAbilityController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
