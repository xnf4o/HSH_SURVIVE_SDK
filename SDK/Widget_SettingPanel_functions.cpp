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

// Function Widget_SettingPanel.Widget_SettingPanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.EndMenuAnimation");

	UWidget_SettingPanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BeginMenuAnimation");

	UWidget_SettingPanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_SettingPanel_C::GetText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.GetText_1");

	UWidget_SettingPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingPanel.Widget_SettingPanel_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanel_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.RefreshLootbox");

	UWidget_SettingPanel_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanel_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.AssignOptionManager");

	UWidget_SettingPanel_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_SettingPanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.OnFocusReceived");

	UWidget_SettingPanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ShowDisplay
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::ShowDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ShowDisplay");

	UWidget_SettingPanel_C_ShowDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ShowSound
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::ShowSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ShowSound");

	UWidget_SettingPanel_C_ShowSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ShowControl
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::ShowControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ShowControl");

	UWidget_SettingPanel_C_ShowControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ShowSystem
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::ShowSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ShowSystem");

	UWidget_SettingPanel_C_ShowSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ResetPanel
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::ResetPanel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ResetPanel");

	UWidget_SettingPanel_C_ResetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ShowCredits
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::ShowCredits()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ShowCredits");

	UWidget_SettingPanel_C_ShowCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ShowGraphics
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::ShowGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ShowGraphics");

	UWidget_SettingPanel_C_ShowGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BackAction");

	UWidget_SettingPanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnFindMatch__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnFindMatch__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_1_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_10_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_10_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_10_OnLootbox__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_10_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_11_OnProfile__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_11_OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_11_OnProfile__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_11_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Credits_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanel_C::BndEvt__Widget_Button_Credits_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.BndEvt__Widget_Button_Credits_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_SettingPanel_C_BndEvt__Widget_Button_Credits_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.ExecuteUbergraph_Widget_SettingPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanel_C::ExecuteUbergraph_Widget_SettingPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.ExecuteUbergraph_Widget_SettingPanel");

	UWidget_SettingPanel_C_ExecuteUbergraph_Widget_SettingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.OnProfile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.OnProfile__DelegateSignature");

	UWidget_SettingPanel_C_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.OnExit__DelegateSignature");

	UWidget_SettingPanel_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.OnItemStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::OnItemStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.OnItemStore__DelegateSignature");

	UWidget_SettingPanel_C_OnItemStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.OnLootbox__DelegateSignature");

	UWidget_SettingPanel_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanel.Widget_SettingPanel_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanel_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanel.Widget_SettingPanel_C.OnFindMatch__DelegateSignature");

	UWidget_SettingPanel_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
