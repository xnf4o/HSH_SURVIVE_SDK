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

// BlueprintGeneratedClass HSURGameInstance.HSURGameInstance_C
// 0x0608 (FullSize[0x0848] - InheritedSize[0x0240])
class UHSURGameInstance_C : public UPlatformGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MaxPlayers;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z5PQ[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULoadingScreen_C*                            LoadingScreen;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameSparksLogin_C*                          LoginMenu;                                                 // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameSparksObject*                           GSObject;                                                  // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGSMessageListenersObject*                   GSListenerObject;                                          // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniversalPopup_C*                           UniversalPopup;                                            // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadingWidget_C*                            LoadingWidget;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         LocalPlayerInfo;                                           // 0x0288(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FString>                             LocalCharacter;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LocalItems;                                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        LocalItemsCount;                                           // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LocalSkins;                                                // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LocalPerks;                                                // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LocalProfiles;                                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LocalStickers;                                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LocalHeads;                                                // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LocalBacks;                                                // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_SummaryResult>                    SummaryResultList;                                         // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TEnumAsByte<E_MenuState_E_MenuState>               E_MenuState;                                               // 0x0438(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BCWI[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFading_C*                                   Fading;                                                    // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StateTeleport;                                             // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GIIK[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget_Surivor_Tutorial_C*                  TutorialSurvivorWidget;                                    // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_Hunter_Tutorial_C*                   TutorialHunterWidget;                                      // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EndGameResult                            EndGameResult;                                             // 0x0460(0x0020) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bIsInit;                                                   // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FKS9[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USaveGameManager_C*                          SaveGameManager;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSaveGameInitialize;                                      // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsCustomMatch;                                            // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U714[0x7];                                     // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStorePopupWithNumber_C*                     StorePopUp;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isDebug;                                                   // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OQSC[0x7];                                     // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHSHProcessParameter_C*                      AWS_Ref;                                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_StoreProduct>                     VirtualGoods;                                              // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_StoreProduct>                     Perks;                                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_StoreProduct>                     Items;                                                     // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_StoreProduct>                     Skins;                                                     // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_StoreProduct>                     Stickers;                                                  // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_StoreProduct>                     Profiles;                                                  // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_StoreProduct>                     Emotes;                                                    // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USteamLobby*                                 SteamLobby;                                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamIAP*                                   SteamIAP;                                                  // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamLobby*                                 SteamAchievement;                                          // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InitGameAnalytics;                                         // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4TLS[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerInfoStruct_G                         Info_AIBelle;                                              // 0x0550(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FString>                             VirtualGoodsShortCode;                                     // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPlayerInfoStruct_G                         Info_AIPrisoner;                                           // 0x0670(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FS_AiInfo>                           Info_SpawnAI;                                              // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FString                                     MatchMakeData;                                             // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemsRefreshed;                                          // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_StoreProduct>                     Backs;                                                     // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_StoreProduct>                     Heads;                                                     // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CacheTicketID;                                             // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FString, int>                          Latency;                                                   // 0x07E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             GameliftRegion;                                            // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDateTime                                   CacheDateTime;                                             // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURGameInstance.HSURGameInstance_C");
		return ptr;
	}



	void FindProductByPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, struct FS_StoreProduct* Product);
	void FindAwsRegionCode(const struct FString& inString, struct FString* Return, bool* Found);
	void GetTags(class UGameSparksScriptData* ScriptData, struct FString* Tags);
	bool GetGameAnalyticsIsInit();
	void ShowSteamOverlayErrorMsg();
	void MakeLevelCap(const struct FString& Tags, int* LevelCap);
	void MakeGoodType(const struct FString& Tags, struct FPrimaryAssetType* ItemType);
	void MakeGoodPrices(class UGameSparksScriptData* CurrencyCosts, TArray<struct FS_StorePrice>* Prices);
	void CacheVirtualGoods(TArray<class UGameSparksScriptData*>* VirtualGoods);
	void GetProcessParameter(class UHSHProcessParameter_C** Return);
	void InitAWS(bool* bIsSuccess, class UHSHProcessParameter_C** AWS_Ref);
	void GetAWSAlias(struct FString* Alias);
	void GetAWSCredentials(struct FAWSCredentials* AWSCredentials);
	void GetUniversalPopup(class UUniversalPopup_C** UniversalPopup);
	void RefreshLocalPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void GetPlayerPerks(TArray<struct FString>* Perks);
	void GetPlayerSkins(TArray<struct FString>* Skins);
	void GetPlayerItems(TArray<struct FString>* Items);
	void InitSaveGameManager(const struct FString& SlotName);
	void InitializePlayerInfo();
	void IsPlayerInit(bool* bIsInit);
	void GetEndGameResult(struct FS_EndGameResult* EndGameResult);
	void AssignEndGameResult(const struct FS_EndGameResult& EndGameResult);
	void GetSummaryResult(TArray<struct FS_SummaryResult>* SummaryResultList);
	void AssignSummaryResult(TArray<struct FS_SummaryResult>* SummaryResultList);
	void GetRoleFromString(const struct FString& Str, TEnumAsByte<E_Role_E_Role>* Role);
	void OnRep_E_MenuState();
	void HandleGameSparksPlayerDisconnect(const struct FGSSessionTerminatedMessage& SessionTerminatedMessage);
	void HandleGameSparksRegistrationResponseSuccess(const struct FGSRegistrationResponse& registerResponse);
	void HandleGameSparksAuthResponseSuccess(const struct FGSAuthenticationResponse& authResponse);
	void HandleGameSparksResponseError(class UGameSparksScriptData* Error);
	void DisconnectFromGameSparks();
	void ConnectToGameSparks();
	void TravelErrorToString(TEnumAsByte<Engine_ETravelFailure> FailureType, struct FString* OutString);
	void NetErrorToString(TEnumAsByte<Engine_ENetworkFailure> FailureType, struct FString* OutString);
	void OnResponse_EA2E96504118C8677955B4B2FAFC5ABD(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_DEFA4C5648622F8B631B6A8D7E0A0E8F(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_720E07D94B797307139C2291FC725F3D(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_5E7BC2C04A72B9791C60959C164C7EB0(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_273559CA48702B886E94549E18134F10(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_3338105649787816012A2188513B0508(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_4D7036554BEC8416496F7DA0C7F69667(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_250B763740745C55C24EE0AF4E502DC4(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void Completed_494A84B84C7B8C029F46AC8C8FBE6A9C(TArray<class UObject*> Loaded);
	void Completed_840925614D9DF54D9E2C67901A570892(TArray<class UObject*> Loaded);
	void Completed_C11668DB45522DEB48D5C7932428EC0F(TArray<class UObject*> Loaded);
	void Completed_33BF4ABF4D2FCB7F6848A1A031BBF55B(TArray<class UObject*> Loaded);
	void HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer);
	void HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType);
	void RefreshPlayerItems();
	void RefreshPlayerSkins();
	void RefreshPlayerPerks();
	void RefreshPlayerProfile();
	void RefreshPlayerStickerSet();
	void RefreshAllPlayerItems();
	void OnPingCallback(class UVaRestRequestJSON* Request);
	void SaveSlotGamesparks(const struct FPlayerInfoStruct_G& PlayerInfoStruct, bool Durable, int requestTimeoutSeconds);
	void RefreshPlayerStat();
	void RetrieveLatency();
	void ShowLoadingScreen();
	void ShowLoginMenu();
	void ShowRegisterMenu();
	void ShowForgetPasswordMenu();
	void ShowAndSetupUniversalPopup(const struct FString& Title, const struct FString& Message, const struct FString& confirmText, const struct FString& cancelText, TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType, float Timer);
	void ToggleLoadingWidget(bool Enabled);
	void FadeIn(bool FadeOut_, float PlaybackSpeed);
	void HideLoadingScreen();
	void ToggleTutorialLoadingWidget(bool Enabled, TEnumAsByte<E_Role_E_Role> Role);
	void ShowAndSetupStorePopup(const struct FString& Title, const struct FSlateBrush& icon, int Price);
	void JoinServer(const struct FString& ip, const struct FString& Port, const struct FString& playerSession);
	void ReceiveInit();
	void BackToMainMenuLevel();
	void ReceiveShutdown();
	void LoadAllPrimaryAssets();
	void BackToMainMenuLevelWithMessage(const struct FString& Options);
	void ExecuteUbergraph_HSURGameInstance(int EntryPoint);
	void OnItemsRefreshed__DelegateSignature();
	void OnSaveGameInitialize__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
