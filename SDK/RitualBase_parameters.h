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

// Function RitualBase.RitualBase_C.OnRep_PrimaryItemID
struct ARitualBase_C_OnRep_PrimaryItemID_Params
{
};

// Function RitualBase.RitualBase_C.IsHaveAnyItemsPlace
struct ARitualBase_C_IsHaveAnyItemsPlace_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.OnRep_IsEnable
struct ARitualBase_C_OnRep_IsEnable_Params
{
};

// Function RitualBase.RitualBase_C.AssignID
struct ARitualBase_C_AssignID_Params
{
	int                                                PlayerId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAssignSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.FindEmptySlot
struct ARitualBase_C_FindEmptySlot_Params
{
	TArray<int>                                        Result;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function RitualBase.RitualBase_C.RemoveID
struct ARitualBase_C_RemoveID_Params
{
	int                                                Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.NearestLocation
struct ARitualBase_C_NearestLocation_Params
{
	TArray<int>                                        Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EmptyIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.LocationList
struct ARitualBase_C_LocationList_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapLocation;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnRep_bPlayerInteract
struct ARitualBase_C_OnRep_bPlayerInteract_Params
{
};

// Function RitualBase.RitualBase_C.RemovePing
struct ARitualBase_C_RemovePing_Params
{
};

// Function RitualBase.RitualBase_C.GetPingText
struct ARitualBase_C_GetPingText_Params
{
	struct FText                                       PingText;                                                  // (Parm, OutParm)
};

// Function RitualBase.RitualBase_C.IsCanInteract
struct ARitualBase_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.CanUseProgress
struct ARitualBase_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.GetNextPlaceitem
struct ARitualBase_C_GetNextPlaceitem_Params
{
	bool                                               bIsComplete;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.InteractSnapLocation
struct ARitualBase_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.GetInteractMontage
struct ARitualBase_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.UpdateIndicator
struct ARitualBase_C_UpdateIndicator_Params
{
	class AActor*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.TryGetGameState
struct ARitualBase_C_TryGetGameState_Params
{
	class AHSURGameState_C*                            GameState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.GetInteractSlateBrush
struct ARitualBase_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.IsResetResult?
struct ARitualBase_C_IsResetResult__Params
{
	bool                                               IsReset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.IsCanSkillCheck?
struct ARitualBase_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.GetSpeedSkillCheck
struct ARitualBase_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.IsCanHelp?
struct ARitualBase_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.GetProgressTime
struct ARitualBase_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.PlaceItem
struct ARitualBase_C_PlaceItem_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.IsCanCeremony
struct ARitualBase_C_IsCanCeremony_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualBase.RitualBase_C.CheckPlaceItem
struct ARitualBase_C_CheckPlaceItem_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.UserConstructionScript
struct ARitualBase_C_UserConstructionScript_Params
{
};

// Function RitualBase.RitualBase_C.ShowOutline
struct ARitualBase_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.HideOutline
struct ARitualBase_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.ShowIndicator
struct ARitualBase_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.HideIndicator
struct ARitualBase_C_HideIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.Interaction
struct ARitualBase_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnFinishProgress
struct ARitualBase_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnFinishEvent
struct ARitualBase_C_OnFinishEvent_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.MulticastDisableRitual
struct ARitualBase_C_MulticastDisableRitual_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnInteraction
struct ARitualBase_C_OnInteraction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.ReceiveTick
struct ARitualBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.ReceiveBeginPlay
struct ARitualBase_C_ReceiveBeginPlay_Params
{
};

// Function RitualBase.RitualBase_C.DisableRitual
struct ARitualBase_C_DisableRitual_Params
{
};

// Function RitualBase.RitualBase_C.OnRitualCompleteAchievement
struct ARitualBase_C_OnRitualCompleteAchievement_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnStopProgress
struct ARitualBase_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.MulticastSpawnParticle
struct ARitualBase_C_MulticastSpawnParticle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Engine_EPSCPoolMethod                              PoolingMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnOtherFinishEvent
struct ARitualBase_C_OnOtherFinishEvent_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.ExecuteUbergraph_RitualBase
struct ARitualBase_C_ExecuteUbergraph_RitualBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnRepItemID__DelegateSignature
struct ARitualBase_C_OnRepItemID__DelegateSignature_Params
{
	class ARitualBase_C*                               Ritual;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnInteract__DelegateSignature
struct ARitualBase_C_OnInteract__DelegateSignature_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualBase.RitualBase_C.OnPerfromSuccess__DelegateSignature
struct ARitualBase_C_OnPerfromSuccess__DelegateSignature_Params
{
};

// Function RitualBase.RitualBase_C.OnPlaceItem__DelegateSignature
struct ARitualBase_C_OnPlaceItem__DelegateSignature_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
