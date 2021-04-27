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

// BlueprintGeneratedClass WidgetMainMenuManager.WidgetMainMenuManager_C
// 0x0268 (FullSize[0x05A0] - InheritedSize[0x0338])
class AWidgetMainMenuManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UStoreManagerComponent_C*                    StoreManagerComponent;                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameLift_MatchMakingComponent_C*            GameLift_MatchMakingComponent;                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHSURMenuCameraManagerComponent_C*           HSURMenuCameraManagerComponent;                            // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOptionManagerComponent_C*                   OptionManagerComponent;                                    // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULoadingScreen_C*                            LoadingScreen;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFading_C*                                   Fading;                                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameSparksLogin_C*                          LoginMenu;                                                 // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_MainMenuGSMobile_C*                  MainMenuGS_Mobile;                                         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_MainMenuGS_C*                        MainMenuGS;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_MainMenu_CustomMatch_C*              CustomMatch;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_MainMenu_Quitgame_C*                 QuitGame;                                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MainMenuGameMode_C*                      MainMenuGameMode_REF;                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                          ButtonTextCache;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x03C0(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerInfo;                                 // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_CharacterSetting_C*                      BP_CharacterSetting;                                       // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPressAnyKeys;                                             // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VQT9[0x7];                                     // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerItems;                                // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget_TesterGuide_C*                       TesterGuide;                                               // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerPerks;                                // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerProfiles;                             // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerSkins;                                // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerStickers;                             // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               AutoLogin;                                                 // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DMKY[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       User;                                                      // 0x0550(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Pass;                                                      // 0x0568(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerHeads;                                // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerBacks;                                // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass WidgetMainMenuManager.WidgetMainMenuManager_C");
		return ptr;
	}



	void RemoveHSHLogo();
	void ShowMessagePopup(const struct FText& Message, class UWidget_LoadingPopup_C** Output_Get);
	void HandleGameSparksRegistrationResponseSuccess(const struct FGSRegistrationResponse& registerResponse);
	void HandleGameSparksAuthResponseSuccess(const struct FGSAuthenticationResponse& authResponse);
	void DisconnectFromGameSparks();
	void ConnectToGameSparks();
	void HandleGameSparksResponseError(class UGameSparksScriptData* Error);
	void HandleGameSparksPlayerDisconnect(const struct FGSSessionTerminatedMessage& SessionTerminatedMessage);
	void SetMenuState(TEnumAsByte<E_MenuState_E_MenuState> E_MenuState);
	void GetPlayerInfo(struct FPlayerInfoStruct_G* PlayerInfo);
	void UserConstructionScript();
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnResponse_3D6DD4BE4849F3360BC3E49B408D2ED6(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void ShowLoadingScreen();
	void FadeIn(bool FadeOut_);
	void ShowPreLoginMenu();
	void SetRoleHunter();
	void ShowMainMenuGS();
	void SetRoleSurvivor();
	void ShowCustomMatch();
	void SwitchRole();
	void ShowQuitGame();
	void PostLogin();
	void ShowTesterGuide();
	void ShowSurvivorGuide();
	void ShowHunterGuide();
	void ShowGuide();
	void CheckSurvivorTutorialMap();
	void OnSurvivorTutorialConfirm();
	void OnSurvivorTutorialCancel();
	void CheckHunterTutorialMap();
	void OnHunterTutorialConfirm();
	void OnHunterTutorialCancel();
	void ShowSurvivorTutorialMap();
	void ShowHunterTutorialMap();
	void Save_Sticker(TArray<struct FPrimaryAssetId> StickerSet);
	void ShowAndSetupUniversalPopup(const struct FString& Title, const struct FString& Message, TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType);
	void ReceiveBeginPlay();
	void ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void RefreshCharacterModel();
	void SetCameraBlend(TEnumAsByte<E_MenuState_E_MenuState> Move_to_Camera, float BlendTime, float BlendExp);
	void ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters);
	void ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles);
	void ReceiveNotifyPlayerSkins(TArray<struct FString> Skins);
	void ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers);
	void ReceiveNotifyPlayerHeads(TArray<struct FString> Head);
	void ReceiveNotifyPlayerBacks(TArray<struct FString>* Back);
	void ExecuteUbergraph_WidgetMainMenuManager(int EntryPoint);
	void OnReceiveNotifyPlayerBacks__DelegateSignature(TArray<struct FString>* Backs);
	void OnReceiveNotifyPlayerHeads__DelegateSignature(TArray<struct FString>* Heads);
	void OnReceiveNotifyPlayerStickers__DelegateSignature(TArray<struct FString>* Stickers);
	void OnReceiveNotifyPlayerSkins__DelegateSignature(TArray<struct FString>* Skins);
	void OnReceiveNotifyPlayerProfiles__DelegateSignature(TArray<struct FString>* Profiles);
	void OnReceiveNotifyPlayerPerks__DelegateSignature(TArray<struct FString>* Perks);
	void OnReceiveNotifyPlayerItems__DelegateSignature(TArray<struct FString>* Items, TArray<int>* Number);
	void OnReceiveNotifyPlayerInfo__DelegateSignature(const struct FPlayerInfoStruct_G& PlayerInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
