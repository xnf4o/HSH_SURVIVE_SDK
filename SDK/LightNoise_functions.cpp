// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LightNoise.LightNoise_C.PrepareSeed
// (Private, BlueprintCallable, BlueprintEvent)
void ULightNoise_C::PrepareSeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LightNoise.LightNoise_C.PrepareSeed");

	ULightNoise_C_PrepareSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightNoise.LightNoise_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULightNoise_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LightNoise.LightNoise_C.ReceiveTick");

	ULightNoise_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightNoise.LightNoise_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ULightNoise_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LightNoise.LightNoise_C.ReceiveBeginPlay");

	ULightNoise_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightNoise.LightNoise_C.AddIntensityMultiplierCurve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             IntensityCurve                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULightNoise_C::AddIntensityMultiplierCurve(class UCurveFloat* IntensityCurve)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LightNoise.LightNoise_C.AddIntensityMultiplierCurve");

	ULightNoise_C_AddIntensityMultiplierCurve_Params params;
	params.IntensityCurve = IntensityCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightNoise.LightNoise_C.AddNoiseSpeedCurve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OverrideNoiseSpeedCurve        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCurveVector*            NoiseCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideStaticNoiseSpeed       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          StaticNoiseSpeed               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideMin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideMax                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideSeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Seed                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULightNoise_C::AddNoiseSpeedCurve(bool OverrideNoiseSpeedCurve, class UCurveVector* NoiseCurve, bool OverrideStaticNoiseSpeed, float StaticNoiseSpeed, bool OverrideMin, float Min, bool OverrideMax, float Max, bool OverrideSeed, float Seed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LightNoise.LightNoise_C.AddNoiseSpeedCurve");

	ULightNoise_C_AddNoiseSpeedCurve_Params params;
	params.OverrideNoiseSpeedCurve = OverrideNoiseSpeedCurve;
	params.NoiseCurve = NoiseCurve;
	params.OverrideStaticNoiseSpeed = OverrideStaticNoiseSpeed;
	params.StaticNoiseSpeed = StaticNoiseSpeed;
	params.OverrideMin = OverrideMin;
	params.Min = Min;
	params.OverrideMax = OverrideMax;
	params.Max = Max;
	params.OverrideSeed = OverrideSeed;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightNoise.LightNoise_C.SetSoundAttributes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OverrideNoiseSound             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              NoiseSound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideSoundAttenuation       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundAttenuation*       SoundAttenuation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideVolumeMultiplier       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverridePitchMultiplier        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PitchMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideSoundMin               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          SoundMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OverrideSoundMax               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          SoundMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULightNoise_C::SetSoundAttributes(bool OverrideNoiseSound, class USoundBase* NoiseSound, bool OverrideSoundAttenuation, class USoundAttenuation* SoundAttenuation, bool OverrideVolumeMultiplier, float VolumeMultiplier, bool OverridePitchMultiplier, float PitchMultiplier, bool OverrideSoundMin, float SoundMin, bool OverrideSoundMax, float SoundMax)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LightNoise.LightNoise_C.SetSoundAttributes");

	ULightNoise_C_SetSoundAttributes_Params params;
	params.OverrideNoiseSound = OverrideNoiseSound;
	params.NoiseSound = NoiseSound;
	params.OverrideSoundAttenuation = OverrideSoundAttenuation;
	params.SoundAttenuation = SoundAttenuation;
	params.OverrideVolumeMultiplier = OverrideVolumeMultiplier;
	params.VolumeMultiplier = VolumeMultiplier;
	params.OverridePitchMultiplier = OverridePitchMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.OverrideSoundMin = OverrideSoundMin;
	params.SoundMin = SoundMin;
	params.OverrideSoundMax = OverrideSoundMax;
	params.SoundMax = SoundMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightNoise.LightNoise_C.ExecuteUbergraph_LightNoise
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULightNoise_C::ExecuteUbergraph_LightNoise(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LightNoise.LightNoise_C.ExecuteUbergraph_LightNoise");

	ULightNoise_C_ExecuteUbergraph_LightNoise_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
