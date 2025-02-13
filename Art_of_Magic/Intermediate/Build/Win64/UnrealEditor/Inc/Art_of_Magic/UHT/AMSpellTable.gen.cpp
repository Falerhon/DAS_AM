// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellCrafter/AMSpellTable.h"
#include "Art_of_Magic/Public/SpellParts/AMSpell.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMSpellTable() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_AAMSpellTable();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_AAMSpellTable_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugment_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMCastingMethod_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMEffect_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpell_NoRegister();
	ART_OF_MAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FAugmentedEffects();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbilityController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	DEFINE_FUNCTION(AAMSpellTable::execSpawnWidget_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnWidget_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execSetAbilityController)
	{
		P_GET_OBJECT(UDASAbilityController,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityController(Z_Param_controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execApplySpell)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
		P_GET_OBJECT(UAMSpell,Z_Param_spellInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySpell(Z_Param_Slot,Z_Param_spellInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execCreateSpell)
	{
		P_GET_TARRAY(FAugmentedEffects,Z_Param_SelectedEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAMSpell**)Z_Param__Result=P_THIS->CreateSpell(Z_Param_SelectedEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execInstantiateSpellParts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstantiateSpellParts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execGetAugment)
	{
		P_GET_TARRAY(FGameplayTag,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAMAugment*>*)Z_Param__Result=P_THIS->GetAugment(Z_Param_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execGetCastingMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAMCastingMethod*>*)Z_Param__Result=P_THIS->GetCastingMethod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execGetEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAMEffect*>*)Z_Param__Result=P_THIS->GetEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAMSpellTable::execSpawnWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnWidget_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AAMSpellTable_SpawnWidget = FName(TEXT("SpawnWidget"));
	void AAMSpellTable::SpawnWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAMSpellTable_SpawnWidget),NULL);
	}
	void AAMSpellTable::StaticRegisterNativesAAMSpellTable()
	{
		UClass* Class = AAMSpellTable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySpell", &AAMSpellTable::execApplySpell },
			{ "CreateSpell", &AAMSpellTable::execCreateSpell },
			{ "GetAugment", &AAMSpellTable::execGetAugment },
			{ "GetCastingMethod", &AAMSpellTable::execGetCastingMethod },
			{ "GetEffects", &AAMSpellTable::execGetEffects },
			{ "InstantiateSpellParts", &AAMSpellTable::execInstantiateSpellParts },
			{ "SetAbilityController", &AAMSpellTable::execSetAbilityController },
			{ "SpawnWidget", &AAMSpellTable::execSpawnWidget },
			{ "SpawnWidget_CPP", &AAMSpellTable::execSpawnWidget_CPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics
	{
		struct AMSpellTable_eventApplySpell_Parms
		{
			FGameplayTag Slot;
			UAMSpell* spellInstance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spellInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventApplySpell_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::NewProp_spellInstance = { "spellInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventApplySpell_Parms, spellInstance), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::NewProp_spellInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Applies the spell to the current player's ability controller\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies the spell to the current player's ability controller" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "ApplySpell", nullptr, nullptr, Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::AMSpellTable_eventApplySpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::AMSpellTable_eventApplySpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAMSpellTable_ApplySpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_ApplySpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics
	{
		struct AMSpellTable_eventCreateSpell_Parms
		{
			TArray<FAugmentedEffects> SelectedEffects;
			UAMSpell* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedEffects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedEffects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::NewProp_SelectedEffects_Inner = { "SelectedEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAugmentedEffects, METADATA_PARAMS(0, nullptr) }; // 2299058747
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::NewProp_SelectedEffects = { "SelectedEffects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventCreateSpell_Parms, SelectedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2299058747
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventCreateSpell_Parms, ReturnValue), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::NewProp_SelectedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::NewProp_SelectedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates an instance of a spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an instance of a spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "CreateSpell", nullptr, nullptr, Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::AMSpellTable_eventCreateSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::AMSpellTable_eventCreateSpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAMSpellTable_CreateSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_CreateSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics
	{
		struct AMSpellTable_eventGetAugment_Parms
		{
			TArray<FGameplayTag> Filter;
			TArray<UAMAugment*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_Filter_Inner = { "Filter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventGetAugment_Parms, Filter), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventGetAugment_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_Filter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the augments the table holds\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the augments the table holds" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "GetAugment", nullptr, nullptr, Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::AMSpellTable_eventGetAugment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::AMSpellTable_eventGetAugment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAMSpellTable_GetAugment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_GetAugment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics
	{
		struct AMSpellTable_eventGetCastingMethod_Parms
		{
			TArray<UAMCastingMethod*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMCastingMethod_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventGetCastingMethod_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the casting methods the table holds\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the casting methods the table holds" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "GetCastingMethod", nullptr, nullptr, Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::AMSpellTable_eventGetCastingMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::AMSpellTable_eventGetCastingMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAMSpellTable_GetCastingMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_GetCastingMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics
	{
		struct AMSpellTable_eventGetEffects_Parms
		{
			TArray<UAMEffect*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventGetEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the effects the table holds\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the effects the table holds" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "GetEffects", nullptr, nullptr, Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::AMSpellTable_eventGetEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::AMSpellTable_eventGetEffects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAMSpellTable_GetEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_GetEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//instantiate the spell parts (effect,augment,cast) to get their final info\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "instantiate the spell parts (effect,augment,cast) to get their final info" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "InstantiateSpellParts", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics
	{
		struct AMSpellTable_eventSetAbilityController_Parms
		{
			UDASAbilityController* controller;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::NewProp_controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpellTable_eventSetAbilityController_Parms, controller), Z_Construct_UClass_UDASAbilityController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::NewProp_controller_MetaData), Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::NewProp_controller_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets a reference to the player's ability controller\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a reference to the player's ability controller" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "SetAbilityController", nullptr, nullptr, Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::AMSpellTable_eventSetAbilityController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::AMSpellTable_eventSetAbilityController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAMSpellTable_SetAbilityController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_SetAbilityController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_SpawnWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_SpawnWidget_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BP Implementation of the function to spawn the crafter widget\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP Implementation of the function to spawn the crafter widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_SpawnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "SpawnWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_SpawnWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_SpawnWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAMSpellTable_SpawnWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_SpawnWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//C++ Implementation of the widget spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ Implementation of the widget spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMSpellTable, nullptr, "SpawnWidget_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAMSpellTable);
	UClass* Z_Construct_UClass_AAMSpellTable_NoRegister()
	{
		return AAMSpellTable::StaticClass();
	}
	struct Z_Construct_UClass_AAMSpellTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserController;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvailableEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableEffects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvailableCastingMethod_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableCastingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableCastingMethod;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvailableAugments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAugments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableAugments;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanciatedAugments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanciatedAugments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanciatedAugments;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanciatedEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanciatedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanciatedEffects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanciatedCastingMethods_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanciatedCastingMethods_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanciatedCastingMethods;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpellDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpellTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAMSpellTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAMSpellTable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAMSpellTable_ApplySpell, "ApplySpell" }, // 3784514658
		{ &Z_Construct_UFunction_AAMSpellTable_CreateSpell, "CreateSpell" }, // 1997277079
		{ &Z_Construct_UFunction_AAMSpellTable_GetAugment, "GetAugment" }, // 2041772120
		{ &Z_Construct_UFunction_AAMSpellTable_GetCastingMethod, "GetCastingMethod" }, // 857955517
		{ &Z_Construct_UFunction_AAMSpellTable_GetEffects, "GetEffects" }, // 103273799
		{ &Z_Construct_UFunction_AAMSpellTable_InstantiateSpellParts, "InstantiateSpellParts" }, // 3163787595
		{ &Z_Construct_UFunction_AAMSpellTable_SetAbilityController, "SetAbilityController" }, // 1344274854
		{ &Z_Construct_UFunction_AAMSpellTable_SpawnWidget, "SpawnWidget" }, // 3017055186
		{ &Z_Construct_UFunction_AAMSpellTable_SpawnWidget_CPP, "SpawnWidget_CPP" }, // 3664995784
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *Table where we can craft a new spell\n */" },
#endif
		{ "IncludePath", "SpellCrafter/AMSpellTable.h" },
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Table where we can craft a new spell" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//component of the key object\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "component of the key object" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_UserController_MetaData[] = {
		{ "Category", "AMSpellTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ability Controller of the current table user\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability Controller of the current table user" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_UserController = { "UserController", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, UserController), Z_Construct_UClass_UDASAbilityController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_UserController_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_UserController_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableEffects_Inner = { "AvailableEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableEffects_MetaData[] = {
		{ "Category", "AMSpellTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of available effects BP\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of available effects BP" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableEffects = { "AvailableEffects", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, AvailableEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableEffects_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableEffects_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableCastingMethod_Inner = { "AvailableCastingMethod", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAMCastingMethod_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableCastingMethod_MetaData[] = {
		{ "Category", "AMSpellTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of available casting methods BP\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of available casting methods BP" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableCastingMethod = { "AvailableCastingMethod", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, AvailableCastingMethod), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableCastingMethod_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableCastingMethod_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableAugments_Inner = { "AvailableAugments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableAugments_MetaData[] = {
		{ "Category", "AMSpellTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of available augment BP\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of available augment BP" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableAugments = { "AvailableAugments", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, AvailableAugments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableAugments_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableAugments_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedAugments_Inner = { "InstanciatedAugments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedAugments_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Instances of augments so we have access to their var\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instances of augments so we have access to their var" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedAugments = { "InstanciatedAugments", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, InstanciatedAugments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedAugments_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedAugments_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedEffects_Inner = { "InstanciatedEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedEffects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Instances of effects so we have access to their var\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instances of effects so we have access to their var" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedEffects = { "InstanciatedEffects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, InstanciatedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedEffects_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedEffects_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedCastingMethods_Inner = { "InstanciatedCastingMethods", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMCastingMethod_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedCastingMethods_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Instances of augments so we have access to their var\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instances of augments so we have access to their var" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedCastingMethods = { "InstanciatedCastingMethods", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, InstanciatedCastingMethods), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedCastingMethods_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedCastingMethods_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellDisplay_MetaData[] = {
		{ "Category", "AMSpellTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Widget to display\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget to display" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellDisplay = { "SpellDisplay", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, SpellDisplay), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellDisplay_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellDisplay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellTemplate_MetaData[] = {
		{ "Category", "AMSpellTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spell template BP used to instantiate a spell (used to get final spell infos)\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMSpellTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spell template BP used to instantiate a spell (used to get final spell infos)" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellTemplate = { "SpellTemplate", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMSpellTable, SpellTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellTemplate_MetaData), Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAMSpellTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_UserController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableCastingMethod_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableCastingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableAugments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_AvailableAugments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedAugments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedAugments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedCastingMethods_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_InstanciatedCastingMethods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMSpellTable_Statics::NewProp_SpellTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAMSpellTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMSpellTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMSpellTable_Statics::ClassParams = {
		&AAMSpellTable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAMSpellTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMSpellTable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMSpellTable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAMSpellTable()
	{
		if (!Z_Registration_Info_UClass_AAMSpellTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMSpellTable.OuterSingleton, Z_Construct_UClass_AAMSpellTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAMSpellTable.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<AAMSpellTable>()
	{
		return AAMSpellTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAMSpellTable);
	AAMSpellTable::~AAMSpellTable() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAMSpellTable, AAMSpellTable::StaticClass, TEXT("AAMSpellTable"), &Z_Registration_Info_UClass_AAMSpellTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMSpellTable), 3590335072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_2496684264(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMSpellTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
