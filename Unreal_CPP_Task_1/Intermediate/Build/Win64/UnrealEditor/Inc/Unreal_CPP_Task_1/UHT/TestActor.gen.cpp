// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_CPP_Task_1/TestActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREAL_CPP_TASK_1_API UClass* Z_Construct_UClass_ATestActor();
UNREAL_CPP_TASK_1_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_CPP_Task_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestActor Function SayHi ************************************************
struct Z_Construct_UFunction_ATestActor_SayHi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TestActor" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_SayHi_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "SayHi", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_SayHi_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestActor_SayHi_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATestActor_SayHi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_SayHi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestActor::execSayHi)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SayHi();
	P_NATIVE_END;
}
// ********** End Class ATestActor Function SayHi **************************************************

// ********** Begin Class ATestActor ***************************************************************
void ATestActor::StaticRegisterNativesATestActor()
{
	UClass* Class = ATestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SayHi", &ATestActor::execSayHi },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATestActor;
UClass* ATestActor::GetPrivateStaticClass()
{
	using TClass = ATestActor;
	if (!Z_Registration_Info_UClass_ATestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestActor"),
			Z_Registration_Info_UClass_ATestActor.InnerSingleton,
			StaticRegisterNativesATestActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestActor_NoRegister()
{
	return ATestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestActor.h" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[] = {
		{ "Category", "TestActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets default values for this actor's properties\n" },
#endif
		{ "ModuleRelativePath", "TestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets default values for this actor's properties" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestActor_SayHi, "SayHi" }, // 369976385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_message_MetaData), NewProp_message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_CPP_Task_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
	&ATestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestActor()
{
	if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
ATestActor::~ATestActor() {}
// ********** End Class ATestActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Harry_Documents_GitHub_Unreal_C___Task_1_Unreal_CPP_Task_1_Source_Unreal_CPP_Task_1_TestActor_h__Script_Unreal_CPP_Task_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 3114547106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Harry_Documents_GitHub_Unreal_C___Task_1_Unreal_CPP_Task_1_Source_Unreal_CPP_Task_1_TestActor_h__Script_Unreal_CPP_Task_1_3642950695(TEXT("/Script/Unreal_CPP_Task_1"),
	Z_CompiledInDeferFile_FID_Users_Harry_Documents_GitHub_Unreal_C___Task_1_Unreal_CPP_Task_1_Source_Unreal_CPP_Task_1_TestActor_h__Script_Unreal_CPP_Task_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Harry_Documents_GitHub_Unreal_C___Task_1_Unreal_CPP_Task_1_Source_Unreal_CPP_Task_1_TestActor_h__Script_Unreal_CPP_Task_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
