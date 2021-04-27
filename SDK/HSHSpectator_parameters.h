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

// Function HSHSpectator.HSHSpectator_C.GetCurrentPickable
struct AHSHSpectator_C_GetCurrentPickable_Params
{
	struct FS_Pickable                                 CurrentPickable;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.GetExecuteCameraTransform
struct AHSHSpectator_C_GetExecuteCameraTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.isExecution
struct AHSHSpectator_C_isExecution_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.GetAimTransform
struct AHSHSpectator_C_GetAimTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.IsHaveSpawnPerk
struct AHSHSpectator_C_IsHaveSpawnPerk_Params
{
	bool                                               bIsHave;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       Tag;                                                       // (Parm, OutParm)
};

// Function HSHSpectator.HSHSpectator_C.GetCharacterID
struct AHSHSpectator_C_GetCharacterID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.GetMainCameraComponent
struct AHSHSpectator_C_GetMainCameraComponent_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.GetCurrentItemID
struct AHSHSpectator_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.NotifyFootStep
struct AHSHSpectator_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.GetOptionSensitivity
struct AHSHSpectator_C_GetOptionSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.RefreshTransform
struct AHSHSpectator_C_RefreshTransform_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SetRotaion;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.GetterViewTarget
struct AHSHSpectator_C_GetterViewTarget_Params
{
	class APawn*                                       View;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.LookAtTo
struct AHSHSpectator_C_LookAtTo_Params
{
	class AActor*                                      NewViewTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.GetCharacterList
struct AHSHSpectator_C_GetCharacterList_Params
{
	TArray<class ASurvivorBase_C*>                     SurvivorList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function HSHSpectator.HSHSpectator_C.RefreshCharacterList
struct AHSHSpectator_C_RefreshCharacterList_Params
{
};

// Function HSHSpectator.HSHSpectator_C.FilterSurvivor
struct AHSHSpectator_C_FilterSurvivor_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ASurvivorBase_C*>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function HSHSpectator.HSHSpectator_C.OnRep_NetUpdate
struct AHSHSpectator_C_OnRep_NetUpdate_Params
{
};

// Function HSHSpectator.HSHSpectator_C.OnRep_bCanSpawnByOwner
struct AHSHSpectator_C_OnRep_bCanSpawnByOwner_Params
{
};

// Function HSHSpectator.HSHSpectator_C.CapIndex
struct AHSHSpectator_C_CapIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASurvivorBase_C*>                     SurvivorList;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_5
struct AHSHSpectator_C_InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_4
struct AHSHSpectator_C_InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_Respawn_K2Node_InputActionEvent_3
struct AHSHSpectator_C_InpActEvt_Spectator_Respawn_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_Ping_K2Node_InputActionEvent_2
struct AHSHSpectator_C_InpActEvt_Spectator_Ping_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.InpActEvt_Exit_Game_K2Node_InputActionEvent_1
struct AHSHSpectator_C_InpActEvt_Exit_Game_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.BeginAttackCollision
struct AHSHSpectator_C_BeginAttackCollision_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundAtk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.EndAttackCollision
struct AHSHSpectator_C_EndAttackCollision_Params
{
};

// Function HSHSpectator.HSHSpectator_C.EndAttackAnimation
struct AHSHSpectator_C_EndAttackAnimation_Params
{
};

// Function HSHSpectator.HSHSpectator_C.OnEndAbility
struct AHSHSpectator_C_OnEndAbility_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCancel_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.OnUpdateItem
struct AHSHSpectator_C_OnUpdateItem_Params
{
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSHSpectator.HSHSpectator_C.SendMeleeDistance
struct AHSHSpectator_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.PlaySound
struct AHSHSpectator_C_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAttachCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.StopInteraction
struct AHSHSpectator_C_StopInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.NotifyCameraShake
struct AHSHSpectator_C_NotifyCameraShake_Params
{
	class UClass*                                      CameraShake;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.EnableCanSeeSpecter
struct AHSHSpectator_C_EnableCanSeeSpecter_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.FinishInteraction
struct AHSHSpectator_C_FinishInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.TryPlayMontage
struct AHSHSpectator_C_TryPlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Section;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.NotifyAfterGetHit
struct AHSHSpectator_C_NotifyAfterGetHit_Params
{
};

// Function HSHSpectator.HSHSpectator_C.ForceJumpCurrentMontage
struct AHSHSpectator_C_ForceJumpCurrentMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.CreateUI
struct AHSHSpectator_C_CreateUI_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.RemoveUI
struct AHSHSpectator_C_RemoveUI_Params
{
};

// Function HSHSpectator.HSHSpectator_C.UpdateUI
struct AHSHSpectator_C_UpdateUI_Params
{
	struct FS_UISpectator                              Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.Spawning
struct AHSHSpectator_C_Spawning_Params
{
};

// Function HSHSpectator.HSHSpectator_C.RemoveSoulInHand
struct AHSHSpectator_C_RemoveSoulInHand_Params
{
};

// Function HSHSpectator.HSHSpectator_C.RemoveSoulInScene
struct AHSHSpectator_C_RemoveSoulInScene_Params
{
};

// Function HSHSpectator.HSHSpectator_C.ForcePingSoul
struct AHSHSpectator_C_ForcePingSoul_Params
{
};

// Function HSHSpectator.HSHSpectator_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
struct AHSHSpectator_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
struct AHSHSpectator_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.Movement_Turn
struct AHSHSpectator_C_Movement_Turn_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.Movement_LookUp
struct AHSHSpectator_C_Movement_LookUp_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.ReceivePossessed
struct AHSHSpectator_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.ReceiveUnpossessed
struct AHSHSpectator_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.NextSpactator
struct AHSHSpectator_C_NextSpactator_Params
{
};

// Function HSHSpectator.HSHSpectator_C.BackSpactator
struct AHSHSpectator_C_BackSpactator_Params
{
};

// Function HSHSpectator.HSHSpectator_C.ReceiveTick
struct AHSHSpectator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectator.HSHSpectator_C.MulticastSetTransfrom
struct AHSHSpectator_C_MulticastSetTransfrom_Params
{
	struct FTransform                                  Transfrom;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.StartSpectator
struct AHSHSpectator_C_StartSpectator_Params
{
};

// Function HSHSpectator.HSHSpectator_C.OnSpawning
struct AHSHSpectator_C_OnSpawning_Params
{
	struct FTransform                                  InTransform;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.ClientFadeCameraSpawn
struct AHSHSpectator_C_ClientFadeCameraSpawn_Params
{
};

// Function HSHSpectator.HSHSpectator_C.SetPauseCount
struct AHSHSpectator_C_SetPauseCount_Params
{
	bool                                               bPauseCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.OnCharacterChange
struct AHSHSpectator_C_OnCharacterChange_Params
{
};

// Function HSHSpectator.HSHSpectator_C.SetTickEnabled
struct AHSHSpectator_C_SetTickEnabled_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSHSpectator.HSHSpectator_C.ReceiveBeginPlay
struct AHSHSpectator_C_ReceiveBeginPlay_Params
{
};

// Function HSHSpectator.HSHSpectator_C.ExecuteUbergraph_HSHSpectator
struct AHSHSpectator_C_ExecuteUbergraph_HSHSpectator_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
