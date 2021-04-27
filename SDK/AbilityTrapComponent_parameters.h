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

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsLockCameraOnFinish
struct UAbilityTrapComponent_C_IsLockCameraOnFinish_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetFinishSection
struct UAbilityTrapComponent_C_GetFinishSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckFailedSection
struct UAbilityTrapComponent_C_GetSkilcheckFailedSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckGreatSection
struct UAbilityTrapComponent_C_GetSkilcheckGreatSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckPerfectSection
struct UAbilityTrapComponent_C_GetSkilcheckPerfectSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsForceSkillCheck?
struct UAbilityTrapComponent_C_IsForceSkillCheck__Params
{
	bool                                               bForceSkillCheck;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsNotCancelProgressonMove
struct UAbilityTrapComponent_C_IsNotCancelProgressonMove_Params
{
	bool                                               IsNotCancel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.CanUseProgress
struct UAbilityTrapComponent_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSpeedSkillCheck
struct UAbilityTrapComponent_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsResetResult?
struct UAbilityTrapComponent_C_IsResetResult__Params
{
	bool                                               IsReset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetProgressTime
struct UAbilityTrapComponent_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsCanHelp?
struct UAbilityTrapComponent_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsCanSkillCheck?
struct UAbilityTrapComponent_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsPlayerProgress
struct UAbilityTrapComponent_C_IsPlayerProgress_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.AddedFirstTrapTarget
struct UAbilityTrapComponent_C_AddedFirstTrapTarget_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.TryGetOwner
struct UAbilityTrapComponent_C_TryGetOwner_Params
{
	class AHSHCharacterBase*                           Owner;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawUpdateOneStep
struct UAbilityTrapComponent_C_DrawUpdateOneStep_Params
{
	class ATrapTargetActor_C*                          TrapTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsShouldHide
struct UAbilityTrapComponent_C_IsShouldHide_Params
{
	class ATrapTargetActor_C*                          TrapTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShouldHide;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ResetTrapTargetMaterial
struct UAbilityTrapComponent_C_ResetTrapTargetMaterial_Params
{
	class ATrapTargetActor_C*                          TrapTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSectionStep
struct UAbilityTrapComponent_C_GetSectionStep_Params
{
	int                                                Step;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Section;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.FindHightValue
struct UAbilityTrapComponent_C_FindHightValue_Params
{
	struct FVector                                     InVec;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InVec2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawTargetMeshViewWithDistance
struct UAbilityTrapComponent_C_DrawTargetMeshViewWithDistance_Params
{
	class ATrapTargetActor_C*                          TrapTarget;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawTargetMeshViewWithTrace
struct UAbilityTrapComponent_C_DrawTargetMeshViewWithTrace_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.HidePreviewCompleteMeshView
struct UAbilityTrapComponent_C_HidePreviewCompleteMeshView_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawPreviewCompleteMeshView
struct UAbilityTrapComponent_C_DrawPreviewCompleteMeshView_Params
{
	class ATrapTargetActor_C*                          TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsOutOfRange?
struct UAbilityTrapComponent_C_IsOutOfRange__Params
{
	class ATrapTargetActor_C*                          TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OutOfRange_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      PairTargetActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.CanPlaceTrapWithNearTarget?
struct UAbilityTrapComponent_C_CanPlaceTrapWithNearTarget__Params
{
	class ATrapTargetActor_C*                          TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATrapTargetActor_C*                          PairTargetActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsOwnerMoving
struct UAbilityTrapComponent_C_IsOwnerMoving_Params
{
	bool                                               IsMoving_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.HidePreviewMeshView
struct UAbilityTrapComponent_C_HidePreviewMeshView_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.SpawnPreviewMesh
struct UAbilityTrapComponent_C_SpawnPreviewMesh_Params
{
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 NewMesh;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APreviewMeshActor_C*                         Actor;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.PlaceTrapToTarget
struct UAbilityTrapComponent_C_PlaceTrapToTarget_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.CanPlaceTrapWithLineTrace?
struct UAbilityTrapComponent_C_CanPlaceTrapWithLineTrace__Params
{
	struct FHitResult                                  TraceHit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      TargetClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      TargetActor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.UpdateLineTraceInfomation
struct UAbilityTrapComponent_C_UpdateLineTraceInfomation_Params
{
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetPlayerLocation
struct UAbilityTrapComponent_C_GetPlayerLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.GetFloorLocation
struct UAbilityTrapComponent_C_GetFloorLocation_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FloorVector;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawPreviewMeshView
struct UAbilityTrapComponent_C_DrawPreviewMeshView_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.UpdateComponent
struct UAbilityTrapComponent_C_UpdateComponent_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.DeactivateAbilityComponent
struct UAbilityTrapComponent_C_DeactivateAbilityComponent_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ActivateAbilityComponent
struct UAbilityTrapComponent_C_ActivateAbilityComponent_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 PreviewMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 PreviewCompleteMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxCasting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTwoStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOneStepWithProgress;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSnapHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsCanSkillCheck;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnCannotProgress
struct UAbilityTrapComponent_C_OnCannotProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnStartProgressAction
struct UAbilityTrapComponent_C_OnStartProgressAction_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.EnableTargetOutline
struct UAbilityTrapComponent_C_EnableTargetOutline_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientDisableTargetOutline
struct UAbilityTrapComponent_C_ClientDisableTargetOutline_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientUpdateTargetOutline
struct UAbilityTrapComponent_C_ClientUpdateTargetOutline_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientEnableTargetOutline
struct UAbilityTrapComponent_C_ClientEnableTargetOutline_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.DisableTargetOutline
struct UAbilityTrapComponent_C_DisableTargetOutline_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.SpawnActor
struct UAbilityTrapComponent_C_SpawnActor_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 NewMesh;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ServerJumpToMontage
struct UAbilityTrapComponent_C_ServerJumpToMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.MulticastJumpToMontage
struct UAbilityTrapComponent_C_MulticastJumpToMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ServerCount
struct UAbilityTrapComponent_C_ServerCount_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.CancelProgress
struct UAbilityTrapComponent_C_CancelProgress_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ServerStopMovement
struct UAbilityTrapComponent_C_ServerStopMovement_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.MulticastStopMovement
struct UAbilityTrapComponent_C_MulticastStopMovement_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ReceiveTick
struct UAbilityTrapComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.UseAbilityComponent
struct UAbilityTrapComponent_C_UseAbilityComponent_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.EndAnimationNotify
struct UAbilityTrapComponent_C_EndAnimationNotify_Params
{
	struct FGameplayTagContainer                       ContainGameplayTags;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.BeginAnimationNotify
struct UAbilityTrapComponent_C_BeginAnimationNotify_Params
{
	struct FGameplayTagContainer                       ContainGameplayTags;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnProgressFinish_Event
struct UAbilityTrapComponent_C_OnProgressFinish_Event_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientDestroyPreview
struct UAbilityTrapComponent_C_ClientDestroyPreview_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnFinishProgress
struct UAbilityTrapComponent_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ClearTraceTargetActor
struct UAbilityTrapComponent_C_ClearTraceTargetActor_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnStopProgress
struct UAbilityTrapComponent_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientStopMovement
struct UAbilityTrapComponent_C_ClientStopMovement_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnCommitSkillCheck
struct UAbilityTrapComponent_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ForcePlaceTrap
struct UAbilityTrapComponent_C_ForcePlaceTrap_Params
{
	class ATrapTargetActor_C*                          TrapActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.ExecuteUbergraph_AbilityTrapComponent
struct UAbilityTrapComponent_C_ExecuteUbergraph_AbilityTrapComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnTrapTargetUpdateList__DelegateSignature
struct UAbilityTrapComponent_C_OnTrapTargetUpdateList__DelegateSignature_Params
{
};

// Function AbilityTrapComponent.AbilityTrapComponent_C.OnProgressFinish__DelegateSignature
struct UAbilityTrapComponent_C_OnProgressFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
