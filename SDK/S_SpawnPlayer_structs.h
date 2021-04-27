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

// UserDefinedStruct S_SpawnPlayer.S_SpawnPlayer
// 0x004A
struct FS_SpawnPlayer
{
	class AController*                                 Controller_22_DEF8D6F7441F2C7D406162B94117757E;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn_5_DD067AC64FDF828C8DF294A6B3E9BDEF;                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform_20_26DACE3D4DFDC81D144CFC86E34A86B1;        // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                              BeforePossess_12_A4B81EA64FD817887F707F8EC50F1412;         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AfterPossess_13_96DC715E431E0CE474F462B8E5BAF00D;          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTargetView_17_2C378C024F2646627A6B319F52C6D578;           // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SelfRespawn_24_4E17EA8A4B746E562ADE4EB8D0C58C4E;           // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
