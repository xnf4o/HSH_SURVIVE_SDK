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

// UserDefinedStruct S_EndGameResult.S_EndGameResult
// 0x0020
struct FS_EndGameResult
{
	int                                                SurvivorExitPortals_15_C5BF225A4EBABA4A898AF39DF29615C0;   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvivorDeaths_14_EE1B15AB4B8E790790A781BC1FCFC3C8;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvivorSouls_13_789018A14556B4C95B164F9685AB37EE;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsHunterDeath_6_9F963FBC4CA714C9B321C982A631FEF6;         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsTimeOut_8_763C8EE5466095051574F39DCAFF7FC9;             // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsExitPortal_18_216A40604813B2B1B21419BFC8388627;         // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsCustomMatch_20_41DEFD7F4D344D97DEA5E3A8DDB84DB1;        // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             PlayerExitPortals_25_4032C54943271DB1261045A88399B83F;     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
