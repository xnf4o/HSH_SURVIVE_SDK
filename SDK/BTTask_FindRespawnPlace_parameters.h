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

// Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.SortByDistance
struct UBTTask_FindRespawnPlace_C_SortByDistance_Params
{
	TArray<class ATeleportBase_C*>                     Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATeleportBase_C*>                     Teleport;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.ReceiveExecuteAI
struct UBTTask_FindRespawnPlace_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.ExecuteUbergraph_BTTask_FindRespawnPlace
struct UBTTask_FindRespawnPlace_C_ExecuteUbergraph_BTTask_FindRespawnPlace_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
