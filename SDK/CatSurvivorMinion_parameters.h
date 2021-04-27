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

// Function CatSurvivorMinion.CatSurvivorMinion_C.NotifyFootStep
struct ACatSurvivorMinion_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.StopMovement
struct ACatSurvivorMinion_C_StopMovement_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.CheckMovingHold
struct ACatSurvivorMinion_C_CheckMovingHold_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.GetCurrentPickable
struct ACatSurvivorMinion_C_GetCurrentPickable_Params
{
	struct FS_Pickable                                 CurrentPickable;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InitializeCameraPostProcess
struct ACatSurvivorMinion_C_InitializeCameraPostProcess_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.GetOverlapingCharacter
struct ACatSurvivorMinion_C_GetOverlapingCharacter_Params
{
	TArray<class AActor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.OnDropItemEvent
struct ACatSurvivorMinion_C_OnDropItemEvent_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.OnCollectItemEvent
struct ACatSurvivorMinion_C_OnCollectItemEvent_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.GetCurrentItemID
struct ACatSurvivorMinion_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.OnRep_bFlagPendingDestroy
struct ACatSurvivorMinion_C_OnRep_bFlagPendingDestroy_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Interact_K2Node_InputActionEvent_6
struct ACatSurvivorMinion_C_InpActEvt_Survivor_Interact_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_5
struct ACatSurvivorMinion_C_InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_4
struct ACatSurvivorMinion_C_InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_General_Ping_K2Node_InputActionEvent_3
struct ACatSurvivorMinion_C_InpActEvt_General_Ping_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_2
struct ACatSurvivorMinion_C_InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_1
struct ACatSurvivorMinion_C_InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.CollectItem
struct ACatSurvivorMinion_C_CollectItem_Params
{
	class APickableItemBase_C*                         Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.DropItem
struct ACatSurvivorMinion_C_DropItem_Params
{
	bool                                               DropItemOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.RemoveItem
struct ACatSurvivorMinion_C_RemoveItem_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ShowRespawnLocation
struct ACatSurvivorMinion_C_ShowRespawnLocation_Params
{
	bool                                               bIsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveBeginPlay
struct ACatSurvivorMinion_C_ReceiveBeginPlay_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceivePossessed
struct ACatSurvivorMinion_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.OwingInitInteract
struct ACatSurvivorMinion_C_OwingInitInteract_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.TryDestroySelf
struct ACatSurvivorMinion_C_TryDestroySelf_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.OnTakeDamaged
struct ACatSurvivorMinion_C_OnTakeDamaged_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveEndPlay
struct ACatSurvivorMinion_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_DropItem
struct ACatSurvivorMinion_C_Action_DropItem_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_Interact
struct ACatSurvivorMinion_C_Action_Interact_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_CancelBody
struct ACatSurvivorMinion_C_Action_CancelBody_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ServerDestroyBody
struct ACatSurvivorMinion_C_ServerDestroyBody_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_Ping
struct ACatSurvivorMinion_C_Action_Ping_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_PingEnemy
struct ACatSurvivorMinion_C_Action_PingEnemy_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_SkillCheck
struct ACatSurvivorMinion_C_Action_SkillCheck_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ACatSurvivorMinion_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
struct ACatSurvivorMinion_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
struct ACatSurvivorMinion_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
struct ACatSurvivorMinion_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.OnDamaged
struct ACatSurvivorMinion_C_OnDamaged_Params
{
	float                                              DamageAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       EffectGrantedTags;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ACatSurvivorMinion_C_BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ACatSurvivorMinion_C_BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.Interact
struct ACatSurvivorMinion_C_Interact_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ClientRotationToLocation
struct ACatSurvivorMinion_C_ClientRotationToLocation_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BaseRelativeLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ClientMoveTo
struct ACatSurvivorMinion_C_ClientMoveTo_Params
{
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRelativeRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.SnapToInteraction
struct ACatSurvivorMinion_C_SnapToInteraction_Params
{
	struct FVector                                     TargetRelativeLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRelativeRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetLookAtLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEaseOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEaseIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.MulticastCloseBodyBlock
struct ACatSurvivorMinion_C_MulticastCloseBodyBlock_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.SetMesh
struct ACatSurvivorMinion_C_SetMesh_Params
{
	bool                                               bCustomDepth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveTick
struct ACatSurvivorMinion_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ClientInteract
struct ACatSurvivorMinion_C_ClientInteract_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.SimulateNotifyFootStep
struct ACatSurvivorMinion_C_SimulateNotifyFootStep_Params
{
};

// Function CatSurvivorMinion.CatSurvivorMinion_C.ExecuteUbergraph_CatSurvivorMinion
struct ACatSurvivorMinion_C_ExecuteUbergraph_CatSurvivorMinion_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
