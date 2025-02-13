// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellParts/AMSpellAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMSpellAbility() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpell_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpellAbility();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpellAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbility();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	DEFINE_FUNCTION(UAMSpellAbility::execinitialize_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->initialize_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpellAbility::execinitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->initialize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpellAbility::execSetActiveSpell)
	{
		P_GET_OBJECT(UAMSpell,Z_Param_Spell);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveSpell(Z_Param_Spell);
		P_NATIVE_END;
	}
	static FName NAME_UAMSpellAbility_initialize = FName(TEXT("initialize"));
	void UAMSpellAbility::initialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAMSpellAbility_initialize),NULL);
	}
	void UAMSpellAbility::StaticRegisterNativesUAMSpellAbility()
	{
		UClass* Class = UAMSpellAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "initialize", &UAMSpellAbility::execinitialize },
			{ "initialize_CPP", &UAMSpellAbility::execinitialize_CPP },
			{ "SetActiveSpell", &UAMSpellAbility::execSetActiveSpell },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAMSpellAbility_initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpellAbility_initialize_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BP implementation of the initialization\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpellAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP implementation of the initialization" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpellAbility_initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpellAbility, nullptr, "initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpellAbility_initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpellAbility_initialize_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpellAbility_initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpellAbility_initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpellAbility_initialize_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpellAbility_initialize_CPP_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//C++ implementation of the initialization\n//instantiate the spell and sets this ability's cost\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpellAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ implementation of the initialization\ninstantiate the spell and sets this ability's cost" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpellAbility_initialize_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpellAbility, nullptr, "initialize_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpellAbility_initialize_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpellAbility_initialize_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpellAbility_initialize_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpellAbility_initialize_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics
	{
		struct AMSpellAbility_eventSetActiveSpell_Parms
		{
			UAMSpell* Spell;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spell;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::NewProp_Spell = { "Spell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellAbility_eventSetActiveSpell_Parms, Spell), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::NewProp_Spell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Changes the current spell linked to this ability\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpellAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the current spell linked to this ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpellAbility, nullptr, "SetActiveSpell", nullptr, nullptr, Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::AMSpellAbility_eventSetActiveSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::AMSpellAbility_eventSetActiveSpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMSpellAbility);
	UClass* Z_Construct_UClass_UAMSpellAbility_NoRegister()
	{
		return UAMSpellAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAMSpellAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpell_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultSpell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMSpellAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDASAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpellAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAMSpellAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAMSpellAbility_initialize, "initialize" }, // 429931275
		{ &Z_Construct_UFunction_UAMSpellAbility_initialize_CPP, "initialize_CPP" }, // 480172558
		{ &Z_Construct_UFunction_UAMSpellAbility_SetActiveSpell, "SetActiveSpell" }, // 3033291993
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpellAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpellAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Very similar to a DASAbility, but contains a spell.\n * Also allows the modification of it's current spell at\n * runtime.\n */" },
#endif
		{ "IncludePath", "SpellParts/AMSpellAbility.h" },
		{ "ModuleRelativePath", "Public/SpellParts/AMSpellAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Very similar to a DASAbility, but contains a spell.\nAlso allows the modification of it's current spell at\nruntime." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_DefaultSpell_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/SpellParts/AMSpellAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_DefaultSpell = { "DefaultSpell", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpellAbility, DefaultSpell), Z_Construct_UClass_UClass, Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_DefaultSpell_MetaData), Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_DefaultSpell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_SpellInstance_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "Public/SpellParts/AMSpellAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_SpellInstance = { "SpellInstance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpellAbility, SpellInstance), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_SpellInstance_MetaData), Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_SpellInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAMSpellAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_DefaultSpell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpellAbility_Statics::NewProp_SpellInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMSpellAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMSpellAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMSpellAbility_Statics::ClassParams = {
		&UAMSpellAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAMSpellAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpellAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpellAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMSpellAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpellAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAMSpellAbility()
	{
		if (!Z_Registration_Info_UClass_UAMSpellAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMSpellAbility.OuterSingleton, Z_Construct_UClass_UAMSpellAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMSpellAbility.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMSpellAbility>()
	{
		return UAMSpellAbility::StaticClass();
	}
	UAMSpellAbility::UAMSpellAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMSpellAbility);
	UAMSpellAbility::~UAMSpellAbility() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpellAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpellAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMSpellAbility, UAMSpellAbility::StaticClass, TEXT("UAMSpellAbility"), &Z_Registration_Info_UClass_UAMSpellAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMSpellAbility), 1478652468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpellAbility_h_1631089148(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpellAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpellAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
