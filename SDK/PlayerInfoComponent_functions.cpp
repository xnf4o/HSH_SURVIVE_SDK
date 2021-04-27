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

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Back                           (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerBacks");

	UPlayerInfoComponent_C_GetPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Back                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerBacks");

	UPlayerInfoComponent_C_SetPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Heads                          (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerHeads(TArray<struct FString>* Heads)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerHeads");

	UPlayerInfoComponent_C_GetPlayerHeads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Heads != nullptr)
		*Heads = params.Heads;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Head                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerHeads(TArray<struct FString>* Head)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerHeads");

	UPlayerInfoComponent_C_SetPlayerHeads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Head != nullptr)
		*Head = params.Head;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Characters                     (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerCharacters(TArray<struct FString>* Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerCharacters");

	UPlayerInfoComponent_C_GetPlayerCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Characters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerCharacters(TArray<struct FString>* Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerCharacters");

	UPlayerInfoComponent_C_SetPlayerCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.OnRep_PlayerInfo
// (BlueprintCallable, BlueprintEvent)
void UPlayerInfoComponent_C::OnRep_PlayerInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.OnRep_PlayerInfo");

	UPlayerInfoComponent_C_OnRep_PlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Stickers                       (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerStickers");

	UPlayerInfoComponent_C_GetPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Profiles                       (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerProfiles(TArray<struct FString>* Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerProfiles");

	UPlayerInfoComponent_C_GetPlayerProfiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profiles != nullptr)
		*Profiles = params.Profiles;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerStickers");

	UPlayerInfoComponent_C_SetPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerProfiles(TArray<struct FString>* Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerProfiles");

	UPlayerInfoComponent_C_SetPlayerProfiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profiles != nullptr)
		*Profiles = params.Profiles;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerPerks");

	UPlayerInfoComponent_C_SetPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Perks                          (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerPerks");

	UPlayerInfoComponent_C_GetPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerSkins(TArray<struct FString>* Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerSkins");

	UPlayerInfoComponent_C_SetPlayerSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Skins                          (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerSkins(TArray<struct FString>* Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerSkins");

	UPlayerInfoComponent_C_GetPlayerSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Count                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPlayerInfoComponent_C::SetPlayerItems(TArray<struct FString>* Items, TArray<int>* Count)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerItems");

	UPlayerInfoComponent_C_SetPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Items                          (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Count                          (Parm, OutParm, ZeroConstructor)
void UPlayerInfoComponent_C::GetPlayerItems(TArray<struct FString>* Items, TArray<int>* Count)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerItems");

	UPlayerInfoComponent_C_GetPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)
void UPlayerInfoComponent_C::Debug()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.Debug");

	UPlayerInfoComponent_C_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPlayerInfoComponent_C::GetPlayerInfo(struct FPlayerInfoStruct_G* PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerInfo");

	UPlayerInfoComponent_C_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.Register
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UIPlayerInfo_C> IPlayerInfo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerInfoComponent_C::Register(const TScriptInterface<class UIPlayerInfo_C>& IPlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.Register");

	UPlayerInfoComponent_C_Register_Params params;
	params.IPlayerInfo = IPlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.Deregister
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UIPlayerInfo_C> IPlayerInfo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerInfoComponent_C::Deregister(const TScriptInterface<class UIPlayerInfo_C>& IPlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.Deregister");

	UPlayerInfoComponent_C_Deregister_Params params;
	params.IPlayerInfo = IPlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignPlayerInfo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UPlayerInfoComponent_C::AssignPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.AssignPlayerInfo");

	UPlayerInfoComponent_C_AssignPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.Initialize
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UPlayerInfoComponent_C::Initialize(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.Initialize");

	UPlayerInfoComponent_C_Initialize_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHSHCharacterItem*       characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfoComponent_C::AssignCharacter(TEnumAsByte<E_Role_E_Role> Role, class UHSHCharacterItem* characteritem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.AssignCharacter");

	UPlayerInfoComponent_C_AssignCharacter_Params params;
	params.Role = Role;
	params.characteritem = characteritem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.SendNotify
// (BlueprintCallable, BlueprintEvent)
void UPlayerInfoComponent_C::SendNotify()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.SendNotify");

	UPlayerInfoComponent_C_SendNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.ServerAssignPlayerInfo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UPlayerInfoComponent_C::ServerAssignPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.ServerAssignPlayerInfo");

	UPlayerInfoComponent_C_ServerAssignPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignCurrency
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfoComponent_C::AssignCurrency(TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency, int Amount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.AssignCurrency");

	UPlayerInfoComponent_C_AssignCurrency_Params params;
	params.Currency = Currency;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignLootboxAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfoComponent_C::AssignLootboxAmount(int Amount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.AssignLootboxAmount");

	UPlayerInfoComponent_C_AssignLootboxAmount_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoComponent.PlayerInfoComponent_C.ExecuteUbergraph_PlayerInfoComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfoComponent_C::ExecuteUbergraph_PlayerInfoComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlayerInfoComponent.PlayerInfoComponent_C.ExecuteUbergraph_PlayerInfoComponent");

	UPlayerInfoComponent_C_ExecuteUbergraph_PlayerInfoComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
