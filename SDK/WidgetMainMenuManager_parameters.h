#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.RemoveHSHLogo
struct AWidgetMainMenuManager_C_RemoveHSHLogo_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowMessagePopup
struct AWidgetMainMenuManager_C_ShowMessagePopup_Params
{
	struct FText                                       Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget_LoadingPopup_C*                      Output_Get;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksRegistrationResponseSuccess
struct AWidgetMainMenuManager_C_HandleGameSparksRegistrationResponseSuccess_Params
{
	struct FGSRegistrationResponse                     registerResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksAuthResponseSuccess
struct AWidgetMainMenuManager_C_HandleGameSparksAuthResponseSuccess_Params
{
	struct FGSAuthenticationResponse                   authResponse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.DisconnectFromGameSparks
struct AWidgetMainMenuManager_C_DisconnectFromGameSparks_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ConnectToGameSparks
struct AWidgetMainMenuManager_C_ConnectToGameSparks_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksResponseError
struct AWidgetMainMenuManager_C_HandleGameSparksResponseError_Params
{
	class UGameSparksScriptData*                       Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.HandleGameSparksPlayerDisconnect
struct AWidgetMainMenuManager_C_HandleGameSparksPlayerDisconnect_Params
{
	struct FGSSessionTerminatedMessage                 SessionTerminatedMessage;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetMenuState
struct AWidgetMainMenuManager_C_SetMenuState_Params
{
	TEnumAsByte<E_MenuState_E_MenuState>               E_MenuState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.GetPlayerInfo
struct AWidgetMainMenuManager_C_GetPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.UserConstructionScript
struct AWidgetMainMenuManager_C_UserConstructionScript_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
struct AWidgetMainMenuManager_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnResponse_3D6DD4BE4849F3360BC3E49B408D2ED6
struct AWidgetMainMenuManager_C_OnResponse_3D6DD4BE4849F3360BC3E49B408D2ED6_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowLoadingScreen
struct AWidgetMainMenuManager_C_ShowLoadingScreen_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.FadeIn
struct AWidgetMainMenuManager_C_FadeIn_Params
{
	bool                                               FadeOut_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowPreLoginMenu
struct AWidgetMainMenuManager_C_ShowPreLoginMenu_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetRoleHunter
struct AWidgetMainMenuManager_C_SetRoleHunter_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowMainMenuGS
struct AWidgetMainMenuManager_C_ShowMainMenuGS_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetRoleSurvivor
struct AWidgetMainMenuManager_C_SetRoleSurvivor_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowCustomMatch
struct AWidgetMainMenuManager_C_ShowCustomMatch_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SwitchRole
struct AWidgetMainMenuManager_C_SwitchRole_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowQuitGame
struct AWidgetMainMenuManager_C_ShowQuitGame_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.PostLogin
struct AWidgetMainMenuManager_C_PostLogin_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowTesterGuide
struct AWidgetMainMenuManager_C_ShowTesterGuide_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowSurvivorGuide
struct AWidgetMainMenuManager_C_ShowSurvivorGuide_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowHunterGuide
struct AWidgetMainMenuManager_C_ShowHunterGuide_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowGuide
struct AWidgetMainMenuManager_C_ShowGuide_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.CheckSurvivorTutorialMap
struct AWidgetMainMenuManager_C_CheckSurvivorTutorialMap_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnSurvivorTutorialConfirm
struct AWidgetMainMenuManager_C_OnSurvivorTutorialConfirm_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnSurvivorTutorialCancel
struct AWidgetMainMenuManager_C_OnSurvivorTutorialCancel_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.CheckHunterTutorialMap
struct AWidgetMainMenuManager_C_CheckHunterTutorialMap_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnHunterTutorialConfirm
struct AWidgetMainMenuManager_C_OnHunterTutorialConfirm_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnHunterTutorialCancel
struct AWidgetMainMenuManager_C_OnHunterTutorialCancel_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowSurvivorTutorialMap
struct AWidgetMainMenuManager_C_ShowSurvivorTutorialMap_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowHunterTutorialMap
struct AWidgetMainMenuManager_C_ShowHunterTutorialMap_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.Save_Sticker
struct AWidgetMainMenuManager_C_Save_Sticker_Params
{
	TArray<struct FPrimaryAssetId>                     StickerSet;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ShowAndSetupUniversalPopup
struct AWidgetMainMenuManager_C_ShowAndSetupUniversalPopup_Params
{
	struct FString                                     Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveBeginPlay
struct AWidgetMainMenuManager_C_ReceiveBeginPlay_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerInfo
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.RefreshCharacterModel
struct AWidgetMainMenuManager_C_RefreshCharacterModel_Params
{
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.SetCameraBlend
struct AWidgetMainMenuManager_C_SetCameraBlend_Params
{
	TEnumAsByte<E_MenuState_E_MenuState>               Move_to_Camera;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerCharacters
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerItems
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerPerks
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerProfiles
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerSkins
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerStickers
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerHeads
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ReceiveNotifyPlayerBacks
struct AWidgetMainMenuManager_C_ReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.ExecuteUbergraph_WidgetMainMenuManager
struct AWidgetMainMenuManager_C_ExecuteUbergraph_WidgetMainMenuManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerBacks__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerBacks__DelegateSignature_Params
{
	TArray<struct FString>                             Backs;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerHeads__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerHeads__DelegateSignature_Params
{
	TArray<struct FString>                             Heads;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerStickers__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerStickers__DelegateSignature_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerSkins__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerSkins__DelegateSignature_Params
{
	TArray<struct FString>                             Skins;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerProfiles__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerProfiles__DelegateSignature_Params
{
	TArray<struct FString>                             Profiles;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerPerks__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerPerks__DelegateSignature_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerItems__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerItems__DelegateSignature_Params
{
	TArray<struct FString>                             Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WidgetMainMenuManager.WidgetMainMenuManager_C.OnReceiveNotifyPlayerInfo__DelegateSignature
struct AWidgetMainMenuManager_C_OnReceiveNotifyPlayerInfo__DelegateSignature_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
