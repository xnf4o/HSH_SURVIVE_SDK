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

// Class ResonanceAudio.ResonanceAudioAmbisonicsSettings
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UResonanceAudioAmbisonicsSettings : public UAmbisonicsSubmixSettingsBase
{
public:
	ResonanceAudio_EAmbisonicsOrder                    AmbisonicsOrder;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WUQB[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ResonanceAudio.ResonanceAudioAmbisonicsSettings");
		return ptr;
	}



};

// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
	class UResonanceAudioReverbPluginPreset* STATIC_GetGlobalReverbPreset();
};

// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// 0x0080 (FullSize[0x03B8] - InheritedSize[0x0338])
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	unsigned char                                      UnknownData_4W1N[0x68];                                    // 0x0338(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProceduralMeshComponent*                    Mesh;                                                      // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterial*                                   Material;                                                  // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                                  // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ResonanceAudio.ResonanceAudioDirectivityVisualizer");
		return ptr;
	}



};

// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// 0x00C8 (FullSize[0x0110] - InheritedSize[0x0048])
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_JJEB[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FResonanceAudioReverbPluginSettings         Settings;                                                  // 0x00C0(0x0050) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ResonanceAudio.ResonanceAudioReverbPluginPreset");
		return ptr;
	}



	void SetRoomRotation(const struct FQuat& InRotation);
	void SetRoomPosition(const struct FVector& InPosition);
	void SetRoomMaterials(TArray<ResonanceAudio_ERaMaterialName> InMaterials);
	void SetRoomDimensions(const struct FVector& InDimensions);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetReverbGain(float InReverbGain);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReflectionScalar(float InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

// Class ResonanceAudio.ResonanceAudioSettings
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UResonanceAudioSettings : public UObject
{
public:
	ResonanceAudio_ERaQualityMode                      QualityMode;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZV9L[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             GlobalReverbPreset;                                        // 0x0038(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ResonanceAudio.ResonanceAudioSettings");
		return ptr;
	}



};

// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	ResonanceAudio_ERaSpatializationMethod             SpatializationMethod;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8A9[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pattern;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sharpness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bToggleVisualization;                                      // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEBJ[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scale;                                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                    // 0x0044(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ResonanceAudio_ERaDistanceRolloffModel             Rolloff;                                                   // 0x0048(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_73VO[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDistance;                                               // 0x004C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ROG1[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings");
		return ptr;
	}



	void SetSoundSourceSpread(float InSpread);
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
