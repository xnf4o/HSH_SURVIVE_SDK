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

// UserDefinedStruct S_LimitItemChanged.S_LimitItemChanged
// 0x0050
struct FS_LimitItemChanged
{
	TArray<struct FS_LimitType>                        Type_20_BBB68F924E56A1459564389A91335992;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    MeleeType_12_957347CC4A4A9596A9DA8EB76A4F7B75;             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    RangeType_14_372AE8104792150328D3B89FB3D41D43;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    TrapType_17_F6534FFE4443F99CD2E418975E14E91C;              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    GeneralType_4_D48B16D5424B0B89061B27B5C64B66EA;            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
