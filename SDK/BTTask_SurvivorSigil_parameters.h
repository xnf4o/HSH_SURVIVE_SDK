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

// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.SortTrapTarget
struct UBTTask_SurvivorSigil_C_SortTrapTarget_Params
{
	TArray<class ATrapTargetActor_C*>                  Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATrapTargetActor_C*>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.GetTrapTarget
struct UBTTask_SurvivorSigil_C_GetTrapTarget_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrapTargetActor_C*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.GetHunter
struct UBTTask_SurvivorSigil_C_GetHunter_Params
{
	class AHunterBase_C*                               Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.ReceiveExecuteAI
struct UBTTask_SurvivorSigil_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.ExecuteUbergraph_BTTask_SurvivorSigil
struct UBTTask_SurvivorSigil_C_ExecuteUbergraph_BTTask_SurvivorSigil_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
