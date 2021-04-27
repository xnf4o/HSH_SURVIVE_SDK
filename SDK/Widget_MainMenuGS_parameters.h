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

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BeginMenuAnimation
struct UWidget_MainMenuGS_C_BeginMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.EndMenuAnimation
struct UWidget_MainMenuGS_C_EndMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.GetActiveWidget
struct UWidget_MainMenuGS_C_GetActiveWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.GetLastWidget
struct UWidget_MainMenuGS_C_GetLastWidget_Params
{
	class UWidget*                                     CacheWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.SetLastWidget
struct UWidget_MainMenuGS_C_SetLastWidget_Params
{
	class UWidget*                                     CacheWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshCustomizeHeader
struct UWidget_MainMenuGS_C_RefreshCustomizeHeader_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.SetInputMenuBar
struct UWidget_MainMenuGS_C_SetInputMenuBar_Params
{
	bool                                               bInIsEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshMenubar
struct UWidget_MainMenuGS_C_RefreshMenubar_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshRole
struct UWidget_MainMenuGS_C_RefreshRole_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnKeyDown
struct UWidget_MainMenuGS_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshLootbox
struct UWidget_MainMenuGS_C_RefreshLootbox_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnFocusReceived
struct UWidget_MainMenuGS_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Play_bIsEnabled_1
struct UWidget_MainMenuGS_C_Get_Play_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayAsSurvivor_bIsEnabled_1
struct UWidget_MainMenuGS_C_Get_PlayAsSurvivor_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayAsHunter_bIsEnabled_1
struct UWidget_MainMenuGS_C_Get_PlayAsHunter_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_CustomMatch_bIsEnabled_1
struct UWidget_MainMenuGS_C_Get_CustomMatch_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayTextBox_Text_1
struct UWidget_MainMenuGS_C_Get_PlayTextBox_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Play_Visibility_1
struct UWidget_MainMenuGS_C_Get_Play_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_LootBox_Text
struct UWidget_MainMenuGS_C_Get_LootBox_Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Level_Text
struct UWidget_MainMenuGS_C_Get_Level_Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Coin_Text
struct UWidget_MainMenuGS_C_Get_Coin_Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_4FC9E1B244374302F3ACE7A5E1C6D882
struct UWidget_MainMenuGS_C_OnResponse_4FC9E1B244374302F3ACE7A5E1C6D882_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_F90647D0470996F37B8AA8A7BADD48B6
struct UWidget_MainMenuGS_C_OnResponse_F90647D0470996F37B8AA8A7BADD48B6_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_C2959F9B436A9C6AC635CBB0C818F938
struct UWidget_MainMenuGS_C_OnResponse_C2959F9B436A9C6AC635CBB0C818F938_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_57358BC344D28DBCD688AFB2F2F710B4
struct UWidget_MainMenuGS_C_OnResponse_57358BC344D28DBCD688AFB2F2F710B4_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_RemoveProfile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Button_RemoveProfile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_Removeskin_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Button_Removeskin_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_Removestickers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Button_Removestickers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_74_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Button_74_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_debug_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_Button_debug_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_debug_2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_Button_debug_2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_22_OnShowTutorial__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_22_OnShowTutorial__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveKey
struct UWidget_MainMenuGS_C_OnReceiveKey_Params
{
	struct FKeyEvent                                   Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_46_OnCustomize__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_46_OnCustomize__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_47_OnSwitchRole__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_47_OnSwitchRole__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_48_OnLootbox__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_48_OnLootbox__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_49_OnProfile__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_49_OnProfile__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_50_OnPlay__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_50_OnPlay__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_51_OnRecently__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_51_OnRecently__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_52_OnExit__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_52_OnExit__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_53_OnSetting__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_53_OnSetting__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_ProfilePanel_K2Node_ComponentBoundEvent_35_OnExit__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_ProfilePanel_K2Node_ComponentBoundEvent_35_OnExit__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_LootboxPanel_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_LootboxPanel_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Mainpanel_K2Node_ComponentBoundEvent_3_OnExit__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_Mainpanel_K2Node_ComponentBoundEvent_3_OnExit__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_0_OnStore__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_0_OnStore__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_RoyalPass_K2Node_ComponentBoundEvent_10_OnExit__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_RoyalPass_K2Node_ComponentBoundEvent_10_OnExit__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnRoyalPass__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnRoyalPass__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnWeekly__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnWeekly__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_WeeklyQuestPanel_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_WeeklyQuestPanel_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_StorePanel_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__Widget_StorePanel_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowCustomize
struct UWidget_MainMenuGS_C_ShowCustomize_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.SwitchRole
struct UWidget_MainMenuGS_C_SwitchRole_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowMainPanel
struct UWidget_MainMenuGS_C_ShowMainPanel_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowPlayNow
struct UWidget_MainMenuGS_C_ShowPlayNow_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowLootboxStore
struct UWidget_MainMenuGS_C_ShowLootboxStore_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowSetting
struct UWidget_MainMenuGS_C_ShowSetting_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.EndMoveMenu
struct UWidget_MainMenuGS_C_EndMoveMenu_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BeginMoveMenu
struct UWidget_MainMenuGS_C_BeginMoveMenu_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowItemStore
struct UWidget_MainMenuGS_C_ShowItemStore_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowPlayMode
struct UWidget_MainMenuGS_C_ShowPlayMode_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_MainMenuGS_C_BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BackAction
struct UWidget_MainMenuGS_C_BackAction_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowProfile
struct UWidget_MainMenuGS_C_ShowProfile_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BackOnPlaymode
struct UWidget_MainMenuGS_C_BackOnPlaymode_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnRoyalPass
struct UWidget_MainMenuGS_C_OnRoyalPass_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnWeeklyQuest
struct UWidget_MainMenuGS_C_OnWeeklyQuest_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerInfo
struct UWidget_MainMenuGS_C_OnReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Tick
struct UWidget_MainMenuGS_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerItems
struct UWidget_MainMenuGS_C_OnReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerPerks
struct UWidget_MainMenuGS_C_OnReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerSkins
struct UWidget_MainMenuGS_C_OnReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.EnableProfileButton
struct UWidget_MainMenuGS_C_EnableProfileButton_Params
{
	bool                                               bIsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Construct
struct UWidget_MainMenuGS_C_Construct_Params
{
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerHeads
struct UWidget_MainMenuGS_C_OnReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Heads;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerBacks
struct UWidget_MainMenuGS_C_OnReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Backs;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ExecuteUbergraph_Widget_MainMenuGS
struct UWidget_MainMenuGS_C_ExecuteUbergraph_Widget_MainMenuGS_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
