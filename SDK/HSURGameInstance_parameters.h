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

// Function HSURGameInstance.HSURGameInstance_C.FindProductByPrimaryAsset
struct UHSURGameInstance_C_FindProductByPrimaryAsset_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FS_StoreProduct                             Product;                                                   // (Parm, OutParm, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.FindAwsRegionCode
struct UHSURGameInstance_C_FindAwsRegionCode_Params
{
	struct FString                                     inString;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Return;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.GetTags
struct UHSURGameInstance_C_GetTags_Params
{
	class UGameSparksScriptData*                       ScriptData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Tags;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.GetGameAnalyticsIsInit
struct UHSURGameInstance_C_GetGameAnalyticsIsInit_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.ShowSteamOverlayErrorMsg
struct UHSURGameInstance_C_ShowSteamOverlayErrorMsg_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.MakeLevelCap
struct UHSURGameInstance_C_MakeLevelCap_Params
{
	struct FString                                     Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                LevelCap;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.MakeGoodType
struct UHSURGameInstance_C_MakeGoodType_Params
{
	struct FString                                     Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPrimaryAssetType                           ItemType;                                                  // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.MakeGoodPrices
struct UHSURGameInstance_C_MakeGoodPrices_Params
{
	class UGameSparksScriptData*                       CurrencyCosts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_StorePrice>                       Prices;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameInstance.HSURGameInstance_C.CacheVirtualGoods
struct UHSURGameInstance_C_CacheVirtualGoods_Params
{
	TArray<class UGameSparksScriptData*>               VirtualGoods;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURGameInstance.HSURGameInstance_C.GetProcessParameter
struct UHSURGameInstance_C_GetProcessParameter_Params
{
	class UHSHProcessParameter_C*                      Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.InitAWS
struct UHSURGameInstance_C_InitAWS_Params
{
	bool                                               bIsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHSHProcessParameter_C*                      AWS_Ref;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.GetAWSAlias
struct UHSURGameInstance_C_GetAWSAlias_Params
{
	struct FString                                     Alias;                                                     // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.GetAWSCredentials
struct UHSURGameInstance_C_GetAWSCredentials_Params
{
	struct FAWSCredentials                             AWSCredentials;                                            // (Parm, OutParm)
};

// Function HSURGameInstance.HSURGameInstance_C.GetUniversalPopup
struct UHSURGameInstance_C_GetUniversalPopup_Params
{
	class UUniversalPopup_C*                           UniversalPopup;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshLocalPlayerInfo
struct UHSURGameInstance_C_RefreshLocalPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.GetPlayerPerks
struct UHSURGameInstance_C_GetPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameInstance.HSURGameInstance_C.GetPlayerSkins
struct UHSURGameInstance_C_GetPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameInstance.HSURGameInstance_C.GetPlayerItems
struct UHSURGameInstance_C_GetPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function HSURGameInstance.HSURGameInstance_C.InitSaveGameManager
struct UHSURGameInstance_C_InitSaveGameManager_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.InitializePlayerInfo
struct UHSURGameInstance_C_InitializePlayerInfo_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.IsPlayerInit
struct UHSURGameInstance_C_IsPlayerInit_Params
{
	bool                                               bIsInit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.GetEndGameResult
struct UHSURGameInstance_C_GetEndGameResult_Params
{
	struct FS_EndGameResult                            EndGameResult;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.AssignEndGameResult
struct UHSURGameInstance_C_AssignEndGameResult_Params
{
	struct FS_EndGameResult                            EndGameResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.GetSummaryResult
struct UHSURGameInstance_C_GetSummaryResult_Params
{
	TArray<struct FS_SummaryResult>                    SummaryResultList;                                         // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function HSURGameInstance.HSURGameInstance_C.AssignSummaryResult
struct UHSURGameInstance_C_AssignSummaryResult_Params
{
	TArray<struct FS_SummaryResult>                    SummaryResultList;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function HSURGameInstance.HSURGameInstance_C.GetRoleFromString
struct UHSURGameInstance_C_GetRoleFromString_Params
{
	struct FString                                     Str;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.OnRep_E_MenuState
struct UHSURGameInstance_C_OnRep_E_MenuState_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksPlayerDisconnect
struct UHSURGameInstance_C_HandleGameSparksPlayerDisconnect_Params
{
	struct FGSSessionTerminatedMessage                 SessionTerminatedMessage;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksRegistrationResponseSuccess
struct UHSURGameInstance_C_HandleGameSparksRegistrationResponseSuccess_Params
{
	struct FGSRegistrationResponse                     registerResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksAuthResponseSuccess
struct UHSURGameInstance_C_HandleGameSparksAuthResponseSuccess_Params
{
	struct FGSAuthenticationResponse                   authResponse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksResponseError
struct UHSURGameInstance_C_HandleGameSparksResponseError_Params
{
	class UGameSparksScriptData*                       Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.DisconnectFromGameSparks
struct UHSURGameInstance_C_DisconnectFromGameSparks_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ConnectToGameSparks
struct UHSURGameInstance_C_ConnectToGameSparks_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.TravelErrorToString
struct UHSURGameInstance_C_TravelErrorToString_Params
{
	TEnumAsByte<Engine_ETravelFailure>                 FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OutString;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.NetErrorToString
struct UHSURGameInstance_C_NetErrorToString_Params
{
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OutString;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_EA2E96504118C8677955B4B2FAFC5ABD
struct UHSURGameInstance_C_OnResponse_EA2E96504118C8677955B4B2FAFC5ABD_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_DEFA4C5648622F8B631B6A8D7E0A0E8F
struct UHSURGameInstance_C_OnResponse_DEFA4C5648622F8B631B6A8D7E0A0E8F_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_720E07D94B797307139C2291FC725F3D
struct UHSURGameInstance_C_OnResponse_720E07D94B797307139C2291FC725F3D_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_5E7BC2C04A72B9791C60959C164C7EB0
struct UHSURGameInstance_C_OnResponse_5E7BC2C04A72B9791C60959C164C7EB0_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_273559CA48702B886E94549E18134F10
struct UHSURGameInstance_C_OnResponse_273559CA48702B886E94549E18134F10_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_3338105649787816012A2188513B0508
struct UHSURGameInstance_C_OnResponse_3338105649787816012A2188513B0508_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_4D7036554BEC8416496F7DA0C7F69667
struct UHSURGameInstance_C_OnResponse_4D7036554BEC8416496F7DA0C7F69667_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.OnResponse_250B763740745C55C24EE0AF4E502DC4
struct UHSURGameInstance_C_OnResponse_250B763740745C55C24EE0AF4E502DC4_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.Completed_494A84B84C7B8C029F46AC8C8FBE6A9C
struct UHSURGameInstance_C_Completed_494A84B84C7B8C029F46AC8C8FBE6A9C_Params
{
	TArray<class UObject*>                             Loaded;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURGameInstance.HSURGameInstance_C.Completed_840925614D9DF54D9E2C67901A570892
struct UHSURGameInstance_C_Completed_840925614D9DF54D9E2C67901A570892_Params
{
	TArray<class UObject*>                             Loaded;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURGameInstance.HSURGameInstance_C.Completed_C11668DB45522DEB48D5C7932428EC0F
struct UHSURGameInstance_C_Completed_C11668DB45522DEB48D5C7932428EC0F_Params
{
	TArray<class UObject*>                             Loaded;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURGameInstance.HSURGameInstance_C.Completed_33BF4ABF4D2FCB7F6848A1A031BBF55B
struct UHSURGameInstance_C_Completed_33BF4ABF4D2FCB7F6848A1A031BBF55B_Params
{
	TArray<class UObject*>                             Loaded;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURGameInstance.HSURGameInstance_C.HandleNetworkError
struct UHSURGameInstance_C_HandleNetworkError_Params
{
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.HandleTravelError
struct UHSURGameInstance_C_HandleTravelError_Params
{
	TEnumAsByte<Engine_ETravelFailure>                 FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerItems
struct UHSURGameInstance_C_RefreshPlayerItems_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerSkins
struct UHSURGameInstance_C_RefreshPlayerSkins_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerPerks
struct UHSURGameInstance_C_RefreshPlayerPerks_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerProfile
struct UHSURGameInstance_C_RefreshPlayerProfile_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerStickerSet
struct UHSURGameInstance_C_RefreshPlayerStickerSet_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshAllPlayerItems
struct UHSURGameInstance_C_RefreshAllPlayerItems_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.OnPingCallback
struct UHSURGameInstance_C_OnPingCallback_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.SaveSlotGamesparks
struct UHSURGameInstance_C_SaveSlotGamesparks_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfoStruct;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               Durable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                requestTimeoutSeconds;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerStat
struct UHSURGameInstance_C_RefreshPlayerStat_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.RetrieveLatency
struct UHSURGameInstance_C_RetrieveLatency_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ShowLoadingScreen
struct UHSURGameInstance_C_ShowLoadingScreen_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ShowLoginMenu
struct UHSURGameInstance_C_ShowLoginMenu_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ShowRegisterMenu
struct UHSURGameInstance_C_ShowRegisterMenu_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ShowForgetPasswordMenu
struct UHSURGameInstance_C_ShowForgetPasswordMenu_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ShowAndSetupUniversalPopup
struct UHSURGameInstance_C_ShowAndSetupUniversalPopup_Params
{
	struct FString                                     Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     confirmText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     cancelText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.ToggleLoadingWidget
struct UHSURGameInstance_C_ToggleLoadingWidget_Params
{
	bool                                               Enabled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURGameInstance.HSURGameInstance_C.FadeIn
struct UHSURGameInstance_C_FadeIn_Params
{
	bool                                               FadeOut_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PlaybackSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.HideLoadingScreen
struct UHSURGameInstance_C_HideLoadingScreen_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ToggleTutorialLoadingWidget
struct UHSURGameInstance_C_ToggleTutorialLoadingWidget_Params
{
	bool                                               Enabled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.ShowAndSetupStorePopup
struct UHSURGameInstance_C_ShowAndSetupStorePopup_Params
{
	struct FString                                     Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSlateBrush                                 icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Price;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.JoinServer
struct UHSURGameInstance_C_JoinServer_Params
{
	struct FString                                     ip;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Port;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     playerSession;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.ReceiveInit
struct UHSURGameInstance_C_ReceiveInit_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.BackToMainMenuLevel
struct UHSURGameInstance_C_BackToMainMenuLevel_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.ReceiveShutdown
struct UHSURGameInstance_C_ReceiveShutdown_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.LoadAllPrimaryAssets
struct UHSURGameInstance_C_LoadAllPrimaryAssets_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.BackToMainMenuLevelWithMessage
struct UHSURGameInstance_C_BackToMainMenuLevelWithMessage_Params
{
	struct FString                                     Options;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.ExecuteUbergraph_HSURGameInstance
struct UHSURGameInstance_C_ExecuteUbergraph_HSURGameInstance_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURGameInstance.HSURGameInstance_C.OnItemsRefreshed__DelegateSignature
struct UHSURGameInstance_C_OnItemsRefreshed__DelegateSignature_Params
{
};

// Function HSURGameInstance.HSURGameInstance_C.OnSaveGameInitialize__DelegateSignature
struct UHSURGameInstance_C_OnSaveGameInitialize__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
