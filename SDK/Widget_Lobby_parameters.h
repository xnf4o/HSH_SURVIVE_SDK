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

// Function Widget_Lobby.Widget_Lobby_C.UpdatePing
struct UWidget_Lobby_C_UpdatePing_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.GetText_Ping
struct UWidget_Lobby_C_GetText_Ping_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lobby.Widget_Lobby_C.UpdatePlayerStatusIcon
struct UWidget_Lobby_C_UpdatePlayerStatusIcon_Params
{
	TArray<class AHSURLobbyPS_C*>                      PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_Lobby.Widget_Lobby_C.CheckPlayerStatusIcon
struct UWidget_Lobby_C_CheckPlayerStatusIcon_Params
{
	TArray<class AHSURLobbyPS_C*>                      SortedPlayerState;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_Lobby.Widget_Lobby_C.SortPlayerStatusState
struct UWidget_Lobby_C_SortPlayerStatusState_Params
{
	TArray<class AHSURLobbyPS_C*>                      PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AHSURLobbyPS_C*>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_ColorAndOpacity_1
struct UWidget_Lobby_C_Get_Text_Countdown_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Exit_Visibility_1
struct UWidget_Lobby_C_Get_Widget_Button_Exit_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Ready_bIsEnabled_1
struct UWidget_Lobby_C_Get_Widget_Button_Ready_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lobby.Widget_Lobby_C.GetVisibility_2
struct UWidget_Lobby_C_GetVisibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Exit_bIsEnabled_1
struct UWidget_Lobby_C_Get_Widget_Button_Exit_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Ready_Visibility_1
struct UWidget_Lobby_C_Get_Widget_Button_Ready_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Btn_CharacterSetting_bIsEnabled_2
struct UWidget_Lobby_C_Get_Btn_CharacterSetting_bIsEnabled_2_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_Visibility_1
struct UWidget_Lobby_C_Get_Text_Countdown_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_SwitchRole_Visibility_1
struct UWidget_Lobby_C_Get_Widget_Button_SwitchRole_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Refresh
struct UWidget_Lobby_C_Refresh_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.FillContent
struct UWidget_Lobby_C_FillContent_Params
{
	int                                                PlayerCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.SortPlayerStatus
struct UWidget_Lobby_C_SortPlayerStatus_Params
{
	TMap<int, struct FPlayerInfoStruct_G>              AllPlayerInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FPlayerInfoStruct_G>                 Return_SortedPlayerInfo;                                   // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function Widget_Lobby.Widget_Lobby_C.EnableOnNotReady
struct UWidget_Lobby_C_EnableOnNotReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Btn_CharacterSetting_bIsEnabled_1
struct UWidget_Lobby_C_Get_Btn_CharacterSetting_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Btn_Ready_Visibility_1
struct UWidget_Lobby_C_Get_Btn_Ready_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.GetVisibility_1
struct UWidget_Lobby_C_GetVisibility_1_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.Get_TextBlock_0_ToolTipText_1
struct UWidget_Lobby_C_Get_TextBlock_0_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_SwitchRole_bIsEnabled_1
struct UWidget_Lobby_C_Get_SwitchRole_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_MatchIdText_Visibility_1
struct UWidget_Lobby_C_Get_MatchIdText_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Text_MatchId_Text_1
struct UWidget_Lobby_C_Get_Text_MatchId_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_RoleText_Text_1
struct UWidget_Lobby_C_Get_RoleText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_Text_1
struct UWidget_Lobby_C_Get_Text_Countdown_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Ready_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_Ready_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_4_OnClickedToHunter__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_4_OnClickedToHunter__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_6_OnClickedToSurvivor__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_6_OnClickedToSurvivor__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_7_OnClickedToSpectator__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_7_OnClickedToSpectator__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Customize_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWidget_Lobby_C_BndEvt__Widget_Button_Customize_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.Tick
struct UWidget_Lobby_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Construct
struct UWidget_Lobby_C_Construct_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.UpdateStatus
struct UWidget_Lobby_C_UpdateStatus_Params
{
	TEnumAsByte<E_LobbyStatus_E_LobbyStatus>           Status;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.UpdateRole
struct UWidget_Lobby_C_UpdateRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.UpdatePreviewCamera
struct UWidget_Lobby_C_UpdatePreviewCamera_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.ShowCharacterSelect
struct UWidget_Lobby_C_ShowCharacterSelect_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.ShowCharacterSetting
struct UWidget_Lobby_C_ShowCharacterSetting_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.HideCharacterSetting
struct UWidget_Lobby_C_HideCharacterSetting_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.OnReceiveNotifyPlayerInfo
struct UWidget_Lobby_C_OnReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.BackToMainMenu
struct UWidget_Lobby_C_BackToMainMenu_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.ready
struct UWidget_Lobby_C_ready_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.ToggleCharacterSetting
struct UWidget_Lobby_C_ToggleCharacterSetting_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.SwitchRole
struct UWidget_Lobby_C_SwitchRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lobby.Widget_Lobby_C.Destruct
struct UWidget_Lobby_C_Destruct_Params
{
};

// Function Widget_Lobby.Widget_Lobby_C.ExecuteUbergraph_Widget_Lobby
struct UWidget_Lobby_C_ExecuteUbergraph_Widget_Lobby_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
