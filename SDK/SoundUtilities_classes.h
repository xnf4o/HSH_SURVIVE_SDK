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

// Class SoundUtilities.SoundSimple
// 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>                     Variations;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                 // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SoundUtilities.SoundSimple");
		return ptr;
	}



};

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary");
		return ptr;
	}



	float STATIC_GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote);
	int STATIC_GetMIDIPitchFromFrequency(float Frequency);
	float STATIC_GetFrequencyFromMIDIPitch(int MidiNote);
	float STATIC_GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
