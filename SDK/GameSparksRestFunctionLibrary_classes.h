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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameSparksRestFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GameSparksRestFunctionLibrary.GameSparksRestFunctionLibrary_C");
		return ptr;
	}



	void STATIC_GetMatchMakingRequestUrl(class UObject* __WorldContext, struct FString* URL);
	bool STATIC_IsDevelopment(class UObject* __WorldContext);
	struct FString STATIC_GetGameliftCustomMatch(class UObject* __WorldContext);
	struct FString STATIC_GetGameliftMatchMaking(class UObject* __WorldContext);
	void STATIC_GS_Admin_Log(TArray<struct FString>* PlayerId, class UVaRestJsonObject* LogJsonObject, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	void STATIC_GS_Admin_GetPlayerPenalty(TArray<struct FString>* PlayerId, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	void STATIC_GS_Admin_RoyalpassSend(TArray<struct FString>* PlayerId, int Exp, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	void STATIC_GS_Admin_WeeklyquestSend(TArray<struct FString>* PlayerId, int ID_1, int ID_2, int ID_3, int ID_4, int ID_5, int ID_6, int ID_7, int ID_8, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	void STATIC_GS_Admin_ReportPlayer(TArray<struct FString>* PlayerId, const struct FString& ReportPlayer, const struct FString& ReportedPlayer, int Reason, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	void STATIC_GS_Admin_HSHLog(TArray<struct FString>* PlayerId, const struct FString& StringValue, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	TArray<class UVaRestJsonObject*> STATIC_MakeEndGameSaveServer(TArray<struct FS_SummaryResult>* SummaryResult, const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext);
	void STATIC_GS_Admin_EndGameSaveServer(TArray<struct FString>* PlayerId, TArray<struct FS_SummaryResult>* SummaryResult, const struct FS_EndGameResult& EndGameResult, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	class UVaRestJsonObject* STATIC_MakeEndGameSavePersonal(const struct FS_SummaryResult& SummaryResult, const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext);
	void STATIC_GS_Admin_EndGameSavePersonal(TArray<struct FString>* PlayerId, const struct FS_SummaryResult& SummaryResult, const struct FS_EndGameResult& EndGameResult, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	void STATIC_GS_Admin_Debuging(TArray<struct FString>* PlayerId, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
	struct FString STATIC_FindCredentialSecret(class UObject* __WorldContext);
	struct FString STATIC_FindCredential(class UObject* __WorldContext);
	bool STATIC_IsGameSparksLive(class UObject* __WorldContext);
	struct FString STATIC_GetGameSparksState(class UObject* __WorldContext);
	void STATIC_GetCredential(class UObject* __WorldContext, struct FString* ShortCode, struct FString* secret);
	struct FString STATIC_GetAPIKeys(class UObject* __WorldContext);
	struct FString STATIC_GetURL(const struct FString& RequestName, class UObject* __WorldContext);
	void STATIC_GS_Admin_SaveLeaveGame(TArray<struct FString>* PlayerId, const struct FScriptDelegate& Callback, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
