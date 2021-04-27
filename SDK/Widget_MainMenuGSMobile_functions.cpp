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

// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGSMobile_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BeginMenuAnimation");

	UWidget_MainMenuGSMobile_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGSMobile_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.EndMenuAnimation");

	UWidget_MainMenuGSMobile_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_MainMenuGSMobile_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.OnFocusReceived");

	UWidget_MainMenuGSMobile_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Play_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGSMobile_C::Get_Play_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Play_bIsEnabled_1");

	UWidget_MainMenuGSMobile_C_Get_Play_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_PlayAsSurvivor_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGSMobile_C::Get_PlayAsSurvivor_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_PlayAsSurvivor_bIsEnabled_1");

	UWidget_MainMenuGSMobile_C_Get_PlayAsSurvivor_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_PlayAsHunter_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGSMobile_C::Get_PlayAsHunter_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_PlayAsHunter_bIsEnabled_1");

	UWidget_MainMenuGSMobile_C_Get_PlayAsHunter_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_CustomMatch_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGSMobile_C::Get_CustomMatch_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_CustomMatch_bIsEnabled_1");

	UWidget_MainMenuGSMobile_C_Get_CustomMatch_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_PlayTextBox_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGSMobile_C::Get_PlayTextBox_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_PlayTextBox_Text_1");

	UWidget_MainMenuGSMobile_C_Get_PlayTextBox_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Play_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_MainMenuGSMobile_C::Get_Play_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Play_Visibility_1");

	UWidget_MainMenuGSMobile_C_Get_Play_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_LootBox_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGSMobile_C::Get_LootBox_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_LootBox_Text");

	UWidget_MainMenuGSMobile_C_Get_LootBox_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Level_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGSMobile_C::Get_Level_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Level_Text");

	UWidget_MainMenuGSMobile_C_Get_Level_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Coin_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGSMobile_C::Get_Coin_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Get_Coin_Text");

	UWidget_MainMenuGSMobile_C_Get_Coin_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_6_OnBack__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_6_OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_6_OnBack__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_6_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_8_OnSetting__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_8_OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_8_OnSetting__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_Lootbox_K2Node_ComponentBoundEvent_8_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_0_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_12_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_12_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_12_OnLootbox__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_12_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_13_OnItemStore__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_13_OnItemStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_13_OnItemStore__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_13_OnItemStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_17_OnSetting__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_17_OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_17_OnSetting__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_17_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_18_OnSwitchRole__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_18_OnSwitchRole__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_18_OnSwitchRole__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_18_OnSwitchRole__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_20_OnBack__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_20_OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_20_OnBack__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_20_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_21_OnSetting__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_21_OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_21_OnSetting__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_21_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_22_OnSwitchRole__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_22_OnSwitchRole__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_22_OnSwitchRole__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_22_OnSwitchRole__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_23_OnPlayNow__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_23_OnPlayNow__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_23_OnPlayNow__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_23_OnPlayNow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_1_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_1_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_1_OnLootbox__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_FindMatchPanel_C_0_K2Node_ComponentBoundEvent_1_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_2_OnFindMatch__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_2_OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_2_OnFindMatch__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_2_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_4_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_4_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_4_OnLootbox__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_4_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_9_OnItemStore__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_9_OnItemStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_9_OnItemStore__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_9_OnItemStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_19_OnSetting__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_19_OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_19_OnSetting__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Widget_MainpanelMobile_190_K2Node_ComponentBoundEvent_19_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowFindMatch
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::ShowFindMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowFindMatch");

	UWidget_MainMenuGSMobile_C_ShowFindMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.SwitchRole
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::SwitchRole()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.SwitchRole");

	UWidget_MainMenuGSMobile_C_SwitchRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowMainPanel
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::ShowMainPanel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowMainPanel");

	UWidget_MainMenuGSMobile_C_ShowMainPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowPlayNow
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::ShowPlayNow()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowPlayNow");

	UWidget_MainMenuGSMobile_C_ShowPlayNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowLootboxStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::ShowLootboxStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowLootboxStore");

	UWidget_MainMenuGSMobile_C_ShowLootboxStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowSetting
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::ShowSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowSetting");

	UWidget_MainMenuGSMobile_C_ShowSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.EndMoveMenu
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::EndMoveMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.EndMoveMenu");

	UWidget_MainMenuGSMobile_C_EndMoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BeginMoveMenu
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BeginMoveMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BeginMoveMenu");

	UWidget_MainMenuGSMobile_C_BeginMoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowItemStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::ShowItemStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowItemStore");

	UWidget_MainMenuGSMobile_C_ShowItemStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowPlayMode
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::ShowPlayMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ShowPlayMode");

	UWidget_MainMenuGSMobile_C_ShowPlayMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BackAction");

	UWidget_MainMenuGSMobile_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_MainMenuGSMobile_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Construct");

	UWidget_MainMenuGSMobile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.OnReceiveNotifyPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_MainMenuGSMobile_C::OnReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.OnReceiveNotifyPlayerInfo");

	UWidget_MainMenuGSMobile_C_OnReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGSMobile_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.Tick");

	UWidget_MainMenuGSMobile_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGSMobile_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWidget_MainMenuGSMobile_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.OnReceiveNotifyPlayerItems
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_MainMenuGSMobile_C::OnReceiveNotifyPlayerItems(TArray<struct FString>* Items, TArray<int>* Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.OnReceiveNotifyPlayerItems");

	UWidget_MainMenuGSMobile_C_OnReceiveNotifyPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ExecuteUbergraph_Widget_MainMenuGSMobile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGSMobile_C::ExecuteUbergraph_Widget_MainMenuGSMobile(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGSMobile.Widget_MainMenuGSMobile_C.ExecuteUbergraph_Widget_MainMenuGSMobile");

	UWidget_MainMenuGSMobile_C_ExecuteUbergraph_Widget_MainMenuGSMobile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
