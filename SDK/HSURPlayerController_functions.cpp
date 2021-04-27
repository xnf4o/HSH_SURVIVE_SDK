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

// Function HSURPlayerController.HSURPlayerController_C.GetIsEnableBlockCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::GetIsEnableBlockCamera(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.GetIsEnableBlockCamera");

	AHSURPlayerController_C_GetIsEnableBlockCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURPlayerController.HSURPlayerController_C.GetIsEnableBlockAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::GetIsEnableBlockAction(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.GetIsEnableBlockAction");

	AHSURPlayerController_C_GetIsEnableBlockAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURPlayerController.HSURPlayerController_C.IsChatBoxOpened
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURPlayerController_C::IsChatBoxOpened()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.IsChatBoxOpened");

	AHSURPlayerController_C_IsChatBoxOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURPlayerController.HSURPlayerController_C.GetLevelName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString AHSURPlayerController_C::GetLevelName(const struct FString& MapName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.GetLevelName");

	AHSURPlayerController_C_GetLevelName_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURPlayerController.HSURPlayerController_C.IsTutorialInViewport
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURPlayerController_C::IsTutorialInViewport()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.IsTutorialInViewport");

	AHSURPlayerController_C_IsTutorialInViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURPlayerController.HSURPlayerController_C.GetBlockKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FKey>            BlockKeys                      (Parm, OutParm, ZeroConstructor)
void AHSURPlayerController_C::GetBlockKeys(TArray<struct FKey>* BlockKeys)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.GetBlockKeys");

	AHSURPlayerController_C_GetBlockKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlockKeys != nullptr)
		*BlockKeys = params.BlockKeys;

}


