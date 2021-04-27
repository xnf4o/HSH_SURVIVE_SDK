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

// Function Ingame_Main_Widget.Ingame_Main_Widget_C.GetGameVersion
struct UIngame_Main_Widget_C_GetGameVersion_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_Main_Widget.Ingame_Main_Widget_C.GetSurvivalStatusByIndex
struct UIngame_Main_Widget_C_GetSurvivalStatusByIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_SurvivorStatus_C*                    SurvivorStatus;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Main_Widget.Ingame_Main_Widget_C.Get_Time_Text_1
struct UIngame_Main_Widget_C_Get_Time_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_Main_Widget.Ingame_Main_Widget_C.Construct
struct UIngame_Main_Widget_C_Construct_Params
{
};

// Function Ingame_Main_Widget.Ingame_Main_Widget_C.Tick
struct UIngame_Main_Widget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Main_Widget.Ingame_Main_Widget_C.ExecuteUbergraph_Ingame_Main_Widget
struct UIngame_Main_Widget_C_ExecuteUbergraph_Ingame_Main_Widget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
