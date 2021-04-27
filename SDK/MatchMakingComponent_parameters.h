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

// Function MatchMakingComponent.MatchMakingComponent_C.CreateCustomQueryData
struct UMatchMakingComponent_C_CreateCustomQueryData_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameSparksScriptData*                       CustomQueryData;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_3072F11F410A2548C43A3E974C262053
struct UMatchMakingComponent_C_OnResponse_3072F11F410A2548C43A3E974C262053_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_B2EE7D3C4A3A13DBCA7E6C9E85BEAD9E
struct UMatchMakingComponent_C_OnResponse_B2EE7D3C4A3A13DBCA7E6C9E85BEAD9E_Params
{
	struct FGSMatchmakingResponse                      MatchmakingResponse;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_1C90D3184118703D08A181ADFC91C881
struct UMatchMakingComponent_C_OnResponse_1C90D3184118703D08A181ADFC91C881_Params
{
	struct FGSMatchmakingResponse                      MatchmakingResponse;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MatchMakingComponent.MatchMakingComponent_C.OnResponse_081F999943087EFE8EA02E8E24A70967
struct UMatchMakingComponent_C_OnResponse_081F999943087EFE8EA02E8E24A70967_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MatchMakingComponent.MatchMakingComponent_C.CancelToJoinMatch
struct UMatchMakingComponent_C_CancelToJoinMatch_Params
{
};

// Function MatchMakingComponent.MatchMakingComponent_C.CancelMatch
struct UMatchMakingComponent_C_CancelMatch_Params
{
};

// Function MatchMakingComponent.MatchMakingComponent_C.OnScriptMessage
struct UMatchMakingComponent_C_OnScriptMessage_Params
{
	struct FGSScriptMessage                            ScriptMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MatchMakingComponent.MatchMakingComponent_C.JoinServer
struct UMatchMakingComponent_C_JoinServer_Params
{
};

// Function MatchMakingComponent.MatchMakingComponent_C.SetIpAndPort
struct UMatchMakingComponent_C_SetIpAndPort_Params
{
	struct FString                                     ip;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Port;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function MatchMakingComponent.MatchMakingComponent_C.FindMatch
struct UMatchMakingComponent_C_FindMatch_Params
{
};

// Function MatchMakingComponent.MatchMakingComponent_C.ReceiveBeginPlay
struct UMatchMakingComponent_C_ReceiveBeginPlay_Params
{
};

// Function MatchMakingComponent.MatchMakingComponent_C.OnMatchNotFoundMessage
struct UMatchMakingComponent_C_OnMatchNotFoundMessage_Params
{
	struct FGSMatchNotFoundMessage                     MatchNotFoundMessage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MatchMakingComponent.MatchMakingComponent_C.SwitchRoleAndFindMatch
struct UMatchMakingComponent_C_SwitchRoleAndFindMatch_Params
{
};

// Function MatchMakingComponent.MatchMakingComponent_C.ConfirmToJoinMatch
struct UMatchMakingComponent_C_ConfirmToJoinMatch_Params
{
};

// Function MatchMakingComponent.MatchMakingComponent_C.OnMatchFoundMessage
struct UMatchMakingComponent_C_OnMatchFoundMessage_Params
{
	struct FGSMatchFoundMessage                        MatchFoundMessage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MatchMakingComponent.MatchMakingComponent_C.ExecuteUbergraph_MatchMakingComponent
struct UMatchMakingComponent_C_ExecuteUbergraph_MatchMakingComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
