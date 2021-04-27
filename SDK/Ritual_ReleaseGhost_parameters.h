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

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnRep_State
struct ARitual_ReleaseGhost_C_OnRep_State_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnRep_bIsPrayingSoundActive
struct ARitual_ReleaseGhost_C_OnRep_bIsPrayingSoundActive_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCenterCharacter
struct ARitual_ReleaseGhost_C_IsCenterCharacter_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetPlaceIndex
struct ARitual_ReleaseGhost_C_GetPlaceIndex_Params
{
	struct FPrimaryAssetId                             Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCanSkillCheck?
struct ARitual_ReleaseGhost_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCanInteract
struct ARitual_ReleaseGhost_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsLockCameraOnFinish
struct ARitual_ReleaseGhost_C_IsLockCameraOnFinish_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetPingText
struct ARitual_ReleaseGhost_C_GetPingText_Params
{
	struct FText                                       PingText;                                                  // (Parm, OutParm)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetProgressTime
struct ARitual_ReleaseGhost_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetInteractMontage
struct ARitual_ReleaseGhost_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetSnapIKLocation
struct ARitual_ReleaseGhost_C_GetSnapIKLocation_Params
{
	bool                                               bIsSnap;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Enum_IKHand_Enum_IKHand>               IKTarget;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IKRight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IKLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetInteractSlateBrush
struct ARitual_ReleaseGhost_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaceItem
struct ARitual_ReleaseGhost_C_PlaceItem_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.CheckPlaceItem
struct ARitual_ReleaseGhost_C_CheckPlaceItem_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_1__FinishedFunc
struct ARitual_ReleaseGhost_C_Timeline_1__FinishedFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_1__UpdateFunc
struct ARitual_ReleaseGhost_C_Timeline_1__UpdateFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_2__FinishedFunc
struct ARitual_ReleaseGhost_C_Timeline_2__FinishedFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_2__UpdateFunc
struct ARitual_ReleaseGhost_C_Timeline_2__UpdateFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallenGhost__FinishedFunc
struct ARitual_ReleaseGhost_C_FallenGhost__FinishedFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallenGhost__UpdateFunc
struct ARitual_ReleaseGhost_C_FallenGhost__UpdateFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_3__FinishedFunc
struct ARitual_ReleaseGhost_C_Timeline_3__FinishedFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_3__UpdateFunc
struct ARitual_ReleaseGhost_C_Timeline_3__UpdateFunc_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Hunter Play UISound
struct ARitual_ReleaseGhost_C_Hunter_Play_UISound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MultiCastAllPlayerUISound
struct ARitual_ReleaseGhost_C_MultiCastAllPlayerUISound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastLoopSound
struct ARitual_ReleaseGhost_C_MulticastLoopSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAudioComponent*                             Audio;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutDuration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.LoopSound
struct ARitual_ReleaseGhost_C_LoopSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAudioComponent*                             Audio;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutDuration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnFinishEvent
struct ARitual_ReleaseGhost_C_OnFinishEvent_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ReceiveBeginPlay
struct ARitual_ReleaseGhost_C_ReceiveBeginPlay_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnPlaceEachItem
struct ARitual_ReleaseGhost_C_OnPlaceEachItem_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SetOutlineVisible
struct ARitual_ReleaseGhost_C_SetOutlineVisible_Params
{
	bool                                               bValue;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SpawnRitualEffect
struct ARitual_ReleaseGhost_C_SpawnRitualEffect_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ApplyEffectToActor
struct ARitual_ReleaseGhost_C_ApplyEffectToActor_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnOverlapHunter
struct ARitual_ReleaseGhost_C_OnOverlapHunter_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SetOutlineCustomSencilValue
struct ARitual_ReleaseGhost_C_SetOutlineCustomSencilValue_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MultiCastChangePlaceItemState
struct ARitual_ReleaseGhost_C_MultiCastChangePlaceItemState_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.BndEvt__Tutorial_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ARitual_ReleaseGhost_C_BndEvt__Tutorial_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaySoundEffect
struct ARitual_ReleaseGhost_C_PlaySoundEffect_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastToggleVisibilityOnFinished
struct ARitual_ReleaseGhost_C_MulticastToggleVisibilityOnFinished_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ReceiveDestroyed
struct ARitual_ReleaseGhost_C_ReceiveDestroyed_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.DisableRitual
struct ARitual_ReleaseGhost_C_DisableRitual_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallingGhost
struct ARitual_ReleaseGhost_C_FallingGhost_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaySoundDone
struct ARitual_ReleaseGhost_C_PlaySoundDone_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastPlaceNail
struct ARitual_ReleaseGhost_C_MulticastPlaceNail_Params
{
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnStartProgressAction
struct ARitual_ReleaseGhost_C_OnStartProgressAction_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnFinishProgress
struct ARitual_ReleaseGhost_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnStopProgress
struct ARitual_ReleaseGhost_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.UpdateIndicator
struct ARitual_ReleaseGhost_C_UpdateIndicator_Params
{
	class AActor*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnCommitSkillCheck
struct ARitual_ReleaseGhost_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastFilterSurvivorPraying
struct ARitual_ReleaseGhost_C_MulticastFilterSurvivorPraying_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ChangePlaceItemState
struct ARitual_ReleaseGhost_C_ChangePlaceItemState_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ExecuteUbergraph_Ritual_ReleaseGhost
struct ARitual_ReleaseGhost_C_ExecuteUbergraph_Ritual_ReleaseGhost_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
