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

// Function HSURLobbyPS.HSURLobbyPS_C.LogPlayerinfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::LogPlayerinfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.LogPlayerinfo");

	AHSURLobbyPS_C_LogPlayerinfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.IsPlayerReady
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyPS_C::IsPlayerReady(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.IsPlayerReady");

	AHSURLobbyPS_C_IsPlayerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURLobbyPS.HSURLobbyPS_C.OnRep_bIsReady
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPS_C::OnRep_bIsReady()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.OnRep_bIsReady");

	AHSURLobbyPS_C_OnRep_bIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.CanRefreshNotify
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURLobbyPS_C::CanRefreshNotify()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.CanRefreshNotify");

	AHSURLobbyPS_C_CanRefreshNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.TryGetLobbyPreview
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALobbyPreviewCharacterManagerActor_C* Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::TryGetLobbyPreview(class ALobbyPreviewCharacterManagerActor_C** Output_Get)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.TryGetLobbyPreview");

	AHSURLobbyPS_C_TryGetLobbyPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function HSURLobbyPS.HSURLobbyPS_C.CheckIsRoleAvailable_ReturnRole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     ShouldBe                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::CheckIsRoleAvailable_ReturnRole(TEnumAsByte<E_Role_E_Role> Role, TEnumAsByte<E_Role_E_Role>* ShouldBe)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.CheckIsRoleAvailable_ReturnRole");

	AHSURLobbyPS_C_CheckIsRoleAvailable_ReturnRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldBe != nullptr)
		*ShouldBe = params.ShouldBe;

}


// Function HSURLobbyPS.HSURLobbyPS_C.MakeCharacterList
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         CharacterList                  (Parm, OutParm, ZeroConstructor)
void AHSURLobbyPS_C::MakeCharacterList(TArray<struct FString>* CharacterList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.MakeCharacterList");

	AHSURLobbyPS_C_MakeCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterList != nullptr)
		*CharacterList = params.CharacterList;

}


// Function HSURLobbyPS.HSURLobbyPS_C.MakePlayerInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     LocalPlayerInfo                (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::MakePlayerInfo(const struct FPlayerInfoStruct_G& LocalPlayerInfo, int Index, struct FPlayerInfoStruct_G* PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.MakePlayerInfo");

	AHSURLobbyPS_C_MakePlayerInfo_Params params;
	params.LocalPlayerInfo = LocalPlayerInfo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function HSURLobbyPS.HSURLobbyPS_C.GetCharacterItemFromList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         CharaterList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 DefaultCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UHSHCharacterItem*       characteritem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Character                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::GetCharacterItemFromList(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FString>* CharaterList, const struct FString& DefaultCharacter, class UHSHCharacterItem** characteritem, struct FString* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.GetCharacterItemFromList");

	AHSURLobbyPS_C_GetCharacterItemFromList_Params params;
	params.Role = Role;
	params.DefaultCharacter = DefaultCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharaterList != nullptr)
		*CharaterList = params.CharaterList;
	if (characteritem != nullptr)
		*characteritem = params.characteritem;
	if (Character != nullptr)
		*Character = params.Character;

}


