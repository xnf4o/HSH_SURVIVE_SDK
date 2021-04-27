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

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.StartRandomPattern
struct URandomObjectiveComponent_C_StartRandomPattern_Params
{
	TArray<int>                                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.OnRep_RandomPattern
struct URandomObjectiveComponent_C_OnRep_RandomPattern_Params
{
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.SameClass
struct URandomObjectiveComponent_C_SameClass_Params
{
	TArray<class AActor*>                              ListA;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_RandomObject>                     randomObjectList;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.ActiveRandomPattern
struct URandomObjectiveComponent_C_ActiveRandomPattern_Params
{
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.TryGetRandomObjectiveActor
struct URandomObjectiveComponent_C_TryGetRandomObjectiveActor_Params
{
	class ARandomObjectiveActor_C*                     Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.ActiveRandomList
struct URandomObjectiveComponent_C_ActiveRandomList_Params
{
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.OnRep_RandomList
struct URandomObjectiveComponent_C_OnRep_RandomList_Params
{
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.SetupList
struct URandomObjectiveComponent_C_SetupList_Params
{
	TArray<struct FS_RandomObject>                     randomObjectList;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_RandomList>                       Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.Initialize
struct URandomObjectiveComponent_C_Initialize_Params
{
};

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.ExecuteUbergraph_RandomObjectiveComponent
struct URandomObjectiveComponent_C_ExecuteUbergraph_RandomObjectiveComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
