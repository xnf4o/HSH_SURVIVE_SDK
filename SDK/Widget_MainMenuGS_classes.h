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

// WidgetBlueprintGeneratedClass Widget_MainMenuGS.Widget_MainMenuGS_C
// 0x0238 (FullSize[0x0478] - InheritedSize[0x0240])
class UWidget_MainMenuGS_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_Create;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Join;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_RemoveProfile;                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Removeskin;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Removestickers;                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_ReportPlayer;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBox_IsLocal;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                Debug_Page;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_2;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_3;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_254;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_AccessKeyID;                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_Alias;                                        // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_SecretID;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               EditableText_Session;                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FG;                                                        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_Local;                                       // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBoxDebugIPLOGIN;                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBoxGameliftIPLOGIN;                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_12;                                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_352;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               IP_EditText;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     JoinBTN;                                                   // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                Panel;                                                     // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyPlayer_C*                              PartyPlayer;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyPlayer_C*                              PartyPlayer_6;                                             // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyPlayer_C*                              PartyPlayer_7;                                             // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyPlayer_C*                              PartyPlayer_8;                                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                               Port_EditText;                                             // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  QuestDebugTExt;                                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text_Join;                                                 // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_4;                                               // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1Join;                                           // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DebugMainMenu_C*                        UMG_DebugMainMenu;                                         // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_debug_1;                                     // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_debug_2;                                     // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_debug_3;                                     // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_FindMatchPanel_C*                    Widget_CustomizePanel;                                     // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Debug_CustomMatch_C*                 Widget_Debug_CustomMatch;                                  // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_LootboxPanel_C*                      Widget_LootboxPanel;                                       // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Mainpanel_C*                         Widget_Mainpanel;                                          // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_MenubarPanel_C*                      Widget_MenubarPanel;                                       // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_PlayerProfile_C*                     Widget_PlayerProfile;                                      // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_PlaymodePanel_C*                     Widget_PlaymodePanel;                                      // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ProfilePanel_C*                      Widget_ProfilePanel;                                       // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_RoyalPass_C*                         Widget_RoyalPass;                                          // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_SettingPanel_C*                      Widget_SettingPanel;                                       // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StorePanel_C*                        Widget_StorePanel;                                         // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_WeeklyQuestPanel_C*                  Widget_WeeklyQuestPanel;                                   // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Main;                                       // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_MainMenuGameMode_C*                      MainMenuGameMode_REF;                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                                  PreviewClientActor;                                        // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMatchMakingComponent_C*                     MatchMaking_REF;                                           // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWidgetMainMenuManager_C*                    Widget_Manager;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UTextBlock*>                          ButtonTextCache;                                           // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UButton*                                     ClickRecently;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bBlockMoveMenu;                                            // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JN15[0x7];                                     // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MemberMsgDebug;                                            // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UTextBlock*>                          MemberTextBox;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsLobbyReady;                                              // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LobbyCreatedDelayOffset;                                   // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3QFG[0x2];                                     // 0x045A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LobbyID;                                                   // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     CacheWidget;                                               // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Quests;                                                    // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MainMenuGS.Widget_MainMenuGS_C");
		return ptr;
	}



	void BeginMenuAnimation(float* Duration);
	void EndMenuAnimation(float* Duration);
	class UWidget* GetActiveWidget();
	void GetLastWidget(class UWidget** CacheWidget);
	void SetLastWidget(class UWidget* CacheWidget);
	void RefreshCustomizeHeader(const struct FPlayerInfoStruct_G& PlayerInfo);
	void SetInputMenuBar(bool bInIsEnabled);
	void RefreshMenubar();
	void RefreshRole(const struct FPlayerInfoStruct_G& PlayerInfo);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void RefreshLootbox(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	bool Get_Play_bIsEnabled_1();
	bool Get_PlayAsSurvivor_bIsEnabled_1();
	bool Get_PlayAsHunter_bIsEnabled_1();
	bool Get_CustomMatch_bIsEnabled_1();
	struct FText Get_PlayTextBox_Text_1();
	UMG_ESlateVisibility Get_Play_Visibility_1();
	struct FText Get_LootBox_Text();
	struct FText Get_Level_Text();
	struct FText Get_Coin_Text();
	void OnResponse_4FC9E1B244374302F3ACE7A5E1C6D882(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_F90647D0470996F37B8AA8A7BADD48B6(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_C2959F9B436A9C6AC635CBB0C818F938(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_57358BC344D28DBCD688AFB2F2F710B4(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_RemoveProfile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Removeskin_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Removestickers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_74_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Widget_Button_debug_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_debug_2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_22_OnShowTutorial__DelegateSignature();
	void OnReceiveKey(const struct FKeyEvent& Key);
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_46_OnCustomize__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_47_OnSwitchRole__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_48_OnLootbox__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_49_OnProfile__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_50_OnPlay__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_51_OnRecently__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_52_OnExit__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_53_OnSetting__DelegateSignature();
	void BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature();
	void BndEvt__Widget_ProfilePanel_K2Node_ComponentBoundEvent_35_OnExit__DelegateSignature();
	void BndEvt__Widget_LootboxPanel_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature();
	void BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature();
	void BndEvt__Widget_Mainpanel_K2Node_ComponentBoundEvent_3_OnExit__DelegateSignature();
	void BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_0_OnStore__DelegateSignature();
	void BndEvt__Widget_RoyalPass_K2Node_ComponentBoundEvent_10_OnExit__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnRoyalPass__DelegateSignature();
	void BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnWeekly__DelegateSignature();
	void BndEvt__Widget_WeeklyQuestPanel_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature();
	void BndEvt__Widget_StorePanel_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature();
	void ShowCustomize();
	void SwitchRole();
	void ShowMainPanel();
	void ShowPlayNow();
	void ShowLootboxStore();
	void ShowSetting();
	void EndMoveMenu();
	void BeginMoveMenu();
	void ShowItemStore();
	void ShowPlayMode();
	void BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BackAction();
	void ShowProfile();
	void BackOnPlaymode();
	void OnRoyalPass();
	void OnWeeklyQuest();
	void OnReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnReceiveNotifyPlayerItems(TArray<struct FString>* Items, TArray<int>* Number);
	void OnReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void OnReceiveNotifyPlayerSkins(TArray<struct FString>* Skins);
	void EnableProfileButton(bool bIsEnable);
	void Construct();
	void OnReceiveNotifyPlayerHeads(TArray<struct FString>* Heads);
	void OnReceiveNotifyPlayerBacks(TArray<struct FString>* Backs);
	void ExecuteUbergraph_Widget_MainMenuGS(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
