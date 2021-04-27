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

// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.PlaySubAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PlaymodeSelection_C::PlaySubAnimation(bool Forward_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.PlaySubAnimation");

	UWidget_PlaymodeSelection_C_PlaySubAnimation_Params params;
	params.Forward_ = Forward_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetCancelButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PlaymodeSelection_C::SetCancelButtonEnable(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetCancelButtonEnable");

	UWidget_PlaymodeSelection_C_SetCancelButtonEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetProceedButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PlaymodeSelection_C::SetProceedButtonEnable(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetProceedButtonEnable");

	UWidget_PlaymodeSelection_C_SetProceedButtonEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetMatchStatusMsg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InText                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_PlaymodeSelection_C::SetMatchStatusMsg(const struct FString& InText)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetMatchStatusMsg");

	UWidget_PlaymodeSelection_C_SetMatchStatusMsg_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodeSelection_C::SetWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetWidgetManager");

	UWidget_PlaymodeSelection_C_SetWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_QuickPlay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_Button_QuickPlay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_QuickPlay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_Button_QuickPlay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_CustomMatch_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_Button_CustomMatch_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_CustomMatch_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_Button_CustomMatch_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_MainMenu_LocalMatch_K2Node_ComponentBoundEvent_6_OnCancel__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_MainMenu_LocalMatch_K2Node_ComponentBoundEvent_6_OnCancel__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_MainMenu_LocalMatch_K2Node_ComponentBoundEvent_6_OnCancel__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_MainMenu_LocalMatch_K2Node_ComponentBoundEvent_6_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_Local_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlaymodeSelection_C::BndEvt__Widget_Button_Local_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.BndEvt__Widget_Button_Local_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_BndEvt__Widget_Button_Local_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetStatus_Finding
// (BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodeSelection_C::SetStatus_Finding()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetStatus_Finding");

	UWidget_PlaymodeSelection_C_SetStatus_Finding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetStatus_Idle
// (BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodeSelection_C::SetStatus_Idle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetStatus_Idle");

	UWidget_PlaymodeSelection_C_SetStatus_Idle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetStatus_Busy
// (BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodeSelection_C::SetStatus_Busy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetStatus_Busy");

	UWidget_PlaymodeSelection_C_SetStatus_Busy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetProceedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PlaymodeSelection_C::SetProceedState(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.SetProceedState");

	UWidget_PlaymodeSelection_C_SetProceedState_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodeSelection_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.Tick");

	UWidget_PlaymodeSelection_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.ExecuteUbergraph_Widget_PlaymodeSelection
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlaymodeSelection_C::ExecuteUbergraph_Widget_PlaymodeSelection(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.ExecuteUbergraph_Widget_PlaymodeSelection");

	UWidget_PlaymodeSelection_C_ExecuteUbergraph_Widget_PlaymodeSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnShowGuide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodeSelection_C::OnShowGuide__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnShowGuide__DelegateSignature");

	UWidget_PlaymodeSelection_C_OnShowGuide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnShowTutorial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodeSelection_C::OnShowTutorial__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnShowTutorial__DelegateSignature");

	UWidget_PlaymodeSelection_C_OnShowTutorial__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnCancelMatchClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodeSelection_C::OnCancelMatchClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnCancelMatchClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_OnCancelMatchClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnFindMatchClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_PlaymodeSelection_C::OnFindMatchClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlaymodeSelection.Widget_PlaymodeSelection_C.OnFindMatchClicked__DelegateSignature");

	UWidget_PlaymodeSelection_C_OnFindMatchClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
