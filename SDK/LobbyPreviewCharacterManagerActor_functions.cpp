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

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.IsOwnerData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_PlayerLobby          S_PlayerLobby                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ALobbyPreviewCharacterManagerActor_C::IsOwnerData(const struct FS_PlayerLobby& S_PlayerLobby)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.IsOwnerData");

	ALobbyPreviewCharacterManagerActor_C_IsOwnerData_Params params;
	params.S_PlayerLobby = S_PlayerLobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.PrintListLobbyInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALobbyPreviewCharacterManagerActor_C::PrintListLobbyInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.PrintListLobbyInfo");

	ALobbyPreviewCharacterManagerActor_C_PrintListLobbyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.UpdatePlayerState
// (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPreviewCharacterManagerActor_C::UpdatePlayerState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.UpdatePlayerState");

	ALobbyPreviewCharacterManagerActor_C_UpdatePlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.SortDataOwnerFirst
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_PlayerLobby>  LobbyData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_PlayerLobby>  Return                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void ALobbyPreviewCharacterManagerActor_C::SortDataOwnerFirst(TArray<struct FS_PlayerLobby>* LobbyData, TArray<struct FS_PlayerLobby>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.SortDataOwnerFirst");

	ALobbyPreviewCharacterManagerActor_C_SortDataOwnerFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyData != nullptr)
		*LobbyData = params.LobbyData;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ClearUpAllPreview
// (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPreviewCharacterManagerActor_C::ClearUpAllPreview()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ClearUpAllPreview");

	ALobbyPreviewCharacterManagerActor_C_ClearUpAllPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ClearUpUnUsePreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SurvivorCounting               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HunterCounting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPreviewCharacterManagerActor_C::ClearUpUnUsePreview(int SurvivorCounting, int HunterCounting)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ClearUpUnUsePreview");

	ALobbyPreviewCharacterManagerActor_C_ClearUpUnUsePreview_Params params;
	params.SurvivorCounting = SurvivorCounting;
	params.HunterCounting = HunterCounting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.UpdatePreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALobbyPreviewCharacterManagerActor_C::UpdatePreview()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.UpdatePreview");

	ALobbyPreviewCharacterManagerActor_C_UpdatePreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.OnRep_LobbyInfo
// (BlueprintCallable, BlueprintEvent)
void ALobbyPreviewCharacterManagerActor_C::OnRep_LobbyInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.OnRep_LobbyInfo");

	ALobbyPreviewCharacterManagerActor_C_OnRep_LobbyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerSkins(TArray<struct FString> Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerSkins");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerSkins_Params params;
	params.Skins = Skins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerPerks");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerProfiles");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerProfiles_Params params;
	params.Profiles = Profiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerStickers");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerCharacters");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerCharacters_Params params;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Head                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerHeads(TArray<struct FString> Head)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerHeads");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerHeads_Params params;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Back                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerBacks");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.Refresh
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPreviewCharacterManagerActor_C::Refresh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.Refresh");

	ALobbyPreviewCharacterManagerActor_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerInfo");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPreviewCharacterManagerActor_C::ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerItems");

	ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ExecuteUbergraph_LobbyPreviewCharacterManagerActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPreviewCharacterManagerActor_C::ExecuteUbergraph_LobbyPreviewCharacterManagerActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ExecuteUbergraph_LobbyPreviewCharacterManagerActor");

	ALobbyPreviewCharacterManagerActor_C_ExecuteUbergraph_LobbyPreviewCharacterManagerActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.OnInitializePreviewCamera__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ALobbyPreviewCharacterManagerActor_C::OnInitializePreviewCamera__DelegateSignature(const struct FPlayerInfoStruct_G& Player_Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.OnInitializePreviewCamera__DelegateSignature");

	ALobbyPreviewCharacterManagerActor_C_OnInitializePreviewCamera__DelegateSignature_Params params;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
