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

// Function TeleportBase.TeleportBase_C.OnRep_IsSpawned
struct ATeleportBase_C_OnRep_IsSpawned_Params
{
};

// Function TeleportBase.TeleportBase_C.CanUseProgress
struct ATeleportBase_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.GetInteractMontage
struct ATeleportBase_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.IsPlayerHaveSoul
struct ATeleportBase_C_IsPlayerHaveSoul_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.InteractSnapLocation
struct ATeleportBase_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.GetSpawnTransform
struct ATeleportBase_C_GetSpawnTransform_Params
{
	TArray<class ASpawnTargetActor_C*>                 SpawnTargetActors;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.UpdateIndicator
struct ATeleportBase_C_UpdateIndicator_Params
{
};

// Function TeleportBase.TeleportBase_C.GetInteractSlateBrush
struct ATeleportBase_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.IsResetResult?
struct ATeleportBase_C_IsResetResult__Params
{
	bool                                               IsReset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.IsCanSkillCheck?
struct ATeleportBase_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.GetSpeedSkillCheck
struct ATeleportBase_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.IsCanHelp?
struct ATeleportBase_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.GetProgressTime
struct ATeleportBase_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.GetTargetTransform
struct ATeleportBase_C_GetTargetTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.GetNearCenterOfCamera
struct ATeleportBase_C_GetNearCenterOfCamera_Params
{
	class UCameraComponent*                            Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.UserConstructionScript
struct ATeleportBase_C_UserConstructionScript_Params
{
};

// Function TeleportBase.TeleportBase_C.Timeline_0__FinishedFunc
struct ATeleportBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function TeleportBase.TeleportBase_C.Timeline_0__UpdateFunc
struct ATeleportBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function TeleportBase.TeleportBase_C.MultiCastResurrectSound
struct ATeleportBase_C_MultiCastResurrectSound_Params
{
};

// Function TeleportBase.TeleportBase_C.Interaction
struct ATeleportBase_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.OnInteraction
struct ATeleportBase_C_OnInteraction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.OnFinishProgress
struct ATeleportBase_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.MulticastDisable
struct ATeleportBase_C_MulticastDisable_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.OnFinish
struct ATeleportBase_C_OnFinish_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.ShowIndicator
struct ATeleportBase_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.HideIndicator
struct ATeleportBase_C_HideIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.SpriteChangeOnShow
struct ATeleportBase_C_SpriteChangeOnShow_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.DissolveAndDestroy
struct ATeleportBase_C_DissolveAndDestroy_Params
{
};

// Function TeleportBase.TeleportBase_C.DisableLight
struct ATeleportBase_C_DisableLight_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.OnStopProgress
struct ATeleportBase_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.ReceiveBeginPlay
struct ATeleportBase_C_ReceiveBeginPlay_Params
{
};

// Function TeleportBase.TeleportBase_C.ShowOutlineOnPickSoul
struct ATeleportBase_C_ShowOutlineOnPickSoul_Params
{
	bool                                               bIsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TeleportBase.TeleportBase_C.ExecuteUbergraph_TeleportBase
struct ATeleportBase_C_ExecuteUbergraph_TeleportBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportBase.TeleportBase_C.OnRespawn__DelegateSignature
struct ATeleportBase_C_OnRespawn__DelegateSignature_Params
{
};

// Function TeleportBase.TeleportBase_C.SearchTeleport__DelegateSignature
struct ATeleportBase_C_SearchTeleport__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
