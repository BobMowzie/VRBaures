// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRecognisedPhrases;
enum class ESpeechRecognitionParamType : uint8;
enum class ESpeechRecognitionLanguage : uint8;
struct FRecognitionPhrase;
#ifdef SPEECHRECOGNITION_SpeechRecognitionActor_generated_h
#error "SpeechRecognitionActor.generated.h already included, missing '#pragma once' in SpeechRecognitionActor.h"
#endif
#define SPEECHRECOGNITION_SpeechRecognitionActor_generated_h

#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_12_DELEGATE \
static inline void FUnknownPhraseSignature_DelegateWrapper(const FMulticastScriptDelegate& UnknownPhraseSignature) \
{ \
	UnknownPhraseSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_11_DELEGATE \
struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms \
{ \
	FRecognisedPhrases Text; \
}; \
static inline void FWordsSpokenSignature_DelegateWrapper(const FMulticastScriptDelegate& WordsSpokenSignature, FRecognisedPhrases Text) \
{ \
	_Script_SpeechRecognition_eventWordsSpokenSignature_Parms Parms; \
	Parms.Text=Text; \
	WordsSpokenSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_10_DELEGATE \
static inline void FStoppedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StoppedSpeakingSignature) \
{ \
	StoppedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_9_DELEGATE \
static inline void FStartedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StartedSpeakingSignature) \
{ \
	StartedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStoppedSpeaking_method) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StoppedSpeaking_method(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartedSpeaking_method) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartedSpeaking_method(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnknownPhrase_method) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnknownPhrase_method(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWordsSpoken_method) \
	{ \
		P_GET_STRUCT(FRecognisedPhrases,Z_Param_phrases); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WordsSpoken_method(Z_Param_phrases); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Shutdown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConfigParam) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_param); \
		P_GET_ENUM(ESpeechRecognitionParamType,Z_Param_type); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetConfigParam(Z_Param_param,ESpeechRecognitionParamType(Z_Param_type),Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_ENUM(ESpeechRecognitionLanguage,Z_Param_language); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Init(ESpeechRecognitionLanguage(Z_Param_language)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLanguageModel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_languageModel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableLanguageModel(Z_Param_languageModel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableGrammarMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_grammarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableGrammarMode(Z_Param_grammarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableKeywordMode) \
	{ \
		P_GET_TARRAY(FRecognitionPhrase,Z_Param_wordList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableKeywordMode(Z_Param_wordList); \
		P_NATIVE_END; \
	}


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStoppedSpeaking_method) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StoppedSpeaking_method(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartedSpeaking_method) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartedSpeaking_method(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnknownPhrase_method) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnknownPhrase_method(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWordsSpoken_method) \
	{ \
		P_GET_STRUCT(FRecognisedPhrases,Z_Param_phrases); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WordsSpoken_method(Z_Param_phrases); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Shutdown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConfigParam) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_param); \
		P_GET_ENUM(ESpeechRecognitionParamType,Z_Param_type); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetConfigParam(Z_Param_param,ESpeechRecognitionParamType(Z_Param_type),Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_ENUM(ESpeechRecognitionLanguage,Z_Param_language); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Init(ESpeechRecognitionLanguage(Z_Param_language)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLanguageModel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_languageModel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableLanguageModel(Z_Param_languageModel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableGrammarMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_grammarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableGrammarMode(Z_Param_grammarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableKeywordMode) \
	{ \
		P_GET_TARRAY(FRecognitionPhrase,Z_Param_wordList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableKeywordMode(Z_Param_wordList); \
		P_NATIVE_END; \
	}


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeechRecognitionActor(); \
	friend SPEECHRECOGNITION_API class UClass* Z_Construct_UClass_ASpeechRecognitionActor(); \
public: \
	DECLARE_CLASS(ASpeechRecognitionActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(ASpeechRecognitionActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASpeechRecognitionActor(); \
	friend SPEECHRECOGNITION_API class UClass* Z_Construct_UClass_ASpeechRecognitionActor(); \
public: \
	DECLARE_CLASS(ASpeechRecognitionActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(ASpeechRecognitionActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeechRecognitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeechRecognitionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeechRecognitionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeechRecognitionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeechRecognitionActor(ASpeechRecognitionActor&&); \
	NO_API ASpeechRecognitionActor(const ASpeechRecognitionActor&); \
public:


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeechRecognitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeechRecognitionActor(ASpeechRecognitionActor&&); \
	NO_API ASpeechRecognitionActor(const ASpeechRecognitionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeechRecognitionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeechRecognitionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeechRecognitionActor)


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_PRIVATE_PROPERTY_OFFSET
#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_14_PROLOG
#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_PRIVATE_PROPERTY_OFFSET \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_PRIVATE_PROPERTY_OFFSET \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS_NO_PURE_DECLS \
	VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRMvmtMergeStereoLayers0620_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
