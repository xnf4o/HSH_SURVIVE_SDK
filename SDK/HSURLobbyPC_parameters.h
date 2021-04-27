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

// Function HSURLobbyPC.HSURLobbyPC_C.OnRep_bIsAllPlayerReady
struct AHSURLobbyPC_C_OnRep_bIsAllPlayerReady_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.ServerAddHunterAI
struct AHSURLobbyPC_C_ServerAddHunterAI_Params
{
	TEnumAsByte<E_CharacterHunter_E_CharacterHunter>   hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ServerAddSurvivorAI
struct AHSURLobbyPC_C_ServerAddSurvivorAI_Params
{
	TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.OnClick
struct AHSURLobbyPC_C_OnClick_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.ServerRefreshMapName
struct AHSURLobbyPC_C_ServerRefreshMapName_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.RefreshMapName
struct AHSURLobbyPC_C_RefreshMapName_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.ChangeMap
struct AHSURLobbyPC_C_ChangeMap_Params
{
	struct FText                                       MapName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ServerRefresh
struct AHSURLobbyPC_C_ServerRefresh_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.ServerTestRest
struct AHSURLobbyPC_C_ServerTestRest_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.Response
struct AHSURLobbyPC_C_Response_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ClientGetDebug
struct AHSURLobbyPC_C_ClientGetDebug_Params
{
	int                                                code;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Content;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ServerChangeMap
struct AHSURLobbyPC_C_ServerChangeMap_Params
{
	struct FText                                       MapName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.Kicked
struct AHSURLobbyPC_C_Kicked_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.SetupLobbyMenu
struct AHSURLobbyPC_C_SetupLobbyMenu_Params
{
	struct FText                                       ServerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  MapImage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MapName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MatchId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerBacks
struct AHSURLobbyPC_C_ReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ShowLoadingScreen
struct AHSURLobbyPC_C_ShowLoadingScreen_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerHeads
struct AHSURLobbyPC_C_ReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveEndPlay
struct AHSURLobbyPC_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerCharacters
struct AHSURLobbyPC_C_ReceiveNotifyPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveBeginPlay
struct AHSURLobbyPC_C_ReceiveBeginPlay_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerStickers
struct AHSURLobbyPC_C_ReceiveNotifyPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.AllPlayerReady
struct AHSURLobbyPC_C_AllPlayerReady_Params
{
	bool                                               bIsAllPlayerReady;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerProfiles
struct AHSURLobbyPC_C_ReceiveNotifyPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ServerRefreshPreview
struct AHSURLobbyPC_C_ServerRefreshPreview_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.AllPlayerCountdown
struct AHSURLobbyPC_C_AllPlayerCountdown_Params
{
	float                                              Countdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerPerks
struct AHSURLobbyPC_C_ReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerSkins
struct AHSURLobbyPC_C_ReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerItems
struct AHSURLobbyPC_C_ReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerInfo
struct AHSURLobbyPC_C_ReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.UpdateValueFromPlayerState
struct AHSURLobbyPC_C_UpdateValueFromPlayerState_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.SetUpCheckingPlayer
struct AHSURLobbyPC_C_SetUpCheckingPlayer_Params
{
};

// Function HSURLobbyPC.HSURLobbyPC_C.LeaveGameWithMessage
struct AHSURLobbyPC_C_LeaveGameWithMessage_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveTick
struct AHSURLobbyPC_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPC.HSURLobbyPC_C.ExecuteUbergraph_HSURLobbyPC
struct AHSURLobbyPC_C_ExecuteUbergraph_HSURLobbyPC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
