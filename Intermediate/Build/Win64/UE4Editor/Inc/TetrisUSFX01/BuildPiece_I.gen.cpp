// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BuildPiece_I.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildPiece_I() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_I_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_I();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderPiece_NoRegister();
// End Cross Module References
	void ABuildPiece_I::StaticRegisterNativesABuildPiece_I()
	{
	}
	UClass* Z_Construct_UClass_ABuildPiece_I_NoRegister()
	{
		return ABuildPiece_I::StaticClass();
	}
	struct Z_Construct_UClass_ABuildPiece_I_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildPiece_I_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildPiece_I_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildPiece_I.h" },
		{ "ModuleRelativePath", "BuildPiece_I.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuildPiece_I_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPiece_NoRegister, (int32)VTABLE_OFFSET(ABuildPiece_I, IBuilderPiece), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildPiece_I_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildPiece_I>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildPiece_I_Statics::ClassParams = {
		&ABuildPiece_I::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuildPiece_I_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildPiece_I_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildPiece_I()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildPiece_I_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildPiece_I, 2112009894);
	template<> TETRISUSFX01_API UClass* StaticClass<ABuildPiece_I>()
	{
		return ABuildPiece_I::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildPiece_I(Z_Construct_UClass_ABuildPiece_I, &ABuildPiece_I::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABuildPiece_I"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildPiece_I);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
