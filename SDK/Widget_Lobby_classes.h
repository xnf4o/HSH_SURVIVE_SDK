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

// WidgetBlueprintGeneratedClass Widget_Lobby.Widget_Lobby_C
// 0x0178 (FullSize[0x03B8] - InheritedSize[0x0240])
class UWidget_Lobby_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG;                                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Bottom_Shadow;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_1;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            MatchIDTextbox;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              PlayerStatusHorizonBox;                                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Slash;                                                     // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 SwitchRoleMenu;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text_Countdown;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text_MatchId;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_109;                                             // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Top_shadow;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonImage_C*                       Widget_Button_Back;                                        // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Customize;                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonImage_C*                       Widget_Button_Exit;                                        // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_LobbyPlayerRole_C*            Widget_Button_LobbyPlayerRole;                             // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_Play_C*                       Widget_Button_Ready;                                       // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonImage_C*                       Widget_Button_Setting;                                     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_LobbySwitchRole_C*            Widget_Button_Switchrole;                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AHSURLobbyPC_C*                              LobbyPC;                                                   // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSURLobbyPS_C*                              LobbyPS;                                                   // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_LobbyStatus_E_LobbyStatus>           ReadyStatus;                                               // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I52D[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ALobbyPreviewCharacterManagerActor_C*        LobbyPreviewCharacterManager;                              // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     RoleString;                                                // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       ServerName;                                                // 0x0320(0x0018) (Edit, BlueprintVisible, Net, ExposeOnSpawn)
	class UTexture2D*                                  MapImage;                                                  // 0x0338(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       MatchId;                                                   // 0x0340(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               IsReady;                                                   // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsOnCharacterSetting_;                                     // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q7SM[0x6];                                     // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerInfoStruct_G>                 Sorted_Player_Info;                                        // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UWidget_CharacterSettingNewV2_C*             WidgetCharacterSetting;                                    // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     SurvivorRoleIcon;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     HunterRoleIcon;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     SpectatorRoleIcon;                                         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReadyAvailable;                                          // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IE0M[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AHSURLobbyPS_C*>                      LobbyPSList;                                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	unsigned char                                      Ping;                                                      // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I4DL[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Timer;                                                     // 0x03B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Lobby.Widget_Lobby_C");
		return ptr;
	}



	void UpdatePing();
	struct FText GetText_Ping();
	void UpdatePlayerStatusIcon(TArray<class AHSURLobbyPS_C*>* PlayerState);
	void CheckPlayerStatusIcon(TArray<class AHSURLobbyPS_C*>* SortedPlayerState);
	TArray<class AHSURLobbyPS_C*> SortPlayerStatusState(TArray<class AHSURLobbyPS_C*>* PlayerState);
	struct FSlateColor Get_Text_Countdown_ColorAndOpacity_1();
	UMG_ESlateVisibility Get_Widget_Button_Exit_Visibility_1();
	bool Get_Widget_Button_Ready_bIsEnabled_1();
	UMG_ESlateVisibility GetVisibility_2();
	bool Get_Widget_Button_Exit_bIsEnabled_1();
	UMG_ESlateVisibility Get_Widget_Button_Ready_Visibility_1();
	bool Get_Btn_CharacterSetting_bIsEnabled_2();
	UMG_ESlateVisibility Get_Text_Countdown_Visibility_1();
	UMG_ESlateVisibility Get_Widget_Button_SwitchRole_Visibility_1();
	void Refresh();
	void FillContent(int PlayerCount);
	void SortPlayerStatus(TMap<int, struct FPlayerInfoStruct_G> AllPlayerInfo, TArray<struct FPlayerInfoStruct_G>* Return_SortedPlayerInfo);
	bool EnableOnNotReady();
	bool Get_Btn_CharacterSetting_bIsEnabled_1();
	UMG_ESlateVisibility Get_Btn_Ready_Visibility_1();
	void GetVisibility_1();
	struct FText Get_TextBlock_0_ToolTipText_1();
	bool Get_SwitchRole_bIsEnabled_1();
	UMG_ESlateVisibility Get_MatchIdText_Visibility_1();
	struct FText Get_Text_MatchId_Text_1();
	struct FText Get_RoleText_Text_1();
	struct FText Get_Text_Countdown_Text_1();
	void BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Ready_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_4_OnClickedToHunter__DelegateSignature();
	void BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_6_OnClickedToSurvivor__DelegateSignature();
	void BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_7_OnClickedToSpectator__DelegateSignature();
	void BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Customize_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdateStatus(TEnumAsByte<E_LobbyStatus_E_LobbyStatus> Status);
	void UpdateRole(TEnumAsByte<E_Role_E_Role> Role);
	void UpdatePreviewCamera(TEnumAsByte<E_Role_E_Role> Role);
	void ShowCharacterSelect();
	void ShowCharacterSetting();
	void HideCharacterSetting();
	void OnReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void BackToMainMenu();
	void ready();
	void ToggleCharacterSetting();
	void SwitchRole(TEnumAsByte<E_Role_E_Role> Role);
	void Destruct();
	void ExecuteUbergraph_Widget_Lobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
