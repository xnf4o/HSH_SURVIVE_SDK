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

// Function AIController_Hunter.AIController_Hunter_C.GetIsEnableBlockAction
struct AAIController_Hunter_C_GetIsEnableBlockAction_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIController_Hunter.AIController_Hunter_C.GetIsEnableBlockCamera
struct AAIController_Hunter_C_GetIsEnableBlockCamera_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIController_Hunter.AIController_Hunter_C.EnableMouseCameraClient
struct AAIController_Hunter_C_EnableMouseCameraClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.DisableMouseCameraClient
struct AAIController_Hunter_C_DisableMouseCameraClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.EnableBlockInputKeys
struct AAIController_Hunter_C_EnableBlockInputKeys_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.DisableBlockInputKeys
struct AAIController_Hunter_C_DisableBlockInputKeys_Params
{
	TArray<struct FKey>                                Keys;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AIController_Hunter.AIController_Hunter_C.DisableMovementClient
struct AAIController_Hunter_C_DisableMovementClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.EnableMovementClient
struct AAIController_Hunter_C_EnableMovementClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.EnableActionClient
struct AAIController_Hunter_C_EnableActionClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.DisableActionClient
struct AAIController_Hunter_C_DisableActionClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.DisableInputClient
struct AAIController_Hunter_C_DisableInputClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.EnableInputClient
struct AAIController_Hunter_C_EnableInputClient_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
struct AAIController_Hunter_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function AIController_Hunter.AIController_Hunter_C.StopLogic
struct AAIController_Hunter_C_StopLogic_Params
{
	struct FString                                     ReasonString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AIController_Hunter.AIController_Hunter_C.RestartLogic
struct AAIController_Hunter_C_RestartLogic_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.FinishDuty
struct AAIController_Hunter_C_FinishDuty_Params
{
};

// Function AIController_Hunter.AIController_Hunter_C.ReceivePossess
struct AAIController_Hunter_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Hunter.AIController_Hunter_C.PassCharacterInfoToServer
struct AAIController_Hunter_C_PassCharacterInfoToServer_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function AIController_Hunter.AIController_Hunter_C.ReceiveTick
struct AAIController_Hunter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Hunter.AIController_Hunter_C.ExecuteUbergraph_AIController_Hunter
struct AAIController_Hunter_C_ExecuteUbergraph_AIController_Hunter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Hunter.AIController_Hunter_C.OnFinishDuty__DelegateSignature
struct AAIController_Hunter_C_OnFinishDuty__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
