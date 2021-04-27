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

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.GetExecutionCameraTransform
struct UExecutionSpecterComponent_C_GetExecutionCameraTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ClearCheckMovement
struct UExecutionSpecterComponent_C_ClearCheckMovement_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.SetCheckMovement
struct UExecutionSpecterComponent_C_SetCheckMovement_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.CheckExecutionCancel
struct UExecutionSpecterComponent_C_CheckExecutionCancel_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsForward;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.GetState
struct UExecutionSpecterComponent_C_GetState_Params
{
	TEnumAsByte<E_ExecutionState_E_ExecutionState>     State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.OnRep_bIsContinue
struct UExecutionSpecterComponent_C_OnRep_bIsContinue_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.GetHunterMontage
struct UExecutionSpecterComponent_C_GetHunterMontage_Params
{
	class UClass*                                      CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                HunterMontage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.RandomSetNumber
struct UExecutionSpecterComponent_C_RandomSetNumber_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.CheckingExecution_New
struct UExecutionSpecterComponent_C_CheckingExecution_New_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       GameplayTagContainer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CanExercute_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.GetSurvivorMontage
struct UExecutionSpecterComponent_C_GetSurvivorMontage_Params
{
	class UClass*                                      CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SurvivorMontage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendInTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendOutTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera>   SurvivorCamera;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.IsCanExecute
struct UExecutionSpecterComponent_C_IsCanExecute_Params
{
	struct FVector                                     Start;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HalfSize;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Orientation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanExercute_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      HitActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ClientStartChecking
struct UExecutionSpecterComponent_C_ClientStartChecking_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ClientClearChecking
struct UExecutionSpecterComponent_C_ClientClearChecking_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.PrepareCamera
struct UExecutionSpecterComponent_C_PrepareCamera_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.MoveCamera
struct UExecutionSpecterComponent_C_MoveCamera_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockOutgoing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.SetCameraLocation
struct UExecutionSpecterComponent_C_SetCameraLocation_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ReceiveTick
struct UExecutionSpecterComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.Continue
struct UExecutionSpecterComponent_C_Continue_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.Cancel
struct UExecutionSpecterComponent_C_Cancel_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ClearValue
struct UExecutionSpecterComponent_C_ClearValue_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ShowUI
struct UExecutionSpecterComponent_C_ShowUI_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.HideUI
struct UExecutionSpecterComponent_C_HideUI_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.CheckingCancel
struct UExecutionSpecterComponent_C_CheckingCancel_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.UpdateCameraTransfrom
struct UExecutionSpecterComponent_C_UpdateCameraTransfrom_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.EndMontage
struct UExecutionSpecterComponent_C_EndMontage_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ReceiveEndPlay
struct UExecutionSpecterComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.Initialize
struct UExecutionSpecterComponent_C_Initialize_Params
{
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.ExecuteUbergraph_ExecutionSpecterComponent
struct UExecutionSpecterComponent_C_ExecuteUbergraph_ExecutionSpecterComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ExecutionSpecterComponent.ExecutionSpecterComponent_C.OnCameraSuccess__DelegateSignature
struct UExecutionSpecterComponent_C_OnCameraSuccess__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
