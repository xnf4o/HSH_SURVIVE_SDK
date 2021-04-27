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

// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetMatchMakingRequestUrl
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 URL                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GetMatchMakingRequestUrl(class UObject* __WorldContext, struct FString* URL)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetMatchMakingRequestUrl");

	UGameSparksRestFunctionLibrary_C_GetMatchMakingRequestUrl_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URL != nullptr)
		*URL = params.URL;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.IsDevelopment
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameSparksRestFunctionLibrary_C::STATIC_IsDevelopment(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.IsDevelopment");

	UGameSparksRestFunctionLibrary_C_IsDevelopment_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameliftCustomMatch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGameSparksRestFunctionLibrary_C::STATIC_GetGameliftCustomMatch(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameliftCustomMatch");

	UGameSparksRestFunctionLibrary_C_GetGameliftCustomMatch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameliftMatchMaking
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGameSparksRestFunctionLibrary_C::STATIC_GetGameliftMatchMaking(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameliftMatchMaking");

	UGameSparksRestFunctionLibrary_C_GetGameliftMatchMaking_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_Log
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVaRestJsonObject*       LogJsonObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_Log(TArray<struct FString>* PlayerId, class UVaRestJsonObject* LogJsonObject, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_Log");

	UGameSparksRestFunctionLibrary_C_GS_Admin_Log_Params params;
	params.LogJsonObject = LogJsonObject;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_GetPlayerPenalty
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_GetPlayerPenalty(TArray<struct FString>* PlayerId, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_GetPlayerPenalty");

	UGameSparksRestFunctionLibrary_C_GS_Admin_GetPlayerPenalty_Params params;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_RoyalpassSend
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Exp                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_RoyalpassSend(TArray<struct FString>* PlayerId, int Exp, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_RoyalpassSend");

	UGameSparksRestFunctionLibrary_C_GS_Admin_RoyalpassSend_Params params;
	params.Exp = Exp;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_WeeklyquestSend
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ID_1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID_2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID_3                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID_4                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID_5                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID_6                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID_7                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID_8                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_WeeklyquestSend(TArray<struct FString>* PlayerId, int ID_1, int ID_2, int ID_3, int ID_4, int ID_5, int ID_6, int ID_7, int ID_8, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_WeeklyquestSend");

	UGameSparksRestFunctionLibrary_C_GS_Admin_WeeklyquestSend_Params params;
	params.ID_1 = ID_1;
	params.ID_2 = ID_2;
	params.ID_3 = ID_3;
	params.ID_4 = ID_4;
	params.ID_5 = ID_5;
	params.ID_6 = ID_6;
	params.ID_7 = ID_7;
	params.ID_8 = ID_8;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_ReportPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReportPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ReportedPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_ReportPlayer(TArray<struct FString>* PlayerId, const struct FString& ReportPlayer, const struct FString& ReportedPlayer, int Reason, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_ReportPlayer");

	UGameSparksRestFunctionLibrary_C_GS_Admin_ReportPlayer_Params params;
	params.ReportPlayer = ReportPlayer;
	params.ReportedPlayer = ReportedPlayer;
	params.Reason = Reason;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_HSHLog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 StringValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_HSHLog(TArray<struct FString>* PlayerId, const struct FString& StringValue, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_HSHLog");

	UGameSparksRestFunctionLibrary_C_GS_Admin_HSHLog_Params params;
	params.StringValue = StringValue;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.MakeEndGameSaveServer
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_SummaryResult> SummaryResult                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UVaRestJsonObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class UVaRestJsonObject*> UGameSparksRestFunctionLibrary_C::STATIC_MakeEndGameSaveServer(TArray<struct FS_SummaryResult>* SummaryResult, const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.MakeEndGameSaveServer");

	UGameSparksRestFunctionLibrary_C_MakeEndGameSaveServer_Params params;
	params.EndGameResult = EndGameResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SummaryResult != nullptr)
		*SummaryResult = params.SummaryResult;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_EndGameSaveServer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_SummaryResult> SummaryResult                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_EndGameSaveServer(TArray<struct FString>* PlayerId, TArray<struct FS_SummaryResult>* SummaryResult, const struct FS_EndGameResult& EndGameResult, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_EndGameSaveServer");

	UGameSparksRestFunctionLibrary_C_GS_Admin_EndGameSaveServer_Params params;
	params.EndGameResult = EndGameResult;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
	if (SummaryResult != nullptr)
		*SummaryResult = params.SummaryResult;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.MakeEndGameSavePersonal
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_SummaryResult        SummaryResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UVaRestJsonObject* UGameSparksRestFunctionLibrary_C::STATIC_MakeEndGameSavePersonal(const struct FS_SummaryResult& SummaryResult, const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.MakeEndGameSavePersonal");

	UGameSparksRestFunctionLibrary_C_MakeEndGameSavePersonal_Params params;
	params.SummaryResult = SummaryResult;
	params.EndGameResult = EndGameResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_EndGameSavePersonal
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FS_SummaryResult        SummaryResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_EndGameSavePersonal(TArray<struct FString>* PlayerId, const struct FS_SummaryResult& SummaryResult, const struct FS_EndGameResult& EndGameResult, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_EndGameSavePersonal");

	UGameSparksRestFunctionLibrary_C_GS_Admin_EndGameSavePersonal_Params params;
	params.SummaryResult = SummaryResult;
	params.EndGameResult = EndGameResult;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_Debuging
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_Debuging(TArray<struct FString>* PlayerId, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_Debuging");

	UGameSparksRestFunctionLibrary_C_GS_Admin_Debuging_Params params;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.FindCredentialSecret
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGameSparksRestFunctionLibrary_C::STATIC_FindCredentialSecret(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.FindCredentialSecret");

	UGameSparksRestFunctionLibrary_C_FindCredentialSecret_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.FindCredential
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGameSparksRestFunctionLibrary_C::STATIC_FindCredential(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.FindCredential");

	UGameSparksRestFunctionLibrary_C_FindCredential_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.IsGameSparksLive
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameSparksRestFunctionLibrary_C::STATIC_IsGameSparksLive(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.IsGameSparksLive");

	UGameSparksRestFunctionLibrary_C_IsGameSparksLive_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameSparksState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGameSparksRestFunctionLibrary_C::STATIC_GetGameSparksState(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetGameSparksState");

	UGameSparksRestFunctionLibrary_C_GetGameSparksState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetCredential
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ShortCode                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 secret                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GetCredential(class UObject* __WorldContext, struct FString* ShortCode, struct FString* secret)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetCredential");

	UGameSparksRestFunctionLibrary_C_GetCredential_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShortCode != nullptr)
		*ShortCode = params.ShortCode;
	if (secret != nullptr)
		*secret = params.secret;

}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetAPIKeys
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGameSparksRestFunctionLibrary_C::STATIC_GetAPIKeys(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetAPIKeys");

	UGameSparksRestFunctionLibrary_C_GetAPIKeys_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetURL
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGameSparksRestFunctionLibrary_C::STATIC_GetURL(const struct FString& RequestName, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GetURL");

	UGameSparksRestFunctionLibrary_C_GetURL_Params params;
	params.RequestName = RequestName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_SaveLeaveGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksRestFunctionLibrary_C::STATIC_GS_Admin_SaveLeaveGame(TArray<struct FString>* PlayerId, const struct FScriptDelegate& Callback, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C.GS_Admin_SaveLeaveGame");

	UGameSparksRestFunctionLibrary_C_GS_Admin_SaveLeaveGame_Params params;
	params.Callback = Callback;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
