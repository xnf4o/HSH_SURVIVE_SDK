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

// Function HSURPlayerController.HSURPlayerController_C.GetIsEnableBlockCamera
struct AHSURPlayerController_C_GetIsEnableBlockCamera_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.GetIsEnableBlockAction
struct AHSURPlayerController_C_GetIsEnableBlockAction_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.IsChatBoxOpened
struct AHSURPlayerController_C_IsChatBoxOpened_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.GetLevelName
struct AHSURPlayerController_C_GetLevelName_Params
{
	struct FString                                     MapName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.IsTutorialInViewport
struct AHSURPlayerController_C_IsTutorialInViewport_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.GetBlockKeys
struct AHSURPlayerController_C_GetBlockKeys_Params
{
	TArray<struct FKey>                                BlockKeys;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function HSURPlayerController.HSURPlayerController_C.OnDelayAfterInitUI
struct AHSURPlayerController_C_OnDelayAfterInitUI_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnDelayBeforeInitUI
struct AHSURPlayerController_C_OnDelayBeforeInitUI_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryDisableCamera
struct AHSURPlayerController_C_TryDisableCamera_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryEnableCamera
struct AHSURPlayerController_C_TryEnableCamera_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryDisableAction
struct AHSURPlayerController_C_TryDisableAction_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryEnableAction
struct AHSURPlayerController_C_TryEnableAction_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryDisableMovement
struct AHSURPlayerController_C_TryDisableMovement_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryEnableMovement
struct AHSURPlayerController_C_TryEnableMovement_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryDisableInput
struct AHSURPlayerController_C_TryDisableInput_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.TryEnableInput
struct AHSURPlayerController_C_TryEnableInput_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnRep_SummaryResultLog
struct AHSURPlayerController_C_OnRep_SummaryResultLog_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.LoadGame
struct AHSURPlayerController_C_LoadGame_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_M_K2Node_InputKeyEvent_7
struct AHSURPlayerController_C_InpActEvt_M_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_6
struct AHSURPlayerController_C_InpActEvt_Tab_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_5
struct AHSURPlayerController_C_InpActEvt_Tab_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Exit_Game_K2Node_InputActionEvent_1
struct AHSURPlayerController_C_InpActEvt_Exit_Game_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_4
struct AHSURPlayerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Shift_Enter_K2Node_InputKeyEvent_3
struct AHSURPlayerController_C_InpActEvt_Shift_Enter_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_T_K2Node_InputKeyEvent_2
struct AHSURPlayerController_C_InpActEvt_T_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InpActEvt_Y_K2Node_InputKeyEvent_1
struct AHSURPlayerController_C_InpActEvt_Y_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InitInGameSetting
struct AHSURPlayerController_C_InitInGameSetting_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.SetSettingActive
struct AHSURPlayerController_C_SetSettingActive_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.HideSetting
struct AHSURPlayerController_C_HideSetting_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.InitInGameInfo
struct AHSURPlayerController_C_InitInGameInfo_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.SetGameInfoActive
struct AHSURPlayerController_C_SetGameInfoActive_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.DebugToggleDebugWindow
struct AHSURPlayerController_C_DebugToggleDebugWindow_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DebugOpenDebugWindow
struct AHSURPlayerController_C_DebugOpenDebugWindow_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DebugCloseDebugWindow
struct AHSURPlayerController_C_DebugCloseDebugWindow_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnHunterReceiveDmg
struct AHSURPlayerController_C_OnHunterReceiveDmg_Params
{
	class AHSHCharacterBase*                           OwnerCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.DebugMoveLocation
struct AHSURPlayerController_C_DebugMoveLocation_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ShowHUD
struct AHSURPlayerController_C_ShowHUD_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.BackToMainMenu
struct AHSURPlayerController_C_BackToMainMenu_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableInputClientSide
struct AHSURPlayerController_C_DisableInputClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableInputClientSide
struct AHSURPlayerController_C_EnableInputClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableInputClient
struct AHSURPlayerController_C_EnableInputClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableInputClient
struct AHSURPlayerController_C_DisableInputClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableMovementClient
struct AHSURPlayerController_C_EnableMovementClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableMovementClientSide
struct AHSURPlayerController_C_EnableMovementClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableMovementClient
struct AHSURPlayerController_C_DisableMovementClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableMovementClientSide
struct AHSURPlayerController_C_DisableMovementClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableActionClient
struct AHSURPlayerController_C_EnableActionClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableActionClient
struct AHSURPlayerController_C_DisableActionClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableActionClientSide
struct AHSURPlayerController_C_EnableActionClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableActionClientSide
struct AHSURPlayerController_C_DisableActionClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.HideHUD
struct AHSURPlayerController_C_HideHUD_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ServerEndGameBlockController
struct AHSURPlayerController_C_ServerEndGameBlockController_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ShowFadeEndScene
struct AHSURPlayerController_C_ShowFadeEndScene_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShowLoading;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.EnableMouseCameraClient
struct AHSURPlayerController_C_EnableMouseCameraClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableMouseCameraClient
struct AHSURPlayerController_C_DisableMouseCameraClient_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableCameraClientSide
struct AHSURPlayerController_C_EnableCameraClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.DisableCameraClientSide
struct AHSURPlayerController_C_DisableCameraClientSide_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EnableBlockInputKeys
struct AHSURPlayerController_C_EnableBlockInputKeys_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ServerDisableInputKeys
struct AHSURPlayerController_C_ServerDisableInputKeys_Params
{
	TArray<struct FKey>                                Keys;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURPlayerController.HSURPlayerController_C.DisableBlockInputKeys
struct AHSURPlayerController_C_DisableBlockInputKeys_Params
{
	TArray<struct FKey>                                Keys;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURPlayerController.HSURPlayerController_C.PlayEndGameEvent
struct AHSURPlayerController_C_PlayEndGameEvent_Params
{
	TEnumAsByte<E_EndGameReason_E_EndGameReason>       Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.PrepareFadeWidget
struct AHSURPlayerController_C_PrepareFadeWidget_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.FadeWithUI
struct AHSURPlayerController_C_FadeWithUI_Params
{
	bool                                               bFadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.BlackScreenWithUI
struct AHSURPlayerController_C_BlackScreenWithUI_Params
{
	bool                                               bShow;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.ServerToResult
struct AHSURPlayerController_C_ServerToResult_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ShowEndgameReason
struct AHSURPlayerController_C_ShowEndgameReason_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.EndByLeave
struct AHSURPlayerController_C_EndByLeave_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ShowChatBox
struct AHSURPlayerController_C_ShowChatBox_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.HideChatBox
struct AHSURPlayerController_C_HideChatBox_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.PrepareChatbox
struct AHSURPlayerController_C_PrepareChatbox_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.CommitText
struct AHSURPlayerController_C_CommitText_Params
{
	struct FS_ChatData                                 Chat;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.SetChatboxChannel
struct AHSURPlayerController_C_SetChatboxChannel_Params
{
	TEnumAsByte<E_ChatType_E_ChatType>                 ChatType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.ServerStaticDebug
struct AHSURPlayerController_C_ServerStaticDebug_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnConfirm
struct AHSURPlayerController_C_OnConfirm_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnCancel
struct AHSURPlayerController_C_OnCancel_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.Response
struct AHSURPlayerController_C_Response_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.ServerTestGamesparkRequest
struct AHSURPlayerController_C_ServerTestGamesparkRequest_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ClientResponse
struct AHSURPlayerController_C_ClientResponse_Params
{
	struct FString                                     Content;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	VaRestPlugin_ERequestStatus                        Status;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.ServerGetCredential
struct AHSURPlayerController_C_ServerGetCredential_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ClientPrintCredential
struct AHSURPlayerController_C_ClientPrintCredential_Params
{
	struct FString                                     credential;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CredentialSecret;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.ServerDebugFilePath
struct AHSURPlayerController_C_ServerDebugFilePath_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.PrintDebugFile
struct AHSURPlayerController_C_PrintDebugFile_Params
{
	TArray<struct FString>                             Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURPlayerController.HSURPlayerController_C.ClientDebugFilePath
struct AHSURPlayerController_C_ClientDebugFilePath_Params
{
	TArray<struct FString>                             Array;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURPlayerController.HSURPlayerController_C.ServerTrySaveResult
struct AHSURPlayerController_C_ServerTrySaveResult_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnConfirm_2
struct AHSURPlayerController_C_OnConfirm_2_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnCancel_2
struct AHSURPlayerController_C_OnCancel_2_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ToggleMenu
struct AHSURPlayerController_C_ToggleMenu_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.OnOpenExitMenu
struct AHSURPlayerController_C_OnOpenExitMenu_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.AssignSummaryResultList
struct AHSURPlayerController_C_AssignSummaryResultList_Params
{
	TArray<struct FS_SummaryResult>                    SummaryResultList;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FS_EndGameResult                            EndGameResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              DurationToResultMap;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.ToResult
struct AHSURPlayerController_C_ToResult_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.LeaveWithMessage
struct AHSURPlayerController_C_LeaveWithMessage_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.SurvivorLeaveAskForContinue
struct AHSURPlayerController_C_SurvivorLeaveAskForContinue_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ClientAskingForContinue
struct AHSURPlayerController_C_ClientAskingForContinue_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ServerAskForContinue_Yes
struct AHSURPlayerController_C_ServerAskForContinue_Yes_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ServerAskForContinue_No
struct AHSURPlayerController_C_ServerAskForContinue_No_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ClientActiveInput
struct AHSURPlayerController_C_ClientActiveInput_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.RequestSafeLeaveGame
struct AHSURPlayerController_C_RequestSafeLeaveGame_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.SendMatchAnalyticsEvent
struct AHSURPlayerController_C_SendMatchAnalyticsEvent_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.PassCharacterInfoToServer
struct AHSURPlayerController_C_PassCharacterInfoToServer_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.InitializePlayer
struct AHSURPlayerController_C_InitializePlayer_Params
{
	struct FPlayerInfoStruct_G                         Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.ReceiveBeginPlay
struct AHSURPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.InitializeHud
struct AHSURPlayerController_C_InitializeHud_Params
{
	bool                                               bRespawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.OnIntroduceEnd
struct AHSURPlayerController_C_OnIntroduceEnd_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.BlendTargetViewPort
struct AHSURPlayerController_C_BlendTargetViewPort_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockOutgoing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.ServerSetControlRotation
struct AHSURPlayerController_C_ServerSetControlRotation_Params
{
	struct FRotator                                    NewRotation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.ClientSetControlRotation
struct AHSURPlayerController_C_ClientSetControlRotation_Params
{
	struct FRotator                                    NewRotation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function HSURPlayerController.HSURPlayerController_C.FadeInOutCamera
struct AHSURPlayerController_C_FadeInOutCamera_Params
{
	float                                              FadeIn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pause;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.ClientInitPlayer
struct AHSURPlayerController_C_ClientInitPlayer_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ReceivePossess
struct AHSURPlayerController_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerController.HSURPlayerController_C.TrackServerStatus
struct AHSURPlayerController_C_TrackServerStatus_Params
{
};

// Function HSURPlayerController.HSURPlayerController_C.ExecuteUbergraph_HSURPlayerController
struct AHSURPlayerController_C_ExecuteUbergraph_HSURPlayerController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
