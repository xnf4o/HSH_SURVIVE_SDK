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

// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BeginMenuAnimation");

	UWidget_MainMenuGS_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.EndMenuAnimation");

	UWidget_MainMenuGS_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.GetActiveWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget_MainMenuGS_C::GetActiveWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.GetActiveWidget");

	UWidget_MainMenuGS_C_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.GetLastWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 CacheWidget                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::GetLastWidget(class UWidget** CacheWidget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.GetLastWidget");

	UWidget_MainMenuGS_C_GetLastWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CacheWidget != nullptr)
		*CacheWidget = params.CacheWidget;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.SetLastWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 CacheWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::SetLastWidget(class UWidget* CacheWidget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.SetLastWidget");

	UWidget_MainMenuGS_C_SetLastWidget_Params params;
	params.CacheWidget = CacheWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshCustomizeHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::RefreshCustomizeHeader(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshCustomizeHeader");

	UWidget_MainMenuGS_C_RefreshCustomizeHeader_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.SetInputMenuBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MainMenuGS_C::SetInputMenuBar(bool bInIsEnabled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.SetInputMenuBar");

	UWidget_MainMenuGS_C_SetInputMenuBar_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshMenubar
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::RefreshMenubar()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshMenubar");

	UWidget_MainMenuGS_C_RefreshMenubar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshRole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::RefreshRole(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshRole");

	UWidget_MainMenuGS_C_RefreshRole_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_MainMenuGS_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnKeyDown");

	UWidget_MainMenuGS_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshLootbox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::RefreshLootbox(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.RefreshLootbox");

	UWidget_MainMenuGS_C_RefreshLootbox_Params params;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_MainMenuGS_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnFocusReceived");

	UWidget_MainMenuGS_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Play_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGS_C::Get_Play_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Play_bIsEnabled_1");

	UWidget_MainMenuGS_C_Get_Play_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayAsSurvivor_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGS_C::Get_PlayAsSurvivor_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayAsSurvivor_bIsEnabled_1");

	UWidget_MainMenuGS_C_Get_PlayAsSurvivor_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayAsHunter_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGS_C::Get_PlayAsHunter_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayAsHunter_bIsEnabled_1");

	UWidget_MainMenuGS_C_Get_PlayAsHunter_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_CustomMatch_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenuGS_C::Get_CustomMatch_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_CustomMatch_bIsEnabled_1");

	UWidget_MainMenuGS_C_Get_CustomMatch_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayTextBox_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGS_C::Get_PlayTextBox_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_PlayTextBox_Text_1");

	UWidget_MainMenuGS_C_Get_PlayTextBox_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Play_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_MainMenuGS_C::Get_Play_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Play_Visibility_1");

	UWidget_MainMenuGS_C_Get_Play_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_LootBox_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGS_C::Get_LootBox_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_LootBox_Text");

	UWidget_MainMenuGS_C_Get_LootBox_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Level_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGS_C::Get_Level_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Level_Text");

	UWidget_MainMenuGS_C_Get_Level_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Coin_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MainMenuGS_C::Get_Coin_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Get_Coin_Text");

	UWidget_MainMenuGS_C_Get_Coin_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_4FC9E1B244374302F3ACE7A5E1C6D882
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MainMenuGS_C::OnResponse_4FC9E1B244374302F3ACE7A5E1C6D882(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_4FC9E1B244374302F3ACE7A5E1C6D882");

	UWidget_MainMenuGS_C_OnResponse_4FC9E1B244374302F3ACE7A5E1C6D882_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_F90647D0470996F37B8AA8A7BADD48B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MainMenuGS_C::OnResponse_F90647D0470996F37B8AA8A7BADD48B6(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_F90647D0470996F37B8AA8A7BADD48B6");

	UWidget_MainMenuGS_C_OnResponse_F90647D0470996F37B8AA8A7BADD48B6_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_C2959F9B436A9C6AC635CBB0C818F938
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MainMenuGS_C::OnResponse_C2959F9B436A9C6AC635CBB0C818F938(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_C2959F9B436A9C6AC635CBB0C818F938");

	UWidget_MainMenuGS_C_OnResponse_C2959F9B436A9C6AC635CBB0C818F938_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_57358BC344D28DBCD688AFB2F2F710B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MainMenuGS_C::OnResponse_57358BC344D28DBCD688AFB2F2F710B4(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnResponse_57358BC344D28DBCD688AFB2F2F710B4");

	UWidget_MainMenuGS_C_OnResponse_57358BC344D28DBCD688AFB2F2F710B4_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_RemoveProfile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Button_RemoveProfile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_RemoveProfile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Button_RemoveProfile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_Removeskin_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Button_Removeskin_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_Removeskin_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Button_Removeskin_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_Removestickers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Button_Removestickers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_Removestickers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Button_Removestickers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_74_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Button_74_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Button_74_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Button_74_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_debug_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_Button_debug_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_debug_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_Button_debug_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_debug_2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_Button_debug_2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Button_debug_2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_Button_debug_2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_22_OnShowTutorial__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_22_OnShowTutorial__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_22_OnShowTutorial__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_22_OnShowTutorial__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent               Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_MainMenuGS_C::OnReceiveKey(const struct FKeyEvent& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveKey");

	UWidget_MainMenuGS_C_OnReceiveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_46_OnCustomize__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_46_OnCustomize__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_46_OnCustomize__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_46_OnCustomize__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_47_OnSwitchRole__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_47_OnSwitchRole__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_47_OnSwitchRole__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_47_OnSwitchRole__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_48_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_48_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_48_OnLootbox__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_48_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_49_OnProfile__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_49_OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_49_OnProfile__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_49_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_50_OnPlay__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_50_OnPlay__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_50_OnPlay__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_50_OnPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_51_OnRecently__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_51_OnRecently__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_51_OnRecently__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_51_OnRecently__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_52_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_52_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_52_OnExit__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_52_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_53_OnSetting__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_53_OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_53_OnSetting__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_53_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_PlaymodePanel_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_ProfilePanel_K2Node_ComponentBoundEvent_35_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_ProfilePanel_K2Node_ComponentBoundEvent_35_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_ProfilePanel_K2Node_ComponentBoundEvent_35_OnExit__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_ProfilePanel_K2Node_ComponentBoundEvent_35_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_LootboxPanel_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_LootboxPanel_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_LootboxPanel_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_LootboxPanel_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_SettingPanel_K2Node_ComponentBoundEvent_15_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Mainpanel_K2Node_ComponentBoundEvent_3_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_Mainpanel_K2Node_ComponentBoundEvent_3_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_Mainpanel_K2Node_ComponentBoundEvent_3_OnExit__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_Mainpanel_K2Node_ComponentBoundEvent_3_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_FindMatchPanel_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_0_OnStore__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_0_OnStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_0_OnStore__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_0_OnStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_RoyalPass_K2Node_ComponentBoundEvent_10_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_RoyalPass_K2Node_ComponentBoundEvent_10_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_RoyalPass_K2Node_ComponentBoundEvent_10_OnExit__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_RoyalPass_K2Node_ComponentBoundEvent_10_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnRoyalPass__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnRoyalPass__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnRoyalPass__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnRoyalPass__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnWeekly__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnWeekly__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnWeekly__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_MenubarPanel_K2Node_ComponentBoundEvent_10_OnWeekly__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_WeeklyQuestPanel_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_WeeklyQuestPanel_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_WeeklyQuestPanel_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_WeeklyQuestPanel_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_StorePanel_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__Widget_StorePanel_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__Widget_StorePanel_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__Widget_StorePanel_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowCustomize
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowCustomize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowCustomize");

	UWidget_MainMenuGS_C_ShowCustomize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.SwitchRole
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::SwitchRole()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.SwitchRole");

	UWidget_MainMenuGS_C_SwitchRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowMainPanel
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowMainPanel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowMainPanel");

	UWidget_MainMenuGS_C_ShowMainPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowPlayNow
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowPlayNow()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowPlayNow");

	UWidget_MainMenuGS_C_ShowPlayNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowLootboxStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowLootboxStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowLootboxStore");

	UWidget_MainMenuGS_C_ShowLootboxStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowSetting
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowSetting");

	UWidget_MainMenuGS_C_ShowSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.EndMoveMenu
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::EndMoveMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.EndMoveMenu");

	UWidget_MainMenuGS_C_EndMoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BeginMoveMenu
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::BeginMoveMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BeginMoveMenu");

	UWidget_MainMenuGS_C_BeginMoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowItemStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowItemStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowItemStore");

	UWidget_MainMenuGS_C_ShowItemStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowPlayMode
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowPlayMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowPlayMode");

	UWidget_MainMenuGS_C_ShowPlayMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenuGS_C::BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_MainMenuGS_C_BndEvt__JoinBTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BackAction");

	UWidget_MainMenuGS_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowProfile
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::ShowProfile()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ShowProfile");

	UWidget_MainMenuGS_C_ShowProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.BackOnPlaymode
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::BackOnPlaymode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.BackOnPlaymode");

	UWidget_MainMenuGS_C_BackOnPlaymode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnRoyalPass
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::OnRoyalPass()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnRoyalPass");

	UWidget_MainMenuGS_C_OnRoyalPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnWeeklyQuest
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenuGS_C::OnWeeklyQuest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnWeeklyQuest");

	UWidget_MainMenuGS_C_OnWeeklyQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::OnReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerInfo");

	UWidget_MainMenuGS_C_OnReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Tick");

	UWidget_MainMenuGS_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerItems
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_MainMenuGS_C::OnReceiveNotifyPlayerItems(TArray<struct FString>* Items, TArray<int>* Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerItems");

	UWidget_MainMenuGS_C_OnReceiveNotifyPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerPerks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_MainMenuGS_C::OnReceiveNotifyPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerPerks");

	UWidget_MainMenuGS_C_OnReceiveNotifyPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerSkins
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_MainMenuGS_C::OnReceiveNotifyPlayerSkins(TArray<struct FString>* Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerSkins");

	UWidget_MainMenuGS_C_OnReceiveNotifyPlayerSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.EnableProfileButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MainMenuGS_C::EnableProfileButton(bool bIsEnable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.EnableProfileButton");

	UWidget_MainMenuGS_C_EnableProfileButton_Params params;
	params.bIsEnable = bIsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_MainMenuGS_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.Construct");

	UWidget_MainMenuGS_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerHeads
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Heads                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_MainMenuGS_C::OnReceiveNotifyPlayerHeads(TArray<struct FString>* Heads)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerHeads");

	UWidget_MainMenuGS_C_OnReceiveNotifyPlayerHeads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Heads != nullptr)
		*Heads = params.Heads;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerBacks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Backs                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_MainMenuGS_C::OnReceiveNotifyPlayerBacks(TArray<struct FString>* Backs)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.OnReceiveNotifyPlayerBacks");

	UWidget_MainMenuGS_C_OnReceiveNotifyPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Backs != nullptr)
		*Backs = params.Backs;

}


// Function Widget_MainMenuGS.Widget_MainMenuGS_C.ExecuteUbergraph_Widget_MainMenuGS
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenuGS_C::ExecuteUbergraph_Widget_MainMenuGS(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenuGS.Widget_MainMenuGS_C.ExecuteUbergraph_Widget_MainMenuGS");

	UWidget_MainMenuGS_C_ExecuteUbergraph_Widget_MainMenuGS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
