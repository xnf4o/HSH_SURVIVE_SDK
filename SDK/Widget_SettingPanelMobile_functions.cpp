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

// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelMobile_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.EndMenuAnimation");

	UWidget_SettingPanelMobile_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelMobile_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BeginMenuAnimation");

	UWidget_SettingPanelMobile_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelMobile_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.AssignOptionManager");

	UWidget_SettingPanelMobile_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_SettingPanelMobile_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnFocusReceived");

	UWidget_SettingPanelMobile_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowSound
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::ShowSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowSound");

	UWidget_SettingPanelMobile_C_ShowSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowControl
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::ShowControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowControl");

	UWidget_SettingPanelMobile_C_ShowControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowSystem
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::ShowSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowSystem");

	UWidget_SettingPanelMobile_C_ShowSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowDisplay
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::ShowDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowDisplay");

	UWidget_SettingPanelMobile_C_ShowDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ResetPanel
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::ResetPanel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ResetPanel");

	UWidget_SettingPanelMobile_C_ResetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowSticker
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::ShowSticker()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowSticker");

	UWidget_SettingPanelMobile_C_ShowSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BackAction");

	UWidget_SettingPanelMobile_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowGraphics
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::ShowGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ShowGraphics");

	UWidget_SettingPanelMobile_C_ShowGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Sticker_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelMobile_C::BndEvt__Widget_Button_Sticker_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.BndEvt__Widget_Button_Sticker_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_SettingPanelMobile_C_BndEvt__Widget_Button_Sticker_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ExecuteUbergraph_Widget_SettingPanelMobile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelMobile_C::ExecuteUbergraph_Widget_SettingPanelMobile(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.ExecuteUbergraph_Widget_SettingPanelMobile");

	UWidget_SettingPanelMobile_C_ExecuteUbergraph_Widget_SettingPanelMobile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnExit__DelegateSignature");

	UWidget_SettingPanelMobile_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnItemStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::OnItemStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnItemStore__DelegateSignature");

	UWidget_SettingPanelMobile_C_OnItemStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnLootbox__DelegateSignature");

	UWidget_SettingPanelMobile_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelMobile_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelMobile.Widget_SettingPanelMobile_C.OnFindMatch__DelegateSignature");

	UWidget_SettingPanelMobile_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
