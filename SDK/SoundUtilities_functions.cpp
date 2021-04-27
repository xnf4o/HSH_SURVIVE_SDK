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

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int                            BaseMidiNote                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TargetMidiNote                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USoundUtilitiesBPFunctionLibrary::STATIC_GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch");

	USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params params;
	params.BaseMidiNote = BaseMidiNote;
	params.TargetMidiNote = TargetMidiNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USoundUtilitiesBPFunctionLibrary::STATIC_GetMIDIPitchFromFrequency(float Frequency)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency");

	USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int                            MidiNote                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USoundUtilitiesBPFunctionLibrary::STATIC_GetFrequencyFromMIDIPitch(int MidiNote)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch");

	USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params params;
	params.MidiNote = MidiNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          BeatsPerMinute                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BeatMultiplier                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DivisionsOfWholeNote           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USoundUtilitiesBPFunctionLibrary::STATIC_GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo");

	USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params params;
	params.BeatsPerMinute = BeatsPerMinute;
	params.BeatMultiplier = BeatMultiplier;
	params.DivisionsOfWholeNote = DivisionsOfWholeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
