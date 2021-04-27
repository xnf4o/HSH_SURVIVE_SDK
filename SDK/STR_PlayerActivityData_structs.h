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

// UserDefinedStruct STR_PlayerActivityData.STR_PlayerActivityData
// 0x0141
struct FSTR_PlayerActivityData
{
	class APlayerState*                                PlayerState_4_7725B8274A07483040F359ACF8D051B5;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerID_39_A508F08648F17AC4AC95BDABDE056089;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1H77[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerInfoStruct_G                         PlayerInfo_35_A1B645F442DFD532F26C9DA1FEAE05A4;            // 0x0010(0x0110) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FS_Activity>                         Activities_24_D1BE1EFF40E8E8E18F917086E47D0D29;            // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TotalScore_20_A0CB41884050A60462A89EAC71D0F9B0;            // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalCoins_18_3023716248FBCF3F673D6B9817EFB1D9;            // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalExp_26_2FF77DC1409CEB79597EAD9D808D8034;              // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalMmr_44_6222135B49EA08F7FA4906A92AE562DB;              // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasPenalty_41_584D8F7C4793AD8153DD688206AC8C9F;            // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
