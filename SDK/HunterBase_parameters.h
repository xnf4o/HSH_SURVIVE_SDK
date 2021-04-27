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

// Function HunterBase.HunterBase_C.GetCurrentPickable
struct AHunterBase_C_GetCurrentPickable_Params
{
	struct FS_Pickable                                 CurrentPickable;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetExecuteCameraTransform
struct AHunterBase_C_GetExecuteCameraTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.isExecution
struct AHunterBase_C_isExecution_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.GetAimTransform
struct AHunterBase_C_GetAimTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsHaveSpawnPerk
struct AHunterBase_C_IsHaveSpawnPerk_Params
{
	bool                                               bIsHave;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       Tag;                                                       // (Parm, OutParm)
};

// Function HunterBase.HunterBase_C.GetCharacterID
struct AHunterBase_C_GetCharacterID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.NotifyFootStep
struct AHunterBase_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetCurrentItemID
struct AHunterBase_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetMainCameraComponent
struct AHunterBase_C_GetMainCameraComponent_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.IsLockCameraOnFinish
struct AHunterBase_C_IsLockCameraOnFinish_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.GetFinishSection
struct AHunterBase_C_GetFinishSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetSkilcheckFailedSection
struct AHunterBase_C_GetSkilcheckFailedSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetSkilcheckGreatSection
struct AHunterBase_C_GetSkilcheckGreatSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetSkilcheckPerfectSection
struct AHunterBase_C_GetSkilcheckPerfectSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.IsForceSkillCheck?
struct AHunterBase_C_IsForceSkillCheck__Params
{
	bool                                               bForceSkillCheck;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsNotCancelProgressonMove
struct AHunterBase_C_IsNotCancelProgressonMove_Params
{
	bool                                               IsNotCancel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.CanUseProgress
struct AHunterBase_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.GetSpeedSkillCheck
struct AHunterBase_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.IsResetResult?
struct AHunterBase_C_IsResetResult__Params
{
	bool                                               IsReset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsCanSkillCheck?
struct AHunterBase_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsCanHelp?
struct AHunterBase_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.GetProgressTime
struct AHunterBase_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.CheckPlayerInCrossHair
struct AHunterBase_C_CheckPlayerInCrossHair_Params
{
	bool                                               InCamera;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.OnRep_CollisionMovement
struct AHunterBase_C_OnRep_CollisionMovement_Params
{
};

// Function HunterBase.HunterBase_C.InitBack
struct AHunterBase_C_InitBack_Params
{
};

// Function HunterBase.HunterBase_C.InitHead
struct AHunterBase_C_InitHead_Params
{
};

// Function HunterBase.HunterBase_C.IsGameStarted
struct AHunterBase_C_IsGameStarted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.ApplyDeleySpecter
struct AHunterBase_C_ApplyDeleySpecter_Params
{
	float                                              DelayDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetReachRange
struct AHunterBase_C_GetReachRange_Params
{
	float                                              ReachRange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.SetMaterialsAlpha
struct AHunterBase_C_SetMaterialsAlpha_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.SetMaterialsColor
struct AHunterBase_C_SetMaterialsColor_Params
{
	struct FLinearColor                                InLinearColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetScanTime
struct AHunterBase_C_GetScanTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.IsHaveAnyAxis
struct AHunterBase_C_IsHaveAnyAxis_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsStunned
struct AHunterBase_C_IsStunned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.OnRep_MoveSpeed
struct AHunterBase_C_OnRep_MoveSpeed_Params
{
};

// Function HunterBase.HunterBase_C.CheckingInitStartGame
struct AHunterBase_C_CheckingInitStartGame_Params
{
};

// Function HunterBase.HunterBase_C.GetSurvivorNearestDistance
struct AHunterBase_C_GetSurvivorNearestDistance_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterSurvivorBase*                   NearSurvivor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.CheckDelaySpecter
struct AHunterBase_C_CheckDelaySpecter_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetExecutionSpecterComponent
struct AHunterBase_C_GetExecutionSpecterComponent_Params
{
	class UExecutionSpecterComponent_C*                ExecutionSpecterComponent;                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetOptionSensitivity
struct AHunterBase_C_GetOptionSensitivity_Params
{
	float                                              Sensitivity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetCheckHoldRight
struct AHunterBase_C_GetCheckHoldRight_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.GetCheckHoldForward
struct AHunterBase_C_GetCheckHoldForward_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsInExecution
struct AHunterBase_C_IsInExecution_Params
{
	bool                                               bIsExecution;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.OnTrapDamged
struct AHunterBase_C_OnTrapDamged_Params
{
};

// Function HunterBase.HunterBase_C.IsBlockKeys
struct AHunterBase_C_IsBlockKeys_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsBlockAction
struct AHunterBase_C_IsBlockAction_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.PlayAttackHitAnimation
struct AHunterBase_C_PlayAttackHitAnimation_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.LockHiddenModeButton
struct AHunterBase_C_LockHiddenModeButton_Params
{
};

// Function HunterBase.HunterBase_C.UnlockHiddenModeButton
struct AHunterBase_C_UnlockHiddenModeButton_Params
{
};

// Function HunterBase.HunterBase_C.SetBodyHalfHeight
struct AHunterBase_C_SetBodyHalfHeight_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.NextHunterRitualState
struct AHunterBase_C_NextHunterRitualState_Params
{
	int                                                State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.GetHunterRitualState
struct AHunterBase_C_GetHunterRitualState_Params
{
	int                                                State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.CommitSpecterCooldown
struct AHunterBase_C_CommitSpecterCooldown_Params
{
};

// Function HunterBase.HunterBase_C.GetSpecterCooldown
struct AHunterBase_C_GetSpecterCooldown_Params
{
	float                                              TimeRemaining;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsBlockMove
struct AHunterBase_C_IsBlockMove_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsBlockSpecter
struct AHunterBase_C_IsBlockSpecter_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsInStun
struct AHunterBase_C_IsInStun_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsInSpecter
struct AHunterBase_C_IsInSpecter_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.SurvivorInRange
struct AHunterBase_C_SurvivorInRange_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInRange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.GetFootStepSound
struct AHunterBase_C_GetFootStepSound_Params
{
	struct FS_FootStepHunter                           Out_Row;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.FindFlood
struct AHunterBase_C_FindFlood_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HunterBase.HunterBase_C.IsBlockAttack
struct AHunterBase_C_IsBlockAttack_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.DebugBellePortal
struct AHunterBase_C_DebugBellePortal_Params
{
};

// Function HunterBase.HunterBase_C.IsBlockActivePerk
struct AHunterBase_C_IsBlockActivePerk_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsBlockScan
struct AHunterBase_C_IsBlockScan_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsBlockTeleport
struct AHunterBase_C_IsBlockTeleport_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.IsActiveAbilitiesWithTags
struct AHunterBase_C_IsActiveAbilitiesWithTags_Params
{
	struct FGameplayTagContainer                       AbilityTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.CheckDoorDestroyable
struct AHunterBase_C_CheckDoorDestroyable_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isCanDestroy_;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.OnHitReaction
struct AHunterBase_C_OnHitReaction_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_DmgDirection_E_DmgDirection>         Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.DebugHealth
struct AHunterBase_C_DebugHealth_Params
{
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InBool;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.ResetAttackState
struct AHunterBase_C_ResetAttackState_Params
{
	bool                                               AndSendToServer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.AddInventory
struct AHunterBase_C_AddInventory_Params
{
	TMap<struct FHSHItemSlot, class UHSHItem*>         Inventory;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FHSHItemSlot                                Slot;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UHSHItem*                                    NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FHSHItemSlot, class UHSHItem*>         TestInventory;                                             // (ConstParm, Parm, OutParm, ZeroConstructor)
};

// Function HunterBase.HunterBase_C.GetHeavyAtkGE
struct AHunterBase_C_GetHeavyAtkGE_Params
{
	class UClass*                                      GameplayEffect;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.StopMontage
struct AHunterBase_C_StopMontage_Params
{
};

// Function HunterBase.HunterBase_C.OnAttackCollisionOverlap
struct AHunterBase_C_OnAttackCollisionOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.UserConstructionScript
struct AHunterBase_C_UserConstructionScript_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_Bodyfade__FinishedFunc
struct AHunterBase_C_Timeline_Bodyfade__FinishedFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_Bodyfade__UpdateFunc
struct AHunterBase_C_Timeline_Bodyfade__UpdateFunc_Params
{
};

// Function HunterBase.HunterBase_C.OuterShield__FinishedFunc
struct AHunterBase_C_OuterShield__FinishedFunc_Params
{
};

// Function HunterBase.HunterBase_C.OuterShield__UpdateFunc
struct AHunterBase_C_OuterShield__UpdateFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_0__FinishedFunc
struct AHunterBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_0__UpdateFunc
struct AHunterBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_SlowAnimation__FinishedFunc
struct AHunterBase_C_Timeline_SlowAnimation__FinishedFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_SlowAnimation__UpdateFunc
struct AHunterBase_C_Timeline_SlowAnimation__UpdateFunc_Params
{
};

// Function HunterBase.HunterBase_C.LookAtCrosshairTimeline__FinishedFunc
struct AHunterBase_C_LookAtCrosshairTimeline__FinishedFunc_Params
{
};

// Function HunterBase.HunterBase_C.LookAtCrosshairTimeline__UpdateFunc
struct AHunterBase_C_LookAtCrosshairTimeline__UpdateFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_Camera__FinishedFunc
struct AHunterBase_C_Timeline_Camera__FinishedFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_Camera__UpdateFunc
struct AHunterBase_C_Timeline_Camera__UpdateFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_FOV__FinishedFunc
struct AHunterBase_C_Timeline_FOV__FinishedFunc_Params
{
};

// Function HunterBase.HunterBase_C.Timeline_FOV__UpdateFunc
struct AHunterBase_C_Timeline_FOV__UpdateFunc_Params
{
};

// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Scan_K2Node_InputActionEvent_5
struct AHunterBase_C_InpActEvt_Hunter_Scan_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpTchEvt_Moved
struct AHunterBase_C_InpTchEvt_Moved_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpTchEvt_Released
struct AHunterBase_C_InpTchEvt_Released_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpTchEvt_Pressed
struct AHunterBase_C_InpTchEvt_Pressed_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpActEvt_Hunter_ActivatePerk_K2Node_InputActionEvent_4
struct AHunterBase_C_InpActEvt_Hunter_ActivatePerk_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Attack_K2Node_InputActionEvent_3
struct AHunterBase_C_InpActEvt_Hunter_Attack_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Immunity_K2Node_InputActionEvent_2
struct AHunterBase_C_InpActEvt_Hunter_Immunity_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Interact_K2Node_InputActionEvent_1
struct AHunterBase_C_InpActEvt_Hunter_Interact_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
struct AHunterBase_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.HideAccessory
struct AHunterBase_C_HideAccessory_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.ClientAddDesignEvent
struct AHunterBase_C_ClientAddDesignEvent_Params
{
	struct FString                                     eventId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ClientAddDesignEventWithValue
struct AHunterBase_C_ClientAddDesignEventWithValue_Params
{
	struct FString                                     eventId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ChangeCameraSide
struct AHunterBase_C_ChangeCameraSide_Params
{
};

// Function HunterBase.HunterBase_C.MulticastChangeCameraSide
struct AHunterBase_C_MulticastChangeCameraSide_Params
{
};

// Function HunterBase.HunterBase_C.BndEvt__BloodSeekComponent_K2Node_ComponentBoundEvent_1_EventDelegate__DelegateSignature
struct AHunterBase_C_BndEvt__BloodSeekComponent_K2Node_ComponentBoundEvent_1_EventDelegate__DelegateSignature_Params
{
	int                                                Stack;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldStack;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ServerUpdateSpeed
struct AHunterBase_C_ServerUpdateSpeed_Params
{
	float                                              MaxWalkSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.MulticastActivateBloodseek
struct AHunterBase_C_MulticastActivateBloodseek_Params
{
	bool                                               Activate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Stack;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StackOld;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnAttributeChange
struct AHunterBase_C_OnAttributeChange_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnPostGameplayEffectExecute
struct AHunterBase_C_OnPostGameplayEffectExecute_Params
{
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HunterBase.HunterBase_C.SetBodyTranslucent
struct AHunterBase_C_SetBodyTranslucent_Params
{
};

// Function HunterBase.HunterBase_C.ClientEnableDissolve
struct AHunterBase_C_ClientEnableDissolve_Params
{
};

// Function HunterBase.HunterBase_C.OnGameplayEffectApply
struct AHunterBase_C_OnGameplayEffectApply_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HunterBase.HunterBase_C.ClientReceiveGameplayEffectApply
struct AHunterBase_C_ClientReceiveGameplayEffectApply_Params
{
	struct FGameplayTagContainer                       GameplayTags;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HunterBase.HunterBase_C.SendOnGameplayEffectApply
struct AHunterBase_C_SendOnGameplayEffectApply_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HunterBase.HunterBase_C.SpawnSmokeAtHunterLocation
struct AHunterBase_C_SpawnSmokeAtHunterLocation_Params
{
};

// Function HunterBase.HunterBase_C.BodyfadeForceExit
struct AHunterBase_C_BodyfadeForceExit_Params
{
};

// Function HunterBase.HunterBase_C.OnEyesightChanged
struct AHunterBase_C_OnEyesightChanged_Params
{
	float                                              DeltaValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HunterBase.HunterBase_C.EnableFogManager
struct AHunterBase_C_EnableFogManager_Params
{
};

// Function HunterBase.HunterBase_C.UpdateFogManager
struct AHunterBase_C_UpdateFogManager_Params
{
};

// Function HunterBase.HunterBase_C.ReceiveBeginPlay
struct AHunterBase_C_ReceiveBeginPlay_Params
{
};

// Function HunterBase.HunterBase_C.ReceivePossessed
struct AHunterBase_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.Death
struct AHunterBase_C_Death_Params
{
};

// Function HunterBase.HunterBase_C.Bodyfade
struct AHunterBase_C_Bodyfade_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.EnableInteraction
struct AHunterBase_C_EnableInteraction_Params
{
};

// Function HunterBase.HunterBase_C.EnableDissolveEffect
struct AHunterBase_C_EnableDissolveEffect_Params
{
	bool                                               bIsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.EnableOutlineComponent
struct AHunterBase_C_EnableOutlineComponent_Params
{
};

// Function HunterBase.HunterBase_C.OnExecutionSuccess
struct AHunterBase_C_OnExecutionSuccess_Params
{
};

// Function HunterBase.HunterBase_C.SetMaterialsEffect
struct AHunterBase_C_SetMaterialsEffect_Params
{
	float                                              Alpha;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.StartGameCooldown
struct AHunterBase_C_StartGameCooldown_Params
{
};

// Function HunterBase.HunterBase_C.BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AHunterBase_C_BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HunterBase.HunterBase_C.BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AHunterBase_C_BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ItemOutline
struct AHunterBase_C_ItemOutline_Params
{
	class AActor*                                      Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.DeleteOutline
struct AHunterBase_C_DeleteOutline_Params
{
	class AActor*                                      Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.EnableChaseAudioComponent
struct AHunterBase_C_EnableChaseAudioComponent_Params
{
};

// Function HunterBase.HunterBase_C.UpdateHunterCrosshair
struct AHunterBase_C_UpdateHunterCrosshair_Params
{
};

// Function HunterBase.HunterBase_C.OnStartProgressAction
struct AHunterBase_C_OnStartProgressAction_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnCommitSkillCheck
struct AHunterBase_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ReceiveUnpossessed
struct AHunterBase_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnCannotProgress
struct AHunterBase_C_OnCannotProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnStopProgress
struct AHunterBase_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnFinishProgress
struct AHunterBase_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnUseActivePerk
struct AHunterBase_C_OnUseActivePerk_Params
{
};

// Function HunterBase.HunterBase_C.ForceJumpCurrentMontage
struct AHunterBase_C_ForceJumpCurrentMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ServerPlayAudio
struct AHunterBase_C_ServerPlayAudio_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.MulticastAudio
struct AHunterBase_C_MulticastAudio_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.TryPlayMontage
struct AHunterBase_C_TryPlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Section;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.PlaySound
struct AHunterBase_C_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAttachCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.ServerPlayAudioOnCharacter
struct AHunterBase_C_ServerPlayAudioOnCharacter_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.MulticastAudioOnCharacter
struct AHunterBase_C_MulticastAudioOnCharacter_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.MulticastStateLoopSound
struct AHunterBase_C_MulticastStateLoopSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.MulticastGetHitSFX
struct AHunterBase_C_MulticastGetHitSFX_Params
{
};

// Function HunterBase.HunterBase_C.PlayHiddenSoundLoop
struct AHunterBase_C_PlayHiddenSoundLoop_Params
{
};

// Function HunterBase.HunterBase_C.StopHiddenSoundLoop
struct AHunterBase_C_StopHiddenSoundLoop_Params
{
};

// Function HunterBase.HunterBase_C.MulticastGetHitOnImmune
struct AHunterBase_C_MulticastGetHitOnImmune_Params
{
	class ASurvivorBase_C*                             HSHSurvivor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnEndAbility
struct AHunterBase_C_OnEndAbility_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCancel_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.ServerActivateGE
struct AHunterBase_C_ServerActivateGE_Params
{
	class UClass*                                      GameplayEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ServerActivateGEWithTarget
struct AHunterBase_C_ServerActivateGEWithTarget_Params
{
	class UClass*                                      GameplayEffectClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.FinishInteraction
struct AHunterBase_C_FinishInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ServerActivateGESetByCaller
struct AHunterBase_C_ServerActivateGESetByCaller_Params
{
	class UClass*                                      GameplayEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                DataTag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.EnableCanSeeSpecter
struct AHunterBase_C_EnableCanSeeSpecter_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.StopInteraction
struct AHunterBase_C_StopInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.MulticastCanSeeSpecter
struct AHunterBase_C_MulticastCanSeeSpecter_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.DoDamage
struct AHunterBase_C_DoDamage_Params
{
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HunterBase.HunterBase_C.SpawnHitParticle
struct AHunterBase_C_SpawnHitParticle_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.SendMeleeDistance
struct AHunterBase_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnEnableAttackCollision
struct AHunterBase_C_OnEnableAttackCollision_Params
{
};

// Function HunterBase.HunterBase_C.OnDisableAttackCollision
struct AHunterBase_C_OnDisableAttackCollision_Params
{
};

// Function HunterBase.HunterBase_C.OnUpdateItem
struct AHunterBase_C_OnUpdateItem_Params
{
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HunterBase.HunterBase_C.OnEndAttackAnimation
struct AHunterBase_C_OnEndAttackAnimation_Params
{
};

// Function HunterBase.HunterBase_C.OnDamaged
struct AHunterBase_C_OnDamaged_Params
{
	float                                              DamageAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       EffectGrantedTags;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.BeginAttackCollision
struct AHunterBase_C_BeginAttackCollision_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundAtk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.EndAttackCollision
struct AHunterBase_C_EndAttackCollision_Params
{
};

// Function HunterBase.HunterBase_C.EndAttackAnimation
struct AHunterBase_C_EndAttackAnimation_Params
{
};

// Function HunterBase.HunterBase_C.DoAttack
struct AHunterBase_C_DoAttack_Params
{
	int                                                AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ChooseAttackSection
struct AHunterBase_C_ChooseAttackSection_Params
{
	int                                                Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.PerfromAttack
struct AHunterBase_C_PerfromAttack_Params
{
	int                                                AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.PerformHitReaction
struct AHunterBase_C_PerformHitReaction_Params
{
	class AHSHCharacterBase*                           CauserCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CauserActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.FadeHiddenSpecter
struct AHunterBase_C_FadeHiddenSpecter_Params
{
};

// Function HunterBase.HunterBase_C.CameraShake
struct AHunterBase_C_CameraShake_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.DoImmunityState
struct AHunterBase_C_DoImmunityState_Params
{
};

// Function HunterBase.HunterBase_C.PerfromSecondAttack
struct AHunterBase_C_PerfromSecondAttack_Params
{
};

// Function HunterBase.HunterBase_C.OwningTakeOnDamage
struct AHunterBase_C_OwningTakeOnDamage_Params
{
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           OwnerCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.CancelAbility
struct AHunterBase_C_CancelAbility_Params
{
};

// Function HunterBase.HunterBase_C.NotifyCameraShake
struct AHunterBase_C_NotifyCameraShake_Params
{
	class UClass*                                      CameraShake;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.SlowAnimMontage
struct AHunterBase_C_SlowAnimMontage_Params
{
};

// Function HunterBase.HunterBase_C.PerformShieldEffect
struct AHunterBase_C_PerformShieldEffect_Params
{
	class AActor*                                      Causer;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.PerformBeginState
struct AHunterBase_C_PerformBeginState_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ServerResetAttackState
struct AHunterBase_C_ServerResetAttackState_Params
{
};

// Function HunterBase.HunterBase_C.OnTakeDamageSurvivorAchievement
struct AHunterBase_C_OnTakeDamageSurvivorAchievement_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnDieSurvivorAchievement
struct AHunterBase_C_OnDieSurvivorAchievement_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.SpawnGetHitParticle
struct AHunterBase_C_SpawnGetHitParticle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ClientResetAttackState
struct AHunterBase_C_ClientResetAttackState_Params
{
};

// Function HunterBase.HunterBase_C.NotifyAfterGetHit
struct AHunterBase_C_NotifyAfterGetHit_Params
{
};

// Function HunterBase.HunterBase_C.CheckAttackCollision
struct AHunterBase_C_CheckAttackCollision_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HunterBase.HunterBase_C.MulticastShowTextDmg
struct AHunterBase_C_MulticastShowTextDmg_Params
{
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.CommitSpecterCooldownOnAttack
struct AHunterBase_C_CommitSpecterCooldownOnAttack_Params
{
};

// Function HunterBase.HunterBase_C.TimerDoAttack
struct AHunterBase_C_TimerDoAttack_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.StartLookAtCrosshair
struct AHunterBase_C_StartLookAtCrosshair_Params
{
};

// Function HunterBase.HunterBase_C.UseCameraControl_2
struct AHunterBase_C_UseCameraControl_2_Params
{
};

// Function HunterBase.HunterBase_C.UseCameraControl_3
struct AHunterBase_C_UseCameraControl_3_Params
{
};

// Function HunterBase.HunterBase_C.MulticastSwitchCameraMode
struct AHunterBase_C_MulticastSwitchCameraMode_Params
{
};

// Function HunterBase.HunterBase_C.ClientToSpecterCamera
struct AHunterBase_C_ClientToSpecterCamera_Params
{
};

// Function HunterBase.HunterBase_C.ClientToNormalCamera
struct AHunterBase_C_ClientToNormalCamera_Params
{
};

// Function HunterBase.HunterBase_C.ToSpecterCamera
struct AHunterBase_C_ToSpecterCamera_Params
{
};

// Function HunterBase.HunterBase_C.ToNormalCamera
struct AHunterBase_C_ToNormalCamera_Params
{
};

// Function HunterBase.HunterBase_C.ChangeMode_0_LockRotate
struct AHunterBase_C_ChangeMode_0_LockRotate_Params
{
};

// Function HunterBase.HunterBase_C.ChangeMode_1_UnlockRotate
struct AHunterBase_C_ChangeMode_1_UnlockRotate_Params
{
};

// Function HunterBase.HunterBase_C.OnEndSpecter
struct AHunterBase_C_OnEndSpecter_Params
{
};

// Function HunterBase.HunterBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct AHunterBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct AHunterBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
struct AHunterBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
struct AHunterBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3
struct AHunterBase_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4
struct AHunterBase_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.Action_Immunity
struct AHunterBase_C_Action_Immunity_Params
{
};

// Function HunterBase.HunterBase_C.Action_Attack
struct AHunterBase_C_Action_Attack_Params
{
};

// Function HunterBase.HunterBase_C.Movement_Forward
struct AHunterBase_C_Movement_Forward_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.Movement_MoveRight
struct AHunterBase_C_Movement_MoveRight_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.Movement_Turn
struct AHunterBase_C_Movement_Turn_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.Movement_LookUp
struct AHunterBase_C_Movement_LookUp_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.Action_Perk
struct AHunterBase_C_Action_Perk_Params
{
};

// Function HunterBase.HunterBase_C.ServerActivePerk
struct AHunterBase_C_ServerActivePerk_Params
{
};

// Function HunterBase.HunterBase_C.CheckIsAttack
struct AHunterBase_C_CheckIsAttack_Params
{
};

// Function HunterBase.HunterBase_C.Action_Interact
struct AHunterBase_C_Action_Interact_Params
{
};

// Function HunterBase.HunterBase_C.Action_HiddingState
struct AHunterBase_C_Action_HiddingState_Params
{
};

// Function HunterBase.HunterBase_C.Action_ChangeCameraSide
struct AHunterBase_C_Action_ChangeCameraSide_Params
{
};

// Function HunterBase.HunterBase_C.ResetCheckAttack
struct AHunterBase_C_ResetCheckAttack_Params
{
};

// Function HunterBase.HunterBase_C.ServerActivePerkCallback
struct AHunterBase_C_ServerActivePerkCallback_Params
{
};

// Function HunterBase.HunterBase_C.ServerOnInteraction
struct AHunterBase_C_ServerOnInteraction_Params
{
};

// Function HunterBase.HunterBase_C.ServerSetAutoAttack
struct AHunterBase_C_ServerSetAutoAttack_Params
{
	bool                                               Set;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.AIAction_Attack
struct AHunterBase_C_AIAction_Attack_Params
{
};

// Function HunterBase.HunterBase_C.AIAction_HiddingState
struct AHunterBase_C_AIAction_HiddingState_Params
{
};

// Function HunterBase.HunterBase_C.AIAction_Perk
struct AHunterBase_C_AIAction_Perk_Params
{
};

// Function HunterBase.HunterBase_C.AIAction_Immune
struct AHunterBase_C_AIAction_Immune_Params
{
};

// Function HunterBase.HunterBase_C.ReceiveTick
struct AHunterBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.DestroyItem
struct AHunterBase_C_DestroyItem_Params
{
	class AInteractionBase_C*                          InteractBase;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.FadeCamera
struct AHunterBase_C_FadeCamera_Params
{
	float                                              FromAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToAlpha;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldFadeAudio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHoldWhenFinished;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.PlayDestroyItemMontage
struct AHunterBase_C_PlayDestroyItemMontage_Params
{
};

// Function HunterBase.HunterBase_C.GrantPerk
struct AHunterBase_C_GrantPerk_Params
{
};

// Function HunterBase.HunterBase_C.MulticastPlaySound
struct AHunterBase_C_MulticastPlaySound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.NotifyDestroyItem
struct AHunterBase_C_NotifyDestroyItem_Params
{
};

// Function HunterBase.HunterBase_C.ForcePlayMontage
struct AHunterBase_C_ForcePlayMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.SetActorCollision
struct AHunterBase_C_SetActorCollision_Params
{
	TEnumAsByte<Engine_ECollisionEnabled>              Collsion;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ForceRotation
struct AHunterBase_C_ForceRotation_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    NewRotation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.CeremonyScan
struct AHunterBase_C_CeremonyScan_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ForceScan
struct AHunterBase_C_ForceScan_Params
{
};

// Function HunterBase.HunterBase_C.SpawnScanEffect
struct AHunterBase_C_SpawnScanEffect_Params
{
};

// Function HunterBase.HunterBase_C.ClientSendTutorialEvent
struct AHunterBase_C_ClientSendTutorialEvent_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.EnterHiddingState
struct AHunterBase_C_EnterHiddingState_Params
{
};

// Function HunterBase.HunterBase_C.ExitHiddingState
struct AHunterBase_C_ExitHiddingState_Params
{
};

// Function HunterBase.HunterBase_C.SpawnHiddenEffect
struct AHunterBase_C_SpawnHiddenEffect_Params
{
};

// Function HunterBase.HunterBase_C.HideHiddenEffect
struct AHunterBase_C_HideHiddenEffect_Params
{
};

// Function HunterBase.HunterBase_C.MulticastEnterHiddenEffect
struct AHunterBase_C_MulticastEnterHiddenEffect_Params
{
};

// Function HunterBase.HunterBase_C.MulticastExitHiddenEffect
struct AHunterBase_C_MulticastExitHiddenEffect_Params
{
};

// Function HunterBase.HunterBase_C.ForceExitHiddenState
struct AHunterBase_C_ForceExitHiddenState_Params
{
};

// Function HunterBase.HunterBase_C.ShowNotifyRange
struct AHunterBase_C_ShowNotifyRange_Params
{
};

// Function HunterBase.HunterBase_C.ShowNotifyText
struct AHunterBase_C_ShowNotifyText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.DebugGE
struct AHunterBase_C_DebugGE_Params
{
};

// Function HunterBase.HunterBase_C.SpecterScan
struct AHunterBase_C_SpecterScan_Params
{
};

// Function HunterBase.HunterBase_C.ForceEnterHiddingState
struct AHunterBase_C_ForceEnterHiddingState_Params
{
};

// Function HunterBase.HunterBase_C.ForceJumpMontage
struct AHunterBase_C_ForceJumpMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.SnapToInteraction
struct AHunterBase_C_SnapToInteraction_Params
{
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRelativeRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetLookAtLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ClientRotationTo
struct AHunterBase_C_ClientRotationTo_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BaseRelativeLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ClientMoveTo
struct AHunterBase_C_ClientMoveTo_Params
{
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRelativeRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.CheckHiddenWorking
struct AHunterBase_C_CheckHiddenWorking_Params
{
};

// Function HunterBase.HunterBase_C.ResetCheckHiddenWorking
struct AHunterBase_C_ResetCheckHiddenWorking_Params
{
};

// Function HunterBase.HunterBase_C.OnRitualStateChanged
struct AHunterBase_C_OnRitualStateChanged_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ReportAFK
struct AHunterBase_C_ReportAFK_Params
{
};

// Function HunterBase.HunterBase_C.MulticastSetCollisionResponse
struct AHunterBase_C_MulticastSetCollisionResponse_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             NewResponse;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnChangeHiddenState
struct AHunterBase_C_OnChangeHiddenState_Params
{
	bool                                               InHiddenState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.SpecterScanWithTime
struct AHunterBase_C_SpecterScanWithTime_Params
{
	float                                              Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ForceStopMontage
struct AHunterBase_C_ForceStopMontage_Params
{
};

// Function HunterBase.HunterBase_C.UpdateAimTransform
struct AHunterBase_C_UpdateAimTransform_Params
{
};

// Function HunterBase.HunterBase_C.StartDelayInput
struct AHunterBase_C_StartDelayInput_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.TryToNormalCamera
struct AHunterBase_C_TryToNormalCamera_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.ForceExitHiddenStateWithDelayCamera
struct AHunterBase_C_ForceExitHiddenStateWithDelayCamera_Params
{
	float                                              DelayReturnCamera;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.MulticastSetMeshHiddenInGame
struct AHunterBase_C_MulticastSetMeshHiddenInGame_Params
{
	bool                                               bHidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.SetMeshHiddenInGames
struct AHunterBase_C_SetMeshHiddenInGames_Params
{
	bool                                               NewHidden;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPropagateToChildren;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.SetRenderMainPass
struct AHunterBase_C_SetRenderMainPass_Params
{
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HunterBase.HunterBase_C.ShowEffectClient
struct AHunterBase_C_ShowEffectClient_Params
{
};

// Function HunterBase.HunterBase_C.ExecuteUbergraph_HunterBase
struct AHunterBase_C_ExecuteUbergraph_HunterBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnShowTextDmg__DelegateSignature
struct AHunterBase_C_OnShowTextDmg__DelegateSignature_Params
{
	class AHSHCharacterBase*                           OwnerCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnTraped__DelegateSignature
struct AHunterBase_C_OnTraped__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnSeeAnyOneChanged__DelegateSignature
struct AHunterBase_C_OnSeeAnyOneChanged__DelegateSignature_Params
{
	int                                                Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnRitualDone__DelegateSignature
struct AHunterBase_C_OnRitualDone__DelegateSignature_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnActionImmuntity__DelegateSignature
struct AHunterBase_C_OnActionImmuntity__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnActionInteraction__DelegateSignature
struct AHunterBase_C_OnActionInteraction__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnActionActivePerk__DelegateSignature
struct AHunterBase_C_OnActionActivePerk__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnScaned__DelegateSignature
struct AHunterBase_C_OnScaned__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnExitInvisible__DelegateSignature
struct AHunterBase_C_OnExitInvisible__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnEnterInvisible__DelegateSignature
struct AHunterBase_C_OnEnterInvisible__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnAttackSuccess__DelegateSignature
struct AHunterBase_C_OnAttackSuccess__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnActionAttack__DelegateSignature
struct AHunterBase_C_OnActionAttack__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnReciveDamaged__DelegateSignature
struct AHunterBase_C_OnReciveDamaged__DelegateSignature_Params
{
};

// Function HunterBase.HunterBase_C.OnTakeDamage__DelegateSignature
struct AHunterBase_C_OnTakeDamage__DelegateSignature_Params
{
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           OwnerCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HunterBase.HunterBase_C.OnDeath__DelegateSignature
struct AHunterBase_C_OnDeath__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
