// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Escenario2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenario2() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario2_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEscenarioFactory_NoRegister();
// End Cross Module References
	void AEscenario2::StaticRegisterNativesAEscenario2()
	{
	}
	UClass* Z_Construct_UClass_AEscenario2_NoRegister()
	{
		return AEscenario2::StaticClass();
	}
	struct Z_Construct_UClass_AEscenario2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenario2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escenario2.h" },
		{ "ModuleRelativePath", "Escenario2.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEscenario2_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEscenarioFactory_NoRegister, (int32)VTABLE_OFFSET(AEscenario2, IEscenarioFactory), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenario2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenario2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenario2_Statics::ClassParams = {
		&AEscenario2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscenario2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenario2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenario2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenario2, 1510112504);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenario2>()
	{
		return AEscenario2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenario2(Z_Construct_UClass_AEscenario2, &AEscenario2::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenario2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenario2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
