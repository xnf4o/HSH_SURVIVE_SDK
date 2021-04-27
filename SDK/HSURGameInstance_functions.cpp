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

// Function HSURGameInstance.HSURGameInstance_C.FindProductByPrimaryAsset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FS_StoreProduct         Product                        (Parm, OutParm, HasGetValueTypeHash)
void UHSURGameInstance_C::FindProductByPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, struct FS_StoreProduct* Product)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.FindProductByPrimaryAsset");

	UHSURGameInstance_C_FindProductByPrimaryAsset_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Product != nullptr)
		*Product = params.Product;

}


// Function HSURGameInstance.HSURGameInstance_C.FindAwsRegionCode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::FindAwsRegionCode(const struct FString& inString, struct FString* Return, bool* Found)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.FindAwsRegionCode");

	UHSURGameInstance_C_FindAwsRegionCode_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function HSURGameInstance.HSURGameInstance_C.GetTags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Tags                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::GetTags(class UGameSparksScriptData* ScriptData, struct FString* Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetTags");

	UHSURGameInstance_C_GetTags_Params params;
	params.ScriptData = ScriptData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;

}


// Function HSURGameInstance.HSURGameInstance_C.GetGameAnalyticsIsInit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UHSURGameInstance_C::GetGameAnalyticsIsInit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetGameAnalyticsIsInit");

	UHSURGameInstance_C_GetGameAnalyticsIsInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameInstance.HSURGameInstance_C.ShowSteamOverlayErrorMsg
// (Public, BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::ShowSteamOverlayErrorMsg()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ShowSteamOverlayErrorMsg");

	UHSURGameInstance_C_ShowSteamOverlayErrorMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.MakeLevelCap
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            LevelCap                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::MakeLevelCap(const struct FString& Tags, int* LevelCap)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.MakeLevelCap");

	UHSURGameInstance_C_MakeLevelCap_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LevelCap != nullptr)
		*LevelCap = params.LevelCap;

}


// Function HSURGameInstance.HSURGameInstance_C.MakeGoodType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPrimaryAssetType       ItemType                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::MakeGoodType(const struct FString& Tags, struct FPrimaryAssetType* ItemType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.MakeGoodType");

	UHSURGameInstance_C_MakeGoodType_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemType != nullptr)
		*ItemType = params.ItemType;

}


// Function HSURGameInstance.HSURGameInstance_C.MakeGoodPrices
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   CurrencyCosts                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_StorePrice>   Prices                         (Parm, OutParm, ZeroConstructor)
void UHSURGameInstance_C::MakeGoodPrices(class UGameSparksScriptData* CurrencyCosts, TArray<struct FS_StorePrice>* Prices)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.MakeGoodPrices");

	UHSURGameInstance_C_MakeGoodPrices_Params params;
	params.CurrencyCosts = CurrencyCosts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Prices != nullptr)
		*Prices = params.Prices;

}


// Function HSURGameInstance.HSURGameInstance_C.CacheVirtualGoods
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGameSparksScriptData*> VirtualGoods                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UHSURGameInstance_C::CacheVirtualGoods(TArray<class UGameSparksScriptData*>* VirtualGoods)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.CacheVirtualGoods");

	UHSURGameInstance_C_CacheVirtualGoods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VirtualGoods != nullptr)
		*VirtualGoods = params.VirtualGoods;

}


// Function HSURGameInstance.HSURGameInstance_C.GetProcessParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHProcessParameter_C*  Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::GetProcessParameter(class UHSHProcessParameter_C** Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetProcessParameter");

	UHSURGameInstance_C_GetProcessParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURGameInstance.HSURGameInstance_C.InitAWS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHSHProcessParameter_C*  AWS_Ref                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::InitAWS(bool* bIsSuccess, class UHSHProcessParameter_C** AWS_Ref)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.InitAWS");

	UHSURGameInstance_C_InitAWS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSuccess != nullptr)
		*bIsSuccess = params.bIsSuccess;
	if (AWS_Ref != nullptr)
		*AWS_Ref = params.AWS_Ref;

}


