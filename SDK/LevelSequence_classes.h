﻿#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class LevelSequence.LevelSequence
// 0x0150 (FullSize[0x04A0] - InheritedSize[0x0350])
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                          // 0x0358(0x0050) (Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences             BindingReferences;                                         // 0x03A8(0x00A0) (Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                          // 0x0448(0x0050) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DirectorClass;                                             // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}



	void RemoveMetaDataByClass(class UClass* InClass);
	class UObject* FindOrAddMetaDataByClass(class UClass* InClass);
	class UObject* FindMetaDataByClass(class UClass* InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData_MCW4[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TransformOriginActor;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformOrigin;                                           // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULevelSequenceMetaData : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULevelSequenceBurnInInitSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GVTA[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              BurnInClass;                                               // 0x0038(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                  // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}



	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};

// Class LevelSequence.LevelSequenceActor
// 0x0080 (FullSize[0x03B8] - InheritedSize[0x0338])
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData_8RTZ[0x10];                                    // 0x0338(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0348(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VP3T[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             LevelSequence;                                             // 0x0368(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              AdditionalEventReceivers;                                  // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                             // 0x0390(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                          // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoPlay : 1;                                             // 0x03A0(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideInstanceData : 1;                                 // 0x03A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReplicatePlayback : 1;                                    // 0x03A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIZB[0x7];                                     // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     DefaultInstanceData;                                       // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                            // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}



	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// Class LevelSequence.LevelSequenceBurnIn
// 0x00A0 (FullSize[0x02E0] - InheritedSize[0x0240])
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                          // 0x0240(0x0098) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                         LevelSequenceActor;                                        // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}



	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};

// Class LevelSequence.LevelSequenceDirector
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                    // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}



	void OnCreated();
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}



};

// Class LevelSequence.LevelSequencePlayer
// 0x0140 (FullSize[0x0910] - InheritedSize[0x07D0])
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                               // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGHQ[0x130];                                   // 0x07E0(0x0130) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}



	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