// Function HSURLobbyPS.HSURLobbyPS_C.OnRep_PlayerInfo
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPS_C::OnRep_PlayerInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.OnRep_PlayerInfo");

	AHSURLobbyPS_C_OnRep_PlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.SetupPlayerInfo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_PlayerTeam_E_PlayerTeam> Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::SetupPlayerInfo(TEnumAsByte<E_Role_E_Role> Role, TEnumAsByte<E_PlayerTeam_E_PlayerTeam> Team, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.SetupPlayerInfo");

	AHSURLobbyPS_C_SetupPlayerInfo_Params params;
	params.Role = Role;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ServerUpdatePlayerInfo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::ServerUpdatePlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ServerUpdatePlayerInfo");

	AHSURLobbyPS_C_ServerUpdatePlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.AssignCharacter
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHSHCharacterItem*       characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::AssignCharacter(TEnumAsByte<E_Role_E_Role> Role, class UHSHCharacterItem* characteritem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.AssignCharacter");

	AHSURLobbyPS_C_AssignCharacter_Params params;
	params.Role = Role;
	params.characteritem = characteritem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.SetupRole
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::SetupRole(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.SetupRole");

	AHSURLobbyPS_C_SetupRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ApplyPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::ApplyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ApplyPlayerInfo");

	AHSURLobbyPS_C_ApplyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.AssignSetupPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::AssignSetupPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.AssignSetupPlayerInfo");

	AHSURLobbyPS_C_AssignSetupPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.CommitPlayerInfo
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerTeam_E_PlayerTeam> Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FString>         Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Count                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Skins                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Heads                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Backs                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ticketId                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::CommitPlayerInfo(TEnumAsByte<E_PlayerTeam_E_PlayerTeam> Team, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FString>* Items, TArray<int>* Count, TArray<struct FString>* Perks, TArray<struct FString>* Skins, TArray<struct FString> Heads, TArray<struct FString> Backs, const struct FString& ticketId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.CommitPlayerInfo");

	AHSURLobbyPS_C_CommitPlayerInfo_Params params;
	params.Team = Team;
	params.PlayerInfo = PlayerInfo;
	params.Heads = Heads;
	params.Backs = Backs;
	params.ticketId = ticketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Count != nullptr)
		*Count = params.Count;
	if (Perks != nullptr)
		*Perks = params.Perks;
	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSURLobbyPS_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveBeginPlay");

	AHSURLobbyPS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerInfo");

	AHSURLobbyPS_C_ReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerItems");

	AHSURLobbyPS_C_ReceiveNotifyPlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.SendNotifyPlayerInfo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::SendNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.SendNotifyPlayerInfo");

	AHSURLobbyPS_C_SendNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.SendNotifyPlayerItems
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::SendNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.SendNotifyPlayerItems");

	AHSURLobbyPS_C_SendNotifyPlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ServerAcceptPlayerSession
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 playerSessionId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::ServerAcceptPlayerSession(const struct FString& playerSessionId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ServerAcceptPlayerSession");

	AHSURLobbyPS_C_ServerAcceptPlayerSession_Params params;
	params.playerSessionId = playerSessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Back                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerBacks");

	AHSURLobbyPS_C_ReceiveNotifyPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function HSURLobbyPS.HSURLobbyPS_C.OnInitializePreviewCamera
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Move_to_Camera_Role            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::OnInitializePreviewCamera(TEnumAsByte<E_Role_E_Role> Move_to_Camera_Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.OnInitializePreviewCamera");

	AHSURLobbyPS_C_OnInitializePreviewCamera_Params params;
	params.Move_to_Camera_Role = Move_to_Camera_Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Head                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerHeads(TArray<struct FString> Head)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerHeads");

	AHSURLobbyPS_C_ReceiveNotifyPlayerHeads_Params params;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerCharacters");

	AHSURLobbyPS_C_ReceiveNotifyPlayerCharacters_Params params;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.SetupStatusState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_LobbyStatus_E_LobbyStatus> LobbyStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::SetupStatusState(TEnumAsByte<E_LobbyStatus_E_LobbyStatus> LobbyStatus)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.SetupStatusState");

	AHSURLobbyPS_C_SetupStatusState_Params params;
	params.LobbyStatus = LobbyStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerStickers");

	AHSURLobbyPS_C_ReceiveNotifyPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerProfiles");

	AHSURLobbyPS_C_ReceiveNotifyPlayerProfiles_Params params;
	params.Profiles = Profiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerPerks");

	AHSURLobbyPS_C_ReceiveNotifyPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::ReceiveNotifyPlayerSkins(TArray<struct FString> Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerSkins");

	AHSURLobbyPS_C_ReceiveNotifyPlayerSkins_Params params;
	params.Skins = Skins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ServerSetupRole
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::ServerSetupRole(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ServerSetupRole");

	AHSURLobbyPS_C_ServerSetupRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ServerAssignCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHSHCharacterItem*       characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::ServerAssignCharacter(TEnumAsByte<E_Role_E_Role> Role, class UHSHCharacterItem* characteritem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ServerAssignCharacter");

	AHSURLobbyPS_C_ServerAssignCharacter_Params params;
	params.Role = Role;
	params.characteritem = characteritem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.InitializeSpecterCamera
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPS_C::InitializeSpecterCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.InitializeSpecterCamera");

	AHSURLobbyPS_C_InitializeSpecterCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.InitializeSurvivorCamera
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPS_C::InitializeSurvivorCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.InitializeSurvivorCamera");

	AHSURLobbyPS_C_InitializeSurvivorCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.InitializeSpectatorCamera
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPS_C::InitializeSpectatorCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.InitializeSpectatorCamera");

	AHSURLobbyPS_C_InitializeSpectatorCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.ExecuteUbergraph_HSURLobbyPS
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPS_C::ExecuteUbergraph_HSURLobbyPS(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.ExecuteUbergraph_HSURLobbyPS");

	AHSURLobbyPS_C_ExecuteUbergraph_HSURLobbyPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPS.HSURLobbyPS_C.OnReceiveNotifyPlayerItems__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURLobbyPS_C::OnReceiveNotifyPlayerItems__DelegateSignature(TArray<struct FString>* Items, TArray<int>* Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.OnReceiveNotifyPlayerItems__DelegateSignature");

	AHSURLobbyPS_C_OnReceiveNotifyPlayerItems__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function HSURLobbyPS.HSURLobbyPS_C.OnReceiveNotifyPlayerInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyPS_C::OnReceiveNotifyPlayerInfo__DelegateSignature(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPS.HSURLobbyPS_C.OnReceiveNotifyPlayerInfo__DelegateSignature");

	AHSURLobbyPS_C_OnReceiveNotifyPlayerInfo__DelegateSignature_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
