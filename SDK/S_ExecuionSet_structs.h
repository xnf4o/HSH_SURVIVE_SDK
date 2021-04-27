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

// UserDefinedStruct S_ExecuionSet.S_ExecuionSet
// 0x0026
struct FS_ExecuionSet
{
	class UAnimMontage*                                Hunter_2_2BD058D84B8279E579525C81AACCB36C;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Survivor_4_345BD53D4CA06F66D80A53BCFF5ABA72;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairAnimation>                    SurvivorsSets_17_B6AB948C4C67D7985D3055A67A08D3A0;         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Distance_7_B6F87F174174F63925E453B87001FF90;               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera>   HunterCamera_12_A98A2542496997682BD64EB4EEA1BCEE;          // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera>   SurvivorCamera_13_517F810F4A7057D740CDBC8C224496A4;        // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