// Function HSURGameInstance.HSURGameInstance_C.GetAWSAlias
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Alias                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::GetAWSAlias(struct FString* Alias)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetAWSAlias");

	UHSURGameInstance_C_GetAWSAlias_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Alias != nullptr)
		*Alias = params.Alias;

}


// Function HSURGameInstance.HSURGameInstance_C.GetAWSCredentials
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAWSCredentials         AWSCredentials                 (Parm, OutParm)
void UHSURGameInstance_C::GetAWSCredentials(struct FAWSCredentials* AWSCredentials)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetAWSCredentials");

	UHSURGameInstance_C_GetAWSCredentials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AWSCredentials != nullptr)
		*AWSCredentials = params.AWSCredentials;

}


// Function HSURGameInstance.HSURGameInstance_C.GetUniversalPopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUniversalPopup_C*       UniversalPopup                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::GetUniversalPopup(class UUniversalPopup_C** UniversalPopup)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetUniversalPopup");

	UHSURGameInstance_C_GetUniversalPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniversalPopup != nullptr)
		*UniversalPopup = params.UniversalPopup;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshLocalPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UHSURGameInstance_C::RefreshLocalPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshLocalPlayerInfo");

	UHSURGameInstance_C_RefreshLocalPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.GetPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (Parm, OutParm, ZeroConstructor)
void UHSURGameInstance_C::GetPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetPlayerPerks");

	UHSURGameInstance_C_GetPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function HSURGameInstance.HSURGameInstance_C.GetPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (Parm, OutParm, ZeroConstructor)
void UHSURGameInstance_C::GetPlayerSkins(TArray<struct FString>* Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetPlayerSkins");

	UHSURGameInstance_C_GetPlayerSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function HSURGameInstance.HSURGameInstance_C.GetPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (Parm, OutParm, ZeroConstructor)
void UHSURGameInstance_C::GetPlayerItems(TArray<struct FString>* Items)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetPlayerItems");

	UHSURGameInstance_C_GetPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function HSURGameInstance.HSURGameInstance_C.InitSaveGameManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::InitSaveGameManager(const struct FString& SlotName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.InitSaveGameManager");

	UHSURGameInstance_C_InitSaveGameManager_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.InitializePlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::InitializePlayerInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.InitializePlayerInfo");

	UHSURGameInstance_C_InitializePlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.IsPlayerInit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsInit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::IsPlayerInit(bool* bIsInit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.IsPlayerInit");

	UHSURGameInstance_C_IsPlayerInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInit != nullptr)
		*bIsInit = params.bIsInit;

}


// Function HSURGameInstance.HSURGameInstance_C.GetEndGameResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_EndGameResult        EndGameResult                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::GetEndGameResult(struct FS_EndGameResult* EndGameResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetEndGameResult");

	UHSURGameInstance_C_GetEndGameResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndGameResult != nullptr)
		*EndGameResult = params.EndGameResult;

}


// Function HSURGameInstance.HSURGameInstance_C.AssignEndGameResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::AssignEndGameResult(const struct FS_EndGameResult& EndGameResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.AssignEndGameResult");

	UHSURGameInstance_C_AssignEndGameResult_Params params;
	params.EndGameResult = EndGameResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.GetSummaryResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_SummaryResult> SummaryResultList              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UHSURGameInstance_C::GetSummaryResult(TArray<struct FS_SummaryResult>* SummaryResultList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetSummaryResult");

	UHSURGameInstance_C_GetSummaryResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SummaryResultList != nullptr)
		*SummaryResultList = params.SummaryResultList;

}


// Function HSURGameInstance.HSURGameInstance_C.AssignSummaryResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_SummaryResult> SummaryResultList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UHSURGameInstance_C::AssignSummaryResult(TArray<struct FS_SummaryResult>* SummaryResultList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.AssignSummaryResult");

	UHSURGameInstance_C_AssignSummaryResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SummaryResultList != nullptr)
		*SummaryResultList = params.SummaryResultList;

}


// Function HSURGameInstance.HSURGameInstance_C.GetRoleFromString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Str                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     Role                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::GetRoleFromString(const struct FString& Str, TEnumAsByte<E_Role_E_Role>* Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.GetRoleFromString");

	UHSURGameInstance_C_GetRoleFromString_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role != nullptr)
		*Role = params.Role;

}


