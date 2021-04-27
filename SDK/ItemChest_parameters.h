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

// Function ItemChest.ItemChest_C.ThisIsTeam
struct AItemChest_C_ThisIsTeam_Params
{
	TEnumAsByte<E_PlayerTeam_E_PlayerTeam>             IsTeam;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.IsActivate?
struct AItemChest_C_IsActivate__Params
{
	bool                                               IsActivate_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.OnRep_bIsProgressSoundPlayed
struct AItemChest_C_OnRep_bIsProgressSoundPlayed_Params
{
};

// Function ItemChest.ItemChest_C.DestroyRedrope
struct AItemChest_C_DestroyRedrope_Params
{
};

// Function ItemChest.ItemChest_C.IsChestOpen?
struct AItemChest_C_IsChestOpen__Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.OnRep_bLockChest
struct AItemChest_C_OnRep_bLockChest_Params
{
};

// Function ItemChest.ItemChest_C.OnRep_bChestOpen
struct AItemChest_C_OnRep_bChestOpen_Params
{
};

// Function ItemChest.ItemChest_C.IsCanInteract
struct AItemChest_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.InteractSnapLocation
struct AItemChest_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.CanUseProgress
struct AItemChest_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.GetSpeedSkillCheck
struct AItemChest_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.IsCanSkillCheck?
struct AItemChest_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.IsCanHelp?
struct AItemChest_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.GetProgressTime
struct AItemChest_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OnRep_ItemDrop
struct AItemChest_C_OnRep_ItemDrop_Params
{
};

// Function ItemChest.ItemChest_C.SpawnItem
struct AItemChest_C_SpawnItem_Params
{
	struct FPrimaryAssetId                             ItemInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SpawnedItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.RandomItemFromChest
struct AItemChest_C_RandomItemFromChest_Params
{
	struct FPrimaryAssetId                             ItemInfo;                                                  // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.UserConstructionScript
struct AItemChest_C_UserConstructionScript_Params
{
};

// Function ItemChest.ItemChest_C.Activate
struct AItemChest_C_Activate_Params
{
};

// Function ItemChest.ItemChest_C.Deactivate
struct AItemChest_C_Deactivate_Params
{
};

// Function ItemChest.ItemChest_C.ServerSetProgressChestSound
struct AItemChest_C_ServerSetProgressChestSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.MultiCastOpenChestSound
struct AItemChest_C_MultiCastOpenChestSound_Params
{
};

// Function ItemChest.ItemChest_C.ProgressChestSound
struct AItemChest_C_ProgressChestSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.ServerCloseChest
struct AItemChest_C_ServerCloseChest_Params
{
};

// Function ItemChest.ItemChest_C.MulticastCloseChest
struct AItemChest_C_MulticastCloseChest_Params
{
};

// Function ItemChest.ItemChest_C.ReceiveBeginPlay
struct AItemChest_C_ReceiveBeginPlay_Params
{
};

// Function ItemChest.ItemChest_C.ServerOpenChest
struct AItemChest_C_ServerOpenChest_Params
{
};

// Function ItemChest.ItemChest_C.MulticastOpenChest
struct AItemChest_C_MulticastOpenChest_Params
{
};

// Function ItemChest.ItemChest_C.RespawnChest
struct AItemChest_C_RespawnChest_Params
{
};

// Function ItemChest.ItemChest_C.OnDestroy
struct AItemChest_C_OnDestroy_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.BindDestroyEvent
struct AItemChest_C_BindDestroyEvent_Params
{
};

// Function ItemChest.ItemChest_C.OnStopProgress
struct AItemChest_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OnFinishProgress
struct AItemChest_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.ServerLockChest
struct AItemChest_C_ServerLockChest_Params
{
};

// Function ItemChest.ItemChest_C.ServerUnlockChest
struct AItemChest_C_ServerUnlockChest_Params
{
};

// Function ItemChest.ItemChest_C.Interaction
struct AItemChest_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OnInteraction
struct AItemChest_C_OnInteraction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OnCannotProgress
struct AItemChest_C_OnCannotProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OnStopSearchChest
struct AItemChest_C_OnStopSearchChest_Params
{
	class ASurvivorBase_C*                             SurvivorBase;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OnFinishSearchChestWithSurvivor
struct AItemChest_C_OnFinishSearchChestWithSurvivor_Params
{
	class ASurvivorBase_C*                             SurvivorBase;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OpenChestNotRespawn
struct AItemChest_C_OpenChestNotRespawn_Params
{
};

// Function ItemChest.ItemChest_C.CloseChest
struct AItemChest_C_CloseChest_Params
{
};

// Function ItemChest.ItemChest_C.OpenChest
struct AItemChest_C_OpenChest_Params
{
};

// Function ItemChest.ItemChest_C.OnCommitSkillCheck
struct AItemChest_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.MulticastSpawnParticle
struct AItemChest_C_MulticastSpawnParticle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Engine_EPSCPoolMethod                              PoolingMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.ReceiveDestroyed
struct AItemChest_C_ReceiveDestroyed_Params
{
};

// Function ItemChest.ItemChest_C.SetOutlineCustomSencilValue
struct AItemChest_C_SetOutlineCustomSencilValue_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.SetOutlineVisible
struct AItemChest_C_SetOutlineVisible_Params
{
	bool                                               bValue;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemChest.ItemChest_C.CheckDropPoint
struct AItemChest_C_CheckDropPoint_Params
{
};

// Function ItemChest.ItemChest_C.ExecuteUbergraph_ItemChest
struct AItemChest_C_ExecuteUbergraph_ItemChest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemChest.ItemChest_C.OnChestOpen__DelegateSignature
struct AItemChest_C_OnChestOpen__DelegateSignature_Params
{
	class AItemChest_C*                                Chest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
