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

// Function Widget_Lobby.Widget_Lobby_C.UpdatePing
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::UpdatePing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.UpdatePing");

	UWidget_Lobby_C_UpdatePing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.GetText_Ping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Lobby_C::GetText_Ping()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.GetText_Ping");

	UWidget_Lobby_C_GetText_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.UpdatePlayerStatusIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHSURLobbyPS_C*>  PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_Lobby_C::UpdatePlayerStatusIcon(TArray<class AHSURLobbyPS_C*>* PlayerState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.UpdatePlayerStatusIcon");

	UWidget_Lobby_C_UpdatePlayerStatusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;

}


// Function Widget_Lobby.Widget_Lobby_C.CheckPlayerStatusIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHSURLobbyPS_C*>  SortedPlayerState              (Parm, OutParm, ZeroConstructor)
void UWidget_Lobby_C::CheckPlayerStatusIcon(TArray<class AHSURLobbyPS_C*>* SortedPlayerState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.CheckPlayerStatusIcon");

	UWidget_Lobby_C_CheckPlayerStatusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SortedPlayerState != nullptr)
		*SortedPlayerState = params.SortedPlayerState;

}


// Function Widget_Lobby.Widget_Lobby_C.SortPlayerStatusState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AHSURLobbyPS_C*>  PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AHSURLobbyPS_C*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AHSURLobbyPS_C*> UWidget_Lobby_C::SortPlayerStatusState(TArray<class AHSURLobbyPS_C*>* PlayerState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.SortPlayerStatusState");

	UWidget_Lobby_C_SortPlayerStatusState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWidget_Lobby_C::Get_Text_Countdown_ColorAndOpacity_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_ColorAndOpacity_1");

	UWidget_Lobby_C_Get_Text_Countdown_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Exit_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_Lobby_C::Get_Widget_Button_Exit_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Exit_Visibility_1");

	UWidget_Lobby_C_Get_Widget_Button_Exit_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Ready_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_Lobby_C::Get_Widget_Button_Ready_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Ready_bIsEnabled_1");

	UWidget_Lobby_C_Get_Widget_Button_Ready_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_Lobby_C::GetVisibility_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.GetVisibility_2");

	UWidget_Lobby_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Exit_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_Lobby_C::Get_Widget_Button_Exit_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Exit_bIsEnabled_1");

	UWidget_Lobby_C_Get_Widget_Button_Exit_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Ready_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_Lobby_C::Get_Widget_Button_Ready_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_Ready_Visibility_1");

	UWidget_Lobby_C_Get_Widget_Button_Ready_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Btn_CharacterSetting_bIsEnabled_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_Lobby_C::Get_Btn_CharacterSetting_bIsEnabled_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Btn_CharacterSetting_bIsEnabled_2");

	UWidget_Lobby_C_Get_Btn_CharacterSetting_bIsEnabled_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_Lobby_C::Get_Text_Countdown_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_Visibility_1");

	UWidget_Lobby_C_Get_Text_Countdown_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_SwitchRole_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_Lobby_C::Get_Widget_Button_SwitchRole_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Widget_Button_SwitchRole_Visibility_1");

	UWidget_Lobby_C_Get_Widget_Button_SwitchRole_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::Refresh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Refresh");

	UWidget_Lobby_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.FillContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lobby_C::FillContent(int PlayerCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.FillContent");

	UWidget_Lobby_C_FillContent_Params params;
	params.PlayerCount = PlayerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.SortPlayerStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<int, struct FPlayerInfoStruct_G> AllPlayerInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FPlayerInfoStruct_G> Return_SortedPlayerInfo        (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UWidget_Lobby_C::SortPlayerStatus(TMap<int, struct FPlayerInfoStruct_G> AllPlayerInfo, TArray<struct FPlayerInfoStruct_G>* Return_SortedPlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.SortPlayerStatus");

	UWidget_Lobby_C_SortPlayerStatus_Params params;
	params.AllPlayerInfo = AllPlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_SortedPlayerInfo != nullptr)
		*Return_SortedPlayerInfo = params.Return_SortedPlayerInfo;

}


// Function Widget_Lobby.Widget_Lobby_C.EnableOnNotReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_Lobby_C::EnableOnNotReady()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.EnableOnNotReady");

	UWidget_Lobby_C_EnableOnNotReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Btn_CharacterSetting_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_Lobby_C::Get_Btn_CharacterSetting_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Btn_CharacterSetting_bIsEnabled_1");

	UWidget_Lobby_C_Get_Btn_CharacterSetting_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Btn_Ready_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_Lobby_C::Get_Btn_Ready_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Btn_Ready_Visibility_1");

	UWidget_Lobby_C_Get_Btn_Ready_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.GetVisibility_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
void UWidget_Lobby_C::GetVisibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.GetVisibility_1");

	UWidget_Lobby_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.Get_TextBlock_0_ToolTipText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Lobby_C::Get_TextBlock_0_ToolTipText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_TextBlock_0_ToolTipText_1");

	UWidget_Lobby_C_Get_TextBlock_0_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_SwitchRole_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_Lobby_C::Get_SwitchRole_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_SwitchRole_bIsEnabled_1");

	UWidget_Lobby_C_Get_SwitchRole_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_MatchIdText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_Lobby_C::Get_MatchIdText_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_MatchIdText_Visibility_1");

	UWidget_Lobby_C_Get_MatchIdText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Text_MatchId_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Lobby_C::Get_Text_MatchId_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Text_MatchId_Text_1");

	UWidget_Lobby_C_Get_Text_MatchId_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_RoleText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Lobby_C::Get_RoleText_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_RoleText_Text_1");

	UWidget_Lobby_C_Get_RoleText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Lobby_C::Get_Text_Countdown_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Get_Text_Countdown_Text_1");

	UWidget_Lobby_C_Get_Text_Countdown_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Ready_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_Ready_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Ready_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_Ready_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_4_OnClickedToHunter__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_4_OnClickedToHunter__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_4_OnClickedToHunter__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_4_OnClickedToHunter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_6_OnClickedToSurvivor__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_6_OnClickedToSurvivor__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_6_OnClickedToSurvivor__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_6_OnClickedToSurvivor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_7_OnClickedToSpectator__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_7_OnClickedToSpectator__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_7_OnClickedToSpectator__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_7_OnClickedToSpectator__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Customize_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lobby_C::BndEvt__Widget_Button_Customize_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BndEvt__Widget_Button_Customize_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_Lobby_C_BndEvt__Widget_Button_Customize_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lobby_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Tick");

	UWidget_Lobby_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Lobby_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Construct");

	UWidget_Lobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.UpdateStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_LobbyStatus_E_LobbyStatus> Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lobby_C::UpdateStatus(TEnumAsByte<E_LobbyStatus_E_LobbyStatus> Status)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.UpdateStatus");

	UWidget_Lobby_C_UpdateStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.UpdateRole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lobby_C::UpdateRole(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.UpdateRole");

	UWidget_Lobby_C_UpdateRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.UpdatePreviewCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lobby_C::UpdatePreviewCamera(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.UpdatePreviewCamera");

	UWidget_Lobby_C_UpdatePreviewCamera_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.ShowCharacterSelect
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::ShowCharacterSelect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.ShowCharacterSelect");

	UWidget_Lobby_C_ShowCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.ShowCharacterSetting
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::ShowCharacterSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.ShowCharacterSetting");

	UWidget_Lobby_C_ShowCharacterSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.HideCharacterSetting
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::HideCharacterSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.HideCharacterSetting");

	UWidget_Lobby_C_HideCharacterSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.OnReceiveNotifyPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_Lobby_C::OnReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.OnReceiveNotifyPlayerInfo");

	UWidget_Lobby_C_OnReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.BackToMainMenu
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::BackToMainMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.BackToMainMenu");

	UWidget_Lobby_C_BackToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.ready
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::ready()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.ready");

	UWidget_Lobby_C_ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.ToggleCharacterSetting
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lobby_C::ToggleCharacterSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.ToggleCharacterSetting");

	UWidget_Lobby_C_ToggleCharacterSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.SwitchRole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lobby_C::SwitchRole(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.SwitchRole");

	UWidget_Lobby_C_SwitchRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Lobby_C::Destruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.Destruct");

	UWidget_Lobby_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lobby.Widget_Lobby_C.ExecuteUbergraph_Widget_Lobby
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lobby_C::ExecuteUbergraph_Widget_Lobby(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lobby.Widget_Lobby_C.ExecuteUbergraph_Widget_Lobby");

	UWidget_Lobby_C_ExecuteUbergraph_Widget_Lobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
