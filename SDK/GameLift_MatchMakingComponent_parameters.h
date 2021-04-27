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

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MakeJSON
struct UGameLift_MatchMakingComponent_C_MakeJSON_Params
{
	struct FAWSGameSessionConnectionInfo               Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UVaRestJsonObject*                           Output_Get;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetRegionBySessionID
struct UGameLift_MatchMakingComponent_C_GetRegionBySessionID_Params
{
	struct FString                                     SessionId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     RegionCode;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MatchmakingLoop
struct UGameLift_MatchMakingComponent_C_MatchmakingLoop_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerID
struct UGameLift_MatchMakingComponent_C_GetPlayerID_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.AssignWidgetManager
struct UGameLift_MatchMakingComponent_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MakeAwsPlayerArray
struct UGameLift_MatchMakingComponent_C_MakeAwsPlayerArray_Params
{
	TArray<struct FString>                             PlayerIDArray;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FAWSPlayer>                          AWSPlayer;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.RandomPlayerID
struct UGameLift_MatchMakingComponent_C_RandomPlayerID_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.RandomTicketID
struct UGameLift_MatchMakingComponent_C_RandomTicketID_Params
{
	struct FString                                     ticketId;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerSessionByMatchedPlayers
struct UGameLift_MatchMakingComponent_C_GetPlayerSessionByMatchedPlayers_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FAWSPlayerSession>                   MatchedPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     playerSession;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerDesiredRole
struct UGameLift_MatchMakingComponent_C_GetPlayerDesiredRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.IsDescribeMatchReady
struct UGameLift_MatchMakingComponent_C_IsDescribeMatchReady_Params
{
	bool                                               IsReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnResponse_81D3517B46DE85404FB34A98A7AC60AE
struct UGameLift_MatchMakingComponent_C_OnResponse_81D3517B46DE85404FB34A98A7AC60AE_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.ReceiveTick
struct UGameLift_MatchMakingComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.CancelMatch
struct UGameLift_MatchMakingComponent_C_CancelMatch_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.FindMatch
struct UGameLift_MatchMakingComponent_C_FindMatch_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.Initialize
struct UGameLift_MatchMakingComponent_C_Initialize_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnReceiveLobbyData
struct UGameLift_MatchMakingComponent_C_OnReceiveLobbyData_Params
{
	bool                                               IsLobbyData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     LobbyID;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ticketId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsSearching;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             playerIds;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             DisplayName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Survivorskill;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnQuickPlayClick
struct UGameLift_MatchMakingComponent_C_OnQuickPlayClick_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnCancelClick
struct UGameLift_MatchMakingComponent_C_OnCancelClick_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnRequestFailedHandle
struct UGameLift_MatchMakingComponent_C_OnRequestFailedHandle_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnQuickPlayClickDebug
struct UGameLift_MatchMakingComponent_C_OnQuickPlayClickDebug_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnCancelClickDebug
struct UGameLift_MatchMakingComponent_C_OnCancelClickDebug_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnReceiveLobbyStatus
struct UGameLift_MatchMakingComponent_C_OnReceiveLobbyStatus_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnProcessingTimedOut
struct UGameLift_MatchMakingComponent_C_OnProcessingTimedOut_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.AcceptMatch
struct UGameLift_MatchMakingComponent_C_AcceptMatch_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmTryAgain
struct UGameLift_MatchMakingComponent_C_OnConfirmTryAgain_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmCheckVersion
struct UGameLift_MatchMakingComponent_C_OnConfirmCheckVersion_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmServerOffline
struct UGameLift_MatchMakingComponent_C_OnConfirmServerOffline_Params
{
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.CustomEvent_1
struct UGameLift_MatchMakingComponent_C_CustomEvent_1_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.ExecuteUbergraph_GameLift_MatchMakingComponent
struct UGameLift_MatchMakingComponent_C_ExecuteUbergraph_GameLift_MatchMakingComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
