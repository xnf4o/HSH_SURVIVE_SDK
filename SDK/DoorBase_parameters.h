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

// Function DoorBase.DoorBase_C.GetDestructible
struct ADoorBase_C_GetDestructible_Params
{
	bool                                               Destructable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.SetDoorChannel
struct ADoorBase_C_SetDoorChannel_Params
{
	TArray<class USceneComponent*>                     SceneComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.SetDoorCollision
struct ADoorBase_C_SetDoorCollision_Params
{
	TArray<class USceneComponent*>                     SceneComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Engine_ECollisionEnabled>              NewType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.SetDither
struct ADoorBase_C_SetDither_Params
{
	TArray<class USceneComponent*>                     SceneComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.SetCollisionMesh
struct ADoorBase_C_SetCollisionMesh_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.OnRep_bIsCollisionEnable
struct ADoorBase_C_OnRep_bIsCollisionEnable_Params
{
};

// Function DoorBase.DoorBase_C.HunterCheckDoorAttack
struct ADoorBase_C_HunterCheckDoorAttack_Params
{
	class AActor*                                      hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.SurvivorCheckDoorAttack
struct ADoorBase_C_SurvivorCheckDoorAttack_Params
{
	class AActor*                                      survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.InteractSnapLocation
struct ADoorBase_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.IsCanInteract
struct ADoorBase_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.CanInteraction?
struct ADoorBase_C_CanInteraction__Params
{
	bool                                               Can_;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.OnCloseDoorSuccess
struct ADoorBase_C_OnCloseDoorSuccess_Params
{
};

// Function DoorBase.DoorBase_C.OnOpenDoorSuccess
struct ADoorBase_C_OnOpenDoorSuccess_Params
{
};

// Function DoorBase.DoorBase_C.GetInteractMontage
struct ADoorBase_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.GetInteractSlateBrush
struct ADoorBase_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.OnRep_State
struct ADoorBase_C_OnRep_State_Params
{
};

// Function DoorBase.DoorBase_C.UpdateDoorRotation
struct ADoorBase_C_UpdateDoorRotation_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.InverseXAxis
struct ADoorBase_C_InverseXAxis_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.IsObjectReverse
struct ADoorBase_C_IsObjectReverse_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.UpdateOpenDoor
struct ADoorBase_C_UpdateOpenDoor_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.UpdateCloseDoor
struct ADoorBase_C_UpdateCloseDoor_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.OnRep_Alpha
struct ADoorBase_C_OnRep_Alpha_Params
{
};

// Function DoorBase.DoorBase_C.UserConstructionScript
struct ADoorBase_C_UserConstructionScript_Params
{
};

// Function DoorBase.DoorBase_C.SetDestructible
struct ADoorBase_C_SetDestructible_Params
{
	bool                                               Destructible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.MulticastSpawnParticle
struct ADoorBase_C_MulticastSpawnParticle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Engine_EPSCPoolMethod                              PoolingMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.BndEvt__Dooractor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ADoorBase_C_BndEvt__Dooractor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function DoorBase.DoorBase_C.OnHunterChangeHiddenState
struct ADoorBase_C_OnHunterChangeHiddenState_Params
{
	bool                                               InHiddenState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.ForceDisableUI
struct ADoorBase_C_ForceDisableUI_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.ForceEnableUI
struct ADoorBase_C_ForceEnableUI_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.PlayOnOpening
struct ADoorBase_C_PlayOnOpening_Params
{
};

// Function DoorBase.DoorBase_C.PlayOnOpenSuccess
struct ADoorBase_C_PlayOnOpenSuccess_Params
{
};

// Function DoorBase.DoorBase_C.PlayOnClosing
struct ADoorBase_C_PlayOnClosing_Params
{
};

// Function DoorBase.DoorBase_C.PlayOnCloseSuccess
struct ADoorBase_C_PlayOnCloseSuccess_Params
{
};

// Function DoorBase.DoorBase_C.PlayAudio
struct ADoorBase_C_PlayAudio_Params
{
	class USoundBase*                                  NewSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.Interaction
struct ADoorBase_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.OnInteraction
struct ADoorBase_C_OnInteraction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.DoorOpen
struct ADoorBase_C_DoorOpen_Params
{
	class AHSHCharacterBase*                           CacheCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.DoorClose
struct ADoorBase_C_DoorClose_Params
{
	class AHSHCharacterBase*                           CacheCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.ReceiveTick
struct ADoorBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.EnableCollision
struct ADoorBase_C_EnableCollision_Params
{
};

// Function DoorBase.DoorBase_C.DisableCollision
struct ADoorBase_C_DisableCollision_Params
{
};

// Function DoorBase.DoorBase_C.ReceiveBeginPlay
struct ADoorBase_C_ReceiveBeginPlay_Params
{
};

// Function DoorBase.DoorBase_C.ShowOutline
struct ADoorBase_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.HideOutline
struct ADoorBase_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.DestroyedByHunter
struct ADoorBase_C_DestroyedByHunter_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               DestroyedBy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.MulticastBreakDoorSound
struct ADoorBase_C_MulticastBreakDoorSound_Params
{
};

// Function DoorBase.DoorBase_C.OnOpenSuccess
struct ADoorBase_C_OnOpenSuccess_Params
{
};

// Function DoorBase.DoorBase_C.OnCloseSuccess
struct ADoorBase_C_OnCloseSuccess_Params
{
};

// Function DoorBase.DoorBase_C.SpriteChangeOnShow
struct ADoorBase_C_SpriteChangeOnShow_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.SpawnDestructMesh
struct ADoorBase_C_SpawnDestructMesh_Params
{
	class ACharacter*                                  Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.ApplyDamageToDestructMesh
struct ADoorBase_C_ApplyDamageToDestructMesh_Params
{
	class ACharacter*                                  Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.SpawnDestructAnimation
struct ADoorBase_C_SpawnDestructAnimation_Params
{
	bool                                               IsReverse;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoorBase.DoorBase_C.DestroyDoor
struct ADoorBase_C_DestroyDoor_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.TryCheckEnableCollision
struct ADoorBase_C_TryCheckEnableCollision_Params
{
};

// Function DoorBase.DoorBase_C.ExecuteUbergraph_DoorBase
struct ADoorBase_C_ExecuteUbergraph_DoorBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoorBase.DoorBase_C.OnSurvivorDoorStun__DelegateSignature
struct ADoorBase_C_OnSurvivorDoorStun__DelegateSignature_Params
{
};

// Function DoorBase.DoorBase_C.OnHunterDoorStun__DelegateSignature
struct ADoorBase_C_OnHunterDoorStun__DelegateSignature_Params
{
};

// Function DoorBase.DoorBase_C.OnOpenDoor__DelegateSignature
struct ADoorBase_C_OnOpenDoor__DelegateSignature_Params
{
};

// Function DoorBase.DoorBase_C.OnCloseDoor__DelegateSignature
struct ADoorBase_C_OnCloseDoor__DelegateSignature_Params
{
};

// Function DoorBase.DoorBase_C.OnDestroy__DelegateSignature
struct ADoorBase_C_OnDestroy__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
