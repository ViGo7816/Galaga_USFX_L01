// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/PowerUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUp() {}
// Cross Module References
	GALAGA_USFX_L01_API UEnum* Z_Construct_UEnum_Galaga_USFX_L01_EPowerUpType();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APowerUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EPowerUpType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Galaga_USFX_L01_EPowerUpType, Z_Construct_UPackage__Script_Galaga_USFX_L01(), TEXT("EPowerUpType"));
		}
		return Singleton;
	}
	template<> GALAGA_USFX_L01_API UEnum* StaticEnum<EPowerUpType>()
	{
		return EPowerUpType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPowerUpType(EPowerUpType_StaticEnum, TEXT("/Script/Galaga_USFX_L01"), TEXT("EPowerUpType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Galaga_USFX_L01_EPowerUpType_Hash() { return 48495240U; }
	UEnum* Z_Construct_UEnum_Galaga_USFX_L01_EPowerUpType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Galaga_USFX_L01();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPowerUpType"), 0, Get_Z_Construct_UEnum_Galaga_USFX_L01_EPowerUpType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPowerUpType::Rapidez", (int64)EPowerUpType::Rapidez },
				{ "EPowerUpType::SuperAtaque", (int64)EPowerUpType::SuperAtaque },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "PowerUp.h" },
				{ "Rapidez.Name", "EPowerUpType::Rapidez" },
				{ "SuperAtaque.Name", "EPowerUpType::SuperAtaque" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
				nullptr,
				"EPowerUpType",
				"EPowerUpType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APowerUp::StaticRegisterNativesAPowerUp()
	{
	}
	UClass* Z_Construct_UClass_APowerUp_NoRegister()
	{
		return APowerUp::StaticClass();
	}
	struct Z_Construct_UClass_APowerUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PowerUpType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PowerUpType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUp.h" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_PowerUpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::NewProp_PowerUpType_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "Comment", "// Tipo de PowerUp\n" },
		{ "ModuleRelativePath", "PowerUp.h" },
		{ "ToolTip", "Tipo de PowerUp" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_PowerUpType = { "PowerUpType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerUp, PowerUpType), Z_Construct_UEnum_Galaga_USFX_L01_EPowerUpType, METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::NewProp_PowerUpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::NewProp_PowerUpType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "Comment", "// Duraci\xc3\xb3n del PowerUp\n" },
		{ "ModuleRelativePath", "PowerUp.h" },
		{ "ToolTip", "Duraci\xc3\xb3n del PowerUp" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerUp, Duration), METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_PowerUpType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_PowerUpType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUp_Statics::ClassParams = {
		&APowerUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APowerUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUp, 4100273990);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<APowerUp>()
	{
		return APowerUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUp(Z_Construct_UClass_APowerUp, &APowerUp::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("APowerUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
