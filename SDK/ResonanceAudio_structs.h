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
// Enums
//---------------------------------------------------------------------------

// Enum ResonanceAudio.EAmbisonicsOrder
enum class ResonanceAudio_EAmbisonicsOrder : uint8_t
{
	EAmbisonicsOrder__FirstOrder   = 0,
	EAmbisonicsOrder__SecondOrder  = 1,
	EAmbisonicsOrder__ThirdOrder   = 2,
	EAmbisonicsOrder__EAmbisonicsOrder_MAX = 3,

};

// Enum ResonanceAudio.ERaMaterialName
enum class ResonanceAudio_ERaMaterialName : uint8_t
{
	ERaMaterialName__TRANSPARENT   = 0,
	ERaMaterialName__ACOUSTIC_CEILING_TILES = 1,
	ERaMaterialName__BRICK_BARE    = 2,
	ERaMaterialName__BRICK_PAINTED = 3,
	ERaMaterialName__CONCRETE_BLOCK_COARSE = 4,
	ERaMaterialName__CONCRETE_BLOCK_PAINTED = 5,
	ERaMaterialName__CURTAIN_HEAVY = 6,
	ERaMaterialName__FIBER_GLASS_INSULATION = 7,
	ERaMaterialName__GLASS_THIN    = 8,
	ERaMaterialName__GLASS_THICK   = 9,
	ERaMaterialName__GRASS         = 10,
	ERaMaterialName__LINOLEUM_ON_CONCRETE = 11,
	ERaMaterialName__MARBLE        = 12,
	ERaMaterialName__METAL         = 13,
	ERaMaterialName__PARQUET_ONCONCRETE = 14,
	ERaMaterialName__PLASTER_ROUGH = 15,
	ERaMaterialName__PLASTER_SMOOTH = 16,
	ERaMaterialName__PLYWOOD_PANEL = 17,
	ERaMaterialName__POLISHED_CONCRETE_OR_TILE = 18,
	ERaMaterialName__SHEETROCK     = 19,
	ERaMaterialName__WATER_OR_ICE_SURFACE = 20,
	ERaMaterialName__WOOD_CEILING  = 21,
	ERaMaterialName__WOOD_PANEL    = 22,
	ERaMaterialName__UNIFORM       = 23,
	ERaMaterialName__ERaMaterialName_MAX = 24,

};

// Enum ResonanceAudio.ERaDistanceRolloffModel
enum class ResonanceAudio_ERaDistanceRolloffModel : uint8_t
{
	ERaDistanceRolloffModel__LOGARITHMIC = 0,
	ERaDistanceRolloffModel__LINEAR = 1,
	ERaDistanceRolloffModel__NONE  = 2,
	ERaDistanceRolloffModel__ERaDistanceRolloffModel_MAX = 3,

};

// Enum ResonanceAudio.ERaSpatializationMethod
enum class ResonanceAudio_ERaSpatializationMethod : uint8_t
{
	ERaSpatializationMethod__STEREO_PANNING = 0,
	ERaSpatializationMethod__HRTF  = 1,
	ERaSpatializationMethod__ERaSpatializationMethod_MAX = 2,

};

// Enum ResonanceAudio.ERaQualityMode
enum class ResonanceAudio_ERaQualityMode : uint8_t
{
	ERaQualityMode__STEREO_PANNING = 0,
	ERaQualityMode__BINAURAL_LOW   = 1,
	ERaQualityMode__BINAURAL_MEDIUM = 2,
	ERaQualityMode__BINAURAL_HIGH  = 3,
	ERaQualityMode__ERaQualityMode_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
// 0x0050
struct FResonanceAudioReverbPluginSettings
{
	bool                                               bEnableRoomEffects;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetTransformFromAudioVolume;                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0N1L[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RoomPosition;                                              // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       RoomRotation;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RoomDimensions;                                            // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ResonanceAudio_ERaMaterialName                     LeftWallMaterial;                                          // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ResonanceAudio_ERaMaterialName                     RightWallMaterial;                                         // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ResonanceAudio_ERaMaterialName                     FloorMaterial;                                             // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ResonanceAudio_ERaMaterialName                     CeilingMaterial;                                           // 0x002F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ResonanceAudio_ERaMaterialName                     FrontWallMaterial;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ResonanceAudio_ERaMaterialName                     BackWallMaterial;                                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C69Z[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReflectionScalar;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReverbGain;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReverbTimeModifier;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReverbBrightness;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZ18[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
