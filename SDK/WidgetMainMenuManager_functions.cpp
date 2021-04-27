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

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.RemoveHSHLogo
// (Public, BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::RemoveHSHLogo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.RemoveHSHLogo");

	AWidgetMainMenuManager_C_RemoveHSHLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowMessagePopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget_LoadingPopup_C*  Output_Get                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::ShowMessagePopup(const struct FText& Message, class UWidget_LoadingPopup_C** Output_Get)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowMessagePopup");

	AWidgetMainMenuManager_C_ShowMessagePopup_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksRegistrationResponseSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSRegistrationResponse registerResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
void AWidgetMainMenuManager_C::HandleGameSparksRegistrationResponseSuccess(const struct FGSRegistrationResponse& registerResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksRegistrationResponseSuccess");

	AWidgetMainMenuManager_C_HandleGameSparksRegistrationResponseSuccess_Params params;
	params.registerResponse = registerResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksAuthResponseSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSAuthenticationResponse authResponse                   (BlueprintVisible, BlueprintReadOnly, Parm)
void AWidgetMainMenuManager_C::HandleGameSparksAuthResponseSuccess(const struct FGSAuthenticationResponse& authResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksAuthResponseSuccess");

	AWidgetMainMenuManager_C_HandleGameSparksAuthResponseSuccess_Params params;
	params.authResponse = authResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.DisconnectFromGameSparks
// (Public, BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::DisconnectFromGameSparks()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.DisconnectFromGameSparks");

	AWidgetMainMenuManager_C_DisconnectFromGameSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ConnectToGameSparks
// (Public, BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ConnectToGameSparks()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ConnectToGameSparks");

	AWidgetMainMenuManager_C_ConnectToGameSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksResponseError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameSparksScriptData*   Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::HandleGameSparksResponseError(class UGameSparksScriptData* Error)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksResponseError");

	AWidgetMainMenuManager_C_HandleGameSparksResponseError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksPlayerDisconnect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSSessionTerminatedMessage SessionTerminatedMessage       (BlueprintVisible, BlueprintReadOnly, Parm)
void AWidgetMainMenuManager_C::HandleGameSparksPlayerDisconnect(const struct FGSSessionTerminatedMessage& SessionTerminatedMessage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksPlayerDisconnect");

	AWidgetMainMenuManager_C_HandleGameSparksPlayerDisconnect_Params params;
	params.SessionTerminatedMessage = SessionTerminatedMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetMenuState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MenuState_E_MenuState> E_MenuState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::SetMenuState(TEnumAsByte<E_MenuState_E_MenuState> E_MenuState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetMenuState");

	AWidgetMainMenuManager_C_SetMenuState_Params params;
	params.E_MenuState = E_MenuState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.GetPlayerInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::GetPlayerInfo(struct FPlayerInfoStruct_G* PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.GetPlayerInfo");

	AWidgetMainMenuManager_C_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.UserConstructionScript");

	AWidgetMainMenuManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.InpActEvt_Escape_K2Node_InputKeyEvent_1");

	AWidgetMainMenuManager_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnResponse_3D6DD4BE4849F3360BC3E49B408D2ED6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWidgetMainMenuManager_C::OnResponse_3D6DD4BE4849F3360BC3E49B408D2ED6(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnResponse_3D6DD4BE4849F3360BC3E49B408D2ED6");

	AWidgetMainMenuManager_C_OnResponse_3D6DD4BE4849F3360BC3E49B408D2ED6_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowLoadingScreen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowLoadingScreen");

	AWidgetMainMenuManager_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWidgetMainMenuManager_C::FadeIn(bool FadeOut_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.FadeIn");

	AWidgetMainMenuManager_C_FadeIn_Params params;
	params.FadeOut_ = FadeOut_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowPreLoginMenu
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowPreLoginMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowPreLoginMenu");

	AWidgetMainMenuManager_C_ShowPreLoginMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetRoleHunter
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::SetRoleHunter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetRoleHunter");

	AWidgetMainMenuManager_C_SetRoleHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowMainMenuGS
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowMainMenuGS()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowMainMenuGS");

	AWidgetMainMenuManager_C_ShowMainMenuGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetRoleSurvivor
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::SetRoleSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetRoleSurvivor");

	AWidgetMainMenuManager_C_SetRoleSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowCustomMatch
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowCustomMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowCustomMatch");

	AWidgetMainMenuManager_C_ShowCustomMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SwitchRole
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::SwitchRole()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.SwitchRole");

	AWidgetMainMenuManager_C_SwitchRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowQuitGame
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowQuitGame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowQuitGame");

	AWidgetMainMenuManager_C_ShowQuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.PostLogin
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::PostLogin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.PostLogin");

	AWidgetMainMenuManager_C_PostLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowTesterGuide
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowTesterGuide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowTesterGuide");

	AWidgetMainMenuManager_C_ShowTesterGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowSurvivorGuide
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowSurvivorGuide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowSurvivorGuide");

	AWidgetMainMenuManager_C_ShowSurvivorGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowHunterGuide
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowHunterGuide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowHunterGuide");

	AWidgetMainMenuManager_C_ShowHunterGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowGuide
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowGuide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowGuide");

	AWidgetMainMenuManager_C_ShowGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.CheckSurvivorTutorialMap
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::CheckSurvivorTutorialMap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.CheckSurvivorTutorialMap");

	AWidgetMainMenuManager_C_CheckSurvivorTutorialMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnSurvivorTutorialConfirm
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::OnSurvivorTutorialConfirm()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnSurvivorTutorialConfirm");

	AWidgetMainMenuManager_C_OnSurvivorTutorialConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnSurvivorTutorialCancel
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::OnSurvivorTutorialCancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnSurvivorTutorialCancel");

	AWidgetMainMenuManager_C_OnSurvivorTutorialCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.CheckHunterTutorialMap
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::CheckHunterTutorialMap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.CheckHunterTutorialMap");

	AWidgetMainMenuManager_C_CheckHunterTutorialMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnHunterTutorialConfirm
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::OnHunterTutorialConfirm()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnHunterTutorialConfirm");

	AWidgetMainMenuManager_C_OnHunterTutorialConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnHunterTutorialCancel
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::OnHunterTutorialCancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnHunterTutorialCancel");

	AWidgetMainMenuManager_C_OnHunterTutorialCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowSurvivorTutorialMap
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowSurvivorTutorialMap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowSurvivorTutorialMap");

	AWidgetMainMenuManager_C_ShowSurvivorTutorialMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowHunterTutorialMap
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::ShowHunterTutorialMap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowHunterTutorialMap");

	AWidgetMainMenuManager_C_ShowHunterTutorialMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.Save_Sticker
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrimaryAssetId> StickerSet                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::Save_Sticker(TArray<struct FPrimaryAssetId> StickerSet)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.Save_Sticker");

	AWidgetMainMenuManager_C_Save_Sticker_Params params;
	params.StickerSet = StickerSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowAndSetupUniversalPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::ShowAndSetupUniversalPopup(const struct FString& Title, const struct FString& Message, TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowAndSetupUniversalPopup");

	AWidgetMainMenuManager_C_ShowAndSetupUniversalPopup_Params params;
	params.Title = Title;
	params.Message = Message;
	params.popupType = popupType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWidgetMainMenuManager_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveBeginPlay");

	AWidgetMainMenuManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerInfo");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.RefreshCharacterModel
// (BlueprintCallable, BlueprintEvent)
void AWidgetMainMenuManager_C::RefreshCharacterModel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.RefreshCharacterModel");

	AWidgetMainMenuManager_C_RefreshCharacterModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetCameraBlend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MenuState_E_MenuState> Move_to_Camera                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::SetCameraBlend(TEnumAsByte<E_MenuState_E_MenuState> Move_to_Camera, float BlendTime, float BlendExp)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetCameraBlend");

	AWidgetMainMenuManager_C_SetCameraBlend_Params params;
	params.Move_to_Camera = Move_to_Camera;
	params.BlendTime = BlendTime;
	params.BlendExp = BlendExp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerCharacters");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerCharacters_Params params;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerItems");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerPerks");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerProfiles");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerProfiles_Params params;
	params.Profiles = Profiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerSkins(TArray<struct FString> Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerSkins");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerSkins_Params params;
	params.Skins = Skins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerStickers");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Head                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerHeads(TArray<struct FString> Head)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerHeads");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerHeads_Params params;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Back                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::ReceiveNotifyPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerBacks");

	AWidgetMainMenuManager_C_ReceiveNotifyPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ExecuteUbergraph_WidgetMainMenuManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::ExecuteUbergraph_WidgetMainMenuManager(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.ExecuteUbergraph_WidgetMainMenuManager");

	AWidgetMainMenuManager_C_ExecuteUbergraph_WidgetMainMenuManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerBacks__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Backs                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerBacks__DelegateSignature(TArray<struct FString>* Backs)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerBacks__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerBacks__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Backs != nullptr)
		*Backs = params.Backs;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerHeads__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Heads                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerHeads__DelegateSignature(TArray<struct FString>* Heads)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerHeads__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerHeads__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Heads != nullptr)
		*Heads = params.Heads;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerStickers__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerStickers__DelegateSignature(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerStickers__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerStickers__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerSkins__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerSkins__DelegateSignature(TArray<struct FString>* Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerSkins__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerSkins__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerProfiles__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerProfiles__DelegateSignature(TArray<struct FString>* Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerProfiles__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerProfiles__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profiles != nullptr)
		*Profiles = params.Profiles;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerPerks__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerPerks__DelegateSignature(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerPerks__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerPerks__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerItems__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerItems__DelegateSignature(TArray<struct FString>* Items, TArray<int>* Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerItems__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerItems__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AWidgetMainMenuManager_C::OnReceiveNotifyPlayerInfo__DelegateSignature(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerInfo__DelegateSignature");

	AWidgetMainMenuManager_C_OnReceiveNotifyPlayerInfo__DelegateSignature_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
