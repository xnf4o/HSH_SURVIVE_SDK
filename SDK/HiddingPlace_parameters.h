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

// Function HiddingPlace.HiddingPlace_C.GetDestructible
struct AHiddingPlace_C_GetDestructible_Params
{
	bool                                               Destructable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.OnRep_bIsDestroy
struct AHiddingPlace_C_OnRep_bIsDestroy_Params
{
};

// Function HiddingPlace.HiddingPlace_C.OnRep_HiddenSurvivor
struct AHiddingPlace_C_OnRep_HiddenSurvivor_Params
{
};

// Function HiddingPlace.HiddingPlace_C.GetSpriteIndicator
struct AHiddingPlace_C_GetSpriteIndicator_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Sprite;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.GetControlCameraActor
struct AHiddingPlace_C_GetControlCameraActor_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.GetInteractMontage
struct AHiddingPlace_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.InteractSnapLocation
struct AHiddingPlace_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.IsCanInteract
struct AHiddingPlace_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.UpdateAutoSkillCheck
struct AHiddingPlace_C_UpdateAutoSkillCheck_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.IsCanExitHidden
struct AHiddingPlace_C_IsCanExitHidden_Params
{
	bool                                               bIsCanInteract;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.GetCameraTransfrom
struct AHiddingPlace_C_GetCameraTransfrom_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.GetInteractSlateBrush
struct AHiddingPlace_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.PlayInnerAnimation
struct AHiddingPlace_C_PlayInnerAnimation_Params
{
	float                                              Lenght;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.PlayOuterAnimation
struct AHiddingPlace_C_PlayOuterAnimation_Params
{
	float                                              Lenght;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.Timeline_AudioVolume__FinishedFunc
struct AHiddingPlace_C_Timeline_AudioVolume__FinishedFunc_Params
{
};

// Function HiddingPlace.HiddingPlace_C.Timeline_AudioVolume__UpdateFunc
struct AHiddingPlace_C_Timeline_AudioVolume__UpdateFunc_Params
{
};

// Function HiddingPlace.HiddingPlace_C.OnHunterChangeHiddenState
struct AHiddingPlace_C_OnHunterChangeHiddenState_Params
{
	bool                                               InHiddenState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.OnCommitSkillCheck
struct AHiddingPlace_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.MulticastStartNewAudio
struct AHiddingPlace_C_MulticastStartNewAudio_Params
{
};

// Function HiddingPlace.HiddingPlace_C.DestroyedByHunter
struct AHiddingPlace_C_DestroyedByHunter_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               DestroyedBy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.SetDestructible
struct AHiddingPlace_C_SetDestructible_Params
{
	bool                                               Destructible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddingPlace.HiddingPlace_C.ServerPlayInnnerAnimation
struct AHiddingPlace_C_ServerPlayInnnerAnimation_Params
{
};

// Function HiddingPlace.HiddingPlace_C.MulticastPlayInnerAnimation
struct AHiddingPlace_C_MulticastPlayInnerAnimation_Params
{
};

// Function HiddingPlace.HiddingPlace_C.ServerPlayOuterAnimation
struct AHiddingPlace_C_ServerPlayOuterAnimation_Params
{
};

// Function HiddingPlace.HiddingPlace_C.MulticastPlayOuterAnimation
struct AHiddingPlace_C_MulticastPlayOuterAnimation_Params
{
};

// Function HiddingPlace.HiddingPlace_C.ServerDisableHideable
struct AHiddingPlace_C_ServerDisableHideable_Params
{
};

// Function HiddingPlace.HiddingPlace_C.MulticastDisableHideable
struct AHiddingPlace_C_MulticastDisableHideable_Params
{
};

// Function HiddingPlace.HiddingPlace_C.SetHiddenSurvivor
struct AHiddingPlace_C_SetHiddenSurvivor_Params
{
	class ASurvivorBase_C*                             HiddenSurvivor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.ShowTutorial
struct AHiddingPlace_C_ShowTutorial_Params
{
};

// Function HiddingPlace.HiddingPlace_C.BndEvt__BoxTutorial_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AHiddingPlace_C_BndEvt__BoxTutorial_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HiddingPlace.HiddingPlace_C.Interaction
struct AHiddingPlace_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.ReceiveTick
struct AHiddingPlace_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.ReceiveBeginPlay
struct AHiddingPlace_C_ReceiveBeginPlay_Params
{
};

// Function HiddingPlace.HiddingPlace_C.SpawnDestructAnimation
struct AHiddingPlace_C_SpawnDestructAnimation_Params
{
};

// Function HiddingPlace.HiddingPlace_C.CommitCooldown
struct AHiddingPlace_C_CommitCooldown_Params
{
};

// Function HiddingPlace.HiddingPlace_C.DestroyThis
struct AHiddingPlace_C_DestroyThis_Params
{
};

// Function HiddingPlace.HiddingPlace_C.ExecuteUbergraph_HiddingPlace
struct AHiddingPlace_C_ExecuteUbergraph_HiddingPlace_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddingPlace.HiddingPlace_C.OnOuterAnimationFinish__DelegateSignature
struct AHiddingPlace_C_OnOuterAnimationFinish__DelegateSignature_Params
{
};

// Function HiddingPlace.HiddingPlace_C.OnInnerAnimationFinish__DelegateSignature
struct AHiddingPlace_C_OnInnerAnimationFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
