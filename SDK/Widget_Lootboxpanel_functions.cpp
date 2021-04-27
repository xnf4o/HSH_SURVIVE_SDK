// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BeginMenuAnimation");

	UWidget_LootboxPanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.EndMenuAnimation");

	UWidget_LootboxPanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetCanOpenMultiple
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_LootboxPanel_C::GetCanOpenMultiple()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetCanOpenMultiple");

	UWidget_LootboxPanel_C_GetCanOpenMultiple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetOnReleased
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::SetOnReleased()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetOnReleased");

	UWidget_LootboxPanel_C_SetOnReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetOnPressed
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::SetOnPressed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetOnPressed");

	UWidget_LootboxPanel_C_SetOnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_CanvasPanel_Debug_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_LootboxPanel_C::Get_CanvasPanel_Debug_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_CanvasPanel_Debug_Visibility_1");

	UWidget_LootboxPanel_C_Get_CanvasPanel_Debug_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_Widget_Button_LDConfirm_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_LootboxPanel_C::Get_Widget_Button_LDConfirm_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_Widget_Button_LDConfirm_Visibility_1");

	UWidget_LootboxPanel_C_Get_Widget_Button_LDConfirm_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.AssignWidgetManager");

	UWidget_LootboxPanel_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_Widget_Button_LDBack_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_LootboxPanel_C::Get_Widget_Button_LDBack_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Get_Widget_Button_LDBack_Visibility_1");

	UWidget_LootboxPanel_C_Get_Widget_Button_LDBack_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_LootboxPanel_C::GetVisibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetVisibility_1");

	UWidget_LootboxPanel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetbIsOnOpeningLootbox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_LootboxPanel_C::GetbIsOnOpeningLootbox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetbIsOnOpeningLootbox");

	UWidget_LootboxPanel_C_GetbIsOnOpeningLootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetbIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_LootboxPanel_C::GetbIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GetbIsEnabled_1");

	UWidget_LootboxPanel_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ResetLevelSequence
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::ResetLevelSequence()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ResetLevelSequence");

	UWidget_LootboxPanel_C_ResetLevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ContinueLevelSequence
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::ContinueLevelSequence()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ContinueLevelSequence");

	UWidget_LootboxPanel_C_ContinueLevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetLevelSequenceFrame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Frame                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::SetLevelSequenceFrame(float Frame)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.SetLevelSequenceFrame");

	UWidget_LootboxPanel_C_SetLevelSequenceFrame_Params params;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_LootboxPanel_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnMouseButtonUp");

	UWidget_LootboxPanel_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_LootboxPanel_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnMouseButtonDown");

	UWidget_LootboxPanel_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.RefreshLootboxx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::RefreshLootboxx(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.RefreshLootboxx");

	UWidget_LootboxPanel_C_RefreshLootboxx_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.UpdateLoopSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsOnPressed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_LootboxPanel_C::UpdateLoopSound(bool bIsOnPressed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.UpdateLoopSound");

	UWidget_LootboxPanel_C_UpdateLoopSound_Params params;
	params.bIsOnPressed = bIsOnPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BackAction");

	UWidget_LootboxPanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnProfile__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnProfile__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LootboxStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_LootboxStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LootboxStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_LootboxStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LootboxStore_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxPanel_C::BndEvt__Widget_Button_LootboxStore_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_Button_LootboxStore_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_Button_LootboxStore_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_ButtonChoice_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::BndEvt__Widget_ButtonChoice_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BndEvt__Widget_ButtonChoice_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LootboxPanel_C_BndEvt__Widget_ButtonChoice_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OpenLootBox
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OpenLootBox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OpenLootBox");

	UWidget_LootboxPanel_C_OpenLootBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Back");

	UWidget_LootboxPanel_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GrantCurrencyCoin
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::GrantCurrencyCoin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GrantCurrencyCoin");

	UWidget_LootboxPanel_C_GrantCurrencyCoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BuyLootbox
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::BuyLootbox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BuyLootbox");

	UWidget_LootboxPanel_C_BuyLootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GrantCurrencyGem
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::GrantCurrencyGem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.GrantCurrencyGem");

	UWidget_LootboxPanel_C_GrantCurrencyGem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnConfirmLootbox
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OnConfirmLootbox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnConfirmLootbox");

	UWidget_LootboxPanel_C_OnConfirmLootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowConfirmLootbox
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::ShowConfirmLootbox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowConfirmLootbox");

	UWidget_LootboxPanel_C_ShowConfirmLootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ClearLootDrop
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::ClearLootDrop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ClearLootDrop");

	UWidget_LootboxPanel_C_ClearLootDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BackToConfirm
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::BackToConfirm()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.BackToConfirm");

	UWidget_LootboxPanel_C_BackToConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowLootboxStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::ShowLootboxStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowLootboxStore");

	UWidget_LootboxPanel_C_ShowLootboxStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowLootboxItemList
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::ShowLootboxItemList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ShowLootboxItemList");

	UWidget_LootboxPanel_C_ShowLootboxItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.HideLootboxItemlist
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::HideLootboxItemlist()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.HideLootboxItemlist");

	UWidget_LootboxPanel_C_HideLootboxItemlist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_LootboxPanel_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Construct");

	UWidget_LootboxPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootBoxReceive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameSparksScriptData*   GSData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::OnLootBoxReceive(class UGameSparksScriptData* GSData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootBoxReceive");

	UWidget_LootboxPanel_C_OnLootBoxReceive_Params params;
	params.GSData = GSData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootBoxFree
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OnLootBoxFree()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootBoxFree");

	UWidget_LootboxPanel_C_OnLootBoxFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.Tick");

	UWidget_LootboxPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.CheckRefreshLootbox
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::CheckRefreshLootbox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.CheckRefreshLootbox");

	UWidget_LootboxPanel_C_CheckRefreshLootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ExecuteUbergraph_Widget_LootboxPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxPanel_C::ExecuteUbergraph_Widget_LootboxPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.ExecuteUbergraph_Widget_LootboxPanel");

	UWidget_LootboxPanel_C_ExecuteUbergraph_Widget_LootboxPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootdropBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OnLootdropBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnLootdropBack__DelegateSignature");

	UWidget_LootboxPanel_C_OnLootdropBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnProfile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnProfile__DelegateSignature");

	UWidget_LootboxPanel_C_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnItemStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OnItemStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnItemStore__DelegateSignature");

	UWidget_LootboxPanel_C_OnItemStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnFindMatch__DelegateSignature");

	UWidget_LootboxPanel_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxPanel_C::OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootboxpanel.Widget_LootboxPanel_C.OnBack__DelegateSignature");

	UWidget_LootboxPanel_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
