// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BuildPiece_Z.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildPiece_Z() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_Z_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_Z();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderPiece_NoRegister();
// End Cross Module References
	void ABuildPiece_Z::StaticRegisterNativesABuildPiece_Z()
	{
	}
	UClass* Z_Construct_UClass_ABuildPiece_Z_NoRegister()
	{
		return ABuildPiece_Z::StaticClass();
	}
	struct Z_Construct_UClass_ABuildPiece_Z_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildPiece_Z_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildPiece_Z_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildPiece_Z.h" },
		{ "ModuleRelativePath", "BuildPiece_Z.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuildPiece_Z_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPiece_NoRegister, (int32)VTABLE_OFFSET(ABuildPiece_Z, IBuilderPiece), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildPiece_Z_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildPiece_Z>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildPiece_Z_Statics::ClassParams = {
		&ABuildPiece_Z::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuildPiece_Z_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildPiece_Z_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildPiece_Z()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildPiece_Z_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildPiece_Z, 2759322994);
	template<> TETRISUSFX01_API UClass* StaticClass<ABuildPiece_Z>()
	{
		return ABuildPiece_Z::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildPiece_Z(Z_Construct_UClass_ABuildPiece_Z, &ABuildPiece_Z::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABuildPiece_Z"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildPiece_Z);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
