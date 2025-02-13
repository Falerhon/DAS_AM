// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellParts/AMAugment.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMAugment() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugment();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugment_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMComponentDescription_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMEffect_NoRegister();
	ART_OF_MAGIC_API UEnum* Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType();
	ART_OF_MAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FAugmentAttributes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAugmentModificationType;
	static UEnum* EAugmentModificationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAugmentModificationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAugmentModificationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType, (UObject*)Z_Construct_UPackage__Script_Art_of_Magic(), TEXT("EAugmentModificationType"));
		}
		return Z_Registration_Info_UEnum_EAugmentModificationType.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UEnum* StaticEnum<EAugmentModificationType>()
	{
		return EAugmentModificationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::Enumerators[] = {
		{ "EAugmentModificationType::Additive", (int64)EAugmentModificationType::Additive },
		{ "EAugmentModificationType::Multiplicative", (int64)EAugmentModificationType::Multiplicative },
		{ "EAugmentModificationType::Override", (int64)EAugmentModificationType::Override },
		{ "EAugmentModificationType::Tag", (int64)EAugmentModificationType::Tag },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Name", "EAugmentModificationType::Additive" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Type of the augment\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
		{ "Multiplicative.Name", "EAugmentModificationType::Multiplicative" },
		{ "Override.Name", "EAugmentModificationType::Override" },
		{ "Tag.Name", "EAugmentModificationType::Tag" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the augment" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Art_of_Magic,
		nullptr,
		"EAugmentModificationType",
		"EAugmentModificationType",
		Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType()
	{
		if (!Z_Registration_Info_UEnum_EAugmentModificationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAugmentModificationType.InnerSingleton, Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAugmentModificationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AugmentAttributes;
class UScriptStruct* FAugmentAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AugmentAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AugmentAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAugmentAttributes, (UObject*)Z_Construct_UPackage__Script_Art_of_Magic(), TEXT("AugmentAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_AugmentAttributes.OuterSingleton;
}
template<> ART_OF_MAGIC_API UScriptStruct* StaticStruct<FAugmentAttributes>()
{
	return FAugmentAttributes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAugmentAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AugmentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AugmentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AugmentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAugmentAttributes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allows multiple types of modifiers\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows multiple types of modifiers" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAugmentAttributes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_Modifier_MetaData[] = {
		{ "Category", "AugmentAttributes" },
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAugmentAttributes, Modifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_Modifier_MetaData), Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_Modifier_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_AugmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_AugmentType_MetaData[] = {
		{ "Category", "AugmentAttributes" },
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_AugmentType = { "AugmentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAugmentAttributes, AugmentType), Z_Construct_UEnum_Art_of_Magic_EAugmentModificationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_AugmentType_MetaData), Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_AugmentType_MetaData) }; // 2096938783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAugmentAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_AugmentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewProp_AugmentType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAugmentAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
		nullptr,
		&NewStructOps,
		"AugmentAttributes",
		Z_Construct_UScriptStruct_FAugmentAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentAttributes_Statics::PropPointers),
		sizeof(FAugmentAttributes),
		alignof(FAugmentAttributes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAugmentAttributes_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentAttributes_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAugmentAttributes()
	{
		if (!Z_Registration_Info_UScriptStruct_AugmentAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AugmentAttributes.InnerSingleton, Z_Construct_UScriptStruct_FAugmentAttributes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AugmentAttributes.InnerSingleton;
	}
	DEFINE_FUNCTION(UAMAugment::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMAugment::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMAugment::execSetOwningEffect)
	{
		P_GET_OBJECT(UAMEffect,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningEffect(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMAugment::execGetCostModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCostModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMAugment::execGetAugmentTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetAugmentTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMAugment::execApplyAugment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAugment();
		P_NATIVE_END;
	}
	void UAMAugment::StaticRegisterNativesUAMAugment()
	{
		UClass* Class = UAMAugment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAugment", &UAMAugment::execApplyAugment },
			{ "GetAugmentTag", &UAMAugment::execGetAugmentTag },
			{ "GetCostModifier", &UAMAugment::execGetCostModifier },
			{ "GetDescription", &UAMAugment::execGetDescription },
			{ "GetName", &UAMAugment::execGetName },
			{ "SetOwningEffect", &UAMAugment::execSetOwningEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAMAugment_ApplyAugment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAugment_ApplyAugment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Augment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Applies the augment to the linked effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies the augment to the linked effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAugment_ApplyAugment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAugment, nullptr, "ApplyAugment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_ApplyAugment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAugment_ApplyAugment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMAugment_ApplyAugment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAugment_ApplyAugment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics
	{
		struct AMAugment_eventGetAugmentTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAugment_eventGetAugmentTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the tag associated to this augment\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the tag associated to this augment" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAugment, nullptr, "GetAugmentTag", nullptr, nullptr, Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::AMAugment_eventGetAugmentTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::AMAugment_eventGetAugmentTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMAugment_GetAugmentTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAugment_GetAugmentTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics
	{
		struct AMAugment_eventGetCostModifier_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAugment_eventGetCostModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the cost modifier of this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the cost modifier of this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAugment, nullptr, "GetCostModifier", nullptr, nullptr, Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::AMAugment_eventGetCostModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::AMAugment_eventGetCostModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMAugment_GetCostModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAugment_GetCostModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMAugment_GetDescription_Statics
	{
		struct AMAugment_eventGetDescription_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAMAugment_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAugment_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMAugment_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAugment_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAugment_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAugment_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAugment, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UAMAugment_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMAugment_GetDescription_Statics::AMAugment_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAugment_GetDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMAugment_GetDescription_Statics::AMAugment_eventGetDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMAugment_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAugment_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMAugment_GetName_Statics
	{
		struct AMAugment_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAMAugment_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAugment_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMAugment_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAugment_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAugment_GetName_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//From AMComponentDescription interface. Returns the info for this component\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From AMComponentDescription interface. Returns the info for this component" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAugment_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAugment, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UAMAugment_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMAugment_GetName_Statics::AMAugment_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAugment_GetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_GetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMAugment_GetName_Statics::AMAugment_eventGetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMAugment_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAugment_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics
	{
		struct AMAugment_eventSetOwningEffect_Parms
		{
			UAMEffect* Effect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMAugment_eventSetOwningEffect_Parms, Effect), Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the effect that owns this augment\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the effect that owns this augment" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMAugment, nullptr, "SetOwningEffect", nullptr, nullptr, Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::AMAugment_eventSetOwningEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::AMAugment_eventSetOwningEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMAugment_SetOwningEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMAugment_SetOwningEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMAugment);
	UClass* Z_Construct_UClass_UAMAugment_NoRegister()
	{
		return UAMAugment::StaticClass();
	}
	struct Z_Construct_UClass_UAMAugment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AugmentTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AugmentTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CostModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMAugment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAMAugment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAMAugment_ApplyAugment, "ApplyAugment" }, // 1902461201
		{ &Z_Construct_UFunction_UAMAugment_GetAugmentTag, "GetAugmentTag" }, // 3470184000
		{ &Z_Construct_UFunction_UAMAugment_GetCostModifier, "GetCostModifier" }, // 349618633
		{ &Z_Construct_UFunction_UAMAugment_GetDescription, "GetDescription" }, // 2662378687
		{ &Z_Construct_UFunction_UAMAugment_GetName, "GetName" }, // 2708907138
		{ &Z_Construct_UFunction_UAMAugment_SetOwningEffect, "SetOwningEffect" }, // 1229545967
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Augments to raise the power of effects at the cost of mana efficiency\n */" },
#endif
		{ "IncludePath", "SpellParts/AMAugment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Augments to raise the power of effects at the cost of mana efficiency" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "AMAugment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Icon for the display of the augment\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon for the display of the augment" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMAugment, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_UAMAugment_Statics::NewProp_Icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Description of this component \n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of this component" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMAugment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UAMAugment_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMAugment, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UAMAugment_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::NewProp_AugmentTag_MetaData[] = {
		{ "Category", "Identifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tag associated to this augment. Used to identify it and check if \n//it is compatible with effects\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag associated to this augment. Used to identify it and check if\nit is compatible with effects" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_AugmentTag = { "AugmentTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMAugment, AugmentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::NewProp_AugmentTag_MetaData), Z_Construct_UClass_UAMAugment_Statics::NewProp_AugmentTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers_ValueProp = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAugmentAttributes, METADATA_PARAMS(0, nullptr) }; // 1166852696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers_Key_KeyProp = { "Modifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The stats and their modifier\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The stats and their modifier" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMAugment, Modifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers_MetaData), Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers_MetaData) }; // 2083603574 1166852696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::NewProp_CostModifier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How much this augment impact the Effect cost\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much this augment impact the Effect cost" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_CostModifier = { "CostModifier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMAugment, CostModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::NewProp_CostModifier_MetaData), Z_Construct_UClass_UAMAugment_Statics::NewProp_CostModifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugment_Statics::NewProp_OwningEffect_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Effect that owns this\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMAugment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect that owns this" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMAugment_Statics::NewProp_OwningEffect = { "OwningEffect", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMAugment, OwningEffect), Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::NewProp_OwningEffect_MetaData), Z_Construct_UClass_UAMAugment_Statics::NewProp_OwningEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAMAugment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_AugmentTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_CostModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMAugment_Statics::NewProp_OwningEffect,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAMAugment_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAMComponentDescription_NoRegister, (int32)VTABLE_OFFSET(UAMAugment, IAMComponentDescription), false },  // 2678270913
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMAugment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMAugment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMAugment_Statics::ClassParams = {
		&UAMAugment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAMAugment_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMAugment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAMAugment()
	{
		if (!Z_Registration_Info_UClass_UAMAugment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMAugment.OuterSingleton, Z_Construct_UClass_UAMAugment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMAugment.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMAugment>()
	{
		return UAMAugment::StaticClass();
	}
	UAMAugment::UAMAugment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMAugment);
	UAMAugment::~UAMAugment() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::EnumInfo[] = {
		{ EAugmentModificationType_StaticEnum, TEXT("EAugmentModificationType"), &Z_Registration_Info_UEnum_EAugmentModificationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2096938783U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::ScriptStructInfo[] = {
		{ FAugmentAttributes::StaticStruct, Z_Construct_UScriptStruct_FAugmentAttributes_Statics::NewStructOps, TEXT("AugmentAttributes"), &Z_Registration_Info_UScriptStruct_AugmentAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAugmentAttributes), 1166852696U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMAugment, UAMAugment::StaticClass, TEXT("UAMAugment"), &Z_Registration_Info_UClass_UAMAugment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMAugment), 2867649165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_3226220551(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugment_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
