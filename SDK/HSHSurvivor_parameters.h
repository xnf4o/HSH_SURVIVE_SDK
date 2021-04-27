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

// Function HSHSurvivor.AbilityBaseComponentNative.UseAbilityComponent
struct UAbilityBaseComponentNative_UseAbilityComponent_Params
{
};

// Function HSHSurvivor.AbilityBaseComponentNative.EndAnimationNotify
struct UAbilityBaseComponentNative_EndAnimationNotify_Params
{
	struct FGameplayTagContainer                       ContainGameplayTags;                                       // (Parm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.AbilityBaseComponentNative.BeginAnimationNotify
struct UAbilityBaseComponentNative_BeginAnimationNotify_Params
{
	struct FGameplayTagContainer                       ContainGameplayTags;                                       // (Parm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.BloodSeekComponentNative.UpdateUnseenValue
struct UBloodSeekComponentNative_UpdateUnseenValue_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.BloodSeekComponentNative.UpdateSeenValue
struct UBloodSeekComponentNative_UpdateSeenValue_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.BloodSeekComponentNative.StopBloodSeek
struct UBloodSeekComponentNative_StopBloodSeek_Params
{
};

// Function HSHSurvivor.BloodSeekComponentNative.StartBloodSeek
struct UBloodSeekComponentNative_StartBloodSeek_Params
{
};

// Function HSHSurvivor.BloodSeekComponentNative.SetBloodSeekStack
struct UBloodSeekComponentNative_SetBloodSeekStack_Params
{
	int                                                Stack;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.BloodSeekComponentNative.ResetStack
struct UBloodSeekComponentNative_ResetStack_Params
{
};

// Function HSHSurvivor.BloodSeekComponentNative.IncreaseStack
struct UBloodSeekComponentNative_IncreaseStack_Params
{
};

// Function HSHSurvivor.BloodSeekComponentNative.GetSurvivors
struct UBloodSeekComponentNative_GetSurvivors_Params
{
	TArray<class AHSHCharacterSurvivorBase*>           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.BloodSeekComponentNative.GetHunter
struct UBloodSeekComponentNative_GetHunter_Params
{
	class AHSHCharacterHunterBase*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.BloodSeekComponentNative.GetBloodSeekStack
struct UBloodSeekComponentNative_GetBloodSeekStack_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.BloodSeekComponentNative.FindSurvivors
struct UBloodSeekComponentNative_FindSurvivors_Params
{
};

// Function HSHSurvivor.BloodSeekComponentNative.DecreaseStack
struct UBloodSeekComponentNative_DecreaseStack_Params
{
};

// Function HSHSurvivor.BloodSeekComponentNative.CheckInSeen
struct UBloodSeekComponentNative_CheckInSeen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ChaseAudioComponentNative.TryGetChaseCharacter
struct UChaseAudioComponentNative_TryGetChaseCharacter_Params
{
	class AHSHCharacterBase*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ChaseAudioComponentNative.SetSoundActive
struct UChaseAudioComponentNative_SetSoundActive_Params
{
	bool                                               IsActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ChaseAudioComponentNative.OnInitialize
struct UChaseAudioComponentNative_OnInitialize_Params
{
};

// Function HSHSurvivor.ChaseAudioComponentNative.OnEscape
struct UChaseAudioComponentNative_OnEscape_Params
{
};

// Function HSHSurvivor.ChaseAudioComponentNative.OnChasing
struct UChaseAudioComponentNative_OnChasing_Params
{
};

// Function HSHSurvivor.ChaseAudioComponentNative.IsHunterSeen
struct UChaseAudioComponentNative_IsHunterSeen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ChaseAudioComponentNative.Initialize
struct UChaseAudioComponentNative_Initialize_Params
{
};

// Function HSHSurvivor.ChaseAudioComponentNative.ForceEnableChase
struct UChaseAudioComponentNative_ForceEnableChase_Params
{
};

// Function HSHSurvivor.ChaseAudioComponentNative.ForceDisableChase
struct UChaseAudioComponentNative_ForceDisableChase_Params
{
};

// Function HSHSurvivor.DropItemsComponentBase.SpawnItem
struct UDropItemsComponentBase_SpawnItem_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.DropItemsComponentBase.ReceiveDamage
struct UDropItemsComponentBase_ReceiveDamage_Params
{
	float                                              Dmg;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Heathpercent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.DropItemsComponentBase.IsItemDrop
struct UDropItemsComponentBase_IsItemDrop_Params
{
	float                                              Dmg;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.DropItemsComponentBase.FindDropItem
struct UDropItemsComponentBase_FindDropItem_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.DropMovementComponentBase.Init
struct UDropMovementComponentBase_Init_Params
{
};

// Function HSHSurvivor.HSHAbilitySystemComponent.ReceiveOnGameplayEffectAppliedDelegateToSelf
struct UHSHAbilitySystemComponent_ReceiveOnGameplayEffectAppliedDelegateToSelf_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                         GameplayEffectSpec;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ActiveGameplayEffectHandle;                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAbilitySystemComponent.GetGameplayEffectCountWithTag
struct UHSHAbilitySystemComponent_GetGameplayEffectCountWithTag_Params
{
	struct FGameplayTagContainer                       SourceGameplayEffect;                                      // (Parm, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent;                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnforceOnGoingCheck;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction HSHSurvivor.HSHAbilitySystemComponent.GameplayEffectDelegate__DelegateSignature
struct UHSHAbilitySystemComponent_GameplayEffectDelegate__DelegateSignature_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAbilityTask_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
struct UHSHAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Params
{
	class UGameplayAbility*                            OwningAbility;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageToPlay;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EventTags;                                                 // (Parm, NativeAccessSpecifierPublic)
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StartSection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAbilityEnds;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimRootMotionTranslationScale;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHAbilityTask_PlayMontageAndWaitForEvent*  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAchievementComponent.UnlockAchievement
struct UHSHAchievementComponent_UnlockAchievement_Params
{
	struct FString                                     achName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAchievementComponent.StoreStats
struct UHSHAchievementComponent_StoreStats_Params
{
	struct FString                                     StatName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                statToIncrease;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAchievementComponent.ResetAllStats
struct UHSHAchievementComponent_ResetAllStats_Params
{
	bool                                               bAchievementsToo;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAchievementComponent.InitSteamAchievement
struct UHSHAchievementComponent_InitSteamAchievement_Params
{
};

// Function HSHSurvivor.HSHAchievementComponent.GetAchievement
struct UHSHAchievementComponent_GetAchievement_Params
{
	struct FString                                     achName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAchievementComponent.ClearAchievement
struct UHSHAchievementComponent_ClearAchievement_Params
{
	struct FString                                     pchName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHItem.IsConsumable
struct UHSHItem_IsConsumable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHItem.GetIdentifierString
struct UHSHItem_GetIdentifierString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_Strength
struct UHSHAttributeSet_OnRep_Strength_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_MoveSpeed
struct UHSHAttributeSet_OnRep_MoveSpeed_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_MaxHealth
struct UHSHAttributeSet_OnRep_MaxHealth_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_Health
struct UHSHAttributeSet_OnRep_Health_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_Eyesight
struct UHSHAttributeSet_OnRep_Eyesight_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_DefensePower
struct UHSHAttributeSet_OnRep_DefensePower_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_DefensePoint
struct UHSHAttributeSet_OnRep_DefensePoint_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_AttackPower
struct UHSHAttributeSet_OnRep_AttackPower_Params
{
};

// Function HSHSurvivor.HSHAttributeSet.OnRep_AttackPoint
struct UHSHAttributeSet_OnRep_AttackPoint_Params
{
};

// DelegateFunction HSHSurvivor.HSHAttributeSet.OnGameplayEffectExecuteDelegate__DelegateSignature
struct UHSHAttributeSet_OnGameplayEffectExecuteDelegate__DelegateSignature_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHAttributeSetHunter.OnRep_Reach
struct UHSHAttributeSetHunter_OnRep_Reach_Params
{
};

// Function HSHSurvivor.HSHAttributeSetHunter.OnRep_BloodSeekMoveSpeed
struct UHSHAttributeSetHunter_OnRep_BloodSeekMoveSpeed_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_Stamina
struct UHSHAttributeSetSurvivor_OnRep_Stamina_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_RegenStaminaRateCrouchBonus
struct UHSHAttributeSetSurvivor_OnRep_RegenStaminaRateCrouchBonus_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_RegenStaminaRate
struct UHSHAttributeSetSurvivor_OnRep_RegenStaminaRate_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_MaxStamina
struct UHSHAttributeSetSurvivor_OnRep_MaxStamina_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_MaxFallenHealth
struct UHSHAttributeSetSurvivor_OnRep_MaxFallenHealth_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_InjuredSpeedBonus
struct UHSHAttributeSetSurvivor_OnRep_InjuredSpeedBonus_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_FallenHealth
struct UHSHAttributeSetSurvivor_OnRep_FallenHealth_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_Expertise
struct UHSHAttributeSetSurvivor_OnRep_Expertise_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_DrainStaminaRateCrouchBonus
struct UHSHAttributeSetSurvivor_OnRep_DrainStaminaRateCrouchBonus_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_DrainStaminaRate
struct UHSHAttributeSetSurvivor_OnRep_DrainStaminaRate_Params
{
};

// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_CrouchSpeedBonus
struct UHSHAttributeSetSurvivor_OnRep_CrouchSpeedBonus_Params
{
};

// Function HSHSurvivor.HSHBlueprintLibrary.StopLoadingScreen
struct UHSHBlueprintLibrary_StopLoadingScreen_Params
{
};

// Function HSHSurvivor.HSHBlueprintLibrary.ServerTravel
struct UHSHBlueprintLibrary_ServerTravel_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InURL;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAbsolute;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldSkipGameNotify;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.SaveLogsFileToAnother
struct UHSHBlueprintLibrary_SaveLogsFileToAnother_Params
{
	struct FString                                     ProjectName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     savepath;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.RotatePawnTo
struct UHSHBlueprintLibrary_RotatePawnTo_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRelativeRotation;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEaseOut;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEaseIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceShortestRotationPath;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<HSHSurvivor_EMoveActionHSH>            MoveAction;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.RotateControllerTo
struct UHSHBlueprintLibrary_RotateControllerTo_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRelativeRotation;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEaseOut;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEaseIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceShortestRotationPath;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<HSHSurvivor_EMoveActionHSH>            MoveAction;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.RequestExit
struct UHSHBlueprintLibrary_RequestExit_Params
{
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.PlayLoadingScreen
struct UHSHBlueprintLibrary_PlayLoadingScreen_Params
{
	bool                                               bPlayUntilStopped;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.NotEqual_HSHItemSlot
struct UHSHBlueprintLibrary_NotEqual_HSHItemSlot_Params
{
	struct FHSHItemSlot                                A;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHSHItemSlot                                B;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.IsValidItemSlot
struct UHSHBlueprintLibrary_IsValidItemSlot_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.IsInEditor
struct UHSHBlueprintLibrary_IsInEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.GetMontageSectionLength
struct UHSHBlueprintLibrary_GetMontageSectionLength_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.GetMontageSectionIndex
struct UHSHBlueprintLibrary_GetMontageSectionIndex_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSectionName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.GetExecuteMagnitude
struct UHSHBlueprintLibrary_GetExecuteMagnitude_Params
{
	struct FGameplayEffectExecutionDefinition          ExecuteEffect;                                             // (Parm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.GetDurationGameplayEffectSpecHandle
struct UHSHBlueprintLibrary_GetDurationGameplayEffectSpecHandle_Params
{
	struct FGameplayEffectSpecHandle                   GameplayEffectSpecHandle;                                  // (Parm, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadStickerItem
struct UHSHBlueprintLibrary_ForceLoadStickerItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLogWarning;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHStickerItem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadQuest
struct UHSHBlueprintLibrary_ForceLoadQuest_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLogWarning;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHQuest*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadPickableItem
struct UHSHBlueprintLibrary_ForceLoadPickableItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLogWarning;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHPickableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadItemProfile
struct UHSHBlueprintLibrary_ForceLoadItemProfile_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLogWarning;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItemProfile*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadItem
struct UHSHBlueprintLibrary_ForceLoadItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLogWarning;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.FindScreenEdgeLocationForWorldLocation
struct UHSHBlueprintLibrary_FindScreenEdgeLocationForWorldLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EdgePercent;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   OutScreenPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutRotationAngleDegrees;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOnScreen;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.EqualEqual_HSHItemSlot
struct UHSHBlueprintLibrary_EqualEqual_HSHItemSlot_Params
{
	struct FHSHItemSlot                                A;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHSHItemSlot                                B;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.Encode
struct UHSHBlueprintLibrary_Encode_Params
{
	struct FString                                     secretKey;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.DoesEffectContainerSpecHaveTargets
struct UHSHBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Params
{
	struct FHSHGameplayEffectContainerSpec             ContainerSpec;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.DoesEffectContainerSpecHaveEffects
struct UHSHBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Params
{
	struct FHSHGameplayEffectContainerSpec             ContainerSpec;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.CopyToClipboard
struct UHSHBlueprintLibrary_CopyToClipboard_Params
{
	struct FString                                     Str;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ClipboardPaste
struct UHSHBlueprintLibrary_ClipboardPaste_Params
{
	struct FString                                     Dest;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ClientTravel
struct UHSHBlueprintLibrary_ClientTravel_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETravelType>                    TravelType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSeamless;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       MapPackageGuid;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ChangeLocalization
struct UHSHBlueprintLibrary_ChangeLocalization_Params
{
	struct FString                                     Target;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.BreakGameplayEffectSpec
struct UHSHBlueprintLibrary_BreakGameplayEffectSpec_Params
{
	struct FGameplayEffectSpec                         GameplayEffectSpec;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SourceTags;                                                // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTags;                                                // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.ApplyExternalEffectContainerSpec
struct UHSHBlueprintLibrary_ApplyExternalEffectContainerSpec_Params
{
	struct FHSHGameplayEffectContainerSpec             ContainerSpec;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHBlueprintLibrary.AddTargetsToEffectContainerSpec
struct UHSHBlueprintLibrary_AddTargetsToEffectContainerSpec_Params
{
	struct FHSHGameplayEffectContainerSpec             ContainerSpec;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          HitResults;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              TargetActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FHSHGameplayEffectContainerSpec             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.UpdateProgressBar
struct AHSHCharacterBase_UpdateProgressBar_Params
{
	float                                              Current;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.SlottedItemChanged
struct AHSHCharacterBase_SlottedItemChanged_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.SetSlottedItem
struct AHSHCharacterBase_SetSlottedItem_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.SetCharacterLevel
struct AHSHCharacterBase_SetCharacterLevel_Params
{
	int                                                NewLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.RemoveInventoryItem
struct AHSHCharacterBase_RemoveInventoryItem_Params
{
	class UHSHItem*                                    RemovedItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemoveCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.RefreshInventory
struct AHSHCharacterBase_RefreshInventory_Params
{
	TMap<struct FHSHItemSlot, class UHSHItem*>         ThisSlottedItems;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.OnRep_SkinnedMesh
struct AHSHCharacterBase_OnRep_SkinnedMesh_Params
{
};

// Function HSHSurvivor.HSHCharacterBase.OnPostGameplayEffectExecute
struct AHSHCharacterBase_OnPostGameplayEffectExecute_Params
{
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.OnMoveSpeedChanged
struct AHSHCharacterBase_OnMoveSpeedChanged_Params
{
	float                                              DeltaValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.OnHealthChanged
struct AHSHCharacterBase_OnHealthChanged_Params
{
	float                                              DeltaValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.OnEyesightChanged
struct AHSHCharacterBase_OnEyesightChanged_Params
{
	float                                              DeltaValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.OnDamaged
struct AHSHCharacterBase_OnDamaged_Params
{
	float                                              DamageAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EffectGrantedTags;                                         // (Parm, NativeAccessSpecifierPublic)
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.OnAttributeChange
struct AHSHCharacterBase_OnAttributeChange_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.InventoryItemChanged
struct AHSHCharacterBase_InventoryItemChanged_Params
{
	bool                                               bAdded;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.InitAbility
struct AHSHCharacterBase_InitAbility_Params
{
};

// Function HSHSurvivor.HSHCharacterBase.GetSlottedItem
struct AHSHCharacterBase_GetSlottedItem_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetMoveSpeed
struct AHSHCharacterBase_GetMoveSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetMaxHealth
struct AHSHCharacterBase_GetMaxHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetInventoryItems
struct AHSHCharacterBase_GetInventoryItems_Params
{
	TArray<class UHSHItem*>                            Items;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPrimaryAssetType                           ItemType;                                                  // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetInventoryItemData
struct AHSHCharacterBase_GetInventoryItemData_Params
{
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHSHItemData                                ItemData;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetInventoryItemCount
struct AHSHCharacterBase_GetInventoryItemCount_Params
{
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetHealth
struct AHSHCharacterBase_GetHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetEyesight
struct AHSHCharacterBase_GetEyesight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetCooldownRemainingForTag
struct AHSHCharacterBase_GetCooldownRemainingForTag_Params
{
	struct FGameplayTagContainer                       CooldownTags;                                              // (Parm, NativeAccessSpecifierPublic)
	float                                              TimeRemaining;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetCharacterLevel
struct AHSHCharacterBase_GetCharacterLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetActiveGameplayEffectClass
struct AHSHCharacterBase_GetActiveGameplayEffectClass_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActiveGameplayEffect;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetActiveEffectRemainingWithTag
struct AHSHCharacterBase_GetActiveEffectRemainingWithTag_Params
{
	struct FGameplayTagContainer                       EffectTags;                                                // (Parm, NativeAccessSpecifierPublic)
	float                                              TimeRemaining;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithTags
struct AHSHCharacterBase_GetActiveAbilitiesWithTags_Params
{
	struct FGameplayTagContainer                       AbilityTags;                                               // (Parm, NativeAccessSpecifierPublic)
	TArray<class UHSHGameplayAbility*>                 ActiveAbilities;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithItemSlotFromTestInventory
struct AHSHCharacterBase_GetActiveAbilitiesWithItemSlotFromTestInventory_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHSHGameplayAbility*>                 ActiveAbilities;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithItemSlot
struct AHSHCharacterBase_GetActiveAbilitiesWithItemSlot_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHSHGameplayAbility*>                 ActiveAbilities;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.FillSlottedAbilitySpecs
struct AHSHCharacterBase_FillSlottedAbilitySpecs_Params
{
	TMap<struct FHSHItemSlot, struct FGameplayAbilitySpec> SlottedAbilitySpecs;                                       // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.FillEmptySlotWithItem
struct AHSHCharacterBase_FillEmptySlotWithItem_Params
{
	class UHSHItem*                                    NewItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.FillEmptySlots
struct AHSHCharacterBase_FillEmptySlots_Params
{
};

// Function HSHSurvivor.HSHCharacterBase.AddStartupGameplayAbilities
struct AHSHCharacterBase_AddStartupGameplayAbilities_Params
{
};

// Function HSHSurvivor.HSHCharacterBase.AddSlottedGameplayAbilities
struct AHSHCharacterBase_AddSlottedGameplayAbilities_Params
{
};

// Function HSHSurvivor.HSHCharacterBase.AddInventoryItem
struct AHSHCharacterBase_AddInventoryItem_Params
{
	class UHSHItem*                                    NewItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.ActivateEffectByClass
struct AHSHCharacterBase_ActivateEffectByClass_Params
{
	class UClass*                                      GameplayEffect;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithTags
struct AHSHCharacterBase_ActivateAbilitiesWithTags_Params
{
	struct FGameplayTagContainer                       AbilityTags;                                               // (Parm, NativeAccessSpecifierPublic)
	bool                                               bAllowRemoteActivation;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithItemSlotFromTestInventory
struct AHSHCharacterBase_ActivateAbilitiesWithItemSlotFromTestInventory_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRemoteActivation;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithItemSlot
struct AHSHCharacterBase_ActivateAbilitiesWithItemSlot_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRemoteActivation;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterHunterBase.GetBloodSeekMoveSpeed
struct AHSHCharacterHunterBase_GetBloodSeekMoveSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.OnStaminaChanged
struct AHSHCharacterSurvivorBase_OnStaminaChanged_Params
{
	float                                              DeltaValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EventTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.IsCharacterSprint
struct AHSHCharacterSurvivorBase_IsCharacterSprint_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetStamina
struct AHSHCharacterSurvivorBase_GetStamina_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetRegenStaminaRateCrouchBonus
struct AHSHCharacterSurvivorBase_GetRegenStaminaRateCrouchBonus_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetRegenStaminaRate
struct AHSHCharacterSurvivorBase_GetRegenStaminaRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetMaxStamina
struct AHSHCharacterSurvivorBase_GetMaxStamina_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetInjuredSpeedBonus
struct AHSHCharacterSurvivorBase_GetInjuredSpeedBonus_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetExpertise
struct AHSHCharacterSurvivorBase_GetExpertise_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetDrainStaminaRateCrouchBonus
struct AHSHCharacterSurvivorBase_GetDrainStaminaRateCrouchBonus_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetDrainStaminaRate
struct AHSHCharacterSurvivorBase_GetDrainStaminaRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCharacterSurvivorBase.GetCrouchSpeedBonus
struct AHSHCharacterSurvivorBase_GetCrouchSpeedBonus_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHCheatManagerNative.TestClientCheat
struct UHSHCheatManagerNative_TestClientCheat_Params
{
};

// Function HSHSurvivor.HSHCheatManagerNative.TestCheat
struct UHSHCheatManagerNative_TestCheat_Params
{
};

// Function HSHSurvivor.HSHGameModeBase.GetPlayerNumber
struct AHSHGameModeBase_GetPlayerNumber_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameModeBase.AssignPlayerNumber
struct AHSHGameModeBase_AssignPlayerNumber_Params
{
	int                                                Number;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.MakeEffectContainerSpecFromContainer
struct UHSHGameplayAbility_MakeEffectContainerSpecFromContainer_Params
{
	struct FHSHGameplayEffectContainer                 Container;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                OverrideGameplayLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHSHGameplayEffectContainerSpec             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.MakeEffectContainerSpec
struct UHSHGameplayAbility_MakeEffectContainerSpec_Params
{
	struct FGameplayTag                                ContainerTag;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                OverrideGameplayLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHSHGameplayEffectContainerSpec             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.GetGameplayAbilityCharge
struct UHSHGameplayAbility_GetGameplayAbilityCharge_Params
{
	int                                                CurrentCharge;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCharge;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.GetCooldownGameplayEffectClassBP
struct UHSHGameplayAbility_GetCooldownGameplayEffectClassBP_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.GetCooldownGameplayEffectBP
struct UHSHGameplayAbility_GetCooldownGameplayEffectBP_Params
{
	class UGameplayEffect*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.GetCooldownDurationMagnitude
struct UHSHGameplayAbility_GetCooldownDurationMagnitude_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.GetAbilityTags
struct UHSHGameplayAbility_GetAbilityTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.ChangeCooldownGEClass
struct UHSHGameplayAbility_ChangeCooldownGEClass_Params
{
	class UClass*                                      NewCooldown;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainerWithMagnitude
struct UHSHGameplayAbility_ApplyEffectContainerWithMagnitude_Params
{
	struct FGameplayTag                                ContainerTag;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OverrideGameplayLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainerSpec
struct UHSHGameplayAbility_ApplyEffectContainerSpec_Params
{
	struct FHSHGameplayEffectContainerSpec             ContainerSpec;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainer
struct UHSHGameplayAbility_ApplyEffectContainer_Params
{
	struct FGameplayTag                                ContainerTag;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                OverrideGameplayLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHItemProfile.GetIdentifierString
struct UHSHItemProfile_GetIdentifierString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHObject.Construct
struct UHSHObject_Construct_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerBase.SlottedItemChanged
struct AHSHPlayerControllerBase_SlottedItemChanged_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.SetSlottedItem
struct AHSHPlayerControllerBase_SetSlottedItem_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.SaveInventory
struct AHSHPlayerControllerBase_SaveInventory_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.RemoveInventoryItem
struct AHSHPlayerControllerBase_RemoveInventoryItem_Params
{
	class UHSHItem*                                    RemovedItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemoveCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.LoadInventory
struct AHSHPlayerControllerBase_LoadInventory_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.InventoryItemChanged
struct AHSHPlayerControllerBase_InventoryItemChanged_Params
{
	bool                                               bAdded;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.GetSlottedItem
struct AHSHPlayerControllerBase_GetSlottedItem_Params
{
	struct FHSHItemSlot                                ItemSlot;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHItem*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItems
struct AHSHPlayerControllerBase_GetInventoryItems_Params
{
	TArray<class UHSHItem*>                            Items;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPrimaryAssetType                           ItemType;                                                  // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItemData
struct AHSHPlayerControllerBase_GetInventoryItemData_Params
{
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHSHItemData                                ItemData;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItemCount
struct AHSHPlayerControllerBase_GetInventoryItemCount_Params
{
	class UHSHItem*                                    Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerBase.FillEmptySlots
struct AHSHPlayerControllerBase_FillEmptySlots_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerBase.AddInventoryItem
struct AHSHPlayerControllerBase_AddInventoryItem_Params
{
	class UHSHItem*                                    NewItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Debug.PawnMoveFlag
struct AHSHPlayerControllerNative_HSH_Debug_PawnMoveFlag_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.TimeOut
struct AHSHPlayerControllerNative_HSH_Cheat_TimeOut_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnTrapItem
struct AHSHPlayerControllerNative_HSH_Cheat_SpawnTrapItem_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnProjectileItem
struct AHSHPlayerControllerNative_HSH_Cheat_SpawnProjectileItem_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnMeleeItem
struct AHSHPlayerControllerNative_HSH_Cheat_SpawnMeleeItem_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnKeyItem
struct AHSHPlayerControllerNative_HSH_Cheat_SpawnKeyItem_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnItem
struct AHSHPlayerControllerNative_HSH_Cheat_SpawnItem_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillSurvivor
struct AHSHPlayerControllerNative_HSH_Cheat_KillSurvivor_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillME
struct AHSHPlayerControllerNative_HSH_Cheat_KillME_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillHunter
struct AHSHPlayerControllerNative_HSH_Cheat_KillHunter_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.CompleteQuestAndOpenPortal
struct AHSHPlayerControllerNative_HSH_Cheat_CompleteQuestAndOpenPortal_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.CompleteQuest
struct AHSHPlayerControllerNative_HSH_Cheat_CompleteQuest_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.ChangeStateToSpectator
struct AHSHPlayerControllerNative_ChangeStateToSpectator_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.ChangeStateToPlayer
struct AHSHPlayerControllerNative_ChangeStateToPlayer_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToSelectPlayer
struct AHSHPlayerControllerNative_ChangeSpectatorToSelectPlayer_Params
{
	int                                                dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToPrevPlayer
struct AHSHPlayerControllerNative_ChangeSpectatorToPrevPlayer_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToNextPlayer
struct AHSHPlayerControllerNative_ChangeSpectatorToNextPlayer_Params
{
};

// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToCurrentPlayer
struct AHSHPlayerControllerNative_ChangeSpectatorToCurrentPlayer_Params
{
	struct FViewTargetTransitionParams                 ViewTarget;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHPlayerStateNative.TrySetPlayerID
struct AHSHPlayerStateNative_TrySetPlayerID_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHQuest.GetIdentifierString
struct UHSHQuest_GetIdentifierString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.HSHTargetType.GetTargets
struct UHSHTargetType_GetTargets_Params
{
	class AHSHCharacterBase*                           TargetingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          EventData;                                                 // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          OutHitResults;                                             // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.UpdateNotSeeAnyoneEvent
struct UJokeAudioComponentNative_UpdateNotSeeAnyoneEvent_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.UpdateIdleEvent
struct UJokeAudioComponentNative_UpdateIdleEvent_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.SetActiveNotSeeAnyoneEvent
struct UJokeAudioComponentNative_SetActiveNotSeeAnyoneEvent_Params
{
	bool                                               IsEventActive;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.SetActiveIdleEvent
struct UJokeAudioComponentNative_SetActiveIdleEvent_Params
{
	bool                                               IsEventActive;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.SendEvent
struct UJokeAudioComponentNative_SendEvent_Params
{
	TEnumAsByte<HSHSurvivor_EJokeEvent>                Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.ResetNotSeeAnyoneEvent
struct UJokeAudioComponentNative_ResetNotSeeAnyoneEvent_Params
{
};

// Function HSHSurvivor.JokeAudioComponentNative.ResetIdleEvent
struct UJokeAudioComponentNative_ResetIdleEvent_Params
{
};

// Function HSHSurvivor.JokeAudioComponentNative.RandomSoundFromSource
struct UJokeAudioComponentNative_RandomSoundFromSource_Params
{
	TArray<struct FJokeData>                           Source;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class USoundBase*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.OnCheckingEvent
struct UJokeAudioComponentNative_OnCheckingEvent_Params
{
	TEnumAsByte<HSHSurvivor_EJokeEvent>                Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.MulticastSpawnSound
struct UJokeAudioComponentNative_MulticastSpawnSound_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.JokeAudioComponentNative.GetSoundsData
struct UJokeAudioComponentNative_GetSoundsData_Params
{
	TEnumAsByte<HSHSurvivor_EJokeEvent>                Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJokeData>                           Source;                                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.Noise.perlinNoise1D
struct UNoise_perlinNoise1D_Params
{
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              persistence;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Octave;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.PerkHandleComponentNative.OnFindHandleTagSuccess
struct UPerkHandleComponentNative_OnFindHandleTagSuccess_Params
{
	struct FGameplayTag                                AbilityTag;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerkHandleData                             Data;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class AHSHCharacterBase*>                   Characters;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.PerkHandleComponentNative.FindHandleTag
struct UPerkHandleComponentNative_FindHandleTag_Params
{
	struct FGameplayTag                                AbilityTag;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AHSHCharacterBase*>                   Characters;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.PerkHandleComponentNative.CheckHandleTag
struct UPerkHandleComponentNative_CheckHandleTag_Params
{
	struct FGameplayTag                                AbilityTag;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerkHandleData                             Data;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProgressManagerComponentNative.ContainTarget
struct UProgressManagerComponentNative_ContainTarget_Params
{
	class UObject*                                     Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSProgressInfo>                      Array;                                                     // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsContain;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IndexArray;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProgressManagerComponentNative.ContainPlayerController
struct UProgressManagerComponentNative_ContainPlayerController_Params
{
	class AController*                                 PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSProgressInfo>                      Array;                                                     // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsContain;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IndexArray;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProgressManagerComponentNative.ContainAIController
struct UProgressManagerComponentNative_ContainAIController_Params
{
	class AController*                                 AIController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSProgressInfo>                      Array;                                                     // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsContain;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IndexArray;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.ParseMatchMakeData
struct UProjectFunctionLibrary_ParseMatchMakeData_Params
{
	struct FString                                     JSONString;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                survivor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                hunter;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.LoadFileToStringArray
struct UProjectFunctionLibrary_LoadFileToStringArray_Params
{
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.LoadFileToString
struct UProjectFunctionLibrary_LoadFileToString_Params
{
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.GetProjectVersion
struct UProjectFunctionLibrary_GetProjectVersion_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.GetGameSingleton
struct UProjectFunctionLibrary_GetGameSingleton_Params
{
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.GetDynamicBandwidth
struct UProjectFunctionLibrary_GetDynamicBandwidth_Params
{
	int                                                MinDynamicBandwidth;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDynamicBandwidth;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.GetCalculatedNetSpeed
struct UProjectFunctionLibrary_GetCalculatedNetSpeed_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.ProjectFunctionLibrary.DebugFilePath
struct UProjectFunctionLibrary_DebugFilePath_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.QuestObjectiveBase.IsObjectiveSuccess
struct UQuestObjectiveBase_IsObjectiveSuccess_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamIAP.StartPurchase
struct USteamIAP_StartPurchase_Params
{
	int                                                productID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamIAP.RequestPrice
struct USteamIAP_RequestPrice_Params
{
};

// Function HSHSurvivor.SteamIAP.Initialize
struct USteamIAP_Initialize_Params
{
};

// Function HSHSurvivor.SteamIAP.GetItemPrice
struct USteamIAP_GetItemPrice_Params
{
	int                                                productID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamIAP.GetCurrency
struct USteamIAP_GetCurrency_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamIAP.BIsDlcInstalled
struct USteamIAP_BIsDlcInstalled_Params
{
	TEnumAsByte<HSHSurvivor_EDlc>                      dlc;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamIAP.ActivateGameOverlayToStore
struct USteamIAP_ActivateGameOverlayToStore_Params
{
	TEnumAsByte<HSHSurvivor_EDlc>                      dlc;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.SetLobbyOwner
struct USteamLobby_SetLobbyOwner_Params
{
	int                                                MemberIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.SetLobbyMemberData
struct USteamLobby_SetLobbyMemberData_Params
{
	struct FString                                     pchKey;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     pchValue;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.SetLobbyJoinable
struct USteamLobby_SetLobbyJoinable_Params
{
	bool                                               joinable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.SetLobbyData
struct USteamLobby_SetLobbyData_Params
{
	struct FString                                     pchKey;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     pchValue;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.LeaveLobby
struct USteamLobby_LeaveLobby_Params
{
};

// Function HSHSurvivor.SteamLobby.KickMember
struct USteamLobby_KickMember_Params
{
	int                                                MemberIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.IsLobbyOwner
struct USteamLobby_IsLobbyOwner_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.IsInLobby
struct USteamLobby_IsInLobby_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.Initialize
struct USteamLobby_Initialize_Params
{
};

// Function HSHSurvivor.SteamLobby.GetLobbyMemberInfo
struct USteamLobby_GetLobbyMemberInfo_Params
{
	int                                                MemberCnt;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerId;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerProfile;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerState;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             DisplayName;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Survivorskill;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       IsOwner;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.GetLobbyData
struct USteamLobby_GetLobbyData_Params
{
	struct FString                                     pchKey;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.CreateLobby
struct USteamLobby_CreateLobby_Params
{
};

// Function HSHSurvivor.SteamLobby.ActivateGameOverlayToUser
struct USteamLobby_ActivateGameOverlayToUser_Params
{
	int                                                MemberIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.SteamLobby.ActivateGameOverlayInviteDialog
struct USteamLobby_ActivateGameOverlayInviteDialog_Params
{
};

// Function HSHSurvivor.TestAttributeSetComponent.GetHSHAttributeSet
struct UTestAttributeSetComponent_GetHSHAttributeSet_Params
{
	class UHSHAttributeSet*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.TestGameModeBase.InitNewPlayer
struct ATestGameModeBase_InitNewPlayer_Params
{
	class APlayerController*                           NewPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            UniqueId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Options;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Portal;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.VentilatorManagerNative.IsVentilatorCooldowm
struct AVentilatorManagerNative_IsVentilatorCooldowm_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.VentilatorManagerNative.AddedVentilatorCooldown
struct AVentilatorManagerNative_AddedVentilatorCooldown_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.WTxtFile.TestFilePath
struct UWTxtFile_TestFilePath_Params
{
};

// Function HSHSurvivor.WTxtFile.SaveArrayTxtWithPath
struct UWTxtFile_SaveArrayTxtWithPath_Params
{
	struct FString                                     AppendDirectory;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             SaveText;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               AllowOverWriting;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HSHSurvivor.WTxtFile.SaveArrayTxt
struct UWTxtFile_SaveArrayTxt_Params
{
	struct FString                                     SaveDirectory;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             SaveText;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               AllowOverWriting;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
