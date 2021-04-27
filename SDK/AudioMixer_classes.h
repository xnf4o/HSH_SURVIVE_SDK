#pragma once

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

// Class AudioMixer.SynthComponent
// 0x0418 (FullSize[0x0670] - InheritedSize[0x0258])
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_Z42T[0x8];                                     // 0x0258(0x0008) Fix Super Size
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                      // 0x0268(0x02E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // 0x0550(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ConcurrencySet[0x50];                                      // 0x0558(0x0050) UNKNOWN PROPERTY: SetProperty AudioMixer.SynthComponent.ConcurrencySet
	class USoundClass*                                 SoundClass;                                                // 0x05A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                         // 0x05B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                               // 0x05B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                          // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                  // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                         // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                            // 0x05F0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsPreviewSound : 1;                                       // 0x05F0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QDF4[0x3];                                     // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EnvelopeFollowerAttackTime;                                // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnvelopeFollowerReleaseTime;                               // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1L5[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAudioEnvelopeValue;                                      // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A3ZP[0x20];                                    // 0x0610(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USynthSound*                                 Synth;                                                     // 0x0630(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             AudioComponent;                                            // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HOKD[0x30];                                    // 0x0640(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}



	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}



	class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, Engine_EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, AudioMixer_EFFTSize FFTSize, AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod, AudioMixer_EFFTWindowType WindowType, float HopSize);
	void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_MOL0[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                  // 0x0098(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_USC3[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectSubmixEQSettings               Settings;                                                  // 0x0080(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};

// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_9N2N[0x5C];                                    // 0x0048(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectReverbSettings                 Settings;                                                  // 0x00A4(0x0034) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}



	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};

// Class AudioMixer.SynthSound
// 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData_X0YB[0x20];                                    // 0x0300(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
