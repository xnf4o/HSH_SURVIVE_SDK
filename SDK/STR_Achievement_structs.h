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

// UserDefinedStruct STR_Achievement.STR_Achievement
// 0x0048
struct FSTR_Achievement
{
	struct FName                                       ApiName_2_ED1392C04BBE8BDB4BB1409C3BAC9226;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ProgressApiName_16_CB2E087240FE88218F70AA9977DBA470;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsProgressAchievement_19_370E208C4E0C071650D3CC8F488F47D0; // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Role_E_Role>                         Role_22_58B7934D476678AD6A3E808E539B0DDD;                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LKDE[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName_7_F5960BE948BC8C4A3AD015B2618AC732;            // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_10_57118D5546186B47DC11B6A0623613BF;           // 0x0030(0x0018) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
