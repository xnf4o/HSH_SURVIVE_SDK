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
// Parameters
//---------------------------------------------------------------------------

// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
struct UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params
{
	class UResonanceAudioReverbPluginPreset*           InPreset;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
struct UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params
{
	class UResonanceAudioReverbPluginPreset*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
struct UResonanceAudioReverbPluginPreset_SetRoomRotation_Params
{
	struct FQuat                                       InRotation;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
struct UResonanceAudioReverbPluginPreset_SetRoomPosition_Params
{
	struct FVector                                     InPosition;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
struct UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params
{
	TArray<ResonanceAudio_ERaMaterialName>             InMaterials;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
struct UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params
{
	struct FVector                                     InDimensions;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
struct UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params
{
	float                                              InReverbTimeModifier;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
struct UResonanceAudioReverbPluginPreset_SetReverbGain_Params
{
	float                                              InReverbGain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
struct UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params
{
	float                                              InReverbBrightness;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
struct UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params
{
	float                                              InReflectionScalar;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
struct UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params
{
	bool                                               bInEnableRoomEffects;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params
{
	float                                              InSpread;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params
{
	float                                              InPattern;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InSharpness;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
