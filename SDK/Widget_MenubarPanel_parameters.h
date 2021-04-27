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

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.SetEnableSwitchRole
struct UWidget_MenubarPanel_C_SetEnableSwitchRole_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.GetMainMenuGS
struct UWidget_MenubarPanel_C_GetMainMenuGS_Params
{
	class UWidget_MainMenuGS_C*                        MainMenuGS;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.GetVisibility_1
struct UWidget_MenubarPanel_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BeginAnimation
struct UWidget_MenubarPanel_C_BeginAnimation_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRecentButtonClick
struct UWidget_MenubarPanel_C_OnRecentButtonClick_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.UpdateRecentButton
struct UWidget_MenubarPanel_C_UpdateRecentButton_Params
{
	int                                                Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.LobbySetEnableMenuBar
struct UWidget_MenubarPanel_C_LobbySetEnableMenuBar_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.AssignWidgetManager
struct UWidget_MenubarPanel_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshMenubar
struct UWidget_MenubarPanel_C_RefreshMenubar_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshRole
struct UWidget_MenubarPanel_C_RefreshRole_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshLootbox
struct UWidget_MenubarPanel_C_RefreshLootbox_Params
{
	int                                                Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Play_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_Button_Play_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_RecentMode_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_Button_RecentMode_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_4_OnCustomize__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_4_OnCustomize__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_5_OnSwitchRole__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_5_OnSwitchRole__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnLootbox__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnLootbox__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnProfile__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnProfile__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnStore__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnStore__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_RoyalPass_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_Button_RoyalPass_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Weekly_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UWidget_MenubarPanel_C_BndEvt__Widget_Button_Weekly_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.PreConstruct
struct UWidget_MenubarPanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.Construct
struct UWidget_MenubarPanel_C_Construct_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.ExecuteUbergraph_Widget_MenubarPanel
struct UWidget_MenubarPanel_C_ExecuteUbergraph_Widget_MenubarPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnWeekly__DelegateSignature
struct UWidget_MenubarPanel_C_OnWeekly__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRoyalPass__DelegateSignature
struct UWidget_MenubarPanel_C_OnRoyalPass__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnStore__DelegateSignature
struct UWidget_MenubarPanel_C_OnStore__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnSetting__DelegateSignature
struct UWidget_MenubarPanel_C_OnSetting__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnExit__DelegateSignature
struct UWidget_MenubarPanel_C_OnExit__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRecently__DelegateSignature
struct UWidget_MenubarPanel_C_OnRecently__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnPlay__DelegateSignature
struct UWidget_MenubarPanel_C_OnPlay__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnProfile__DelegateSignature
struct UWidget_MenubarPanel_C_OnProfile__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnLootbox__DelegateSignature
struct UWidget_MenubarPanel_C_OnLootbox__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnSwitchRole__DelegateSignature
struct UWidget_MenubarPanel_C_OnSwitchRole__DelegateSignature_Params
{
};

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnCustomize__DelegateSignature
struct UWidget_MenubarPanel_C_OnCustomize__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
