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

// Function HSURNewLobbyGM.HSURNewLobbyGM_C.LogErrorMatch
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerController*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Case                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::LogErrorMatch(TArray<class APlayerController*>* Array, const struct FString& Case)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.LogErrorMatch");

	AHSURNewLobbyGM_C_LogErrorMatch_Params params;
	params.Case = Case;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.FillAITest
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::FillAITest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.FillAITest");

	AHSURNewLobbyGM_C_FillAITest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CountingNonPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::CountingNonPlayer(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.CountingNonPlayer");

	AHSURNewLobbyGM_C_CountingNonPlayer_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetCustomMatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCustomMatch                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURNewLobbyGM_C::SetCustomMatch(bool IsCustomMatch)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetCustomMatch");

	AHSURNewLobbyGM_C_SetCustomMatch_Params params;
	params.IsCustomMatch = IsCustomMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetMaxPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::SetMaxPlayer(int MaxPlayers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetMaxPlayer");

	AHSURNewLobbyGM_C_SetMaxPlayer_Params params;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CountingCheckingPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::CountingCheckingPlayer(int PlayerIndex, float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.CountingCheckingPlayer");

	AHSURNewLobbyGM_C_CountingCheckingPlayer_Params params;
	params.PlayerIndex = PlayerIndex;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.IsAllPlayerReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURNewLobbyGM_C::IsAllPlayerReady()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.IsAllPlayerReady");

	AHSURNewLobbyGM_C_IsAllPlayerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetLobbyPreview
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ALobbyPreviewCharacterManagerActor_C* Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::GetLobbyPreview(class ALobbyPreviewCharacterManagerActor_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetLobbyPreview");

	AHSURNewLobbyGM_C_GetLobbyPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetMapdata
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ReturnValueRow                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapStruct              ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
struct FMapStruct AHSURNewLobbyGM_C::GetMapdata(const struct FName& RowName, struct FName* ReturnValueRow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetMapdata");

	AHSURNewLobbyGM_C_GetMapdata_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReturnValueRow != nullptr)
		*ReturnValueRow = params.ReturnValueRow;


	return params.ReturnValue;
}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.IsGamelift
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURNewLobbyGM_C::IsGamelift()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.IsGamelift");

	AHSURNewLobbyGM_C_IsGamelift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckIsSurvivorIsFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURNewLobbyGM_C::CheckIsSurvivorIsFull()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckIsSurvivorIsFull");

	AHSURNewLobbyGM_C_CheckIsSurvivorIsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetNewPlayerRole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::GetNewPlayerRole(TEnumAsByte<E_Role_E_Role>* Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.GetNewPlayerRole");

	AHSURNewLobbyGM_C_GetNewPlayerRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role != nullptr)
		*Role = params.Role;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckIsHunterSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURNewLobbyGM_C::CheckIsHunterSelected()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckIsHunterSelected");

	AHSURNewLobbyGM_C_CheckIsHunterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerItems");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerSkins(TArray<struct FString> Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerSkins");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerSkins_Params params;
	params.Skins = Skins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerPerks");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerProfiles");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerProfiles_Params params;
	params.Profiles = Profiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerStickers");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerCharacters");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerCharacters_Params params;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Head                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerHeads(TArray<struct FString> Head)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerHeads");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerHeads_Params params;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Back                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerBacks");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.RandomMap
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::RandomMap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.RandomMap");

	AHSURNewLobbyGM_C_RandomMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetupMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MapRowName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapStruct              Map                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::SetupMap(const struct FName& MapRowName, const struct FMapStruct& Map)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.SetupMap");

	AHSURNewLobbyGM_C_SetupMap_Params params;
	params.MapRowName = MapRowName;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.OnStartGameSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAWSGameSessionServer   GameSession                    (BlueprintVisible, BlueprintReadOnly, Parm)
void AHSURNewLobbyGM_C::OnStartGameSession(const struct FAWSGameSessionServer& GameSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.OnStartGameSession");

	AHSURNewLobbyGM_C_OnStartGameSession_Params params;
	params.GameSession = GameSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSURNewLobbyGM_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveBeginPlay");

	AHSURNewLobbyGM_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveTick");

	AHSURNewLobbyGM_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.K2_PostLogin");

	AHSURNewLobbyGM_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.EveryoneUpdate
// (BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::EveryoneUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.EveryoneUpdate");

	AHSURNewLobbyGM_C_EveryoneUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ServerEndMatch
// (BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::ServerEndMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ServerEndMatch");

	AHSURNewLobbyGM_C_ServerEndMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::K2_OnLogout(class AController* ExitingController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.K2_OnLogout");

	AHSURNewLobbyGM_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveNotifyPlayerInfo");

	AHSURNewLobbyGM_C_ReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.startgame
// (BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::startgame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.startgame");

	AHSURNewLobbyGM_C_startgame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.HandleStartingNewPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::HandleStartingNewPlayer(class APlayerController* NewPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.HandleStartingNewPlayer");

	AHSURNewLobbyGM_C_HandleStartingNewPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.RefreshLobbyData
// (BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::RefreshLobbyData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.RefreshLobbyData");

	AHSURNewLobbyGM_C_RefreshLobbyData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckingPlayer
// (BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::CheckingPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckingPlayer");

	AHSURNewLobbyGM_C_CheckingPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckingNonPlayer
// (BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::CheckingNonPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.CheckingNonPlayer");

	AHSURNewLobbyGM_C_CheckingNonPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.MakePlayerLeave
// (BlueprintCallable, BlueprintEvent)
void AHSURNewLobbyGM_C::MakePlayerLeave()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.MakePlayerLeave");

	AHSURNewLobbyGM_C_MakePlayerLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SpawnHunterAI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterHunter_E_CharacterHunter> hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::SpawnHunterAI(TEnumAsByte<E_CharacterHunter_E_CharacterHunter> hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.SpawnHunterAI");

	AHSURNewLobbyGM_C_SpawnHunterAI_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.SpawnSurvivorAI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::SpawnSurvivorAI(TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.SpawnSurvivorAI");

	AHSURNewLobbyGM_C_SpawnSurvivorAI_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ResponseLog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::ResponseLog(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ResponseLog");

	AHSURNewLobbyGM_C_ResponseLog_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ReceiveEndPlay");

	AHSURNewLobbyGM_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURNewLobbyGM.HSURNewLobbyGM_C.ExecuteUbergraph_HSURNewLobbyGM
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURNewLobbyGM_C::ExecuteUbergraph_HSURNewLobbyGM(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURNewLobbyGM.HSURNewLobbyGM_C.ExecuteUbergraph_HSURNewLobbyGM");

	AHSURNewLobbyGM_C_ExecuteUbergraph_HSURNewLobbyGM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
