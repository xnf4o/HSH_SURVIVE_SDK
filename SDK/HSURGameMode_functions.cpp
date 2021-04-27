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

// Function HSURGameMode.HSURGameMode_C.CheckPlayerPenaltyOnlyID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 playerIds                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURGameMode_C::CheckPlayerPenaltyOnlyID(const struct FString& playerIds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.CheckPlayerPenaltyOnlyID");

	AHSURGameMode_C_CheckPlayerPenaltyOnlyID_Params params;
	params.playerIds = playerIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.CheckPlayerPenalty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::CheckPlayerPenalty()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.CheckPlayerPenalty");

	AHSURGameMode_C_CheckPlayerPenalty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveRoyalPass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::SaveRoyalPass(class APlayerController* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveRoyalPass");

	AHSURGameMode_C_SaveRoyalPass_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveWeeklyQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::SaveWeeklyQuest(class APlayerController* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveWeeklyQuest");

	AHSURGameMode_C_SaveWeeklyQuest_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.GetAIControllerByCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHCharacterItem*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::GetAIControllerByCharacter(class UHSHCharacterItem* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetAIControllerByCharacter");

	AHSURGameMode_C_GetAIControllerByCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.AddedController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::AddedController(class AController* NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.AddedController");

	AHSURGameMode_C_AddedController_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveEndgameResultOnlyID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURGameMode_C::SaveEndgameResultOnlyID(const struct FString& PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveEndgameResultOnlyID");

	AHSURGameMode_C_SaveEndgameResultOnlyID_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.GetPlayableController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class APlayerController*> AllPlayableController          (Parm, OutParm, ZeroConstructor)
void AHSURGameMode_C::GetPlayableController(TArray<class APlayerController*>* AllPlayableController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetPlayableController");

	AHSURGameMode_C_GetPlayableController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllPlayableController != nullptr)
		*AllPlayableController = params.AllPlayableController;

}


// Function HSURGameMode.HSURGameMode_C.RemovePlayableController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::RemovePlayableController(class APlayerController* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.RemovePlayableController");

	AHSURGameMode_C_RemovePlayableController_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.AddedPlayablePlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::AddedPlayablePlayerController(class APlayerController* NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.AddedPlayablePlayerController");

	AHSURGameMode_C_AddedPlayablePlayerController_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.GetMaxPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MaxPlayer                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::GetMaxPlayer(int* MaxPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetMaxPlayer");

	AHSURGameMode_C_GetMaxPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxPlayer != nullptr)
		*MaxPlayer = params.MaxPlayer;

}


// Function HSURGameMode.HSURGameMode_C.AssignMaxPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Numbers                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::AssignMaxPlayer(int Numbers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.AssignMaxPlayer");

	AHSURGameMode_C_AssignMaxPlayer_Params params;
	params.Numbers = Numbers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveEndgameResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::SaveEndgameResult()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveEndgameResult");

	AHSURGameMode_C_SaveEndgameResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ShouldContinue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<bool>                   bIsContinue                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Lenght                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURGameMode_C::ShouldContinue(TArray<bool>* bIsContinue, int Lenght)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ShouldContinue");

	AHSURGameMode_C_ShouldContinue_Params params;
	params.Lenght = Lenght;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsContinue != nullptr)
		*bIsContinue = params.bIsContinue;


	return params.ReturnValue;
}


// Function HSURGameMode.HSURGameMode_C.CheckingStartGame
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::CheckingStartGame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.CheckingStartGame");

	AHSURGameMode_C_CheckingStartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SpawnDefaultPawnAtTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SpawnTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* AHSURGameMode_C::SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SpawnDefaultPawnAtTransform");

	AHSURGameMode_C_SpawnDefaultPawnAtTransform_Params params;
	params.NewPlayer = NewPlayer;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameMode.HSURGameMode_C.SpawnDefaultPawnFor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  StartSpot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* AHSURGameMode_C::SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SpawnDefaultPawnFor");

	AHSURGameMode_C_SpawnDefaultPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameMode.HSURGameMode_C.ChoosePlayerStart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* AHSURGameMode_C::ChoosePlayerStart(class AController* Player)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ChoosePlayerStart");

	AHSURGameMode_C_ChoosePlayerStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameMode.HSURGameMode_C.GetPlayerInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     Return                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameMode_C::GetPlayerInfo(class APlayerController* PlayerController, struct FPlayerInfoStruct_G* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetPlayerInfo");

	AHSURGameMode_C_GetPlayerInfo_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURGameMode.HSURGameMode_C.FindEndReason
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_EndGameReason_E_EndGameReason> Reason                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::FindEndReason(TEnumAsByte<E_EndGameReason_E_EndGameReason>* Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.FindEndReason");

	AHSURGameMode_C_FindEndReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reason != nullptr)
		*Reason = params.Reason;

}


// Function HSURGameMode.HSURGameMode_C.CanSendGameSpark
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCanSend                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameMode_C::CanSendGameSpark(bool* IsCanSend)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.CanSendGameSpark");

	AHSURGameMode_C_CanSendGameSpark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCanSend != nullptr)
		*IsCanSend = params.IsCanSend;

}


