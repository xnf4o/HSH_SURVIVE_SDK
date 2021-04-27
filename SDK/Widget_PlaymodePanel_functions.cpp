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

// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodePanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BeginMenuAnimation");

	UWidget_PlaymodePanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodePanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.EndMenuAnimation");

	UWidget_PlaymodePanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodePanel_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.RefreshLootbox");

	UWidget_PlaymodePanel_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.SetWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodePanel_C::SetWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.SetWidgetManager");

	UWidget_PlaymodePanel_C_SetWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_PlaymodePanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.OnFocusReceived");

	UWidget_PlaymodePanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodePanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BackAction");

	UWidget_PlaymodePanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_5_OnCancelMatchClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodePanel_C::BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_5_OnCancelMatchClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_5_OnCancelMatchClicked__DelegateSignature");

	UWidget_PlaymodePanel_C_BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_5_OnCancelMatchClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_4_OnFindMatchClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodePanel_C::BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_4_OnFindMatchClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_4_OnFindMatchClicked__DelegateSignature");

	UWidget_PlaymodePanel_C_BndEvt__Widget_Playmode_K2Node_ComponentBoundEvent_4_OnFindMatchClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.ExecuteUbergraph_Widget_PlaymodePanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodePanel_C::ExecuteUbergraph_Widget_PlaymodePanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.ExecuteUbergraph_Widget_PlaymodePanel");

	UWidget_PlaymodePanel_C_ExecuteUbergraph_Widget_PlaymodePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodePanel_C::OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodePanel.Widget_PlaymodePanel_C.OnBack__DelegateSignature");

	UWidget_PlaymodePanel_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
