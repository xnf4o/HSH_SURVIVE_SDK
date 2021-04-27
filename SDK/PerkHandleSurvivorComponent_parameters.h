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

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomRitual
struct UPerkHandleSurvivorComponent_C_RandomRitual_Params
{
	TArray<class ARitual_ReleaseGhost_C*>              Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ARitual_ReleaseGhost_C*                      Array_Element;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomObjectiveChest
struct UPerkHandleSurvivorComponent_C_RandomObjectiveChest_Params
{
	TArray<class AItemChest_C*>                        Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AItemChest_C*                                Array_Element;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetObjectiveChest
struct UPerkHandleSurvivorComponent_C_GetObjectiveChest_Params
{
	TArray<class AItemChest_C*>                        Chest;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.SixSenseScan
struct UPerkHandleSurvivorComponent_C_SixSenseScan_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetRespawnCooldown
struct UPerkHandleSurvivorComponent_C_GetRespawnCooldown_Params
{
	struct FGameplayTagContainer                       Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnBareHand
struct UPerkHandleSurvivorComponent_C_CheckSpawnBareHand_Params
{
	struct FS_Pickable                                 PickItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReturn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCat
struct UPerkHandleSurvivorComponent_C_CheckSpawnCat_Params
{
	struct FS_Pickable                                 PickItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReturn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.TimerHandEmptyReset
struct UPerkHandleSurvivorComponent_C_TimerHandEmptyReset_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.TimerHandEmptyCheck
struct UPerkHandleSurvivorComponent_C_TimerHandEmptyCheck_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckIsPerkItem
struct UPerkHandleSurvivorComponent_C_CheckIsPerkItem_Params
{
	struct FPrimaryAssetId                             ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckUsingItem
struct UPerkHandleSurvivorComponent_C_CheckUsingItem_Params
{
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckHaveItem
struct UPerkHandleSurvivorComponent_C_CheckHaveItem_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetSpawnData
struct UPerkHandleSurvivorComponent_C_GetSpawnData_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Pickable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             ItemId;                                                    // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GameplayEffect;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.SpawnCollect
struct UPerkHandleSurvivorComponent_C_SpawnCollect_Params
{
	class UClass*                                      PickableClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GameplayEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnDrop
struct UPerkHandleSurvivorComponent_C_CheckSpawnDrop_Params
{
	struct FS_Pickable                                 PickItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               bReturn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCamera
struct UPerkHandleSurvivorComponent_C_CheckSpawnCamera_Params
{
	struct FS_Pickable                                 PickItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReturn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnDagger
struct UPerkHandleSurvivorComponent_C_CheckSpawnDagger_Params
{
	struct FS_Pickable                                 PickItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReturn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCollect
struct UPerkHandleSurvivorComponent_C_CheckSpawnCollect_Params
{
	struct FS_Pickable                                 PickItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReturn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.IsCanSpawn
struct UPerkHandleSurvivorComponent_C_IsCanSpawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	float                                              TimeRemaining;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.IsCharacterCanMove
struct UPerkHandleSurvivorComponent_C_IsCharacterCanMove_Params
{
	bool                                               CanMove_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StartSixSenseCounting
struct UPerkHandleSurvivorComponent_C_StartSixSenseCounting_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StopSixSenseCounting
struct UPerkHandleSurvivorComponent_C_StopSixSenseCounting_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnStartStartSixSenseCounting
struct UPerkHandleSurvivorComponent_C_OnStartStartSixSenseCounting_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnStopSixSenseCounting
struct UPerkHandleSurvivorComponent_C_OnStopSixSenseCounting_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CallWeaknessDetector
struct UPerkHandleSurvivorComponent_C_CallWeaknessDetector_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CloseWeaknessDetector
struct UPerkHandleSurvivorComponent_C_CloseWeaknessDetector_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StartWeaknessDetector
struct UPerkHandleSurvivorComponent_C_StartWeaknessDetector_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StopWeaknessDetector
struct UPerkHandleSurvivorComponent_C_StopWeaknessDetector_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ApplyWeaknessDetecorCooldown
struct UPerkHandleSurvivorComponent_C_ApplyWeaknessDetecorCooldown_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnChestOpened
struct UPerkHandleSurvivorComponent_C_OnChestOpened_Params
{
	class AItemChest_C*                                Chest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnPlaceItem
struct UPerkHandleSurvivorComponent_C_OnPlaceItem_Params
{
	class ARitualBase_C*                               Ritual;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomShowRitual
struct UPerkHandleSurvivorComponent_C_RandomShowRitual_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomShowObjectiveChest
struct UPerkHandleSurvivorComponent_C_RandomShowObjectiveChest_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnShowSoundIcon
struct UPerkHandleSurvivorComponent_C_OnShowSoundIcon_Params
{
	struct FPerkHandleData                             Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AHSHCharacterBase*>                   Characters;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ServerHandle
struct UPerkHandleSurvivorComponent_C_ServerHandle_Params
{
	struct FGameplayTag                                Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FPerkHandleData                             Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AHSHCharacterBase*>                   Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnFindCharactersWithTag
struct UPerkHandleSurvivorComponent_C_OnFindCharactersWithTag_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FPerkHandleData                             Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AHSHCharacterBase*>                   Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckonDamaged
struct UPerkHandleSurvivorComponent_C_CheckonDamaged_Params
{
	struct FPerkHandleData                             Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       GE_TagContainer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ShowHunterAura
struct UPerkHandleSurvivorComponent_C_ShowHunterAura_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.MulticastShowHunterAura
struct UPerkHandleSurvivorComponent_C_MulticastShowHunterAura_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.FindAllCharacter
struct UPerkHandleSurvivorComponent_C_FindAllCharacter_Params
{
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ReceiveTick
struct UPerkHandleSurvivorComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ExecuteUbergraph_PerkHandleSurvivorComponent
struct UPerkHandleSurvivorComponent_C_ExecuteUbergraph_PerkHandleSurvivorComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
