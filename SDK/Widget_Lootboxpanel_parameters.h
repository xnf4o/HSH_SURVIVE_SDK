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

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BeginMenuAnimation
struct UWidget_LootboxPanel_C_BeginMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.EndMenuAnimation
struct UWidget_LootboxPanel_C_EndMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetCanOpenMultiple
struct UWidget_LootboxPanel_C_GetCanOpenMultiple_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetOnReleased
struct UWidget_LootboxPanel_C_SetOnReleased_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetOnPressed
struct UWidget_LootboxPanel_C_SetOnPressed_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_CanvasPanel_Debug_Visibility_1
struct UWidget_LootboxPanel_C_Get_CanvasPanel_Debug_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_Widget_Button_LDConfirm_Visibility_1
struct UWidget_LootboxPanel_C_Get_Widget_Button_LDConfirm_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.AssignWidgetManager
struct UWidget_LootboxPanel_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_Widget_Button_LDBack_Visibility_1
struct UWidget_LootboxPanel_C_Get_Widget_Button_LDBack_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetVisibility_1
struct UWidget_LootboxPanel_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetbIsOnOpeningLootbox
struct UWidget_LootboxPanel_C_GetbIsOnOpeningLootbox_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetbIsEnabled_1
struct UWidget_LootboxPanel_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ResetLevelSequence
struct UWidget_LootboxPanel_C_ResetLevelSequence_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ContinueLevelSequence
struct UWidget_LootboxPanel_C_ContinueLevelSequence_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetLevelSequenceFrame
struct UWidget_LootboxPanel_C_SetLevelSequenceFrame_Params
{
	float                                              Frame;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnMouseButtonUp
struct UWidget_LootboxPanel_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnMouseButtonDown
struct UWidget_LootboxPanel_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.RefreshLootboxx
struct UWidget_LootboxPanel_C_RefreshLootboxx_Params
{
	int                                                Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.UpdateLoopSound
struct UWidget_LootboxPanel_C_UpdateLoopSound_Params
{
	bool                                               bIsOnPressed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BackAction
struct UWidget_LootboxPanel_C_BackAction_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnProfile__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnProfile__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LootboxStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_LootboxStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LootboxStore_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_Button_LootboxStore_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_ButtonChoice_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_LootboxPanel_C_BndEvt__Widget_ButtonChoice_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OpenLootBox
struct UWidget_LootboxPanel_C_OpenLootBox_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Back
struct UWidget_LootboxPanel_C_Back_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GrantCurrencyCoin
struct UWidget_LootboxPanel_C_GrantCurrencyCoin_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BuyLootbox
struct UWidget_LootboxPanel_C_BuyLootbox_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GrantCurrencyGem
struct UWidget_LootboxPanel_C_GrantCurrencyGem_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnConfirmLootbox
struct UWidget_LootboxPanel_C_OnConfirmLootbox_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowConfirmLootbox
struct UWidget_LootboxPanel_C_ShowConfirmLootbox_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ClearLootDrop
struct UWidget_LootboxPanel_C_ClearLootDrop_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BackToConfirm
struct UWidget_LootboxPanel_C_BackToConfirm_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowLootboxStore
struct UWidget_LootboxPanel_C_ShowLootboxStore_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowLootboxItemList
struct UWidget_LootboxPanel_C_ShowLootboxItemList_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.HideLootboxItemlist
struct UWidget_LootboxPanel_C_HideLootboxItemlist_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Construct
struct UWidget_LootboxPanel_C_Construct_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootBoxReceive
struct UWidget_LootboxPanel_C_OnLootBoxReceive_Params
{
	class UGameSparksScriptData*                       GSData;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootBoxFree
struct UWidget_LootboxPanel_C_OnLootBoxFree_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Tick
struct UWidget_LootboxPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.CheckRefreshLootbox
struct UWidget_LootboxPanel_C_CheckRefreshLootbox_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ExecuteUbergraph_Widget_LootboxPanel
struct UWidget_LootboxPanel_C_ExecuteUbergraph_Widget_LootboxPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootdropBack__DelegateSignature
struct UWidget_LootboxPanel_C_OnLootdropBack__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnProfile__DelegateSignature
struct UWidget_LootboxPanel_C_OnProfile__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnItemStore__DelegateSignature
struct UWidget_LootboxPanel_C_OnItemStore__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnFindMatch__DelegateSignature
struct UWidget_LootboxPanel_C_OnFindMatch__DelegateSignature_Params
{
};

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnBack__DelegateSignature
struct UWidget_LootboxPanel_C_OnBack__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
