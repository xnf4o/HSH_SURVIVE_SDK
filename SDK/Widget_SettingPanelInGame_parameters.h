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

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.EndMenuAnimation
struct UWidget_SettingPanelInGame_C_EndMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BeginMenuAnimation
struct UWidget_SettingPanelInGame_C_BeginMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Get_Widget_Button_Quit_Visibility_1
struct UWidget_SettingPanelInGame_C_Get_Widget_Button_Quit_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.UpdatePing
struct UWidget_SettingPanelInGame_C_UpdatePing_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.GetText_Ping
struct UWidget_SettingPanelInGame_C_GetText_Ping_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.AssignOptionManager
struct UWidget_SettingPanelInGame_C_AssignOptionManager_Params
{
	class UOptionManagerComponent_C*                   OptionManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnFocusReceived
struct UWidget_SettingPanelInGame_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowGraphics
struct UWidget_SettingPanelInGame_C_ShowGraphics_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowDisplay
struct UWidget_SettingPanelInGame_C_ShowDisplay_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowSound
struct UWidget_SettingPanelInGame_C_ShowSound_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowControl
struct UWidget_SettingPanelInGame_C_ShowControl_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowSystem
struct UWidget_SettingPanelInGame_C_ShowSystem_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BackAction
struct UWidget_SettingPanelInGame_C_BackAction_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ResetPanel
struct UWidget_SettingPanelInGame_C_ResetPanel_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ComfirmQuit
struct UWidget_SettingPanelInGame_C_ComfirmQuit_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.CancelQuit
struct UWidget_SettingPanelInGame_C_CancelQuit_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Construct
struct UWidget_SettingPanelInGame_C_Construct_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Destruct
struct UWidget_SettingPanelInGame_C_Destruct_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ExecuteUbergraph_Widget_SettingPanelInGame
struct UWidget_SettingPanelInGame_C_ExecuteUbergraph_Widget_SettingPanelInGame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnExit__DelegateSignature
struct UWidget_SettingPanelInGame_C_OnExit__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnItemStore__DelegateSignature
struct UWidget_SettingPanelInGame_C_OnItemStore__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnLootbox__DelegateSignature
struct UWidget_SettingPanelInGame_C_OnLootbox__DelegateSignature_Params
{
};

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnFindMatch__DelegateSignature
struct UWidget_SettingPanelInGame_C_OnFindMatch__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
