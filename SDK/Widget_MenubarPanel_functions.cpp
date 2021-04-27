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

// Function Widget_MenubarPanel.Widget_MenubarPanel_C.SetEnableSwitchRole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MenubarPanel_C::SetEnableSwitchRole(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.SetEnableSwitchRole");

	UWidget_MenubarPanel_C_SetEnableSwitchRole_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.GetMainMenuGS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget_MainMenuGS_C*    MainMenuGS                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenubarPanel_C::GetMainMenuGS(class UWidget_MainMenuGS_C** MainMenuGS)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.GetMainMenuGS");

	UWidget_MenubarPanel_C_GetMainMenuGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MainMenuGS != nullptr)
		*MainMenuGS = params.MainMenuGS;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_MenubarPanel_C::GetVisibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.GetVisibility_1");

	UWidget_MenubarPanel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BeginAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::BeginAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BeginAnimation");

	UWidget_MenubarPanel_C_BeginAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRecentButtonClick
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnRecentButtonClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRecentButtonClick");

	UWidget_MenubarPanel_C_OnRecentButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.UpdateRecentButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenubarPanel_C::UpdateRecentButton(int Menu)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.UpdateRecentButton");

	UWidget_MenubarPanel_C_UpdateRecentButton_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.LobbySetEnableMenuBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MenubarPanel_C::LobbySetEnableMenuBar(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.LobbySetEnableMenuBar");

	UWidget_MenubarPanel_C_LobbySetEnableMenuBar_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenubarPanel_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.AssignWidgetManager");

	UWidget_MenubarPanel_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshMenubar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::RefreshMenubar()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshMenubar");

	UWidget_MenubarPanel_C_RefreshMenubar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshRole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_MenubarPanel_C::RefreshRole(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshRole");

	UWidget_MenubarPanel_C_RefreshRole_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenubarPanel_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.RefreshLootbox");

	UWidget_MenubarPanel_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Play_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_Button_Play_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Play_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_Button_Play_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_RecentMode_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_Button_RecentMode_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_RecentMode_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_Button_RecentMode_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_4_OnCustomize__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_4_OnCustomize__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_4_OnCustomize__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_4_OnCustomize__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_5_OnSwitchRole__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_5_OnSwitchRole__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_5_OnSwitchRole__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_5_OnSwitchRole__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnLootbox__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnProfile__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnProfile__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnStore__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnStore__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_RoyalPass_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_Button_RoyalPass_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_RoyalPass_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_Button_RoyalPass_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Weekly_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenubarPanel_C::BndEvt__Widget_Button_Weekly_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.BndEvt__Widget_Button_Weekly_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWidget_MenubarPanel_C_BndEvt__Widget_Button_Weekly_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MenubarPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.PreConstruct");

	UWidget_MenubarPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_MenubarPanel_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.Construct");

	UWidget_MenubarPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.ExecuteUbergraph_Widget_MenubarPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenubarPanel_C::ExecuteUbergraph_Widget_MenubarPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.ExecuteUbergraph_Widget_MenubarPanel");

	UWidget_MenubarPanel_C_ExecuteUbergraph_Widget_MenubarPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnWeekly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnWeekly__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnWeekly__DelegateSignature");

	UWidget_MenubarPanel_C_OnWeekly__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRoyalPass__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnRoyalPass__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRoyalPass__DelegateSignature");

	UWidget_MenubarPanel_C_OnRoyalPass__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnStore__DelegateSignature");

	UWidget_MenubarPanel_C_OnStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnSetting__DelegateSignature");

	UWidget_MenubarPanel_C_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnExit__DelegateSignature");

	UWidget_MenubarPanel_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRecently__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnRecently__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnRecently__DelegateSignature");

	UWidget_MenubarPanel_C_OnRecently__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnPlay__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnPlay__DelegateSignature");

	UWidget_MenubarPanel_C_OnPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnProfile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnProfile__DelegateSignature");

	UWidget_MenubarPanel_C_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnLootbox__DelegateSignature");

	UWidget_MenubarPanel_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnSwitchRole__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnSwitchRole__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnSwitchRole__DelegateSignature");

	UWidget_MenubarPanel_C_OnSwitchRole__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnCustomize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenubarPanel_C::OnCustomize__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenubarPanel.Widget_MenubarPanel_C.OnCustomize__DelegateSignature");

	UWidget_MenubarPanel_C_OnCustomize__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
