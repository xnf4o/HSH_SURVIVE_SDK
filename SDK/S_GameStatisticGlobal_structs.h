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

// UserDefinedStruct S_GameStatisticGlobal.S_GameStatisticGlobal
// 0x005C
struct FS_GameStatisticGlobal
{
	TArray<struct FS_PrimaryAssetsIDCount>             ItemsUsed_16_B3144A6A4F992F1C81909AA1C355A7A4;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_PrimaryAssetsIDCount>             ItemsSuccess_17_38ECAAF8479A3D6B73AE4EAA525F8C62;          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_PrimaryAssetsIDCount>             ItemsEmpty_30_7F76044A4751BF1EAD3F8BAA1B837258;            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FS_PrimaryAssetsIDCount                     CarryItem_42_ED5FCFD04E5D45A1521653BD38F20C69;             // 0x0030(0x0014) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                PingEnemyCount_20_024C649E4A6441EFD62BDB976704F121;        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OpenChestCount_34_455259694953152D07D8C58DFCA8ACED;        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReviveCount_37_AB45317C426105C95BF59986F8998BE4;           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloseEnemyTime_23_F09A451B43A91869301BEA953C3FCF6F;        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullHPTime_25_531C698545489EAF89ED1195B6CEDA33;            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RitualComplete_45_6A0486E14811F2E8CA4F2997C9045806;        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
