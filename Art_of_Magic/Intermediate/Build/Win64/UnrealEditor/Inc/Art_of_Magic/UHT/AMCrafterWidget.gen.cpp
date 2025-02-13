// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellCrafter/AMCrafterWidget.h"
#include "Art_of_Magic/Public/SpellParts/AMSpell.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMCrafterWidget() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_AAMSpellTable_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugment_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMCastingMethod_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMCrafterWidget();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMCrafterWidget_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMEffect_NoRegister();
	ART_OF_MAGIC_API UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature();
	ART_OF_MAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FAugmentedEffects();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Widget for the spell crafting table\n */" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget for the spell crafting table" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Art_of_Magic, nullptr, "OnDataUpdate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDataUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnDataUpdate)
{
	OnDataUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAMCrafterWidget::execUpdateAugment_CPP)
	{
		P_GET_OBJECT(UAMEffect,Z_Param_CurrentEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAugment_CPP(Z_Param_CurrentEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMCrafterWidget::execUpdateCastingMethod_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCastingMethod_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMCrafterWidget::execUpdateEffects_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEffects_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMCrafterWidget::execConfirmSpell)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SpellSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmSpell(Z_Param_SpellSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMCrafterWidget::execUpdateAugment)
	{
		P_GET_OBJECT(UAMEffect,Z_Param_CurrentEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAugment_Implementation(Z_Param_CurrentEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMCrafterWidget::execUpdateCastingMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCastingMethod_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMCrafterWidget::execUpdateEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEffects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMCrafterWidget::execSetTable)
	{
		P_GET_OBJECT(AAMSpellTable,Z_Param_Table);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTable(Z_Param_Table);
		P_NATIVE_END;
	}
	struct AMCrafterWidget_eventUpdateAugment_Parms
	{
		UAMEffect* CurrentEffect;
	};
	static FName NAME_UAMCrafterWidget_UpdateAugment = FName(TEXT("UpdateAugment"));
	void UAMCrafterWidget::UpdateAugment(UAMEffect* CurrentEffect)
	{
		AMCrafterWidget_eventUpdateAugment_Parms Parms;
		Parms.CurrentEffect=CurrentEffect;
		ProcessEvent(FindFunctionChecked(NAME_UAMCrafterWidget_UpdateAugment),&Parms);
	}
	static FName NAME_UAMCrafterWidget_UpdateCastingMethod = FName(TEXT("UpdateCastingMethod"));
	void UAMCrafterWidget::UpdateCastingMethod()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAMCrafterWidget_UpdateCastingMethod),NULL);
	}
	static FName NAME_UAMCrafterWidget_UpdateEffects = FName(TEXT("UpdateEffects"));
	void UAMCrafterWidget::UpdateEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAMCrafterWidget_UpdateEffects),NULL);
	}
	void UAMCrafterWidget::StaticRegisterNativesUAMCrafterWidget()
	{
		UClass* Class = UAMCrafterWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfirmSpell", &UAMCrafterWidget::execConfirmSpell },
			{ "SetTable", &UAMCrafterWidget::execSetTable },
			{ "UpdateAugment", &UAMCrafterWidget::execUpdateAugment },
			{ "UpdateAugment_CPP", &UAMCrafterWidget::execUpdateAugment_CPP },
			{ "UpdateCastingMethod", &UAMCrafterWidget::execUpdateCastingMethod },
			{ "UpdateCastingMethod_CPP", &UAMCrafterWidget::execUpdateCastingMethod_CPP },
			{ "UpdateEffects", &UAMCrafterWidget::execUpdateEffects },
			{ "UpdateEffects_CPP", &UAMCrafterWidget::execUpdateEffects_CPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics
	{
		struct AMCrafterWidget_eventConfirmSpell_Parms
		{
			FGameplayTag SpellSlot;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpellSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::NewProp_SpellSlot = { "SpellSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCrafterWidget_eventConfirmSpell_Parms, SpellSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::NewProp_SpellSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sends the crafter the selected effects;\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends the crafter the selected effects;" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "ConfirmSpell", nullptr, nullptr, Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::AMCrafterWidget_eventConfirmSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::AMCrafterWidget_eventConfirmSpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics
	{
		struct AMCrafterWidget_eventSetTable_Parms
		{
			AAMSpellTable* Table;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCrafterWidget_eventSetTable_Parms, Table), Z_Construct_UClass_AAMSpellTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "SetTable", nullptr, nullptr, Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::AMCrafterWidget_eventSetTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::AMCrafterWidget_eventSetTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_SetTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_SetTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::NewProp_CurrentEffect = { "CurrentEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCrafterWidget_eventUpdateAugment_Parms, CurrentEffect), Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::NewProp_CurrentEffect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update the list of augments\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the list of augments" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "UpdateAugment", nullptr, nullptr, Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::PropPointers), sizeof(AMCrafterWidget_eventUpdateAugment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::PropPointers) < 2048);
	static_assert(sizeof(AMCrafterWidget_eventUpdateAugment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics
	{
		struct AMCrafterWidget_eventUpdateAugment_CPP_Parms
		{
			UAMEffect* CurrentEffect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::NewProp_CurrentEffect = { "CurrentEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCrafterWidget_eventUpdateAugment_CPP_Parms, CurrentEffect), Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::NewProp_CurrentEffect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update the list of augments\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the list of augments" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "UpdateAugment_CPP", nullptr, nullptr, Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::AMCrafterWidget_eventUpdateAugment_CPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::AMCrafterWidget_eventUpdateAugment_CPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update the list of casting method\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the list of casting method" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "UpdateCastingMethod", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update the list of casting methods\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the list of casting methods" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "UpdateCastingMethod_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update the list of effects\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the list of effects" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "UpdateEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update the list of effects\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the list of effects" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMCrafterWidget, nullptr, "UpdateEffects_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMCrafterWidget);
	UClass* Z_Construct_UClass_UAMCrafterWidget_NoRegister()
	{
		return UAMCrafterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAMCrafterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDataUpdateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataUpdateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableEffect_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableEffect_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableEffect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableCastingMethod_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableCastingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableCastingMethod;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableAugments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAugments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableAugments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedEffect_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEffect_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMCrafterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAMCrafterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAMCrafterWidget_ConfirmSpell, "ConfirmSpell" }, // 3660262057
		{ &Z_Construct_UFunction_UAMCrafterWidget_SetTable, "SetTable" }, // 337857761
		{ &Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment, "UpdateAugment" }, // 3303894617
		{ &Z_Construct_UFunction_UAMCrafterWidget_UpdateAugment_CPP, "UpdateAugment_CPP" }, // 125978616
		{ &Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod, "UpdateCastingMethod" }, // 2012895440
		{ &Z_Construct_UFunction_UAMCrafterWidget_UpdateCastingMethod_CPP, "UpdateCastingMethod_CPP" }, // 3635094477
		{ &Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects, "UpdateEffects" }, // 3443215966
		{ &Z_Construct_UFunction_UAMCrafterWidget_UpdateEffects_CPP, "UpdateEffects_CPP" }, // 3971751685
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCrafterWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellCrafter/AMCrafterWidget.h" },
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_OnDataUpdateDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_OnDataUpdateDelegate = { "OnDataUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMCrafterWidget, OnDataUpdateDelegate), Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_OnDataUpdateDelegate_MetaData), Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_OnDataUpdateDelegate_MetaData) }; // 1617017641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_LinkedTable_MetaData[] = {
		{ "Category", "AMCrafterWidget" },
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_LinkedTable = { "LinkedTable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMCrafterWidget, LinkedTable), Z_Construct_UClass_AAMSpellTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_LinkedTable_MetaData), Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_LinkedTable_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableEffect_Inner = { "AvailableEffect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableEffect_MetaData[] = {
		{ "Category", "AMCrafterWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Objects available to be used in a spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objects available to be used in a spell" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableEffect = { "AvailableEffect", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMCrafterWidget, AvailableEffect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableEffect_MetaData), Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableEffect_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableCastingMethod_Inner = { "AvailableCastingMethod", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMCastingMethod_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableCastingMethod_MetaData[] = {
		{ "Category", "AMCrafterWidget" },
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableCastingMethod = { "AvailableCastingMethod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMCrafterWidget, AvailableCastingMethod), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableCastingMethod_MetaData), Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableCastingMethod_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableAugments_Inner = { "AvailableAugments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableAugments_MetaData[] = {
		{ "Category", "AMCrafterWidget" },
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableAugments = { "AvailableAugments", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMCrafterWidget, AvailableAugments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableAugments_MetaData), Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableAugments_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_SelectedEffect_Inner = { "SelectedEffect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAugmentedEffects, METADATA_PARAMS(0, nullptr) }; // 2299058747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_SelectedEffect_MetaData[] = {
		{ "Category", "AMCrafterWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Selected effects for the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellCrafter/AMCrafterWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selected effects for the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_SelectedEffect = { "SelectedEffect", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMCrafterWidget, SelectedEffect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_SelectedEffect_MetaData), Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_SelectedEffect_MetaData) }; // 2299058747
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAMCrafterWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_OnDataUpdateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_LinkedTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableEffect_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableCastingMethod_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableCastingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableAugments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_AvailableAugments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_SelectedEffect_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMCrafterWidget_Statics::NewProp_SelectedEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMCrafterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMCrafterWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMCrafterWidget_Statics::ClassParams = {
		&UAMCrafterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAMCrafterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMCrafterWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCrafterWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAMCrafterWidget()
	{
		if (!Z_Registration_Info_UClass_UAMCrafterWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMCrafterWidget.OuterSingleton, Z_Construct_UClass_UAMCrafterWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMCrafterWidget.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMCrafterWidget>()
	{
		return UAMCrafterWidget::StaticClass();
	}
	UAMCrafterWidget::UAMCrafterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMCrafterWidget);
	UAMCrafterWidget::~UAMCrafterWidget() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMCrafterWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMCrafterWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMCrafterWidget, UAMCrafterWidget::StaticClass, TEXT("UAMCrafterWidget"), &Z_Registration_Info_UClass_UAMCrafterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMCrafterWidget), 3701948415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMCrafterWidget_h_2813572587(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMCrafterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellCrafter_AMCrafterWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
