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

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetMatchMakingRequestUrl
struct UGameSparksRestFunctionLibrary_C_GetMatchMakingRequestUrl_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     URL;                                                       // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.IsDevelopment
struct UGameSparksRestFunctionLibrary_C_IsDevelopment_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameliftCustomMatch
struct UGameSparksRestFunctionLibrary_C_GetGameliftCustomMatch_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameliftMatchMaking
struct UGameSparksRestFunctionLibrary_C_GetGameliftMatchMaking_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_Log
struct UGameSparksRestFunctionLibrary_C_GS_Admin_Log_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVaRestJsonObject*                           LogJsonObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_GetPlayerPenalty
struct UGameSparksRestFunctionLibrary_C_GS_Admin_GetPlayerPenalty_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_RoyalpassSend
struct UGameSparksRestFunctionLibrary_C_GS_Admin_RoyalpassSend_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Exp;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_WeeklyquestSend
struct UGameSparksRestFunctionLibrary_C_GS_Admin_WeeklyquestSend_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ID_1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_3;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_4;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_5;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_6;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_7;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_8;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_ReportPlayer
struct UGameSparksRestFunctionLibrary_C_GS_Admin_ReportPlayer_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReportPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ReportedPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_HSHLog
struct UGameSparksRestFunctionLibrary_C_GS_Admin_HSHLog_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     StringValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.MakeEndGameSaveServer
struct UGameSparksRestFunctionLibrary_C_MakeEndGameSaveServer_Params
{
	TArray<struct FS_SummaryResult>                    SummaryResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FS_EndGameResult                            EndGameResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UVaRestJsonObject*>                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_EndGameSaveServer
struct UGameSparksRestFunctionLibrary_C_GS_Admin_EndGameSaveServer_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_SummaryResult>                    SummaryResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FS_EndGameResult                            EndGameResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.MakeEndGameSavePersonal
struct UGameSparksRestFunctionLibrary_C_MakeEndGameSavePersonal_Params
{
	struct FS_SummaryResult                            SummaryResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EndGameResult                            EndGameResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_EndGameSavePersonal
struct UGameSparksRestFunctionLibrary_C_GS_Admin_EndGameSavePersonal_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FS_SummaryResult                            SummaryResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EndGameResult                            EndGameResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_Debuging
struct UGameSparksRestFunctionLibrary_C_GS_Admin_Debuging_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.FindCredentialSecret
struct UGameSparksRestFunctionLibrary_C_FindCredentialSecret_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.FindCredential
struct UGameSparksRestFunctionLibrary_C_FindCredential_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.IsGameSparksLive
struct UGameSparksRestFunctionLibrary_C_IsGameSparksLive_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameSparksState
struct UGameSparksRestFunctionLibrary_C_GetGameSparksState_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetCredential
struct UGameSparksRestFunctionLibrary_C_GetCredential_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ShortCode;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     secret;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetAPIKeys
struct UGameSparksRestFunctionLibrary_C_GetAPIKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetURL
struct UGameSparksRestFunctionLibrary_C_GetURL_Params
{
	struct FString                                     RequestName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_SaveLeaveGame
struct UGameSparksRestFunctionLibrary_C_GS_Admin_SaveLeaveGame_Params
{
	TArray<struct FString>                             PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
