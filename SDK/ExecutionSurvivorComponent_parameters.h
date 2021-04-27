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

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.GetExecutionCameraTransform
struct UExecutionSurvivorComponent_C_GetExecutionCameraTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.SetUpMontageData
struct UExecutionSurvivorComponent_C_SetUpMontageData_Params
{
	class UAnimMontage*                                SurvivorMontage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendInTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera>   ExecutionMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.OnRep_State
struct UExecutionSurvivorComponent_C_OnRep_State_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.GetState
struct UExecutionSurvivorComponent_C_GetState_Params
{
	TEnumAsByte<E_ExecutionState_E_ExecutionState>     State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.UpdateCameraTransfrom
struct UExecutionSurvivorComponent_C_UpdateCameraTransfrom_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.TryCloseProgress
struct UExecutionSurvivorComponent_C_TryCloseProgress_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.IsCanExecution
struct UExecutionSurvivorComponent_C_IsCanExecution_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.CheckingExecution
struct UExecutionSurvivorComponent_C_CheckingExecution_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       GameplayTagContainer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.MoveCamera
struct UExecutionSurvivorComponent_C_MoveCamera_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockOutgoing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.SetCameraLocation
struct UExecutionSurvivorComponent_C_SetCameraLocation_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ReceiveTick
struct UExecutionSurvivorComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.PrepareCamera
struct UExecutionSurvivorComponent_C_PrepareCamera_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.CameraFade
struct UExecutionSurvivorComponent_C_CameraFade_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ToggleShowHUD
struct UExecutionSurvivorComponent_C_ToggleShowHUD_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Continue
struct UExecutionSurvivorComponent_C_Continue_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ClearValue
struct UExecutionSurvivorComponent_C_ClearValue_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Cancel
struct UExecutionSurvivorComponent_C_Cancel_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ReceiveEndPlay
struct UExecutionSurvivorComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Initialize
struct UExecutionSurvivorComponent_C_Initialize_Params
{
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ExecuteUbergraph_ExecutionSurvivorComponent
struct UExecutionSurvivorComponent_C_ExecuteUbergraph_ExecutionSurvivorComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.OnCameraSuccess__DelegateSignature
struct UExecutionSurvivorComponent_C_OnCameraSuccess__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
