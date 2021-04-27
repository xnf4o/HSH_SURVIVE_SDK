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

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.LogErrorMatch
struct AHSURNewLobbyGM_C_LogErrorMatch_Params
{
	TArray<class APlayerController*>                   Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Case;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.FillAITest
struct AHSURNewLobbyGM_C_FillAITest_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CountingNonPlayer
struct AHSURNewLobbyGM_C_CountingNonPlayer_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetCustomMatch
struct AHSURNewLobbyGM_C_SetCustomMatch_Params
{
	bool                                               IsCustomMatch;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetMaxPlayer
struct AHSURNewLobbyGM_C_SetMaxPlayer_Params
{
	int                                                MaxPlayers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CountingCheckingPlayer
struct AHSURNewLobbyGM_C_CountingCheckingPlayer_Params
{
	int                                                PlayerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.IsAllPlayerReady
struct AHSURNewLobbyGM_C_IsAllPlayerReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetLobbyPreview
struct AHSURNewLobbyGM_C_GetLobbyPreview_Params
{
	class ALobbyPreviewCharacterManagerActor_C*        Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetMapdata
struct AHSURNewLobbyGM_C_GetMapdata_Params
{
	struct FName                                       RowName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReturnValueRow;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapStruct                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.IsGamelift
struct AHSURNewLobbyGM_C_IsGamelift_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckIsSurvivorIsFull
struct AHSURNewLobbyGM_C_CheckIsSurvivorIsFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetNewPlayerRole
struct AHSURNewLobbyGM_C_GetNewPlayerRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckIsHunterSelected
struct AHSURNewLobbyGM_C_CheckIsHunterSelected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerItems
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerSkins
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerPerks
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerProfiles
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerStickers
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerCharacters
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerHeads
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerBacks
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.RandomMap
struct AHSURNewLobbyGM_C_RandomMap_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetupMap
struct AHSURNewLobbyGM_C_SetupMap_Params
{
	struct FName                                       MapRowName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapStruct                                  Map;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.OnStartGameSession
struct AHSURNewLobbyGM_C_OnStartGameSession_Params
{
	struct FAWSGameSessionServer                       GameSession;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveBeginPlay
struct AHSURNewLobbyGM_C_ReceiveBeginPlay_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveTick
struct AHSURNewLobbyGM_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.K2_PostLogin
struct AHSURNewLobbyGM_C_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.EveryoneUpdate
struct AHSURNewLobbyGM_C_EveryoneUpdate_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ServerEndMatch
struct AHSURNewLobbyGM_C_ServerEndMatch_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.K2_OnLogout
struct AHSURNewLobbyGM_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerInfo
struct AHSURNewLobbyGM_C_ReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.startgame
struct AHSURNewLobbyGM_C_startgame_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.HandleStartingNewPlayer
struct AHSURNewLobbyGM_C_HandleStartingNewPlayer_Params
{
	class APlayerController*                           NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.RefreshLobbyData
struct AHSURNewLobbyGM_C_RefreshLobbyData_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckingPlayer
struct AHSURNewLobbyGM_C_CheckingPlayer_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckingNonPlayer
struct AHSURNewLobbyGM_C_CheckingNonPlayer_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.MakePlayerLeave
struct AHSURNewLobbyGM_C_MakePlayerLeave_Params
{
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SpawnHunterAI
struct AHSURNewLobbyGM_C_SpawnHunterAI_Params
{
	TEnumAsByte<E_CharacterHunter_E_CharacterHunter>   hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SpawnSurvivorAI
struct AHSURNewLobbyGM_C_SpawnSurvivorAI_Params
{
	TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ResponseLog
struct AHSURNewLobbyGM_C_ResponseLog_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveEndPlay
struct AHSURNewLobbyGM_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ExecuteUbergraph_HSURNewLobbyGM
struct AHSURNewLobbyGM_C_ExecuteUbergraph_HSURNewLobbyGM_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
