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

// BlueprintGeneratedClass GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C
// 0x0130 (FullSize[0x0230] - InheritedSize[0x0100])
class UGameLift_MatchMakingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UGameLiftClientObject*                       GameLiftObject_Ref;                                        // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     LobbyID;                                                   // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ticketId;                                                  // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     PlayerId;                                                  // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsDescribing;                                              // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CNB4[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget_PlaymodeSelection_C*                 WDG_Playmode;                                              // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSearching;                                               // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HPH1[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             playerIds;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     playerSession;                                             // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FAWSPlayer>                          AWSPlayer;                                                 // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             DisplayName;                                               // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Survivorskill;                                             // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDebug;                                                   // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XOAU[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget_MatchFound_C*                        AcceptMatchPopup;                                          // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniversalPopup_C*                           MessagePopup;                                              // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	GameLift_EMatchmakingConfigurationStatus           Status;                                                    // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInitialize;                                              // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PKSF[0x6];                                     // 0x01D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAWSGameSessionConnectionInfo               GameSessionInfo;                                           // 0x01D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     CacheGamesession;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GameLift_MatchMakingComponent.GameLift_MatchMakingComponent_C");
		return ptr;
	}



	void MakeJSON(const struct FAWSGameSessionConnectionInfo& Info, class UVaRestJsonObject** Output_Get);
	void GetRegionBySessionID(const struct FString& SessionId, struct FString* RegionCode);
	void MatchmakingLoop();
	void GetPlayerID(struct FString* PlayerId);
	void AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager);
	void MakeAwsPlayerArray(TArray<struct FString>* PlayerIDArray, TArray<struct FAWSPlayer>* AWSPlayer);
	void RandomPlayerID(struct FString* PlayerId);
	void RandomTicketID(struct FString* ticketId);
	void GetPlayerSessionByMatchedPlayers(const struct FString& PlayerId, TArray<struct FAWSPlayerSession>* MatchedPlayer, struct FString* playerSession);
	void GetPlayerDesiredRole(TEnumAsByte<E_Role_E_Role>* Role);
	void IsDescribeMatchReady(bool* IsReady);
	void OnResponse_81D3517B46DE85404FB34A98A7AC60AE(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void ReceiveTick(float DeltaSeconds);
	void CancelMatch();
	void FindMatch();
	void Initialize();
	void OnReceiveLobbyData(bool IsLobbyData, const struct FString& LobbyID, const struct FString& ticketId, bool IsSearching, TArray<struct FString>* playerIds, TArray<struct FString> DisplayName, TArray<struct FString> Survivorskill);
	void OnQuickPlayClick();
	void OnCancelClick();
	void OnRequestFailedHandle();
	void OnQuickPlayClickDebug();
	void OnCancelClickDebug();
	void OnReceiveLobbyStatus();
	void OnProcessingTimedOut();
	void AcceptMatch();
	void OnConfirmTryAgain();
	void OnConfirmCheckVersion();
	void OnConfirmServerOffline();
	void CustomEvent_1(class UVaRestRequestJSON* Request);
	void ExecuteUbergraph_GameLift_MatchMakingComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