// Function HSURGameMode.HSURGameMode_C.GetSummaryResultEndGame_AllPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_SummaryResult> Return_LocalPlayer             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void AHSURGameMode_C::GetSummaryResultEndGame_AllPlayer(TArray<struct FS_SummaryResult>* Return_LocalPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetSummaryResultEndGame_AllPlayer");

	AHSURGameMode_C_GetSummaryResultEndGame_AllPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_LocalPlayer != nullptr)
		*Return_LocalPlayer = params.Return_LocalPlayer;

}


// Function HSURGameMode.HSURGameMode_C.ReadyToStartMatch
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURGameMode_C::ReadyToStartMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ReadyToStartMatch");

	AHSURGameMode_C_ReadyToStartMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameMode.HSURGameMode_C.GetPlayerDataList_Custom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGameSparksScriptData*> playerDataList                 (Parm, OutParm, ZeroConstructor)
void AHSURGameMode_C::GetPlayerDataList_Custom(TArray<class UGameSparksScriptData*>* playerDataList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetPlayerDataList_Custom");

	AHSURGameMode_C_GetPlayerDataList_Custom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerDataList != nullptr)
		*playerDataList = params.playerDataList;

}


// Function HSURGameMode.HSURGameMode_C.GetSummaryResultList_Test
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_SummaryResult> Return_LocalPlayer             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void AHSURGameMode_C::GetSummaryResultList_Test(TArray<struct FS_SummaryResult>* Return_LocalPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetSummaryResultList_Test");

	AHSURGameMode_C_GetSummaryResultList_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_LocalPlayer != nullptr)
		*Return_LocalPlayer = params.Return_LocalPlayer;

}


// Function HSURGameMode.HSURGameMode_C.IsPlayerNotEndGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             HSURPlayerController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsNotEndGame                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameMode_C::IsPlayerNotEndGame(class AController* HSURPlayerController, bool* IsNotEndGame)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.IsPlayerNotEndGame");

	AHSURGameMode_C_IsPlayerNotEndGame_Params params;
	params.HSURPlayerController = HSURPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNotEndGame != nullptr)
		*IsNotEndGame = params.IsNotEndGame;

}


// Function HSURGameMode.HSURGameMode_C.GetPlayerData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Controller                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   playerData                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::GetPlayerData(class AController* Controller, class UGameSparksScriptData** playerData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetPlayerData");

	AHSURGameMode_C_GetPlayerData_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerData != nullptr)
		*playerData = params.playerData;

}


// Function HSURGameMode.HSURGameMode_C.GetPlayerDataList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGameSparksScriptData*> playerDataList                 (Parm, OutParm, ZeroConstructor)
void AHSURGameMode_C::GetPlayerDataList(TArray<class UGameSparksScriptData*>* playerDataList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetPlayerDataList");

	AHSURGameMode_C_GetPlayerDataList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerDataList != nullptr)
		*playerDataList = params.playerDataList;

}


// Function HSURGameMode.HSURGameMode_C.GetRoleByPlayerId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     Role                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::GetRoleByPlayerId(const struct FString& PlayerId, TEnumAsByte<E_Role_E_Role>* Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetRoleByPlayerId");

	AHSURGameMode_C_GetRoleByPlayerId_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role != nullptr)
		*Role = params.Role;

}


// Function HSURGameMode.HSURGameMode_C.GetActivities
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Activity>     Activities                     (Parm, OutParm, ZeroConstructor)
void AHSURGameMode_C::GetActivities(class UGameSparksScriptData* Target, TArray<struct FS_Activity>* Activities)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetActivities");

	AHSURGameMode_C_GetActivities_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Activities != nullptr)
		*Activities = params.Activities;

}


// Function HSURGameMode.HSURGameMode_C.MakeSummaryResultListByGameSparksLog
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGSLogEventResponse     SummaryResultLog               (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FS_SummaryResult> SummaryResultList              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void AHSURGameMode_C::MakeSummaryResultListByGameSparksLog(const struct FGSLogEventResponse& SummaryResultLog, TArray<struct FS_SummaryResult>* SummaryResultList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.MakeSummaryResultListByGameSparksLog");

	AHSURGameMode_C_MakeSummaryResultListByGameSparksLog_Params params;
	params.SummaryResultLog = SummaryResultLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SummaryResultList != nullptr)
		*SummaryResultList = params.SummaryResultList;

}


