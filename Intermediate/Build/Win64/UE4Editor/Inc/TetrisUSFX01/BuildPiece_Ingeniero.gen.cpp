// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BuildPiece_Ingeniero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildPiece_Ingeniero() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_Ingeniero_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_Ingeniero();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderPiece_NoRegister();
// End Cross Module References
	void ABuildPiece_Ingeniero::StaticRegisterNativesABuildPiece_Ingeniero()
	{
	}
	UClass* Z_Construct_UClass_ABuildPiece_Ingeniero_NoRegister()
	{
		return ABuildPiece_Ingeniero::StaticClass();
	}
	struct Z_Construct_UClass_ABuildPiece_Ingeniero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildPiece_Ingeniero.h" },
		{ "ModuleRelativePath", "BuildPiece_Ingeniero.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPiece_NoRegister, (int32)VTABLE_OFFSET(ABuildPiece_Ingeniero, IBuilderPiece), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildPiece_Ingeniero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::ClassParams = {
		&ABuildPiece_Ingeniero::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildPiece_Ingeniero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildPiece_Ingeniero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildPiece_Ingeniero, 147022909);
	template<> TETRISUSFX01_API UClass* StaticClass<ABuildPiece_Ingeniero>()
	{
		return ABuildPiece_Ingeniero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildPiece_Ingeniero(Z_Construct_UClass_ABuildPiece_Ingeniero, &ABuildPiece_Ingeniero::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABuildPiece_Ingeniero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildPiece_Ingeniero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
