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

// Function AIController_Survivor.AIController_Survivor_C.StopLogic
struct AAIController_Survivor_C_StopLogic_Params
{
	struct FString                                     ReasonString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AIController_Survivor.AIController_Survivor_C.RestartLogic
struct AAIController_Survivor_C_RestartLogic_Params
{
};

// Function AIController_Survivor.AIController_Survivor_C.FinishDuty
struct AAIController_Survivor_C_FinishDuty_Params
{
};

// Function AIController_Survivor.AIController_Survivor_C.ReceivePossess
struct AAIController_Survivor_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Survivor.AIController_Survivor_C.PassCharacterInfoToServer
struct AAIController_Survivor_C_PassCharacterInfoToServer_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function AIController_Survivor.AIController_Survivor_C.OnTakeDamage
struct AAIController_Survivor_C_OnTakeDamage_Params
{
};

// Function AIController_Survivor.AIController_Survivor_C.ExecuteUbergraph_AIController_Survivor
struct AAIController_Survivor_C_ExecuteUbergraph_AIController_Survivor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Survivor.AIController_Survivor_C.OnFinishDuty__DelegateSignature
struct AAIController_Survivor_C_OnFinishDuty__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