// Function HSURGameMode.HSURGameMode_C.ChooseStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::ChooseStart(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ChooseStart");

	AHSURGameMode_C_ChooseStart_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ReadyToEndMatch
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURGameMode_C::ReadyToEndMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ReadyToEndMatch");

	AHSURGameMode_C_ReadyToEndMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameMode.HSURGameMode_C.GetPlayerStartPoints
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::GetPlayerStartPoints()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.GetPlayerStartPoints");

	AHSURGameMode_C_GetPlayerStartPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.EnterSendContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsContinue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameMode_C::EnterSendContinue(bool bIsContinue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.EnterSendContinue");

	AHSURGameMode_C_EnterSendContinue_Params params;
	params.bIsContinue = bIsContinue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.RespawnPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     PlayerRole                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameMode_C::RespawnPlayer(class AController* Controller, class UClass* PlayerCharacter, TEnumAsByte<E_Role_E_Role> PlayerRole, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.RespawnPlayer");

	AHSURGameMode_C_RespawnPlayer_Params params;
	params.Controller = Controller;
	params.PlayerCharacter = PlayerCharacter;
	params.PlayerRole = PlayerRole;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.K2_OnSwapPlayerControllers
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       OldPC                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       NewPC                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.K2_OnSwapPlayerControllers");

	AHSURGameMode_C_K2_OnSwapPlayerControllers_Params params;
	params.OldPC = OldPC;
	params.NewPC = NewPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.K2_OnLogout");

	AHSURGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.K2_OnSetMatchState
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::K2_OnSetMatchState(const struct FName& NewState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.K2_OnSetMatchState");

	AHSURGameMode_C_K2_OnSetMatchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSURGameMode_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ReceiveBeginPlay");

	AHSURGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ServerBackToLobby
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::ServerBackToLobby()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ServerBackToLobby");

	AHSURGameMode_C_ServerBackToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ServerEndMatch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::ServerEndMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ServerEndMatch");

	AHSURGameMode_C_ServerEndMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SetupSummaryResultToPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::SetupSummaryResultToPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SetupSummaryResultToPlayer");

	AHSURGameMode_C_SetupSummaryResultToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ApplyPlayerRespawnInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     PlayerRole                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameMode_C::ApplyPlayerRespawnInfo(class AController* Controller, class UClass* PlayerCharacter, TEnumAsByte<E_Role_E_Role> PlayerRole, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ApplyPlayerRespawnInfo");

	AHSURGameMode_C_ApplyPlayerRespawnInfo_Params params;
	params.Controller = Controller;
	params.PlayerCharacter = PlayerCharacter;
	params.PlayerRole = PlayerRole;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.QuitToResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_EndGameReason_E_EndGameReason> Endgame                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::QuitToResult(class APlayerController* PlayerController, TEnumAsByte<E_EndGameReason_E_EndGameReason> Endgame)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.QuitToResult");

	AHSURGameMode_C_QuitToResult_Params params;
	params.PlayerController = PlayerController;
	params.Endgame = Endgame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.OnEndMatch
// (BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::OnEndMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.OnEndMatch");

	AHSURGameMode_C_OnEndMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.HandleStartingNewPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::HandleStartingNewPlayer(class APlayerController* NewPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.HandleStartingNewPlayer");

	AHSURGameMode_C_HandleStartingNewPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ReceiveTick");

	AHSURGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.LeaveWithNoResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSURGameMode_C::LeaveWithNoResult(const struct FString& Message)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.LeaveWithNoResult");

	AHSURGameMode_C_LeaveWithNoResult_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveResultRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::SaveResultRequested(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveResultRequested");

	AHSURGameMode_C_SaveResultRequested_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SafeLeaveGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::SafeLeaveGame(class AHSURPlayerController_C* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SafeLeaveGame");

	AHSURGameMode_C_SafeLeaveGame_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.OnLeaveGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::OnLeaveGame(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.OnLeaveGame");

	AHSURGameMode_C_OnLeaveGame_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveResultOnlyIDRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::SaveResultOnlyIDRequested(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveResultOnlyIDRequested");

	AHSURGameMode_C_SaveResultOnlyIDRequested_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SpawnAI
// (BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::SpawnAI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SpawnAI");

	AHSURGameMode_C_SpawnAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SpawnSurvivorAI
// (BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::SpawnSurvivorAI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SpawnSurvivorAI");

	AHSURGameMode_C_SpawnSurvivorAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SpawnHunterAI
// (BlueprintCallable, BlueprintEvent)
void AHSURGameMode_C::SpawnHunterAI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SpawnHunterAI");

	AHSURGameMode_C_SpawnHunterAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveWeeklyquestRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::SaveWeeklyquestRequested(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveWeeklyquestRequested");

	AHSURGameMode_C_SaveWeeklyquestRequested_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.SaveRoyalpassRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::SaveRoyalpassRequested(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.SaveRoyalpassRequested");

	AHSURGameMode_C_SaveRoyalpassRequested_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.CheckPenaltyResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::CheckPenaltyResponse(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.CheckPenaltyResponse");

	AHSURGameMode_C_CheckPenaltyResponse_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.CheckPenaltyOnlyIDResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::CheckPenaltyOnlyIDResponse(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.CheckPenaltyOnlyIDResponse");

	AHSURGameMode_C_CheckPenaltyOnlyIDResponse_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.ExecuteUbergraph_HSURGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::ExecuteUbergraph_HSURGameMode(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.ExecuteUbergraph_HSURGameMode");

	AHSURGameMode_C_ExecuteUbergraph_HSURGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameMode.HSURGameMode_C.OnPlayerDisconnected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameMode_C::OnPlayerDisconnected__DelegateSignature(class AController* ExitingController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameMode.HSURGameMode_C.OnPlayerDisconnected__DelegateSignature");

	AHSURGameMode_C_OnPlayerDisconnected__DelegateSignature_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
