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

// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelInGame_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.EndMenuAnimation");

	UWidget_SettingPanelInGame_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelInGame_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BeginMenuAnimation");

	UWidget_SettingPanelInGame_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Get_Widget_Button_Quit_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_SettingPanelInGame_C::Get_Widget_Button_Quit_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Get_Widget_Button_Quit_Visibility_1");

	UWidget_SettingPanelInGame_C_Get_Widget_Button_Quit_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.UpdatePing
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::UpdatePing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.UpdatePing");

	UWidget_SettingPanelInGame_C_UpdatePing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.GetText_Ping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_SettingPanelInGame_C::GetText_Ping()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.GetText_Ping");

	UWidget_SettingPanelInGame_C_GetText_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelInGame_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.AssignOptionManager");

	UWidget_SettingPanelInGame_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_SettingPanelInGame_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnFocusReceived");

	UWidget_SettingPanelInGame_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowGraphics
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::ShowGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowGraphics");

	UWidget_SettingPanelInGame_C_ShowGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowDisplay
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::ShowDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowDisplay");

	UWidget_SettingPanelInGame_C_ShowDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowSound
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::ShowSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowSound");

	UWidget_SettingPanelInGame_C_ShowSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowControl
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::ShowControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowControl");

	UWidget_SettingPanelInGame_C_ShowControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowSystem
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::ShowSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ShowSystem");

	UWidget_SettingPanelInGame_C_ShowSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BackAction");

	UWidget_SettingPanelInGame_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ResetPanel
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::ResetPanel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ResetPanel");

	UWidget_SettingPanelInGame_C_ResetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelInGame_C::BndEvt__Widget_Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ComfirmQuit
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::ComfirmQuit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ComfirmQuit");

	UWidget_SettingPanelInGame_C_ComfirmQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.CancelQuit
// (BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::CancelQuit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.CancelQuit");

	UWidget_SettingPanelInGame_C_CancelQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelInGame_C::BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Gameplay_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelInGame_C::BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelInGame_C::BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelInGame_C::BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Control_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelInGame_C::BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_System_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingPanelInGame_C::BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_SettingPanelInGame_C_BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_SettingPanelInGame_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Construct");

	UWidget_SettingPanelInGame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_SettingPanelInGame_C::Destruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.Destruct");

	UWidget_SettingPanelInGame_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ExecuteUbergraph_Widget_SettingPanelInGame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingPanelInGame_C::ExecuteUbergraph_Widget_SettingPanelInGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.ExecuteUbergraph_Widget_SettingPanelInGame");

	UWidget_SettingPanelInGame_C_ExecuteUbergraph_Widget_SettingPanelInGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnExit__DelegateSignature");

	UWidget_SettingPanelInGame_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnItemStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::OnItemStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnItemStore__DelegateSignature");

	UWidget_SettingPanelInGame_C_OnItemStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnLootbox__DelegateSignature");

	UWidget_SettingPanelInGame_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingPanelInGame_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingPanelInGame.Widget_SettingPanelInGame_C.OnFindMatch__DelegateSignature");

	UWidget_SettingPanelInGame_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
