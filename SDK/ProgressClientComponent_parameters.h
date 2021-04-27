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

// Function ProgressClientComponent.ProgressClientComponent_C.GetBonusDecreaseProgress
struct UProgressClientComponent_C_GetBonusDecreaseProgress_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.DebugRequestProgress
struct UProgressClientComponent_C_DebugRequestProgress_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnRep_S_IsProgress
struct UProgressClientComponent_C_OnRep_S_IsProgress_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.SetUnlockCamera
struct UProgressClientComponent_C_SetUnlockCamera_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.SetLockCamera
struct UProgressClientComponent_C_SetLockCamera_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.IsSkillCheck
struct UProgressClientComponent_C_IsSkillCheck_Params
{
	bool                                               bIsSkillCheck;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.GetProgressIncrement
struct UProgressClientComponent_C_GetProgressIncrement_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              progress;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.IsCanProgress
struct UProgressClientComponent_C_IsCanProgress_Params
{
	class UObject*                                     Interaction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.IsProgress
struct UProgressClientComponent_C_IsProgress_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.PlayGreatSound
struct UProgressClientComponent_C_PlayGreatSound_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.PlayFailedSound
struct UProgressClientComponent_C_PlayFailedSound_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.PlayFinishSound
struct UProgressClientComponent_C_PlayFinishSound_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.RequestProgress
struct UProgressClientComponent_C_RequestProgress_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefualtProgressTime;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefualtSkillCheck;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.RequestProgressHandle
struct UProgressClientComponent_C_RequestProgressHandle_Params
{
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.PlayPerfectSound
struct UProgressClientComponent_C_PlayPerfectSound_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.StopProgress
struct UProgressClientComponent_C_StopProgress_Params
{
	float                                              WithDecreasePercent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.StopProgressHandle
struct UProgressClientComponent_C_StopProgressHandle_Params
{
	bool                                               IsFinish;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.SkillCheckHandle
struct UProgressClientComponent_C_SkillCheckHandle_Params
{
	float                                              Speed;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.FinishProgressHandle
struct UProgressClientComponent_C_FinishProgressHandle_Params
{
	bool                                               bIsLockCamera;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.CommitResult
struct UProgressClientComponent_C_CommitResult_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.CommitResultHandle
struct UProgressClientComponent_C_CommitResultHandle_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.RemoveTargetProgress
struct UProgressClientComponent_C_RemoveTargetProgress_Params
{
	TArray<class UObject*>                             Target;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProgressClientComponent.ProgressClientComponent_C.ServerFinishProgress
struct UProgressClientComponent_C_ServerFinishProgress_Params
{
	bool                                               bIsLockCamera;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.ServerStopProgress
struct UProgressClientComponent_C_ServerStopProgress_Params
{
	bool                                               bIsFinish;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.CannotProgressHandle
struct UProgressClientComponent_C_CannotProgressHandle_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.ServerStopMontage
struct UProgressClientComponent_C_ServerStopMontage_Params
{
	class ASurvivorBase_C*                             InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.RequestProgressWithObject
struct UProgressClientComponent_C_RequestProgressWithObject_Params
{
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefualtProgressTime;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefualtSkillCheck;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressClientComponent.ProgressClientComponent_C.SkillCheckClient
struct UProgressClientComponent_C_SkillCheckClient_Params
{
	float                                              Speed;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.RequestSkillCheck
struct UProgressClientComponent_C_RequestSkillCheck_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.CheckonDamaged
struct UProgressClientComponent_C_CheckonDamaged_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.RemoveProgressWidget
struct UProgressClientComponent_C_RemoveProgressWidget_Params
{
	bool                                               bIsFinish;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.RemoveSkillCheck
struct UProgressClientComponent_C_RemoveSkillCheck_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnPlayerRequestProgress
struct UProgressClientComponent_C_OnPlayerRequestProgress_Params
{
	class UObject*                                     ProgressActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnPlayerStopProgress
struct UProgressClientComponent_C_OnPlayerStopProgress_Params
{
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.ReceiveBeginPlay
struct UProgressClientComponent_C_ReceiveBeginPlay_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.Initialize
struct UProgressClientComponent_C_Initialize_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.ReceiveTick
struct UProgressClientComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnSnapSucesss
struct UProgressClientComponent_C_OnSnapSucesss_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.ExecuteUbergraph_ProgressClientComponent
struct UProgressClientComponent_C_ExecuteUbergraph_ProgressClientComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnStopProgress__DelegateSignature
struct UProgressClientComponent_C_OnStopProgress__DelegateSignature_Params
{
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnTriggerRitualActivity__DelegateSignature
struct UProgressClientComponent_C_OnTriggerRitualActivity__DelegateSignature_Params
{
	float                                              ContributePercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnCommitSkillCheck__DelegateSignature
struct UProgressClientComponent_C_OnCommitSkillCheck__DelegateSignature_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnRequestProgress__DelegateSignature
struct UProgressClientComponent_C_OnRequestProgress__DelegateSignature_Params
{
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnFinishOrCancelProgress__DelegateSignature
struct UProgressClientComponent_C_OnFinishOrCancelProgress__DelegateSignature_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnFailResult__DelegateSignature
struct UProgressClientComponent_C_OnFailResult__DelegateSignature_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnGreatResult__DelegateSignature
struct UProgressClientComponent_C_OnGreatResult__DelegateSignature_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnPerfectResult__DelegateSignature
struct UProgressClientComponent_C_OnPerfectResult__DelegateSignature_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnUpdateProgress__DelegateSignature
struct UProgressClientComponent_C_OnUpdateProgress__DelegateSignature_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnCancelProgress__DelegateSignature
struct UProgressClientComponent_C_OnCancelProgress__DelegateSignature_Params
{
};

// Function ProgressClientComponent.ProgressClientComponent_C.OnFinishProgress__DelegateSignature
struct UProgressClientComponent_C_OnFinishProgress__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
