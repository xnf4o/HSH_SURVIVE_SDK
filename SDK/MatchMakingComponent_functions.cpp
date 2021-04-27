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

// Function MatchMakingComponent.MatchMakingComponent_C.CreateCustomQueryData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   CustomQueryData                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMatchMakingComponent_C::CreateCustomQueryData(TEnumAsByte<E_Role_E_Role> Role, class UGameSparksScriptData** CustomQueryData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.CreateCustomQueryData");

	UMatchMakingComponent_C_CreateCustomQueryData_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CustomQueryData != nullptr)
		*CustomQueryData = params.CustomQueryData;

}


// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_3072F11F410A2548C43A3E974C262053
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMatchMakingComponent_C::OnResponse_3072F11F410A2548C43A3E974C262053(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_3072F11F410A2548C43A3E974C262053");

	UMatchMakingComponent_C_OnResponse_3072F11F410A2548C43A3E974C262053_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_B2EE7D3C4A3A13DBCA7E6C9E85BEAD9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSMatchmakingResponse  MatchmakingResponse            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMatchMakingComponent_C::OnResponse_B2EE7D3C4A3A13DBCA7E6C9E85BEAD9E(const struct FGSMatchmakingResponse& MatchmakingResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_B2EE7D3C4A3A13DBCA7E6C9E85BEAD9E");

	UMatchMakingComponent_C_OnResponse_B2EE7D3C4A3A13DBCA7E6C9E85BEAD9E_Params params;
	params.MatchmakingResponse = MatchmakingResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_1C90D3184118703D08A181ADFC91C881
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSMatchmakingResponse  MatchmakingResponse            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMatchMakingComponent_C::OnResponse_1C90D3184118703D08A181ADFC91C881(const struct FGSMatchmakingResponse& MatchmakingResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_1C90D3184118703D08A181ADFC91C881");

	UMatchMakingComponent_C_OnResponse_1C90D3184118703D08A181ADFC91C881_Params params;
	params.MatchmakingResponse = MatchmakingResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_081F999943087EFE8EA02E8E24A70967
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMatchMakingComponent_C::OnResponse_081F999943087EFE8EA02E8E24A70967(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_081F999943087EFE8EA02E8E24A70967");

	UMatchMakingComponent_C_OnResponse_081F999943087EFE8EA02E8E24A70967_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.CancelToJoinMatch
// (BlueprintCallable, BlueprintEvent)
void UMatchMakingComponent_C::CancelToJoinMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.CancelToJoinMatch");

	UMatchMakingComponent_C_CancelToJoinMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.CancelMatch
// (BlueprintCallable, BlueprintEvent)
void UMatchMakingComponent_C::CancelMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.CancelMatch");

	UMatchMakingComponent_C_CancelMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.OnScriptMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSScriptMessage        ScriptMessage                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UMatchMakingComponent_C::OnScriptMessage(const struct FGSScriptMessage& ScriptMessage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.OnScriptMessage");

	UMatchMakingComponent_C_OnScriptMessage_Params params;
	params.ScriptMessage = ScriptMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.JoinServer
// (BlueprintCallable, BlueprintEvent)
void UMatchMakingComponent_C::JoinServer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.JoinServer");

	UMatchMakingComponent_C_JoinServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.SetIpAndPort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Port                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UMatchMakingComponent_C::SetIpAndPort(const struct FString& ip, const struct FString& Port)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.SetIpAndPort");

	UMatchMakingComponent_C_SetIpAndPort_Params params;
	params.ip = ip;
	params.Port = Port;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.FindMatch
// (BlueprintCallable, BlueprintEvent)
void UMatchMakingComponent_C::FindMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.FindMatch");

	UMatchMakingComponent_C_FindMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UMatchMakingComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.ReceiveBeginPlay");

	UMatchMakingComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.OnMatchNotFoundMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSMatchNotFoundMessage MatchNotFoundMessage           (BlueprintVisible, BlueprintReadOnly, Parm)
void UMatchMakingComponent_C::OnMatchNotFoundMessage(const struct FGSMatchNotFoundMessage& MatchNotFoundMessage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.OnMatchNotFoundMessage");

	UMatchMakingComponent_C_OnMatchNotFoundMessage_Params params;
	params.MatchNotFoundMessage = MatchNotFoundMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.SwitchRoleAndFindMatch
// (BlueprintCallable, BlueprintEvent)
void UMatchMakingComponent_C::SwitchRoleAndFindMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.SwitchRoleAndFindMatch");

	UMatchMakingComponent_C_SwitchRoleAndFindMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.ConfirmToJoinMatch
// (BlueprintCallable, BlueprintEvent)
void UMatchMakingComponent_C::ConfirmToJoinMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.ConfirmToJoinMatch");

	UMatchMakingComponent_C_ConfirmToJoinMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.OnMatchFoundMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSMatchFoundMessage    MatchFoundMessage              (BlueprintVisible, BlueprintReadOnly, Parm)
void UMatchMakingComponent_C::OnMatchFoundMessage(const struct FGSMatchFoundMessage& MatchFoundMessage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.OnMatchFoundMessage");

	UMatchMakingComponent_C_OnMatchFoundMessage_Params params;
	params.MatchFoundMessage = MatchFoundMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchMakingComponent.MatchMakingComponent_C.ExecuteUbergraph_MatchMakingComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMatchMakingComponent_C::ExecuteUbergraph_MatchMakingComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MatchMakingComponent.MatchMakingComponent_C.ExecuteUbergraph_MatchMakingComponent");

	UMatchMakingComponent_C_ExecuteUbergraph_MatchMakingComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
