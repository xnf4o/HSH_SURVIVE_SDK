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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_TagStatus.S_TagStatus
// 0x0058
struct FS_TagStatus
{
	struct FGameplayTagContainer                       Tag_2_C080BA894CAA650543623DAB40B661F6;                    // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FString                                     String_5_5D09316F490C52FEE6AB188BBFC0E80B;                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UParticleSystem*                             Particle_8_611BCE9649BA4DCF128043A5F263E2B8;               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket_25_49823BE8414B931AE1E28E8A2FDD40C5;                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon_13_F4D6BE3D438AD0A9C09D598552C2217B;                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShowIcon_22_7F86744B40724F1CF620D9AE39B70DFD;           // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_TagStatusMode_E_TagStatusMode>       Mode_16_C5569BAF435FA65C002B35891245D9A3;                  // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R2BK[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  SoundEffect_34_E585B5E64576AE4BD3058A96C0760973;           // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
