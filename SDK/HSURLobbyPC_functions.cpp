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

// Function HSURLobbyPC.HSURLobbyPC_C.OnRep_bIsAllPlayerReady
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::OnRep_bIsAllPlayerReady()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.OnRep_bIsAllPlayerReady");

	AHSURLobbyPC_C_OnRep_bIsAllPlayerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ServerAddHunterAI
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterHunter_E_CharacterHunter> hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::ServerAddHunterAI(TEnumAsByte<E_CharacterHunter_E_CharacterHunter> hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ServerAddHunterAI");

	AHSURLobbyPC_C_ServerAddHunterAI_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ServerAddSurvivorAI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::ServerAddSurvivorAI(TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ServerAddSurvivorAI");

	AHSURLobbyPC_C_ServerAddSurvivorAI_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.OnClick
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::OnClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.OnClick");

	AHSURLobbyPC_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ServerRefreshMapName
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::ServerRefreshMapName()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ServerRefreshMapName");

	AHSURLobbyPC_C_ServerRefreshMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.RefreshMapName
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::RefreshMapName()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.RefreshMapName");

	AHSURLobbyPC_C_RefreshMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ChangeMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)
void AHSURLobbyPC_C::ChangeMap(const struct FText& MapName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ChangeMap");

	AHSURLobbyPC_C_ChangeMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ServerRefresh
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::ServerRefresh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ServerRefresh");

	AHSURLobbyPC_C_ServerRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ServerTestRest
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::ServerTestRest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ServerTestRest");

	AHSURLobbyPC_C_ServerTestRest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.Response
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::Response(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.Response");

	AHSURLobbyPC_C_Response_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ClientGetDebug
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            code                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::ClientGetDebug(int code, const struct FString& Content)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ClientGetDebug");

	AHSURLobbyPC_C_ClientGetDebug_Params params;
	params.code = code;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ServerChangeMap
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)
void AHSURLobbyPC_C::ServerChangeMap(const struct FText& MapName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ServerChangeMap");

	AHSURLobbyPC_C_ServerChangeMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.Kicked
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::Kicked()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.Kicked");

	AHSURLobbyPC_C_Kicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.SetupLobbyMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ServerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              MapImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MatchId                        (BlueprintVisible, BlueprintReadOnly, Parm)
void AHSURLobbyPC_C::SetupLobbyMenu(const struct FText& ServerName, class UTexture2D* MapImage, const struct FText& MapName, const struct FText& MatchId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.SetupLobbyMenu");

	AHSURLobbyPC_C_SetupLobbyMenu_Params params;
	params.ServerName = ServerName;
	params.MapImage = MapImage;
	params.MapName = MapName;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Back                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerBacks");

	AHSURLobbyPC_C_ReceiveNotifyPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ShowLoadingScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::ShowLoadingScreen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ShowLoadingScreen");

	AHSURLobbyPC_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Head                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerHeads(TArray<struct FString> Head)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerHeads");

	AHSURLobbyPC_C_ReceiveNotifyPlayerHeads_Params params;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveEndPlay");

	AHSURLobbyPC_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerCharacters");

	AHSURLobbyPC_C_ReceiveNotifyPlayerCharacters_Params params;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSURLobbyPC_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveBeginPlay");

	AHSURLobbyPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerStickers");

	AHSURLobbyPC_C_ReceiveNotifyPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function HSURLobbyPC.HSURLobbyPC_C.AllPlayerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAllPlayerReady              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyPC_C::AllPlayerReady(bool bIsAllPlayerReady)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.AllPlayerReady");

	AHSURLobbyPC_C_AllPlayerReady_Params params;
	params.bIsAllPlayerReady = bIsAllPlayerReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerProfiles");

	AHSURLobbyPC_C_ReceiveNotifyPlayerProfiles_Params params;
	params.Profiles = Profiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ServerRefreshPreview
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::ServerRefreshPreview()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ServerRefreshPreview");

	AHSURLobbyPC_C_ServerRefreshPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.AllPlayerCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::AllPlayerCountdown(float Countdown)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.AllPlayerCountdown");

	AHSURLobbyPC_C_AllPlayerCountdown_Params params;
	params.Countdown = Countdown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerPerks");

	AHSURLobbyPC_C_ReceiveNotifyPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerSkins(TArray<struct FString> Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerSkins");

	AHSURLobbyPC_C_ReceiveNotifyPlayerSkins_Params params;
	params.Skins = Skins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPC_C::ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerItems");

	AHSURLobbyPC_C_ReceiveNotifyPlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPC_C::ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveNotifyPlayerInfo");

	AHSURLobbyPC_C_ReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.UpdateValueFromPlayerState
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::UpdateValueFromPlayerState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.UpdateValueFromPlayerState");

	AHSURLobbyPC_C_UpdateValueFromPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.SetUpCheckingPlayer
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPC_C::SetUpCheckingPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.SetUpCheckingPlayer");

	AHSURLobbyPC_C_SetUpCheckingPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.LeaveGameWithMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::LeaveGameWithMessage(const struct FString& Message)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.LeaveGameWithMessage");

	AHSURLobbyPC_C_LeaveGameWithMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ReceiveTick");

	AHSURLobbyPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPC.HSURLobbyPC_C.ExecuteUbergraph_HSURLobbyPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPC_C::ExecuteUbergraph_HSURLobbyPC(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPC.HSURLobbyPC_C.ExecuteUbergraph_HSURLobbyPC");

	AHSURLobbyPC_C_ExecuteUbergraph_HSURLobbyPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
