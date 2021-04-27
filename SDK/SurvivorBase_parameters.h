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

// Function SurvivorBase.SurvivorBase_C.GetProgressTime
struct ASurvivorBase_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.IsCanHelp?
struct ASurvivorBase_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsCanSkillCheck?
struct ASurvivorBase_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsResetResult?
struct ASurvivorBase_C_IsResetResult__Params
{
	bool                                               IsReset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.GetSpeedSkillCheck
struct ASurvivorBase_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CanUseProgress
struct ASurvivorBase_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsNotCancelProgressonMove
struct ASurvivorBase_C_IsNotCancelProgressonMove_Params
{
	bool                                               IsNotCancel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsForceSkillCheck?
struct ASurvivorBase_C_IsForceSkillCheck__Params
{
	bool                                               bForceSkillCheck;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.GetSkilcheckPerfectSection
struct ASurvivorBase_C_GetSkilcheckPerfectSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetSkilcheckGreatSection
struct ASurvivorBase_C_GetSkilcheckGreatSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetSkilcheckFailedSection
struct ASurvivorBase_C_GetSkilcheckFailedSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetFinishSection
struct ASurvivorBase_C_GetFinishSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.IsLockCameraOnFinish
struct ASurvivorBase_C_IsLockCameraOnFinish_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.GetCurrentPickable
struct ASurvivorBase_C_GetCurrentPickable_Params
{
	struct FS_Pickable                                 CurrentPickable;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetExecuteCameraTransform
struct ASurvivorBase_C_GetExecuteCameraTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.isExecution
struct ASurvivorBase_C_isExecution_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.GetAimTransform
struct ASurvivorBase_C_GetAimTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsHaveSpawnPerk
struct ASurvivorBase_C_IsHaveSpawnPerk_Params
{
	bool                                               bIsHave;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       Tag;                                                       // (Parm, OutParm)
};

// Function SurvivorBase.SurvivorBase_C.GetCharacterID
struct ASurvivorBase_C_GetCharacterID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.NotifyFootStep
struct ASurvivorBase_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetCurrentItemID
struct ASurvivorBase_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetMainCameraComponent
struct ASurvivorBase_C_GetMainCameraComponent_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CheckHunterInCrosshair
struct ASurvivorBase_C_CheckHunterInCrosshair_Params
{
	bool                                               InCamera;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.ShouldInteractStartDelay
struct ASurvivorBase_C_ShouldInteractStartDelay_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.OnRep_CurrentPickItem
struct ASurvivorBase_C_OnRep_CurrentPickItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnRep_IsHideMesh
struct ASurvivorBase_C_OnRep_IsHideMesh_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnRep_CollisionMovement
struct ASurvivorBase_C_OnRep_CollisionMovement_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GetMontageProgress
struct ASurvivorBase_C_GetMontageProgress_Params
{
	class UHSHPickableItem*                            HSHPickable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Anim_Montage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InitBack
struct ASurvivorBase_C_InitBack_Params
{
};

// Function SurvivorBase.SurvivorBase_C.InitHead
struct ASurvivorBase_C_InitHead_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GetSpawnSoulLocation
struct ASurvivorBase_C_GetSpawnSoulLocation_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsGameStarted
struct ASurvivorBase_C_IsGameStarted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsHaveAnyAxis
struct ASurvivorBase_C_IsHaveAnyAxis_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.OnRep_IsKnockdown
struct ASurvivorBase_C_OnRep_IsKnockdown_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnRep_bIsAiming
struct ASurvivorBase_C_OnRep_bIsAiming_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnRep_MoveSpeed
struct ASurvivorBase_C_OnRep_MoveSpeed_Params
{
};

// Function SurvivorBase.SurvivorBase_C.IsBlockKeys
struct ASurvivorBase_C_IsBlockKeys_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.CheckMovementModified
struct ASurvivorBase_C_CheckMovementModified_Params
{
	float                                              AxisIn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AxisOut;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetPossessMinion
struct ASurvivorBase_C_GetPossessMinion_Params
{
	class ASurvivorMinionBase_C*                       MinionCache;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ResetPossessMinion
struct ASurvivorBase_C_ResetPossessMinion_Params
{
};

// Function SurvivorBase.SurvivorBase_C.SetUpPossessMinion
struct ASurvivorBase_C_SetUpPossessMinion_Params
{
	class ASurvivorMinionBase_C*                       Minion;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.TryGetHSURPlayerController
struct ASurvivorBase_C_TryGetHSURPlayerController_Params
{
	class AHSURPlayerController_C*                     HSURPlayerController;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CheckingInitStartGame
struct ASurvivorBase_C_CheckingInitStartGame_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GetOverlapingCharacter
struct ASurvivorBase_C_GetOverlapingCharacter_Params
{
	TArray<class AActor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function SurvivorBase.SurvivorBase_C.InitializeCameraPostProcess
struct ASurvivorBase_C_InitializeCameraPostProcess_Params
{
};

// Function SurvivorBase.SurvivorBase_C.DeinitializePreviewMeshInHand
struct ASurvivorBase_C_DeinitializePreviewMeshInHand_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GetExecutionSurvivorComponent
struct ASurvivorBase_C_GetExecutionSurvivorComponent_Params
{
	class UExecutionSurvivorComponent_C*               ExecutionSurvivorComponent;                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetProgressComponent
struct ASurvivorBase_C_GetProgressComponent_Params
{
	class UProgressClientComponent_C*                  ProgressComponent;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.IsLookBack
struct ASurvivorBase_C_IsLookBack_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.OnDroptItemEvent
struct ASurvivorBase_C_OnDroptItemEvent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnCollectItemEvent
struct ASurvivorBase_C_OnCollectItemEvent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GetOptionToggleCounch
struct ASurvivorBase_C_GetOptionToggleCounch_Params
{
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleCounch;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetOptionToggleSprint
struct ASurvivorBase_C_GetOptionToggleSprint_Params
{
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetOptionSensitivity
struct ASurvivorBase_C_GetOptionSensitivity_Params
{
	float                                              Sensitivity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ResetMovingHold
struct ASurvivorBase_C_ResetMovingHold_Params
{
};

// Function SurvivorBase.SurvivorBase_C.IsNotHoldMovementInput
struct ASurvivorBase_C_IsNotHoldMovementInput_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.CheckStopMovement_Item
struct ASurvivorBase_C_CheckStopMovement_Item_Params
{
	struct FS_Pickable                                 Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               bForceStop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.IsPickItem
struct ASurvivorBase_C_IsPickItem_Params
{
	bool                                               bIsPick;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.CheckMovingHold
struct ASurvivorBase_C_CheckMovingHold_Params
{
};

// Function SurvivorBase.SurvivorBase_C.CheckStopMovement
struct ASurvivorBase_C_CheckStopMovement_Params
{
	class UObject*                                     Interaction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetPlayerID
struct ASurvivorBase_C_GetPlayerID_Params
{
	int                                                PlayerId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnRep_IsOnLockingItem
struct ASurvivorBase_C_OnRep_IsOnLockingItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.IsContainHitActor
struct ASurvivorBase_C_IsContainHitActor_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.ClearHitActor
struct ASurvivorBase_C_ClearHitActor_Params
{
};

// Function SurvivorBase.SurvivorBase_C.AddedHitActor
struct ASurvivorBase_C_AddedHitActor_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.UpdateFOV
struct ASurvivorBase_C_UpdateFOV_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GetFootStepSound
struct ASurvivorBase_C_GetFootStepSound_Params
{
	struct FS_FootStepSurvivor                         OutRow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.FindFlood
struct ASurvivorBase_C_FindFlood_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorBase.SurvivorBase_C.DebugTagContainer
struct ASurvivorBase_C_DebugTagContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Str;                                                       // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.IsCharacterSprint
struct ASurvivorBase_C_IsCharacterSprint_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.SetVisiblePreviewMeshInHand
struct ASurvivorBase_C_SetVisiblePreviewMeshInHand_Params
{
	bool                                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.DebugAudio
struct ASurvivorBase_C_DebugAudio_Params
{
};

// Function SurvivorBase.SurvivorBase_C.TryGetPingHunterComponent
struct ASurvivorBase_C_TryGetPingHunterComponent_Params
{
	class UPingHunterComponent_C*                      PingHunterCache;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.TryGetHunter
struct ASurvivorBase_C_TryGetHunter_Params
{
	class AHunterBase_C*                               HunterRef;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnHitReaction
struct ASurvivorBase_C_OnHitReaction_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_DmgDirection_E_DmgDirection>         Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InitializePreviewMeshInHand
struct ASurvivorBase_C_InitializePreviewMeshInHand_Params
{
	class APreviewMeshActor_C*                         RightPreviewMesh;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APreviewMeshActor_C*                         LeftPreviewMesh;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.UpdatePreviewMeshInHand
struct ASurvivorBase_C_UpdatePreviewMeshInHand_Params
{
	class UHSHPickableItem*                            PickableObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CheckCurrentItem
struct ASurvivorBase_C_CheckCurrentItem_Params
{
	float                                              DurabilityLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveItem_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.AddInventory
struct ASurvivorBase_C_AddInventory_Params
{
	TMap<struct FHSHItemSlot, class UHSHItem*>         Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FHSHItemSlot                                Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UHSHItem*                                    NewItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FHSHItemSlot, class UHSHItem*>         TestInventory;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function SurvivorBase.SurvivorBase_C.OnAttackCollisionOverlap
struct ASurvivorBase_C_OnAttackCollisionOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSend;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.UpdateDurabiilty
struct ASurvivorBase_C_UpdateDurabiilty_Params
{
	bool                                               UseAllDurability_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DurabilityLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Pickable                                 CurrentPickItem;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.GetSurvivalSpeed
struct ASurvivorBase_C_GetSurvivalSpeed_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BackwardAxis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CheckAction
struct ASurvivorBase_C_CheckAction_Params
{
	bool                                               DoingProgress;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.RegenStamina
struct ASurvivorBase_C_RegenStamina_Params
{
};

// Function SurvivorBase.SurvivorBase_C.DrainStamina
struct ASurvivorBase_C_DrainStamina_Params
{
};

// Function SurvivorBase.SurvivorBase_C.UserConstructionScript
struct ASurvivorBase_C_UserConstructionScript_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Timeline_0__FinishedFunc
struct ASurvivorBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Timeline_0__UpdateFunc
struct ASurvivorBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Dissolve__FinishedFunc
struct ASurvivorBase_C_Dissolve__FinishedFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Dissolve__UpdateFunc
struct ASurvivorBase_C_Dissolve__UpdateFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Delay__FinishedFunc
struct ASurvivorBase_C_Delay__FinishedFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Delay__UpdateFunc
struct ASurvivorBase_C_Delay__UpdateFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.FadeControl__FinishedFunc
struct ASurvivorBase_C_FadeControl__FinishedFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.FadeControl__UpdateFunc
struct ASurvivorBase_C_FadeControl__UpdateFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.LookAtCrosshairTimeline__FinishedFunc
struct ASurvivorBase_C_LookAtCrosshairTimeline__FinishedFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.LookAtCrosshairTimeline__UpdateFunc
struct ASurvivorBase_C_LookAtCrosshairTimeline__UpdateFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.RotateMeshToDefaultTimeline__FinishedFunc
struct ASurvivorBase_C_RotateMeshToDefaultTimeline__FinishedFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.RotateMeshToDefaultTimeline__UpdateFunc
struct ASurvivorBase_C_RotateMeshToDefaultTimeline__UpdateFunc_Params
{
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_UseItem_K2Node_InputActionEvent_22
struct ASurvivorBase_C_InpActEvt_Survivor_UseItem_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_21
struct ASurvivorBase_C_InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_20
struct ASurvivorBase_C_InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_19
struct ASurvivorBase_C_InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_18
struct ASurvivorBase_C_InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_17
struct ASurvivorBase_C_InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpTchEvt_Moved
struct ASurvivorBase_C_InpTchEvt_Moved_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpTchEvt_Released
struct ASurvivorBase_C_InpTchEvt_Released_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpTchEvt_Pressed
struct ASurvivorBase_C_InpTchEvt_Pressed_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_16
struct ASurvivorBase_C_InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_General_Ping_K2Node_InputActionEvent_15
struct ASurvivorBase_C_InpActEvt_General_Ping_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_14
struct ASurvivorBase_C_InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_13
struct ASurvivorBase_C_InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_12
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_11
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_10
struct ASurvivorBase_C_InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker1_K2Node_InputActionEvent_9
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker1_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker2_K2Node_InputActionEvent_8
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker2_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker3_K2Node_InputActionEvent_7
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker3_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker4_K2Node_InputActionEvent_6
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker4_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker5_K2Node_InputActionEvent_5
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker5_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker6_K2Node_InputActionEvent_4
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker6_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker7_K2Node_InputActionEvent_3
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker7_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker8_K2Node_InputActionEvent_2
struct ASurvivorBase_C_InpActEvt_Survivor_Sticker8_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Interact_K2Node_InputActionEvent_1
struct ASurvivorBase_C_InpActEvt_Survivor_Interact_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_3
struct ASurvivorBase_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_2
struct ASurvivorBase_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpActEvt_R_K2Node_InputKeyEvent_1
struct ASurvivorBase_C_InpActEvt_R_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.SendMeleeDistance
struct ASurvivorBase_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.EnableCanSeeSpecter
struct ASurvivorBase_C_EnableCanSeeSpecter_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.TryPlayMontage
struct ASurvivorBase_C_TryPlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Section;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.UpdateSurvivalCrosshair
struct ASurvivorBase_C_UpdateSurvivalCrosshair_Params
{
};

// Function SurvivorBase.SurvivorBase_C.UpdatePickableType
struct ASurvivorBase_C_UpdatePickableType_Params
{
};

// Function SurvivorBase.SurvivorBase_C.MulticastSpawnParticle
struct ASurvivorBase_C_MulticastSpawnParticle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Engine_EPSCPoolMethod                              PoolingMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientAddDesignEvent
struct ASurvivorBase_C_ClientAddDesignEvent_Params
{
	struct FString                                     eventId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientAddDesignEventWithValue
struct ASurvivorBase_C_ClientAddDesignEventWithValue_Params
{
	struct FString                                     eventId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.SetCameraMode
struct ASurvivorBase_C_SetCameraMode_Params
{
	int                                                CameraMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ChangeMode_0_LockRotate
struct ASurvivorBase_C_ChangeMode_0_LockRotate_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ChangeMode_1_UnlockRotate
struct ASurvivorBase_C_ChangeMode_1_UnlockRotate_Params
{
};

// Function SurvivorBase.SurvivorBase_C.CheckInfiniteStaminaEffect
struct ASurvivorBase_C_CheckInfiniteStaminaEffect_Params
{
};

// Function SurvivorBase.SurvivorBase_C.MulticastSetBloodEffect
struct ASurvivorBase_C_MulticastSetBloodEffect_Params
{
	bool                                               IsInjury;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastOnResurrect
struct ASurvivorBase_C_MulticastOnResurrect_Params
{
};

// Function SurvivorBase.SurvivorBase_C.SetMaterialsEffect
struct ASurvivorBase_C_SetMaterialsEffect_Params
{
	float                                              Alpha;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.EnableDissolveEffect
struct ASurvivorBase_C_EnableDissolveEffect_Params
{
	bool                                               bIsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastOnDissolve
struct ASurvivorBase_C_MulticastOnDissolve_Params
{
};

// Function SurvivorBase.SurvivorBase_C.NotifyItemIcon
struct ASurvivorBase_C_NotifyItemIcon_Params
{
};

// Function SurvivorBase.SurvivorBase_C.EnableFogManager
struct ASurvivorBase_C_EnableFogManager_Params
{
};

// Function SurvivorBase.SurvivorBase_C.UpdateFogManager
struct ASurvivorBase_C_UpdateFogManager_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnAttributeChange
struct ASurvivorBase_C_OnAttributeChange_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnGameplayEffectApply
struct ASurvivorBase_C_OnGameplayEffectApply_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorBase.SurvivorBase_C.SendOnGameplayEffectApply
struct ASurvivorBase_C_SendOnGameplayEffectApply_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorBase.SurvivorBase_C.ClientReceiveGameplayEffectApply
struct ASurvivorBase_C_ClientReceiveGameplayEffectApply_Params
{
	struct FGameplayTagContainer                       GameplayTags;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorBase.SurvivorBase_C.ServerPlayAudio
struct ASurvivorBase_C_ServerPlayAudio_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attach;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastAudio
struct ASurvivorBase_C_MulticastAudio_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attach;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.PlaySound
struct ASurvivorBase_C_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAttachCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastInjuredSound
struct ASurvivorBase_C_MulticastInjuredSound_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastExhaustedSound
struct ASurvivorBase_C_MulticastExhaustedSound_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.ReceiveBeginPlay
struct ASurvivorBase_C_ReceiveBeginPlay_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ReceivePossessed
struct ASurvivorBase_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.EnableOutlineComponent
struct ASurvivorBase_C_EnableOutlineComponent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ReceiveUnpossessed
struct ASurvivorBase_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.MulticastInitSpeed
struct ASurvivorBase_C_MulticastInitSpeed_Params
{
};

// Function SurvivorBase.SurvivorBase_C.EnableInteractComponent
struct ASurvivorBase_C_EnableInteractComponent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnProgressFailed
struct ASurvivorBase_C_OnProgressFailed_Params
{
};

// Function SurvivorBase.SurvivorBase_C.EnableChaseAudioComponent
struct ASurvivorBase_C_EnableChaseAudioComponent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnCharacterChange
struct ASurvivorBase_C_OnCharacterChange_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ShowSurvivorAura
struct ASurvivorBase_C_ShowSurvivorAura_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnStartProgressAction
struct ASurvivorBase_C_OnStartProgressAction_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnCommitSkillCheck
struct ASurvivorBase_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnCannotProgress
struct ASurvivorBase_C_OnCannotProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnTriggerChasing_Event
struct ASurvivorBase_C_OnTriggerChasing_Event_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ServerChasing
struct ASurvivorBase_C_ServerChasing_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnRequestProgress_Event
struct ASurvivorBase_C_OnRequestProgress_Event_Params
{
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ServerRequestProgress
struct ASurvivorBase_C_ServerRequestProgress_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Emit
struct ASurvivorBase_C_Emit_Params
{
	class UParticleSystem*                             EmitterTemplate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnTriggerRitualActivity
struct ASurvivorBase_C_OnTriggerRitualActivity_Params
{
	float                                              ContributePercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnStopProgress
struct ASurvivorBase_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnFinishProgress
struct ASurvivorBase_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.HotfixedHiddenSpecter
struct ASurvivorBase_C_HotfixedHiddenSpecter_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.DoDamage
struct ASurvivorBase_C_DoDamage_Params
{
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorBase.SurvivorBase_C.SpawnHitParticleAndSound
struct ASurvivorBase_C_SpawnHitParticleAndSound_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnEnableAttackCollision
struct ASurvivorBase_C_OnEnableAttackCollision_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnDisableAttackCollision
struct ASurvivorBase_C_OnDisableAttackCollision_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnEndAttackAnimation
struct ASurvivorBase_C_OnEndAttackAnimation_Params
{
};

// Function SurvivorBase.SurvivorBase_C.BeginAttackCollision
struct ASurvivorBase_C_BeginAttackCollision_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundAtk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.EndAttackCollision
struct ASurvivorBase_C_EndAttackCollision_Params
{
};

// Function SurvivorBase.SurvivorBase_C.EndAttackAnimation
struct ASurvivorBase_C_EndAttackAnimation_Params
{
};

// Function SurvivorBase.SurvivorBase_C.DoAttack
struct ASurvivorBase_C_DoAttack_Params
{
	int                                                AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Injure
struct ASurvivorBase_C_Injure_Params
{
};

// Function SurvivorBase.SurvivorBase_C.PerfromAttack
struct ASurvivorBase_C_PerfromAttack_Params
{
	int                                                AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ChooseAttackSection
struct ASurvivorBase_C_ChooseAttackSection_Params
{
	int                                                Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnHealthChanged
struct ASurvivorBase_C_OnHealthChanged_Params
{
	float                                              DeltaValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SurvivorBase.SurvivorBase_C.CancelAbility
struct ASurvivorBase_C_CancelAbility_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GameStatisticMelee
struct ASurvivorBase_C_GameStatisticMelee_Params
{
};

// Function SurvivorBase.SurvivorBase_C.GameStatisticHealthFull
struct ASurvivorBase_C_GameStatisticHealthFull_Params
{
};

// Function SurvivorBase.SurvivorBase_C.CameraShake
struct ASurvivorBase_C_CameraShake_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OwningTakeOnDamage
struct ASurvivorBase_C_OwningTakeOnDamage_Params
{
};

// Function SurvivorBase.SurvivorBase_C.NotifyCameraShake
struct ASurvivorBase_C_NotifyCameraShake_Params
{
	class UClass*                                      CameraShake;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnDamaged
struct ASurvivorBase_C_OnDamaged_Params
{
	float                                              DamageAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       EffectGrantedTags;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.SlowAnimMontage
struct ASurvivorBase_C_SlowAnimMontage_Params
{
};

// Function SurvivorBase.SurvivorBase_C.MulticastCloseBodyBlock
struct ASurvivorBase_C_MulticastCloseBodyBlock_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ShowNotifyText
struct ASurvivorBase_C_ShowNotifyText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.PerformHitReaction
struct ASurvivorBase_C_PerformHitReaction_Params
{
	class AHSHCharacterBase*                           CauserCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CauserActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ShowNotifyTextPortal
struct ASurvivorBase_C_ShowNotifyTextPortal_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              FadeTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShowTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.NotifyAfterGetHit
struct ASurvivorBase_C_NotifyAfterGetHit_Params
{
};

// Function SurvivorBase.SurvivorBase_C.TakeOnDamage
struct ASurvivorBase_C_TakeOnDamage_Params
{
};

// Function SurvivorBase.SurvivorBase_C.StartLookAtCrosshair
struct ASurvivorBase_C_StartLookAtCrosshair_Params
{
};

// Function SurvivorBase.SurvivorBase_C.StartRotateMeshToDefault
struct ASurvivorBase_C_StartRotateMeshToDefault_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ServerActivateGE
struct ASurvivorBase_C_ServerActivateGE_Params
{
	class UClass*                                      GameplayEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnEndAbility
struct ASurvivorBase_C_OnEndAbility_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCancel_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.OnUpdateItem
struct ASurvivorBase_C_OnUpdateItem_Params
{
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorBase.SurvivorBase_C.ServerActivateGEWithMagnitude
struct ASurvivorBase_C_ServerActivateGEWithMagnitude_Params
{
	class UClass*                                      GameplayEffectClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                DataTag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.AddedItemPassiveEffect
struct ASurvivorBase_C_AddedItemPassiveEffect_Params
{
	struct FS_Pickable                                 PickableStruct;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.RemoveItemPassiveEffect
struct ASurvivorBase_C_RemoveItemPassiveEffect_Params
{
	struct FS_Pickable                                 PickableStruct;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ServerSetWalkSpeed
struct ASurvivorBase_C_ServerSetWalkSpeed_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.K2_OnMovementModeChanged
struct ASurvivorBase_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CheckFallingDamage
struct ASurvivorBase_C_CheckFallingDamage_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnLanded
struct ASurvivorBase_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorBase.SurvivorBase_C.RefreshFallingLocation
struct ASurvivorBase_C_RefreshFallingLocation_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ChangeCameraSide
struct ASurvivorBase_C_ChangeCameraSide_Params
{
};

// Function SurvivorBase.SurvivorBase_C.MulticastChangeCameraSide
struct ASurvivorBase_C_MulticastChangeCameraSide_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ClientSetWalkSpeed
struct ASurvivorBase_C_ClientSetWalkSpeed_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct ASurvivorBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct ASurvivorBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
struct ASurvivorBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
struct ASurvivorBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3
struct ASurvivorBase_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4
struct ASurvivorBase_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Movement_Forward
struct ASurvivorBase_C_Movement_Forward_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Movement_MoveRight
struct ASurvivorBase_C_Movement_MoveRight_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Movement_Turn
struct ASurvivorBase_C_Movement_Turn_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Movement_LookUp
struct ASurvivorBase_C_Movement_LookUp_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Action_Interaction
struct ASurvivorBase_C_Action_Interaction_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_UseItem
struct ASurvivorBase_C_Action_UseItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_ToggleCrouch
struct ASurvivorBase_C_Action_ToggleCrouch_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_SprintPress
struct ASurvivorBase_C_Action_SprintPress_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_SprintReleased
struct ASurvivorBase_C_Action_SprintReleased_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_SprintToggle
struct ASurvivorBase_C_Action_SprintToggle_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_SkillCheck
struct ASurvivorBase_C_Action_SkillCheck_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Action_DropItem
struct ASurvivorBase_C_Action_DropItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_Ping
struct ASurvivorBase_C_Action_Ping_Params
{
};

// Function SurvivorBase.SurvivorBase_C.CheckingInteractState
struct ASurvivorBase_C_CheckingInteractState_Params
{
};

// Function SurvivorBase.SurvivorBase_C.CheckingBlockAction
struct ASurvivorBase_C_CheckingBlockAction_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_Aiming
struct ASurvivorBase_C_Action_Aiming_Params
{
};

// Function SurvivorBase.SurvivorBase_C.CheckingLockItem
struct ASurvivorBase_C_CheckingLockItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_ChangeCameraSide
struct ASurvivorBase_C_Action_ChangeCameraSide_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_PingEnemy
struct ASurvivorBase_C_Action_PingEnemy_Params
{
};

// Function SurvivorBase.SurvivorBase_C.RunSticker
struct ASurvivorBase_C_RunSticker_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_Crouch
struct ASurvivorBase_C_Action_Crouch_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Action_Uncrouch
struct ASurvivorBase_C_Action_Uncrouch_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ResetLockItem
struct ASurvivorBase_C_ResetLockItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.StartDelayInput
struct ASurvivorBase_C_StartDelayInput_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.S_Survivor_ActiveSkill
struct ASurvivorBase_C_S_Survivor_ActiveSkill_Params
{
};

// Function SurvivorBase.SurvivorBase_C.Death
struct ASurvivorBase_C_Death_Params
{
	class AHunterBase_C*                               KilledBy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.UseItem
struct ASurvivorBase_C_UseItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ServerInteraction
struct ASurvivorBase_C_ServerInteraction_Params
{
	class AInteractionBase_C*                          InteractionItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Crouching
struct ASurvivorBase_C_Crouching_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.sprint
struct ASurvivorBase_C_sprint_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Walk
struct ASurvivorBase_C_Walk_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ReceiveTick
struct ASurvivorBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CollectItem
struct ASurvivorBase_C_CollectItem_Params
{
	class APickableItemBase_C*                         Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.MovePlayerTo
struct ASurvivorBase_C_MovePlayerTo_Params
{
	class USceneComponent*                             Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct ASurvivorBase_C_BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorBase.SurvivorBase_C.BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
struct ASurvivorBase_C_BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ItemOutline
struct ASurvivorBase_C_ItemOutline_Params
{
	class AActor*                                      Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.DeleteOutline
struct ASurvivorBase_C_DeleteOutline_Params
{
	class AActor*                                      Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ActionCrouch
struct ASurvivorBase_C_ActionCrouch_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ActionUnCrouch
struct ASurvivorBase_C_ActionUnCrouch_Params
{
};

// Function SurvivorBase.SurvivorBase_C.MulticastSetMeshOwnerSee
struct ASurvivorBase_C_MulticastSetMeshOwnerSee_Params
{
	bool                                               bNewOnlyOwnerSee;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.AddedActorToOutlineComponent
struct ASurvivorBase_C_AddedActorToOutlineComponent_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.DisableandEnableInputAfterDelay
struct ASurvivorBase_C_DisableandEnableInputAfterDelay_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.TeleportToVentilator
struct ASurvivorBase_C_TeleportToVentilator_Params
{
	struct FVector                                     DestLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    DestRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_Ventilator                               PairVentilator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVentilatorManager_C*                        VentilatorMechanic;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.FadeCamera
struct ASurvivorBase_C_FadeCamera_Params
{
	float                                              FromAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToAlpha;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldFadeAudio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHoldWhenFinished;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.SetActorCollision
struct ASurvivorBase_C_SetActorCollision_Params
{
	TEnumAsByte<Engine_ECollisionEnabled>              Collsion;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CallUseItem
struct ASurvivorBase_C_CallUseItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.CheckItem
struct ASurvivorBase_C_CheckItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.UpdateItemDurability
struct ASurvivorBase_C_UpdateItemDurability_Params
{
	bool                                               UseAllDurability_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              UseDurability;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.DropItem
struct ASurvivorBase_C_DropItem_Params
{
	bool                                               DropItemOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastSetMeshHiddenInGame
struct ASurvivorBase_C_MulticastSetMeshHiddenInGame_Params
{
	bool                                               bHidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastPlayDropSound
struct ASurvivorBase_C_MulticastPlayDropSound_Params
{
};

// Function SurvivorBase.SurvivorBase_C.MulticastPlayCollectSound
struct ASurvivorBase_C_MulticastPlayCollectSound_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ForcePlayMontage
struct ASurvivorBase_C_ForcePlayMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.SetActorCollisionResponse
struct ASurvivorBase_C_SetActorCollisionResponse_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             NewResponse;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.StopInteraction
struct ASurvivorBase_C_StopInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ServerStopInteraction
struct ASurvivorBase_C_ServerStopInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ExitHiddenPlace
struct ASurvivorBase_C_ExitHiddenPlace_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnStopUsingItem
struct ASurvivorBase_C_OnStopUsingItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.RemoveItem
struct ASurvivorBase_C_RemoveItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ForceStopMontage
struct ASurvivorBase_C_ForceStopMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnExecutionSuccess
struct ASurvivorBase_C_OnExecutionSuccess_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ClientRotationToLocation
struct ASurvivorBase_C_ClientRotationToLocation_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BaseRelativeLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.SnapToInteraction
struct ASurvivorBase_C_SnapToInteraction_Params
{
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRelativeRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetLookAtLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientMoveTo
struct ASurvivorBase_C_ClientMoveTo_Params
{
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRelativeRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientSendTutorialEvent
struct ASurvivorBase_C_ClientSendTutorialEvent_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientChangeToHideCamara
struct ASurvivorBase_C_ClientChangeToHideCamara_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.EnterAiming
struct ASurvivorBase_C_EnterAiming_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ExitAiming
struct ASurvivorBase_C_ExitAiming_Params
{
};

// Function SurvivorBase.SurvivorBase_C.FinishInteraction
struct ASurvivorBase_C_FinishInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ServerFinishInteraction
struct ASurvivorBase_C_ServerFinishInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.TeleportPlayer
struct ASurvivorBase_C_TeleportPlayer_Params
{
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.MulticastJumpMontage
struct ASurvivorBase_C_MulticastJumpMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientResetMovingHold
struct ASurvivorBase_C_ClientResetMovingHold_Params
{
};

// Function SurvivorBase.SurvivorBase_C.RotateActorTo
struct ASurvivorBase_C_RotateActorTo_Params
{
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.LocationTo
struct ASurvivorBase_C_LocationTo_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.Interaction
struct ASurvivorBase_C_Interaction_Params
{
	class AInteractionBase_C*                          InteractionItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ShowSpawnLocation
struct ASurvivorBase_C_ShowSpawnLocation_Params
{
	bool                                               bIsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.ForceJumpCurrentMontage
struct ASurvivorBase_C_ForceJumpCurrentMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientCrouch
struct ASurvivorBase_C_ClientCrouch_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientWalk
struct ASurvivorBase_C_ClientWalk_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientSprint
struct ASurvivorBase_C_ClientSprint_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnHunterScan
struct ASurvivorBase_C_OnHunterScan_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnRitualStateChanged
struct ASurvivorBase_C_OnRitualStateChanged_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientSendEventSnap
struct ASurvivorBase_C_ClientSendEventSnap_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ForceRemoveItem
struct ASurvivorBase_C_ForceRemoveItem_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ClientFinishInteraction
struct ASurvivorBase_C_ClientFinishInteraction_Params
{
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ClientStopInteraction
struct ASurvivorBase_C_ClientStopInteraction_Params
{
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.ReportAFK
struct ASurvivorBase_C_ReportAFK_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ClientTrackDeathEvent
struct ASurvivorBase_C_ClientTrackDeathEvent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.BindUseItemEvent
struct ASurvivorBase_C_BindUseItemEvent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.UnbindUseItemEvent
struct ASurvivorBase_C_UnbindUseItemEvent_Params
{
};

// Function SurvivorBase.SurvivorBase_C.UpdateAimTransform
struct ASurvivorBase_C_UpdateAimTransform_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ReceiveEndPlay
struct ASurvivorBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.SetMeshHiddenInGames
struct ASurvivorBase_C_SetMeshHiddenInGames_Params
{
	bool                                               NewHidden;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPropagateToChildren;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.SetMeshOwnerSees
struct ASurvivorBase_C_SetMeshOwnerSees_Params
{
	bool                                               bNewOnlyOwnerSee;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.HideMesh
struct ASurvivorBase_C_HideMesh_Params
{
	bool                                               IsHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.ForceCollectItem
struct ASurvivorBase_C_ForceCollectItem_Params
{
	struct FS_Pickable                                 CurrentPickItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.CallExitHiddenPlace
struct ASurvivorBase_C_CallExitHiddenPlace_Params
{
};

// Function SurvivorBase.SurvivorBase_C.ExecuteUbergraph_SurvivorBase
struct ASurvivorBase_C_ExecuteUbergraph_SurvivorBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnHiddenSurvivor__DelegateSignature
struct ASurvivorBase_C_OnHiddenSurvivor__DelegateSignature_Params
{
	bool                                               IsHidden;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.OnSurvivorDoorStun__DelegateSignature
struct ASurvivorBase_C_OnSurvivorDoorStun__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnCharacterDie__DelegateSignature
struct ASurvivorBase_C_OnCharacterDie__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnActionUseItemFinish__DelegateSignature
struct ASurvivorBase_C_OnActionUseItemFinish__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnStopUseItem__DelegateSignature
struct ASurvivorBase_C_OnStopUseItem__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnFinishInteraction__DelegateSignature
struct ASurvivorBase_C_OnFinishInteraction__DelegateSignature_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnStopInteraction__DelegateSignature
struct ASurvivorBase_C_OnStopInteraction__DelegateSignature_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnFinishedVent__DelegateSignature
struct ASurvivorBase_C_OnFinishedVent__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnCharacterFall__DelegateSignature
struct ASurvivorBase_C_OnCharacterFall__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnClientTakeDamage__DelegateSignature
struct ASurvivorBase_C_OnClientTakeDamage__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnSnapLocationSuccess__DelegateSignature
struct ASurvivorBase_C_OnSnapLocationSuccess__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnInteractionStart__DelegateSignature
struct ASurvivorBase_C_OnInteractionStart__DelegateSignature_Params
{
	bool                                               bIsProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorBase.SurvivorBase_C.OnInteractionDone__DelegateSignature
struct ASurvivorBase_C_OnInteractionDone__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnSeeAnyOneChanged__DelegateSignature
struct ASurvivorBase_C_OnSeeAnyOneChanged__DelegateSignature_Params
{
	int                                                Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnAttackSuccess__DelegateSignature
struct ASurvivorBase_C_OnAttackSuccess__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnRitualDone__DelegateSignature
struct ASurvivorBase_C_OnRitualDone__DelegateSignature_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnScaned__DelegateSignature
struct ASurvivorBase_C_OnScaned__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnChasing__DelegateSignature
struct ASurvivorBase_C_OnChasing__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnActionUseItem__DelegateSignature
struct ASurvivorBase_C_OnActionUseItem__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnActionAttack__DelegateSignature
struct ASurvivorBase_C_OnActionAttack__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnDropItem__DelegateSignature
struct ASurvivorBase_C_OnDropItem__DelegateSignature_Params
{
	class APickableItemBase_C*                         Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorBase.SurvivorBase_C.OnUseItem__DelegateSignature
struct ASurvivorBase_C_OnUseItem__DelegateSignature_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorBase.SurvivorBase_C.OnTakeDamage__DelegateSignature
struct ASurvivorBase_C_OnTakeDamage__DelegateSignature_Params
{
};

// Function SurvivorBase.SurvivorBase_C.OnMoveToCompleted__DelegateSignature
struct ASurvivorBase_C_OnMoveToCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
