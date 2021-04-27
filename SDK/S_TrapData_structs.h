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

// UserDefinedStruct S_TrapData.S_TrapData
// 0x0028
struct FS_TrapData
{
	TArray<struct FTransform>                          Array_3_4E3EE2954E1C99E49DEBBC8F470BBCFF;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UStaticMesh*                                 NewMesh_7_2085A3154661B82002FA66859C4A9ED3;                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATrapTargetActor_C*>                  Targets_12_D2B4305345E31AA5D24AD0A669489F9B;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
