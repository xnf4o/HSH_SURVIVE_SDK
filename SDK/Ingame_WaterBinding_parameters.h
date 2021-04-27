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
// Parameters
//---------------------------------------------------------------------------

// Function Ingame_WaterBinding.Ingame_WaterBinding_C.WidgetUpdate
struct UIngame_WaterBinding_C_WidgetUpdate_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_WaterBinding.Ingame_WaterBinding_C.OnStatusApply
struct UIngame_WaterBinding_C_OnStatusApply_Params
{
};

// Function Ingame_WaterBinding.Ingame_WaterBinding_C.Tick
struct UIngame_WaterBinding_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_WaterBinding.Ingame_WaterBinding_C.ExecuteUbergraph_Ingame_WaterBinding
struct UIngame_WaterBinding_C_ExecuteUbergraph_Ingame_WaterBinding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
