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

// BlueprintGeneratedClass HSURPlayerController.HSURPlayerController_C
// 0x01C9 (FullSize[0x0861] - InheritedSize[0x0698])
class AHSURPlayerController_C : public AHSHPlayerControllerNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0698(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UOptionManagerComponent_C*                   OptionManagerComponent;                                    // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHSHAchievementComponent*                    SteamAchievement;                                          // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAchievementComponent_C*                     AchievementComponent;                                      // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerSettingsSave;                                        // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x06D0(0x0110) (Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               bBlockAction;                                              // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M7CM[0x7];                                     // 0x07E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ResultUI;                                                  // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_SummaryResult>                    SummaryResultList;                                         // 0x07F0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	class AHSHSpectator_C*                             Spectator;                                                 // 0x0800(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEndgameCamera_C*                            EndgameCamera;                                             // 0x0808(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_IngameDebugMode_C*                      DebugWindow;                                               // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bBlockCamera;                                              // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsSturdyUsed;                                             // 0x0819(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GW8M[0x6];                                     // 0x081A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                BlockKeys;                                                 // 0x0820(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class UWidget_SettingGame_C*                       SettingUI;                                                 // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsInitUI;                                                 // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsInitSettings;                                           // 0x0839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WUO8[0x6];                                     // 0x083A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUMG_IngameInfo_C*                           InfoUI;                                                    // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_Fade_C*                              FadeUI;                                                    // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsInitInfo;                                               // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsMetHunter;                                              // 0x0851(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WD7P[0x6];                                     // 0x0852(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIngame_ChatBox_C*                           WidgetChatBox;                                             // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bChatboxOpened;                                            // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURPlayerController.HSURPlayerController_C");
		return ptr;
	}



	void GetIsEnableBlockCamera(bool* Return);
	void GetIsEnableBlockAction(bool* Return);
	bool IsChatBoxOpened();
	struct FString GetLevelName(const struct FString& MapName);
	bool IsTutorialInViewport();
	void GetBlockKeys(TArray<struct FKey>* BlockKeys);
	void OnDelayAfterInitUI();
	void OnDelayBeforeInitUI();
	void TryDisableCamera();
	void TryEnableCamera();
	void TryDisableAction();
	void TryEnableAction();
	void TryDisableMovement();
	void TryEnableMovement();
	void TryDisableInput();
	void TryEnableInput();
	void OnRep_SummaryResultLog();
	void LoadGame(int Index);
	void InpActEvt_M_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Tab_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Tab_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Exit_Game_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Enter_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Shift_Enter_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Y_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InitInGameSetting();
	void SetSettingActive(bool Active);
	void HideSetting();
	void InitInGameInfo();
	void SetGameInfoActive(bool Active);
	void DebugToggleDebugWindow();
	void DebugOpenDebugWindow();
	void DebugCloseDebugWindow();
	void OnHunterReceiveDmg(class AHSHCharacterBase* OwnerCharacter, float Dmg);
	void DebugMoveLocation();
	void ShowHUD();
	void BackToMainMenu();
	void DisableInputClientSide();
	void EnableInputClientSide();
	void EnableInputClient();
	void DisableInputClient();
	void EnableMovementClient();
	void EnableMovementClientSide();
	void DisableMovementClient();
	void DisableMovementClientSide();
	void EnableActionClient();
	void DisableActionClient();
	void EnableActionClientSide();
	void DisableActionClientSide();
	void HideHUD();
	void ServerEndGameBlockController();
	void ShowFadeEndScene(float Duration, bool bIsShowLoading);
	void EnableMouseCameraClient();
	void DisableMouseCameraClient();
	void EnableCameraClientSide();
	void DisableCameraClientSide();
	void EnableBlockInputKeys();
	void ServerDisableInputKeys(TArray<struct FKey> Keys);
	void DisableBlockInputKeys(TArray<struct FKey> Keys);
	void PlayEndGameEvent(TEnumAsByte<E_EndGameReason_E_EndGameReason> Reason);
	void PrepareFadeWidget();
	void FadeWithUI(bool bFadeOut, float Seconds);
	void BlackScreenWithUI(bool bShow);
	void ServerToResult();
	void ShowEndgameReason();
	void EndByLeave();
	void ShowChatBox();
	void HideChatBox();
	void PrepareChatbox();
	void CommitText(const struct FS_ChatData& Chat);
	void SetChatboxChannel(TEnumAsByte<E_ChatType_E_ChatType> ChatType);
	void ServerStaticDebug();
	void OnConfirm();
	void OnCancel();
	void Response(class UVaRestRequestJSON* Request);
	void ServerTestGamesparkRequest();
	void ClientResponse(const struct FString& Content, VaRestPlugin_ERequestStatus Status);
	void ServerGetCredential();
	void ClientPrintCredential(const struct FString& credential, const struct FString& CredentialSecret);
	void ServerDebugFilePath();
	void PrintDebugFile(TArray<struct FString>* Array);
	void ClientDebugFilePath(TArray<struct FString> Array);
	void ServerTrySaveResult();
	void OnConfirm_2();
	void OnCancel_2();
	void ToggleMenu();
	void OnOpenExitMenu();
	void AssignSummaryResultList(TArray<struct FS_SummaryResult> SummaryResultList, const struct FS_EndGameResult& EndGameResult, float DurationToResultMap);
	void ToResult();
	void LeaveWithMessage(const struct FString& Message);
	void SurvivorLeaveAskForContinue();
	void ClientAskingForContinue();
	void ServerAskForContinue_Yes();
	void ServerAskForContinue_No();
	void ClientActiveInput();
	void RequestSafeLeaveGame();
	void SendMatchAnalyticsEvent();
	void PassCharacterInfoToServer(const struct FPlayerInfoStruct_G& PlayerInfo);
	void InitializePlayer(const struct FPlayerInfoStruct_G& Info);
	void ReceiveBeginPlay();
	void InitializeHud(bool bRespawn);
	void OnIntroduceEnd();
	void BlendTargetViewPort(class APawn* Pawn, float BlendTime, float BlendExp, bool bLockOutgoing);
	void ServerSetControlRotation(const struct FRotator& NewRotation);
	void ClientSetControlRotation(const struct FRotator& NewRotation);
	void FadeInOutCamera(float FadeIn, float Pause, float FadeOut);
	void ClientInitPlayer();
	void ReceivePossess(class APawn* PossessedPawn);
	void TrackServerStatus();
	void ExecuteUbergraph_HSURPlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
