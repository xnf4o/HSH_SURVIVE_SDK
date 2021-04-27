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

// Function GameStatisticComponent.GameStatisticComponent_C.AddRitualContribution
struct UGameStatisticComponent_C_AddRitualContribution_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.TryGetPlayerStatisticByID
struct UGameStatisticComponent_C_TryGetPlayerStatisticByID_Params
{
	struct FString                                     GameSparkID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FS_GameStatistic                            PlayerStatistic;                                           // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddUseActivePerk
struct UGameStatisticComponent_C_AddUseActivePerk_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.GetItemUsedCount
struct UGameStatisticComponent_C_GetItemUsedCount_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.GetRitualItemPlacedCount
struct UGameStatisticComponent_C_GetRitualItemPlacedCount_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddRemainingHP
struct UGameStatisticComponent_C_AddRemainingHP_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddRitualComplete
struct UGameStatisticComponent_C_AddRitualComplete_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.GetData
struct UGameStatisticComponent_C_GetData_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_GameStatistic                            Output;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.GetRemainingHP
struct UGameStatisticComponent_C_GetRemainingHP_Params
{
	class AHSHCharacterBase*                           Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddGameResult
struct UGameStatisticComponent_C_AddGameResult_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddLeaveGame
struct UGameStatisticComponent_C_AddLeaveGame_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddKillCount
struct UGameStatisticComponent_C_AddKillCount_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.totalSurvivorHp
struct UGameStatisticComponent_C_totalSurvivorHp_Params
{
	float                                              ReturnTotalHP;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageTrapReceive
struct UGameStatisticComponent_C_AddDamageTrapReceive_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageTrapDone
struct UGameStatisticComponent_C_AddDamageTrapDone_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddDeathCount
struct UGameStatisticComponent_C_AddDeathCount_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.CreateData
struct UGameStatisticComponent_C_CreateData_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddDestroyedEnvirment
struct UGameStatisticComponent_C_AddDestroyedEnvirment_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHaveSurvivor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddResurrectPlayer
struct UGameStatisticComponent_C_AddResurrectPlayer_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddPerfectSuccess
struct UGameStatisticComponent_C_AddPerfectSuccess_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageReceive
struct UGameStatisticComponent_C_AddDamageReceive_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageDone
struct UGameStatisticComponent_C_AddDamageDone_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.GetCeremonyActor
struct UGameStatisticComponent_C_GetCeremonyActor_Params
{
	class UClass*                                      CeremonyClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ARitualBase_C*>                       OutActors;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddCarryItem
struct UGameStatisticComponent_C_AddCarryItem_Params
{
	class AController*                                 Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.EndCloseEnemy
struct UGameStatisticComponent_C_EndCloseEnemy_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.EndHealthFull
struct UGameStatisticComponent_C_EndHealthFull_Params
{
	class AController*                                 Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.BeginHealthFull
struct UGameStatisticComponent_C_BeginHealthFull_Params
{
	class AController*                                 Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.BeginCloseEnemy
struct UGameStatisticComponent_C_BeginCloseEnemy_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddCloseEnemy
struct UGameStatisticComponent_C_AddCloseEnemy_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddPlayerHPFull
struct UGameStatisticComponent_C_AddPlayerHPFull_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddRevivePlayer
struct UGameStatisticComponent_C_AddRevivePlayer_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.DebugPrintListWithController
struct UGameStatisticComponent_C_DebugPrintListWithController_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebugTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddOpenChest
struct UGameStatisticComponent_C_AddOpenChest_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddPingEnemy
struct UGameStatisticComponent_C_AddPingEnemy_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddItemEmpty
struct UGameStatisticComponent_C_AddItemEmpty_Params
{
	class AController*                                 Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddItemSuccess
struct UGameStatisticComponent_C_AddItemSuccess_Params
{
	class AController*                                 Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.DebugPrintList
struct UGameStatisticComponent_C_DebugPrintList_Params
{
	float                                              DebugTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.FindAssetID
struct UGameStatisticComponent_C_FindAssetID_Params
{
	struct FPrimaryAssetId                             ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PrimaryAssetsIDCount>             Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PrimaryAssetsIDCount                     FoundID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.AddItemUsed
struct UGameStatisticComponent_C_AddItemUsed_Params
{
	class AController*                                 Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.TryGetPlayerStatistic
struct UGameStatisticComponent_C_TryGetPlayerStatistic_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_GameStatistic                            PlayerStatistic;                                           // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.Initialize
struct UGameStatisticComponent_C_Initialize_Params
{
};

// Function GameStatisticComponent.GameStatisticComponent_C.ReceiveTick
struct UGameStatisticComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.OnStatisticUpdate_Event
struct UGameStatisticComponent_C_OnStatisticUpdate_Event_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.ExecuteUbergraph_GameStatisticComponent
struct UGameStatisticComponent_C_ExecuteUbergraph_GameStatisticComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameStatisticComponent.GameStatisticComponent_C.OnStatisticUpdate__DelegateSignature
struct UGameStatisticComponent_C_OnStatisticUpdate__DelegateSignature_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