// Function HSURGameInstance.HSURGameInstance_C.OnRep_E_MenuState
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::OnRep_E_MenuState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnRep_E_MenuState");

	UHSURGameInstance_C_OnRep_E_MenuState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksPlayerDisconnect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSSessionTerminatedMessage SessionTerminatedMessage       (BlueprintVisible, BlueprintReadOnly, Parm)
void UHSURGameInstance_C::HandleGameSparksPlayerDisconnect(const struct FGSSessionTerminatedMessage& SessionTerminatedMessage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksPlayerDisconnect");

	UHSURGameInstance_C_HandleGameSparksPlayerDisconnect_Params params;
	params.SessionTerminatedMessage = SessionTerminatedMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksRegistrationResponseSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSRegistrationResponse registerResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
void UHSURGameInstance_C::HandleGameSparksRegistrationResponseSuccess(const struct FGSRegistrationResponse& registerResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksRegistrationResponseSuccess");

	UHSURGameInstance_C_HandleGameSparksRegistrationResponseSuccess_Params params;
	params.registerResponse = registerResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksAuthResponseSuccess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSAuthenticationResponse authResponse                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UHSURGameInstance_C::HandleGameSparksAuthResponseSuccess(const struct FGSAuthenticationResponse& authResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksAuthResponseSuccess");

	UHSURGameInstance_C_HandleGameSparksAuthResponseSuccess_Params params;
	params.authResponse = authResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksResponseError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameSparksScriptData*   Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::HandleGameSparksResponseError(class UGameSparksScriptData* Error)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.HandleGameSparksResponseError");

	UHSURGameInstance_C_HandleGameSparksResponseError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.DisconnectFromGameSparks
// (Public, BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::DisconnectFromGameSparks()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.DisconnectFromGameSparks");

	UHSURGameInstance_C_DisconnectFromGameSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ConnectToGameSparks
// (Public, BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::ConnectToGameSparks()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ConnectToGameSparks");

	UHSURGameInstance_C_ConnectToGameSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.TravelErrorToString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Engine_ETravelFailure> FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::TravelErrorToString(TEnumAsByte<Engine_ETravelFailure> FailureType, struct FString* OutString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.TravelErrorToString");

	UHSURGameInstance_C_TravelErrorToString_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;

}


// Function HSURGameInstance.HSURGameInstance_C.NetErrorToString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Engine_ENetworkFailure> FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::NetErrorToString(TEnumAsByte<Engine_ENetworkFailure> FailureType, struct FString* OutString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.NetErrorToString");

	UHSURGameInstance_C_NetErrorToString_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_EA2E96504118C8677955B4B2FAFC5ABD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_EA2E96504118C8677955B4B2FAFC5ABD(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_EA2E96504118C8677955B4B2FAFC5ABD");

	UHSURGameInstance_C_OnResponse_EA2E96504118C8677955B4B2FAFC5ABD_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_DEFA4C5648622F8B631B6A8D7E0A0E8F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_DEFA4C5648622F8B631B6A8D7E0A0E8F(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_DEFA4C5648622F8B631B6A8D7E0A0E8F");

	UHSURGameInstance_C_OnResponse_DEFA4C5648622F8B631B6A8D7E0A0E8F_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_720E07D94B797307139C2291FC725F3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_720E07D94B797307139C2291FC725F3D(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_720E07D94B797307139C2291FC725F3D");

	UHSURGameInstance_C_OnResponse_720E07D94B797307139C2291FC725F3D_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_5E7BC2C04A72B9791C60959C164C7EB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_5E7BC2C04A72B9791C60959C164C7EB0(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_5E7BC2C04A72B9791C60959C164C7EB0");

	UHSURGameInstance_C_OnResponse_5E7BC2C04A72B9791C60959C164C7EB0_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_273559CA48702B886E94549E18134F10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_273559CA48702B886E94549E18134F10(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_273559CA48702B886E94549E18134F10");

	UHSURGameInstance_C_OnResponse_273559CA48702B886E94549E18134F10_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_3338105649787816012A2188513B0508
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_3338105649787816012A2188513B0508(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_3338105649787816012A2188513B0508");

	UHSURGameInstance_C_OnResponse_3338105649787816012A2188513B0508_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_4D7036554BEC8416496F7DA0C7F69667
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_4D7036554BEC8416496F7DA0C7F69667(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_4D7036554BEC8416496F7DA0C7F69667");

	UHSURGameInstance_C_OnResponse_4D7036554BEC8416496F7DA0C7F69667_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnResponse_250B763740745C55C24EE0AF4E502DC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::OnResponse_250B763740745C55C24EE0AF4E502DC4(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnResponse_250B763740745C55C24EE0AF4E502DC4");

	UHSURGameInstance_C_OnResponse_250B763740745C55C24EE0AF4E502DC4_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.Completed_494A84B84C7B8C029F46AC8C8FBE6A9C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Loaded                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UHSURGameInstance_C::Completed_494A84B84C7B8C029F46AC8C8FBE6A9C(TArray<class UObject*> Loaded)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.Completed_494A84B84C7B8C029F46AC8C8FBE6A9C");

	UHSURGameInstance_C_Completed_494A84B84C7B8C029F46AC8C8FBE6A9C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.Completed_840925614D9DF54D9E2C67901A570892
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Loaded                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UHSURGameInstance_C::Completed_840925614D9DF54D9E2C67901A570892(TArray<class UObject*> Loaded)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.Completed_840925614D9DF54D9E2C67901A570892");

	UHSURGameInstance_C_Completed_840925614D9DF54D9E2C67901A570892_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.Completed_C11668DB45522DEB48D5C7932428EC0F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Loaded                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UHSURGameInstance_C::Completed_C11668DB45522DEB48D5C7932428EC0F(TArray<class UObject*> Loaded)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.Completed_C11668DB45522DEB48D5C7932428EC0F");

	UHSURGameInstance_C_Completed_C11668DB45522DEB48D5C7932428EC0F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.Completed_33BF4ABF4D2FCB7F6848A1A031BBF55B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Loaded                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UHSURGameInstance_C::Completed_33BF4ABF4D2FCB7F6848A1A031BBF55B(TArray<class UObject*> Loaded)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.Completed_33BF4ABF4D2FCB7F6848A1A031BBF55B");

	UHSURGameInstance_C_Completed_33BF4ABF4D2FCB7F6848A1A031BBF55B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ENetworkFailure> FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsServer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.HandleNetworkError");

	UHSURGameInstance_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ETravelFailure> FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.HandleTravelError");

	UHSURGameInstance_C_HandleTravelError_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerItems
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RefreshPlayerItems()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerItems");

	UHSURGameInstance_C_RefreshPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerSkins
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RefreshPlayerSkins()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerSkins");

	UHSURGameInstance_C_RefreshPlayerSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerPerks
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RefreshPlayerPerks()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerPerks");

	UHSURGameInstance_C_RefreshPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerProfile
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RefreshPlayerProfile()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerProfile");

	UHSURGameInstance_C_RefreshPlayerProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerStickerSet
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RefreshPlayerStickerSet()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerStickerSet");

	UHSURGameInstance_C_RefreshPlayerStickerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshAllPlayerItems
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RefreshAllPlayerItems()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshAllPlayerItems");

	UHSURGameInstance_C_RefreshAllPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnPingCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::OnPingCallback(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnPingCallback");

	UHSURGameInstance_C_OnPingCallback_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.SaveSlotGamesparks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfoStruct               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           Durable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            requestTimeoutSeconds          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::SaveSlotGamesparks(const struct FPlayerInfoStruct_G& PlayerInfoStruct, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.SaveSlotGamesparks");

	UHSURGameInstance_C_SaveSlotGamesparks_Params params;
	params.PlayerInfoStruct = PlayerInfoStruct;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerStat
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RefreshPlayerStat()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RefreshPlayerStat");

	UHSURGameInstance_C_RefreshPlayerStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.RetrieveLatency
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::RetrieveLatency()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.RetrieveLatency");

	UHSURGameInstance_C_RetrieveLatency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::ShowLoadingScreen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ShowLoadingScreen");

	UHSURGameInstance_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ShowLoginMenu
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::ShowLoginMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ShowLoginMenu");

	UHSURGameInstance_C_ShowLoginMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ShowRegisterMenu
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::ShowRegisterMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ShowRegisterMenu");

	UHSURGameInstance_C_ShowRegisterMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ShowForgetPasswordMenu
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::ShowForgetPasswordMenu()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ShowForgetPasswordMenu");

	UHSURGameInstance_C_ShowForgetPasswordMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ShowAndSetupUniversalPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 confirmText                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 cancelText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::ShowAndSetupUniversalPopup(const struct FString& Title, const struct FString& Message, const struct FString& confirmText, const struct FString& cancelText, TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType, float Timer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ShowAndSetupUniversalPopup");

	UHSURGameInstance_C_ShowAndSetupUniversalPopup_Params params;
	params.Title = Title;
	params.Message = Message;
	params.confirmText = confirmText;
	params.cancelText = cancelText;
	params.popupType = popupType;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ToggleLoadingWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURGameInstance_C::ToggleLoadingWidget(bool Enabled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ToggleLoadingWidget");

	UHSURGameInstance_C_ToggleLoadingWidget_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::FadeIn(bool FadeOut_, float PlaybackSpeed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.FadeIn");

	UHSURGameInstance_C_FadeIn_Params params;
	params.FadeOut_ = FadeOut_;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.HideLoadingScreen
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::HideLoadingScreen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.HideLoadingScreen");

	UHSURGameInstance_C_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ToggleTutorialLoadingWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::ToggleTutorialLoadingWidget(bool Enabled, TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ToggleTutorialLoadingWidget");

	UHSURGameInstance_C_ToggleTutorialLoadingWidget_Params params;
	params.Enabled = Enabled;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ShowAndSetupStorePopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSlateBrush             icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::ShowAndSetupStorePopup(const struct FString& Title, const struct FSlateBrush& icon, int Price)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ShowAndSetupStorePopup");

	UHSURGameInstance_C_ShowAndSetupStorePopup_Params params;
	params.Title = Title;
	params.icon = icon;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.JoinServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Port                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 playerSession                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::JoinServer(const struct FString& ip, const struct FString& Port, const struct FString& playerSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.JoinServer");

	UHSURGameInstance_C_JoinServer_Params params;
	params.ip = ip;
	params.Port = Port;
	params.playerSession = playerSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
void UHSURGameInstance_C::ReceiveInit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ReceiveInit");

	UHSURGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.BackToMainMenuLevel
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::BackToMainMenuLevel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.BackToMainMenuLevel");

	UHSURGameInstance_C_BackToMainMenuLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)
void UHSURGameInstance_C::ReceiveShutdown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ReceiveShutdown");

	UHSURGameInstance_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.LoadAllPrimaryAssets
// (BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::LoadAllPrimaryAssets()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.LoadAllPrimaryAssets");

	UHSURGameInstance_C_LoadAllPrimaryAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.BackToMainMenuLevelWithMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Options                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHSURGameInstance_C::BackToMainMenuLevelWithMessage(const struct FString& Options)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.BackToMainMenuLevelWithMessage");

	UHSURGameInstance_C_BackToMainMenuLevelWithMessage_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.ExecuteUbergraph_HSURGameInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURGameInstance_C::ExecuteUbergraph_HSURGameInstance(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.ExecuteUbergraph_HSURGameInstance");

	UHSURGameInstance_C_ExecuteUbergraph_HSURGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnItemsRefreshed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::OnItemsRefreshed__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnItemsRefreshed__DelegateSignature");

	UHSURGameInstance_C_OnItemsRefreshed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameInstance.HSURGameInstance_C.OnSaveGameInitialize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UHSURGameInstance_C::OnSaveGameInitialize__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameInstance.HSURGameInstance_C.OnSaveGameInitialize__DelegateSignature");

	UHSURGameInstance_C_OnSaveGameInitialize__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
