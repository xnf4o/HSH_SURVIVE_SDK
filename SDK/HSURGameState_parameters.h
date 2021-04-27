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

// Function HSURGameState.HSURGameState_C.OnRep_AllPlayerInfo_New
struct AHSURGameState_C_OnRep_AllPlayerInfo_New_Params
{
};

// Function HSURGameState.HSURGameState_C.OnRep_SurvivorStateStatus_New
struct AHSURGameState_C_OnRep_SurvivorStateStatus_New_Params
{
};

// Function HSURGameState.HSURGameState_C.GetTotalTimer
struct AHSURGameState_C_GetTotalTimer_Params
{
	float                                              TotalTimer;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetSurvivorSpawnSoulLocation
struct AHSURGameState_C_GetSurvivorSpawnSoulLocation_Params
{
	class AActor*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      KilledBy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.OnDebugingRespawn
struct AHSURGameState_C_OnDebugingRespawn_Params
{
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.GetSoulDisappear
struct AHSURGameState_C_GetSoulDisappear_Params
{
	TArray<int>                                        SoulDisappearArray;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameState.HSURGameState_C.RemoveSoulDisappear
struct AHSURGameState_C_RemoveSoulDisappear_Params
{
	int                                                NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.AddedSoulDisappear
struct AHSURGameState_C_AddedSoulDisappear_Params
{
	int                                                NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetHunterPlayerInfo
struct AHSURGameState_C_GetHunterPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         Return;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetLastSurvivorExitPortal
struct AHSURGameState_C_GetLastSurvivorExitPortal_Params
{
	struct FPlayerInfoStruct_G                         Return;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetLastSurvivorDeath
struct AHSURGameState_C_GetLastSurvivorDeath_Params
{
	struct FPlayerInfoStruct_G                         Return;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetPlayerInfoFromPlayerID
struct AHSURGameState_C_GetPlayerInfoFromPlayerID_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         Return;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.PlayerSurvivorExitPortal
struct AHSURGameState_C_PlayerSurvivorExitPortal_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.PlayerSurvivorDeath
struct AHSURGameState_C_PlayerSurvivorDeath_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetAllPlayerInfo
struct AHSURGameState_C_GetAllPlayerInfo_Params
{
	TArray<struct FPlayerInfoStruct_G>                 AllPlayerInfo;                                             // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function HSURGameState.HSURGameState_C.AssignSpawningPlayer
struct AHSURGameState_C_AssignSpawningPlayer_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.IsTutorial?
struct AHSURGameState_C_IsTutorial__Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.IsEndWithPortal
struct AHSURGameState_C_IsEndWithPortal_Params
{
	bool                                               bEndByPortal;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.GetMatchResult
struct AHSURGameState_C_GetMatchResult_Params
{
	class AHSURPlayerState_C*                          PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EndGameResult                            EndGameResult;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetIsOverlapLocation
struct AHSURGameState_C_GetIsOverlapLocation_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NotBlockByAnyone;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.UpdateSpawnPlayer
struct AHSURGameState_C_UpdateSpawnPlayer_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.OnRep_TrapTargetUsed
struct AHSURGameState_C_OnRep_TrapTargetUsed_Params
{
};

// Function HSURGameState.HSURGameState_C.SpawnPlayer
struct AHSURGameState_C_SpawnPlayer_Params
{
	class APlayerState*                                PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transfrom;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class AHSHCharacterBase*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetSoul
struct AHSURGameState_C_GetSoul_Params
{
	TArray<int>                                        SoulArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameState.HSURGameState_C.RemoveSoul
struct AHSURGameState_C_RemoveSoul_Params
{
	int                                                NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.AddedSoul
struct AHSURGameState_C_AddedSoul_Params
{
	int                                                NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.IsHunterDead
struct AHSURGameState_C_IsHunterDead_Params
{
	bool                                               HunterDead;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.GetHunter
struct AHSURGameState_C_GetHunter_Params
{
	TArray<class AHSURPlayerState_C*>                  HunterArray;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameState.HSURGameState_C.GetSurvivor
struct AHSURGameState_C_GetSurvivor_Params
{
	TArray<class AHSURPlayerState_C*>                  SurvivorArray;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameState.HSURGameState_C.GetTimer
struct AHSURGameState_C_GetTimer_Params
{
	float                                              Timer;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.RemoveHunter
struct AHSURGameState_C_RemoveHunter_Params
{
	class AHSURPlayerState_C*                          Item;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.AddedHunter
struct AHSURGameState_C_AddedHunter_Params
{
	class AHSURPlayerState_C*                          NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.RemoveSurvivor
struct AHSURGameState_C_RemoveSurvivor_Params
{
	class AHSURPlayerState_C*                          Item;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.AddedSurvivor
struct AHSURGameState_C_AddedSurvivor_Params
{
	class AHSURPlayerState_C*                          NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.IsTimeOut
struct AHSURGameState_C_IsTimeOut_Params
{
	bool                                               IsTimeOut_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.TimeCounting
struct AHSURGameState_C_TimeCounting_Params
{
};

// Function HSURGameState.HSURGameState_C.GetLimitSpawnComponent
struct AHSURGameState_C_GetLimitSpawnComponent_Params
{
	class ULimitItemsTypeComponent_C*                  LimitItemsTypeComponent;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetLimitChestComponent
struct AHSURGameState_C_GetLimitChestComponent_Params
{
	class ULimitItemsBaseComponent_C*                  LimitItemsTypeComponent;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.GetAllSurvivorKnockDown
struct AHSURGameState_C_GetAllSurvivorKnockDown_Params
{
	bool                                               IsAllKnockdown;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.CheckSurvivorMovement
struct AHSURGameState_C_CheckSurvivorMovement_Params
{
	class ASurvivorBase_C*                             NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopAction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.SurvivorDeath
struct AHSURGameState_C_SurvivorDeath_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           KilledBy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.RespawnSurvivor
struct AHSURGameState_C_RespawnSurvivor_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               SelfRespawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.AddTrapTarget
struct AHSURGameState_C_AddTrapTarget_Params
{
	class ATrapTargetActor_C*                          NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.RemoveTrapTarget
struct AHSURGameState_C_RemoveTrapTarget_Params
{
	class ATrapTargetActor_C*                          Item;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.DecreaseSurvivor
struct AHSURGameState_C_DecreaseSurvivor_Params
{
	class AHSURPlayerState_C*                          survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.Initialize
struct AHSURGameState_C_Initialize_Params
{
};

// Function HSURGameState.HSURGameState_C.ExitSecretPortal
struct AHSURGameState_C_ExitSecretPortal_Params
{
	class AHSURPlayerState_C*                          survivor;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.IncreaseSuvivor
struct AHSURGameState_C_IncreaseSuvivor_Params
{
	class AHSURPlayerState_C*                          survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.HunterDeath
struct AHSURGameState_C_HunterDeath_Params
{
};

// Function HSURGameState.HSURGameState_C.OnPlayerDisconnected
struct AHSURGameState_C_OnPlayerDisconnected_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.ReceiveTick
struct AHSURGameState_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.AddedTimeAfterCompleteAllRitual
struct AHSURGameState_C_AddedTimeAfterCompleteAllRitual_Params
{
};

// Function HSURGameState.HSURGameState_C.SetActiveComponent
struct AHSURGameState_C_SetActiveComponent_Params
{
	bool                                               bActive;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameState.HSURGameState_C.AddedTimeAfterCompleteOneRitual
struct AHSURGameState_C_AddedTimeAfterCompleteOneRitual_Params
{
};

// Function HSURGameState.HSURGameState_C.AddSurvivorStatus
struct AHSURGameState_C_AddSurvivorStatus_Params
{
	class AHSURPlayerState_C*                          PlayerState;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.AssignSpawningPlayerInfoo
struct AHSURGameState_C_AssignSpawningPlayerInfoo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.ExecuteUbergraph_HSURGameState
struct AHSURGameState_C_ExecuteUbergraph_HSURGameState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameState.HSURGameState_C.OnUpdateTrapTargetList__DelegateSignature
struct AHSURGameState_C_OnUpdateTrapTargetList__DelegateSignature_Params
{
};

// Function HSURGameState.HSURGameState_C.OnSurvivorDie__DelegateSignature
struct AHSURGameState_C_OnSurvivorDie__DelegateSignature_Params
{
};

// Function HSURGameState.HSURGameState_C.OnHunterDie__DelegateSignature
struct AHSURGameState_C_OnHunterDie__DelegateSignature_Params
{
};

// Function HSURGameState.HSURGameState_C.OnCharacterCountChange__DelegateSignature
struct AHSURGameState_C_OnCharacterCountChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
