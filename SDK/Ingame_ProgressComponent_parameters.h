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

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.RefreshProgress
struct UIngame_ProgressComponent_C_RefreshProgress_Params
{
};

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.GetPercent
struct UIngame_ProgressComponent_C_GetPercent_Params
{
	float                                              Percent;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.SetPercent
struct UIngame_ProgressComponent_C_SetPercent_Params
{
	float                                              Percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.DestroyThis
struct UIngame_ProgressComponent_C_DestroyThis_Params
{
	bool                                               bIsFinish;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.Construct
struct UIngame_ProgressComponent_C_Construct_Params
{
};

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.DestroyThisSkipAnim
struct UIngame_ProgressComponent_C_DestroyThisSkipAnim_Params
{
};

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.ExecuteUbergraph_Ingame_ProgressComponent
struct UIngame_ProgressComponent_C_ExecuteUbergraph_Ingame_ProgressComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