// Function HSURPlayerController.HSURPlayerController_C.OnDelayAfterInitUI
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnDelayAfterInitUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnDelayAfterInitUI");

	AHSURPlayerController_C_OnDelayAfterInitUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnDelayBeforeInitUI
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnDelayBeforeInitUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnDelayBeforeInitUI");

	AHSURPlayerController_C_OnDelayBeforeInitUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryDisableCamera
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryDisableCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryDisableCamera");

	AHSURPlayerController_C_TryDisableCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryEnableCamera
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryEnableCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryEnableCamera");

	AHSURPlayerController_C_TryEnableCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryDisableAction
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryDisableAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryDisableAction");

	AHSURPlayerController_C_TryDisableAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryEnableAction
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryEnableAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryEnableAction");

	AHSURPlayerController_C_TryEnableAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryDisableMovement
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryDisableMovement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryDisableMovement");

	AHSURPlayerController_C_TryDisableMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryEnableMovement
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryEnableMovement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryEnableMovement");

	AHSURPlayerController_C_TryEnableMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryDisableInput
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryDisableInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryDisableInput");

	AHSURPlayerController_C_TryDisableInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TryEnableInput
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TryEnableInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TryEnableInput");

	AHSURPlayerController_C_TryEnableInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnRep_SummaryResultLog
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnRep_SummaryResultLog()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnRep_SummaryResultLog");

	AHSURPlayerController_C_OnRep_SummaryResultLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.LoadGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::LoadGame(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.LoadGame");

	AHSURPlayerController_C_LoadGame_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_M_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_M_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_M_K2Node_InputKeyEvent_7");

	AHSURPlayerController_C_InpActEvt_M_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_Tab_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_6");

	AHSURPlayerController_C_InpActEvt_Tab_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_Tab_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_5");

	AHSURPlayerController_C_InpActEvt_Tab_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Exit_Game_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_Exit_Game_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Exit_Game_K2Node_InputActionEvent_1");

	AHSURPlayerController_C_InpActEvt_Exit_Game_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_Enter_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_4");

	AHSURPlayerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Shift_Enter_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_Shift_Enter_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Shift_Enter_K2Node_InputKeyEvent_3");

	AHSURPlayerController_C_InpActEvt_Shift_Enter_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_T_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_T_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_T_K2Node_InputKeyEvent_2");

	AHSURPlayerController_C_InpActEvt_T_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Y_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::InpActEvt_Y_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Y_K2Node_InputKeyEvent_1");

	AHSURPlayerController_C_InpActEvt_Y_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InitInGameSetting
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::InitInGameSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InitInGameSetting");

	AHSURPlayerController_C_InitInGameSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.SetSettingActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::SetSettingActive(bool Active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.SetSettingActive");

	AHSURPlayerController_C_SetSettingActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.HideSetting
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::HideSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.HideSetting");

	AHSURPlayerController_C_HideSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InitInGameInfo
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::InitInGameInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InitInGameInfo");

	AHSURPlayerController_C_InitInGameInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.SetGameInfoActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::SetGameInfoActive(bool Active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.SetGameInfoActive");

	AHSURPlayerController_C_SetGameInfoActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DebugToggleDebugWindow
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DebugToggleDebugWindow()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DebugToggleDebugWindow");

	AHSURPlayerController_C_DebugToggleDebugWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DebugOpenDebugWindow
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DebugOpenDebugWindow()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DebugOpenDebugWindow");

	AHSURPlayerController_C_DebugOpenDebugWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DebugCloseDebugWindow
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DebugCloseDebugWindow()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DebugCloseDebugWindow");

	AHSURPlayerController_C_DebugCloseDebugWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnHunterReceiveDmg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::OnHunterReceiveDmg(class AHSHCharacterBase* OwnerCharacter, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnHunterReceiveDmg");

	AHSURPlayerController_C_OnHunterReceiveDmg_Params params;
	params.OwnerCharacter = OwnerCharacter;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DebugMoveLocation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DebugMoveLocation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DebugMoveLocation");

	AHSURPlayerController_C_DebugMoveLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ShowHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ShowHUD()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ShowHUD");

	AHSURPlayerController_C_ShowHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.BackToMainMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::BackToMainMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.BackToMainMenu");

	AHSURPlayerController_C_BackToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableInputClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableInputClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableInputClientSide");

	AHSURPlayerController_C_DisableInputClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableInputClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableInputClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableInputClientSide");

	AHSURPlayerController_C_EnableInputClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableInputClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableInputClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableInputClient");

	AHSURPlayerController_C_EnableInputClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableInputClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableInputClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableInputClient");

	AHSURPlayerController_C_DisableInputClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableMovementClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableMovementClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableMovementClient");

	AHSURPlayerController_C_EnableMovementClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableMovementClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableMovementClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableMovementClientSide");

	AHSURPlayerController_C_EnableMovementClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableMovementClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableMovementClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableMovementClient");

	AHSURPlayerController_C_DisableMovementClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableMovementClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableMovementClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableMovementClientSide");

	AHSURPlayerController_C_DisableMovementClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableActionClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableActionClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableActionClient");

	AHSURPlayerController_C_EnableActionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableActionClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableActionClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableActionClient");

	AHSURPlayerController_C_DisableActionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableActionClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableActionClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableActionClientSide");

	AHSURPlayerController_C_EnableActionClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableActionClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableActionClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableActionClientSide");

	AHSURPlayerController_C_DisableActionClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.HideHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::HideHUD()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.HideHUD");

	AHSURPlayerController_C_HideHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerEndGameBlockController
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerEndGameBlockController()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerEndGameBlockController");

	AHSURPlayerController_C_ServerEndGameBlockController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ShowFadeEndScene
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsShowLoading                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::ShowFadeEndScene(float Duration, bool bIsShowLoading)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ShowFadeEndScene");

	AHSURPlayerController_C_ShowFadeEndScene_Params params;
	params.Duration = Duration;
	params.bIsShowLoading = bIsShowLoading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableMouseCameraClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableMouseCameraClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableMouseCameraClient");

	AHSURPlayerController_C_EnableMouseCameraClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableMouseCameraClient
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableMouseCameraClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableMouseCameraClient");

	AHSURPlayerController_C_DisableMouseCameraClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableCameraClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableCameraClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableCameraClientSide");

	AHSURPlayerController_C_EnableCameraClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableCameraClientSide
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::DisableCameraClientSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableCameraClientSide");

	AHSURPlayerController_C_DisableCameraClientSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EnableBlockInputKeys
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EnableBlockInputKeys()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EnableBlockInputKeys");

	AHSURPlayerController_C_EnableBlockInputKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerDisableInputKeys
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKey>            Keys                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURPlayerController_C::ServerDisableInputKeys(TArray<struct FKey> Keys)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerDisableInputKeys");

	AHSURPlayerController_C_ServerDisableInputKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.DisableBlockInputKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKey>            Keys                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURPlayerController_C::DisableBlockInputKeys(TArray<struct FKey> Keys)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.DisableBlockInputKeys");

	AHSURPlayerController_C_DisableBlockInputKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.PlayEndGameEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EndGameReason_E_EndGameReason> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::PlayEndGameEvent(TEnumAsByte<E_EndGameReason_E_EndGameReason> Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.PlayEndGameEvent");

	AHSURPlayerController_C_PlayEndGameEvent_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.PrepareFadeWidget
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::PrepareFadeWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.PrepareFadeWidget");

	AHSURPlayerController_C_PrepareFadeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.FadeWithUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFadeOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::FadeWithUI(bool bFadeOut, float Seconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.FadeWithUI");

	AHSURPlayerController_C_FadeWithUI_Params params;
	params.bFadeOut = bFadeOut;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.BlackScreenWithUI
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::BlackScreenWithUI(bool bShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.BlackScreenWithUI");

	AHSURPlayerController_C_BlackScreenWithUI_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerToResult
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerToResult()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerToResult");

	AHSURPlayerController_C_ServerToResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ShowEndgameReason
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ShowEndgameReason()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ShowEndgameReason");

	AHSURPlayerController_C_ShowEndgameReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.EndByLeave
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::EndByLeave()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.EndByLeave");

	AHSURPlayerController_C_EndByLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ShowChatBox
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ShowChatBox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ShowChatBox");

	AHSURPlayerController_C_ShowChatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.HideChatBox
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::HideChatBox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.HideChatBox");

	AHSURPlayerController_C_HideChatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.PrepareChatbox
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::PrepareChatbox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.PrepareChatbox");

	AHSURPlayerController_C_PrepareChatbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.CommitText
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatData             Chat                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURPlayerController_C::CommitText(const struct FS_ChatData& Chat)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.CommitText");

	AHSURPlayerController_C_CommitText_Params params;
	params.Chat = Chat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.SetChatboxChannel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ChatType_E_ChatType> ChatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::SetChatboxChannel(TEnumAsByte<E_ChatType_E_ChatType> ChatType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.SetChatboxChannel");

	AHSURPlayerController_C_SetChatboxChannel_Params params;
	params.ChatType = ChatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerStaticDebug
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerStaticDebug()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerStaticDebug");

	AHSURPlayerController_C_ServerStaticDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnConfirm
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnConfirm()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnConfirm");

	AHSURPlayerController_C_OnConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnCancel
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnCancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnCancel");

	AHSURPlayerController_C_OnCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.Response
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::Response(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.Response");

	AHSURPlayerController_C_Response_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerTestGamesparkRequest
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerTestGamesparkRequest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerTestGamesparkRequest");

	AHSURPlayerController_C_ServerTestGamesparkRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ClientResponse
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// VaRestPlugin_ERequestStatus    Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::ClientResponse(const struct FString& Content, VaRestPlugin_ERequestStatus Status)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ClientResponse");

	AHSURPlayerController_C_ClientResponse_Params params;
	params.Content = Content;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerGetCredential
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerGetCredential()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerGetCredential");

	AHSURPlayerController_C_ServerGetCredential_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ClientPrintCredential
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 credential                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 CredentialSecret               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURPlayerController_C::ClientPrintCredential(const struct FString& credential, const struct FString& CredentialSecret)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ClientPrintCredential");

	AHSURPlayerController_C_ClientPrintCredential_Params params;
	params.credential = credential;
	params.CredentialSecret = CredentialSecret;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerDebugFilePath
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerDebugFilePath()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerDebugFilePath");

	AHSURPlayerController_C_ServerDebugFilePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.PrintDebugFile
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURPlayerController_C::PrintDebugFile(TArray<struct FString>* Array)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.PrintDebugFile");

	AHSURPlayerController_C_PrintDebugFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function HSURPlayerController.HSURPlayerController_C.ClientDebugFilePath
// (Net, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Array                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURPlayerController_C::ClientDebugFilePath(TArray<struct FString> Array)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ClientDebugFilePath");

	AHSURPlayerController_C_ClientDebugFilePath_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerTrySaveResult
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerTrySaveResult()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerTrySaveResult");

	AHSURPlayerController_C_ServerTrySaveResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnConfirm_2
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnConfirm_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnConfirm_2");

	AHSURPlayerController_C_OnConfirm_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnCancel_2
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnCancel_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnCancel_2");

	AHSURPlayerController_C_OnCancel_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ToggleMenu
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ToggleMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ToggleMenu");

	AHSURPlayerController_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnOpenExitMenu
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnOpenExitMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnOpenExitMenu");

	AHSURPlayerController_C_OnOpenExitMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.AssignSummaryResultList
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_SummaryResult> SummaryResultList              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          DurationToResultMap            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::AssignSummaryResultList(TArray<struct FS_SummaryResult> SummaryResultList, const struct FS_EndGameResult& EndGameResult, float DurationToResultMap)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.AssignSummaryResultList");

	AHSURPlayerController_C_AssignSummaryResultList_Params params;
	params.SummaryResultList = SummaryResultList;
	params.EndGameResult = EndGameResult;
	params.DurationToResultMap = DurationToResultMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ToResult
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ToResult()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ToResult");

	AHSURPlayerController_C_ToResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.LeaveWithMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURPlayerController_C::LeaveWithMessage(const struct FString& Message)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.LeaveWithMessage");

	AHSURPlayerController_C_LeaveWithMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.SurvivorLeaveAskForContinue
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::SurvivorLeaveAskForContinue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.SurvivorLeaveAskForContinue");

	AHSURPlayerController_C_SurvivorLeaveAskForContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ClientAskingForContinue
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ClientAskingForContinue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ClientAskingForContinue");

	AHSURPlayerController_C_ClientAskingForContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerAskForContinue_Yes
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerAskForContinue_Yes()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerAskForContinue_Yes");

	AHSURPlayerController_C_ServerAskForContinue_Yes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerAskForContinue_No
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ServerAskForContinue_No()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerAskForContinue_No");

	AHSURPlayerController_C_ServerAskForContinue_No_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ClientActiveInput
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ClientActiveInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ClientActiveInput");

	AHSURPlayerController_C_ClientActiveInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.RequestSafeLeaveGame
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::RequestSafeLeaveGame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.RequestSafeLeaveGame");

	AHSURPlayerController_C_RequestSafeLeaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.SendMatchAnalyticsEvent
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::SendMatchAnalyticsEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.SendMatchAnalyticsEvent");

	AHSURPlayerController_C_SendMatchAnalyticsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.PassCharacterInfoToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURPlayerController_C::PassCharacterInfoToServer(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.PassCharacterInfoToServer");

	AHSURPlayerController_C_PassCharacterInfoToServer_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InitializePlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURPlayerController_C::InitializePlayer(const struct FPlayerInfoStruct_G& Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InitializePlayer");

	AHSURPlayerController_C_InitializePlayer_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSURPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ReceiveBeginPlay");

	AHSURPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.InitializeHud
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRespawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::InitializeHud(bool bRespawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.InitializeHud");

	AHSURPlayerController_C_InitializeHud_Params params;
	params.bRespawn = bRespawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.OnIntroduceEnd
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::OnIntroduceEnd()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.OnIntroduceEnd");

	AHSURPlayerController_C_OnIntroduceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.BlendTargetViewPort
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bLockOutgoing                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::BlendTargetViewPort(class APawn* Pawn, float BlendTime, float BlendExp, bool bLockOutgoing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.BlendTargetViewPort");

	AHSURPlayerController_C_BlendTargetViewPort_Params params;
	params.Pawn = Pawn;
	params.BlendTime = BlendTime;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ServerSetControlRotation
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::ServerSetControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ServerSetControlRotation");

	AHSURPlayerController_C_ServerSetControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ClientSetControlRotation
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AHSURPlayerController_C::ClientSetControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ClientSetControlRotation");

	AHSURPlayerController_C_ClientSetControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.FadeInOutCamera
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::FadeInOutCamera(float FadeIn, float Pause, float FadeOut)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.FadeInOutCamera");

	AHSURPlayerController_C_FadeInOutCamera_Params params;
	params.FadeIn = FadeIn;
	params.Pause = Pause;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ClientInitPlayer
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::ClientInitPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ClientInitPlayer");

	AHSURPlayerController_C_ClientInitPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ReceivePossess");

	AHSURPlayerController_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.TrackServerStatus
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerController_C::TrackServerStatus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.TrackServerStatus");

	AHSURPlayerController_C_TrackServerStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerController.HSURPlayerController_C.ExecuteUbergraph_HSURPlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerController_C::ExecuteUbergraph_HSURPlayerController(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerController.HSURPlayerController_C.ExecuteUbergraph_HSURPlayerController");

	AHSURPlayerController_C_ExecuteUbergraph_HSURPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
