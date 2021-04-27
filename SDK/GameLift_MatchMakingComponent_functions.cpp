// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MakeJSON
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAWSGameSessionConnectionInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UVaRestJsonObject*       Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::MakeJSON(const struct FAWSGameSessionConnectionInfo& Info, class UVaRestJsonObject** Output_Get)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MakeJSON");

	UGameLift_MatchMakingComponent_C_MakeJSON_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetRegionBySessionID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 SessionId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 RegionCode                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::GetRegionBySessionID(const struct FString& SessionId, struct FString* RegionCode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetRegionBySessionID");

	UGameLift_MatchMakingComponent_C_GetRegionBySessionID_Params params;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionCode != nullptr)
		*RegionCode = params.RegionCode;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MatchmakingLoop
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
void UGameLift_MatchMakingComponent_C::MatchmakingLoop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MatchmakingLoop");

	UGameLift_MatchMakingComponent_C_MatchmakingLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerId                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::GetPlayerID(struct FString* PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerID");

	UGameLift_MatchMakingComponent_C_GetPlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.AssignWidgetManager");

	UGameLift_MatchMakingComponent_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MakeAwsPlayerArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerIDArray                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FAWSPlayer>      AWSPlayer                      (Parm, OutParm, ZeroConstructor)
void UGameLift_MatchMakingComponent_C::MakeAwsPlayerArray(TArray<struct FString>* PlayerIDArray, TArray<struct FAWSPlayer>* AWSPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.MakeAwsPlayerArray");

	UGameLift_MatchMakingComponent_C_MakeAwsPlayerArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerIDArray != nullptr)
		*PlayerIDArray = params.PlayerIDArray;
	if (AWSPlayer != nullptr)
		*AWSPlayer = params.AWSPlayer;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.RandomPlayerID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerId                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::RandomPlayerID(struct FString* PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.RandomPlayerID");

	UGameLift_MatchMakingComponent_C_RandomPlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.RandomTicketID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ticketId                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::RandomTicketID(struct FString* ticketId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.RandomTicketID");

	UGameLift_MatchMakingComponent_C_RandomTicketID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ticketId != nullptr)
		*ticketId = params.ticketId;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerSessionByMatchedPlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FAWSPlayerSession> MatchedPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 playerSession                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::GetPlayerSessionByMatchedPlayers(const struct FString& PlayerId, TArray<struct FAWSPlayerSession>* MatchedPlayer, struct FString* playerSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerSessionByMatchedPlayers");

	UGameLift_MatchMakingComponent_C_GetPlayerSessionByMatchedPlayers_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MatchedPlayer != nullptr)
		*MatchedPlayer = params.MatchedPlayer;
	if (playerSession != nullptr)
		*playerSession = params.playerSession;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerDesiredRole
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::GetPlayerDesiredRole(TEnumAsByte<E_Role_E_Role>* Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.GetPlayerDesiredRole");

	UGameLift_MatchMakingComponent_C_GetPlayerDesiredRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role != nullptr)
		*Role = params.Role;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.IsDescribeMatchReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsReady                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameLift_MatchMakingComponent_C::IsDescribeMatchReady(bool* IsReady)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.IsDescribeMatchReady");

	UGameLift_MatchMakingComponent_C_IsDescribeMatchReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReady != nullptr)
		*IsReady = params.IsReady;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnResponse_81D3517B46DE85404FB34A98A7AC60AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameLift_MatchMakingComponent_C::OnResponse_81D3517B46DE85404FB34A98A7AC60AE(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnResponse_81D3517B46DE85404FB34A98A7AC60AE");

	UGameLift_MatchMakingComponent_C_OnResponse_81D3517B46DE85404FB34A98A7AC60AE_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.ReceiveTick");

	UGameLift_MatchMakingComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.CancelMatch
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::CancelMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.CancelMatch");

	UGameLift_MatchMakingComponent_C_CancelMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.FindMatch
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::FindMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.FindMatch");

	UGameLift_MatchMakingComponent_C_FindMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.Initialize");

	UGameLift_MatchMakingComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnReceiveLobbyData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLobbyData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 LobbyID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ticketId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IsSearching                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FString>         playerIds                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         DisplayName                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Survivorskill                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UGameLift_MatchMakingComponent_C::OnReceiveLobbyData(bool IsLobbyData, const struct FString& LobbyID, const struct FString& ticketId, bool IsSearching, TArray<struct FString>* playerIds, TArray<struct FString> DisplayName, TArray<struct FString> Survivorskill)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnReceiveLobbyData");

	UGameLift_MatchMakingComponent_C_OnReceiveLobbyData_Params params;
	params.IsLobbyData = IsLobbyData;
	params.LobbyID = LobbyID;
	params.ticketId = ticketId;
	params.IsSearching = IsSearching;
	params.DisplayName = DisplayName;
	params.Survivorskill = Survivorskill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerIds != nullptr)
		*playerIds = params.playerIds;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnQuickPlayClick
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnQuickPlayClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnQuickPlayClick");

	UGameLift_MatchMakingComponent_C_OnQuickPlayClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnCancelClick
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnCancelClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnCancelClick");

	UGameLift_MatchMakingComponent_C_OnCancelClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnRequestFailedHandle
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnRequestFailedHandle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnRequestFailedHandle");

	UGameLift_MatchMakingComponent_C_OnRequestFailedHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnQuickPlayClickDebug
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnQuickPlayClickDebug()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnQuickPlayClickDebug");

	UGameLift_MatchMakingComponent_C_OnQuickPlayClickDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnCancelClickDebug
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnCancelClickDebug()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnCancelClickDebug");

	UGameLift_MatchMakingComponent_C_OnCancelClickDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnReceiveLobbyStatus
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnReceiveLobbyStatus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnReceiveLobbyStatus");

	UGameLift_MatchMakingComponent_C_OnReceiveLobbyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnProcessingTimedOut
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnProcessingTimedOut()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnProcessingTimedOut");

	UGameLift_MatchMakingComponent_C_OnProcessingTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.AcceptMatch
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::AcceptMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.AcceptMatch");

	UGameLift_MatchMakingComponent_C_AcceptMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmTryAgain
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnConfirmTryAgain()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmTryAgain");

	UGameLift_MatchMakingComponent_C_OnConfirmTryAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmCheckVersion
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnConfirmCheckVersion()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmCheckVersion");

	UGameLift_MatchMakingComponent_C_OnConfirmCheckVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmServerOffline
// (BlueprintCallable, BlueprintEvent)
void UGameLift_MatchMakingComponent_C::OnConfirmServerOffline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.OnConfirmServerOffline");

	UGameLift_MatchMakingComponent_C_OnConfirmServerOffline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::CustomEvent_1(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.CustomEvent_1");

	UGameLift_MatchMakingComponent_C_CustomEvent_1_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.ExecuteUbergraph_GameLift_MatchMakingComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLift_MatchMakingComponent_C::ExecuteUbergraph_GameLift_MatchMakingComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C.ExecuteUbergraph_GameLift_MatchMakingComponent");

	UGameLift_MatchMakingComponent_C_ExecuteUbergraph_GameLift_MatchMakingComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
