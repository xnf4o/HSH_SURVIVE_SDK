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

// Function HSURGameMode.HSURGameMode_C.CheckPlayerPenaltyOnlyID
struct AHSURGameMode_C_CheckPlayerPenaltyOnlyID_Params
{
	struct FString                                     playerIds;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.CheckPlayerPenalty
struct AHSURGameMode_C_CheckPlayerPenalty_Params
{
};

// Function HSURGameMode.HSURGameMode_C.SaveRoyalPass
struct AHSURGameMode_C_SaveRoyalPass_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SaveWeeklyQuest
struct AHSURGameMode_C_SaveWeeklyQuest_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.GetAIControllerByCharacter
struct AHSURGameMode_C_GetAIControllerByCharacter_Params
{
	class UHSHCharacterItem*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.AddedController
struct AHSURGameMode_C_AddedController_Params
{
	class AController*                                 NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SaveEndgameResultOnlyID
struct AHSURGameMode_C_SaveEndgameResultOnlyID_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.GetPlayableController
struct AHSURGameMode_C_GetPlayableController_Params
{
	TArray<class APlayerController*>                   AllPlayableController;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameMode.HSURGameMode_C.RemovePlayableController
struct AHSURGameMode_C_RemovePlayableController_Params
{
	class APlayerController*                           Item;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.AddedPlayablePlayerController
struct AHSURGameMode_C_AddedPlayablePlayerController_Params
{
	class APlayerController*                           NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.GetMaxPlayer
struct AHSURGameMode_C_GetMaxPlayer_Params
{
	int                                                MaxPlayer;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.AssignMaxPlayer
struct AHSURGameMode_C_AssignMaxPlayer_Params
{
	int                                                Numbers;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SaveEndgameResult
struct AHSURGameMode_C_SaveEndgameResult_Params
{
};

// Function HSURGameMode.HSURGameMode_C.ShouldContinue
struct AHSURGameMode_C_ShouldContinue_Params
{
	TArray<bool>                                       bIsContinue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Lenght;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURGameMode.HSURGameMode_C.CheckingStartGame
struct AHSURGameMode_C_CheckingStartGame_Params
{
};

// Function HSURGameMode.HSURGameMode_C.SpawnDefaultPawnAtTransform
struct AHSURGameMode_C_SpawnDefaultPawnAtTransform_Params
{
	class AController*                                 NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SpawnDefaultPawnFor
struct AHSURGameMode_C_SpawnDefaultPawnFor_Params
{
	class AController*                                 NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      StartSpot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.ChoosePlayerStart
struct AHSURGameMode_C_ChoosePlayerStart_Params
{
	class AController*                                 Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.GetPlayerInfo
struct AHSURGameMode_C_GetPlayerInfo_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         Return;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.FindEndReason
struct AHSURGameMode_C_FindEndReason_Params
{
	TEnumAsByte<E_EndGameReason_E_EndGameReason>       Reason;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.CanSendGameSpark
struct AHSURGameMode_C_CanSendGameSpark_Params
{
	bool                                               IsCanSend;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameMode.HSURGameMode_C.GetSummaryResultEndGame_AllPlayer
struct AHSURGameMode_C_GetSummaryResultEndGame_AllPlayer_Params
{
	TArray<struct FS_SummaryResult>                    Return_LocalPlayer;                                        // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function HSURGameMode.HSURGameMode_C.ReadyToStartMatch
struct AHSURGameMode_C_ReadyToStartMatch_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURGameMode.HSURGameMode_C.GetPlayerDataList_Custom
struct AHSURGameMode_C_GetPlayerDataList_Custom_Params
{
	TArray<class UGameSparksScriptData*>               playerDataList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameMode.HSURGameMode_C.GetSummaryResultList_Test
struct AHSURGameMode_C_GetSummaryResultList_Test_Params
{
	TArray<struct FS_SummaryResult>                    Return_LocalPlayer;                                        // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function HSURGameMode.HSURGameMode_C.IsPlayerNotEndGame
struct AHSURGameMode_C_IsPlayerNotEndGame_Params
{
	class AController*                                 HSURPlayerController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNotEndGame;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameMode.HSURGameMode_C.GetPlayerData
struct AHSURGameMode_C_GetPlayerData_Params
{
	class AController*                                 Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameSparksScriptData*                       playerData;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.GetPlayerDataList
struct AHSURGameMode_C_GetPlayerDataList_Params
{
	TArray<class UGameSparksScriptData*>               playerDataList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameMode.HSURGameMode_C.GetRoleByPlayerId
struct AHSURGameMode_C_GetRoleByPlayerId_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.GetActivities
struct AHSURGameMode_C_GetActivities_Params
{
	class UGameSparksScriptData*                       Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Activity>                         Activities;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameMode.HSURGameMode_C.MakeSummaryResultListByGameSparksLog
struct AHSURGameMode_C_MakeSummaryResultListByGameSparksLog_Params
{
	struct FGSLogEventResponse                         SummaryResultLog;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FS_SummaryResult>                    SummaryResultList;                                         // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function HSURGameMode.HSURGameMode_C.ChooseStart
struct AHSURGameMode_C_ChooseStart_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.ReadyToEndMatch
struct AHSURGameMode_C_ReadyToEndMatch_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURGameMode.HSURGameMode_C.GetPlayerStartPoints
struct AHSURGameMode_C_GetPlayerStartPoints_Params
{
};

// Function HSURGameMode.HSURGameMode_C.EnterSendContinue
struct AHSURGameMode_C_EnterSendContinue_Params
{
	bool                                               bIsContinue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameMode.HSURGameMode_C.RespawnPlayer
struct AHSURGameMode_C_RespawnPlayer_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         PlayerRole;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.K2_OnSwapPlayerControllers
struct AHSURGameMode_C_K2_OnSwapPlayerControllers_Params
{
	class APlayerController*                           OldPC;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           NewPC;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.K2_OnLogout
struct AHSURGameMode_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.K2_OnSetMatchState
struct AHSURGameMode_C_K2_OnSetMatchState_Params
{
	struct FName                                       NewState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.ReceiveBeginPlay
struct AHSURGameMode_C_ReceiveBeginPlay_Params
{
};

// Function HSURGameMode.HSURGameMode_C.ServerBackToLobby
struct AHSURGameMode_C_ServerBackToLobby_Params
{
};

// Function HSURGameMode.HSURGameMode_C.ServerEndMatch
struct AHSURGameMode_C_ServerEndMatch_Params
{
};

// Function HSURGameMode.HSURGameMode_C.SetupSummaryResultToPlayer
struct AHSURGameMode_C_SetupSummaryResultToPlayer_Params
{
};

// Function HSURGameMode.HSURGameMode_C.ApplyPlayerRespawnInfo
struct AHSURGameMode_C_ApplyPlayerRespawnInfo_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         PlayerRole;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.QuitToResult
struct AHSURGameMode_C_QuitToResult_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_EndGameReason_E_EndGameReason>       Endgame;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.OnEndMatch
struct AHSURGameMode_C_OnEndMatch_Params
{
};

// Function HSURGameMode.HSURGameMode_C.HandleStartingNewPlayer
struct AHSURGameMode_C_HandleStartingNewPlayer_Params
{
	class APlayerController*                           NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.ReceiveTick
struct AHSURGameMode_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.LeaveWithNoResult
struct AHSURGameMode_C_LeaveWithNoResult_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SaveResultRequested
struct AHSURGameMode_C_SaveResultRequested_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SafeLeaveGame
struct AHSURGameMode_C_SafeLeaveGame_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.OnLeaveGame
struct AHSURGameMode_C_OnLeaveGame_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SaveResultOnlyIDRequested
struct AHSURGameMode_C_SaveResultOnlyIDRequested_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SpawnAI
struct AHSURGameMode_C_SpawnAI_Params
{
};

// Function HSURGameMode.HSURGameMode_C.SpawnSurvivorAI
struct AHSURGameMode_C_SpawnSurvivorAI_Params
{
};

// Function HSURGameMode.HSURGameMode_C.SpawnHunterAI
struct AHSURGameMode_C_SpawnHunterAI_Params
{
};

// Function HSURGameMode.HSURGameMode_C.SaveWeeklyquestRequested
struct AHSURGameMode_C_SaveWeeklyquestRequested_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.SaveRoyalpassRequested
struct AHSURGameMode_C_SaveRoyalpassRequested_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.CheckPenaltyResponse
struct AHSURGameMode_C_CheckPenaltyResponse_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.CheckPenaltyOnlyIDResponse
struct AHSURGameMode_C_CheckPenaltyOnlyIDResponse_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.ExecuteUbergraph_HSURGameMode
struct AHSURGameMode_C_ExecuteUbergraph_HSURGameMode_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameMode.HSURGameMode_C.OnPlayerDisconnected__DelegateSignature
struct AHSURGameMode_C_OnPlayerDisconnected__DelegateSignature_Params
{
	class AController*                                 ExitingController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
