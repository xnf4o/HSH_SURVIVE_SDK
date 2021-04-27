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

// Function HSURGameState.HSURGameState_C.OnRep_AllPlayerInfo_New
// (BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::OnRep_AllPlayerInfo_New()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnRep_AllPlayerInfo_New");

	AHSURGameState_C_OnRep_AllPlayerInfo_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.OnRep_SurvivorStateStatus_New
// (BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::OnRep_SurvivorStateStatus_New()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnRep_SurvivorStateStatus_New");

	AHSURGameState_C_OnRep_SurvivorStateStatus_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.GetTotalTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TotalTimer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::GetTotalTimer(float* TotalTimer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetTotalTimer");

	AHSURGameState_C_GetTotalTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalTimer != nullptr)
		*TotalTimer = params.TotalTimer;

}


// Function HSURGameState.HSURGameState_C.GetSurvivorSpawnSoulLocation
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform AHSURGameState_C::GetSurvivorSpawnSoulLocation(class AActor* Character, class AActor* KilledBy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetSurvivorSpawnSoulLocation");

	AHSURGameState_C_GetSurvivorSpawnSoulLocation_Params params;
	params.Character = Character;
	params.KilledBy = KilledBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameState.HSURGameState_C.OnDebugingRespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AHSURGameState_C::OnDebugingRespawn(const struct FTransform& SpawnTransform)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnDebugingRespawn");

	AHSURGameState_C_OnDebugingRespawn_Params params;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.GetSoulDisappear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    SoulDisappearArray             (Parm, OutParm, ZeroConstructor)
void AHSURGameState_C::GetSoulDisappear(TArray<int>* SoulDisappearArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetSoulDisappear");

	AHSURGameState_C_GetSoulDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SoulDisappearArray != nullptr)
		*SoulDisappearArray = params.SoulDisappearArray;

}


// Function HSURGameState.HSURGameState_C.RemoveSoulDisappear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::RemoveSoulDisappear(int NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.RemoveSoulDisappear");

	AHSURGameState_C_RemoveSoulDisappear_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddedSoulDisappear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::AddedSoulDisappear(int NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddedSoulDisappear");

	AHSURGameState_C_AddedSoulDisappear_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.GetHunterPlayerInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Return                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::GetHunterPlayerInfo(struct FPlayerInfoStruct_G* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetHunterPlayerInfo");

	AHSURGameState_C_GetHunterPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURGameState.HSURGameState_C.GetLastSurvivorExitPortal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Return                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::GetLastSurvivorExitPortal(struct FPlayerInfoStruct_G* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetLastSurvivorExitPortal");

	AHSURGameState_C_GetLastSurvivorExitPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURGameState.HSURGameState_C.GetLastSurvivorDeath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Return                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::GetLastSurvivorDeath(struct FPlayerInfoStruct_G* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetLastSurvivorDeath");

	AHSURGameState_C_GetLastSurvivorDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURGameState.HSURGameState_C.GetPlayerInfoFromPlayerID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     Return                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::GetPlayerInfoFromPlayerID(const struct FString& PlayerId, struct FPlayerInfoStruct_G* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetPlayerInfoFromPlayerID");

	AHSURGameState_C_GetPlayerInfoFromPlayerID_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURGameState.HSURGameState_C.PlayerSurvivorExitPortal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::PlayerSurvivorExitPortal(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.PlayerSurvivorExitPortal");

	AHSURGameState_C_PlayerSurvivorExitPortal_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.PlayerSurvivorDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::PlayerSurvivorDeath(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.PlayerSurvivorDeath");

	AHSURGameState_C_PlayerSurvivorDeath_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.GetAllPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPlayerInfoStruct_G> AllPlayerInfo                  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void AHSURGameState_C::GetAllPlayerInfo(TArray<struct FPlayerInfoStruct_G>* AllPlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetAllPlayerInfo");

	AHSURGameState_C_GetAllPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllPlayerInfo != nullptr)
		*AllPlayerInfo = params.AllPlayerInfo;

}


// Function HSURGameState.HSURGameState_C.AssignSpawningPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::AssignSpawningPlayer(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AssignSpawningPlayer");

	AHSURGameState_C_AssignSpawningPlayer_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.IsTutorial?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::IsTutorial_(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.IsTutorial?");

	AHSURGameState_C_IsTutorial__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSURGameState.HSURGameState_C.IsEndWithPortal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEndByPortal                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::IsEndWithPortal(bool* bEndByPortal)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.IsEndWithPortal");

	AHSURGameState_C_IsEndWithPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bEndByPortal != nullptr)
		*bEndByPortal = params.bEndByPortal;

}


// Function HSURGameState.HSURGameState_C.GetMatchResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSURPlayerState_C*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EndGameResult        EndGameResult                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AHSURGameState_C::GetMatchResult(class AHSURPlayerState_C* PlayerState, struct FS_EndGameResult* EndGameResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetMatchResult");

	AHSURGameState_C_GetMatchResult_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndGameResult != nullptr)
		*EndGameResult = params.EndGameResult;

}


// Function HSURGameState.HSURGameState_C.GetIsOverlapLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NotBlockByAnyone               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::GetIsOverlapLocation(const struct FVector& Location, bool* NotBlockByAnyone)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetIsOverlapLocation");

	AHSURGameState_C_GetIsOverlapLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NotBlockByAnyone != nullptr)
		*NotBlockByAnyone = params.NotBlockByAnyone;

}


// Function HSURGameState.HSURGameState_C.UpdateSpawnPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::UpdateSpawnPlayer(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.UpdateSpawnPlayer");

	AHSURGameState_C_UpdateSpawnPlayer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.OnRep_TrapTargetUsed
// (BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::OnRep_TrapTargetUsed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnRep_TrapTargetUsed");

	AHSURGameState_C_OnRep_TrapTargetUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.SpawnPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transfrom                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AHSHCharacterBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AHSHCharacterBase* AHSURGameState_C::SpawnPlayer(class APlayerState* PlayerState, const struct FTransform& Transfrom)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.SpawnPlayer");

	AHSURGameState_C_SpawnPlayer_Params params;
	params.PlayerState = PlayerState;
	params.Transfrom = Transfrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURGameState.HSURGameState_C.GetSoul
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    SoulArray                      (Parm, OutParm, ZeroConstructor)
void AHSURGameState_C::GetSoul(TArray<int>* SoulArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetSoul");

	AHSURGameState_C_GetSoul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SoulArray != nullptr)
		*SoulArray = params.SoulArray;

}


// Function HSURGameState.HSURGameState_C.RemoveSoul
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::RemoveSoul(int NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.RemoveSoul");

	AHSURGameState_C_RemoveSoul_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddedSoul
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::AddedSoul(int NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddedSoul");

	AHSURGameState_C_AddedSoul_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.IsHunterDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HunterDead                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::IsHunterDead(bool* HunterDead)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.IsHunterDead");

	AHSURGameState_C_IsHunterDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HunterDead != nullptr)
		*HunterDead = params.HunterDead;

}


// Function HSURGameState.HSURGameState_C.GetHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AHSURPlayerState_C*> HunterArray                    (Parm, OutParm, ZeroConstructor)
void AHSURGameState_C::GetHunter(TArray<class AHSURPlayerState_C*>* HunterArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetHunter");

	AHSURGameState_C_GetHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HunterArray != nullptr)
		*HunterArray = params.HunterArray;

}


// Function HSURGameState.HSURGameState_C.GetSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AHSURPlayerState_C*> SurvivorArray                  (Parm, OutParm, ZeroConstructor)
void AHSURGameState_C::GetSurvivor(TArray<class AHSURPlayerState_C*>* SurvivorArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetSurvivor");

	AHSURGameState_C_GetSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurvivorArray != nullptr)
		*SurvivorArray = params.SurvivorArray;

}


// Function HSURGameState.HSURGameState_C.GetTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Timer                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::GetTimer(float* Timer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetTimer");

	AHSURGameState_C_GetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timer != nullptr)
		*Timer = params.Timer;

}


// Function HSURGameState.HSURGameState_C.RemoveHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::RemoveHunter(class AHSURPlayerState_C* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.RemoveHunter");

	AHSURGameState_C_RemoveHunter_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddedHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::AddedHunter(class AHSURPlayerState_C* NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddedHunter");

	AHSURGameState_C_AddedHunter_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.RemoveSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::RemoveSurvivor(class AHSURPlayerState_C* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.RemoveSurvivor");

	AHSURGameState_C_RemoveSurvivor_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddedSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::AddedSurvivor(class AHSURPlayerState_C* NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddedSurvivor");

	AHSURGameState_C_AddedSurvivor_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.IsTimeOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsTimeOut_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::IsTimeOut(bool* IsTimeOut_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.IsTimeOut");

	AHSURGameState_C_IsTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTimeOut_ != nullptr)
		*IsTimeOut_ = params.IsTimeOut_;

}


// Function HSURGameState.HSURGameState_C.TimeCounting
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::TimeCounting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.TimeCounting");

	AHSURGameState_C_TimeCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.GetLimitSpawnComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULimitItemsTypeComponent_C* LimitItemsTypeComponent        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::GetLimitSpawnComponent(class ULimitItemsTypeComponent_C** LimitItemsTypeComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetLimitSpawnComponent");

	AHSURGameState_C_GetLimitSpawnComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimitItemsTypeComponent != nullptr)
		*LimitItemsTypeComponent = params.LimitItemsTypeComponent;

}


// Function HSURGameState.HSURGameState_C.GetLimitChestComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULimitItemsBaseComponent_C* LimitItemsTypeComponent        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::GetLimitChestComponent(class ULimitItemsBaseComponent_C** LimitItemsTypeComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetLimitChestComponent");

	AHSURGameState_C_GetLimitChestComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimitItemsTypeComponent != nullptr)
		*LimitItemsTypeComponent = params.LimitItemsTypeComponent;

}


// Function HSURGameState.HSURGameState_C.GetAllSurvivorKnockDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAllKnockdown                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::GetAllSurvivorKnockDown(bool* IsAllKnockdown)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.GetAllSurvivorKnockDown");

	AHSURGameState_C_GetAllSurvivorKnockDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAllKnockdown != nullptr)
		*IsAllKnockdown = params.IsAllKnockdown;

}


// Function HSURGameState.HSURGameState_C.CheckSurvivorMovement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASurvivorBase_C*         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           StopAction                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::CheckSurvivorMovement(class ASurvivorBase_C* NewParam, bool* StopAction)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.CheckSurvivorMovement");

	AHSURGameState_C_CheckSurvivorMovement_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StopAction != nullptr)
		*StopAction = params.StopAction;

}


// Function HSURGameState.HSURGameState_C.SurvivorDeath
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::SurvivorDeath(class AController* Controller, class AHSHCharacterBase* Character, class AHSHCharacterBase* KilledBy, float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.SurvivorDeath");

	AHSURGameState_C_SurvivorDeath_Params params;
	params.Controller = Controller;
	params.Character = Character;
	params.KilledBy = KilledBy;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.RespawnSurvivor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                           SelfRespawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::RespawnSurvivor(int PlayerId, const struct FTransform& SpawnTransform, bool SelfRespawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.RespawnSurvivor");

	AHSURGameState_C_RespawnSurvivor_Params params;
	params.PlayerId = PlayerId;
	params.SpawnTransform = SpawnTransform;
	params.SelfRespawn = SelfRespawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddTrapTarget
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::AddTrapTarget(class ATrapTargetActor_C* NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddTrapTarget");

	AHSURGameState_C_AddTrapTarget_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.RemoveTrapTarget
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::RemoveTrapTarget(class ATrapTargetActor_C* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.RemoveTrapTarget");

	AHSURGameState_C_RemoveTrapTarget_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.DecreaseSurvivor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::DecreaseSurvivor(class AHSURPlayerState_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.DecreaseSurvivor");

	AHSURGameState_C_DecreaseSurvivor_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.Initialize");

	AHSURGameState_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.ExitSecretPortal
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      survivor                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::ExitSecretPortal(class AHSURPlayerState_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.ExitSecretPortal");

	AHSURGameState_C_ExitSecretPortal_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.IncreaseSuvivor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::IncreaseSuvivor(class AHSURPlayerState_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.IncreaseSuvivor");

	AHSURGameState_C_IncreaseSuvivor_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.HunterDeath
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::HunterDeath()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.HunterDeath");

	AHSURGameState_C_HunterDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.OnPlayerDisconnected
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::OnPlayerDisconnected(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnPlayerDisconnected");

	AHSURGameState_C_OnPlayerDisconnected_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.ReceiveTick");

	AHSURGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddedTimeAfterCompleteAllRitual
// (BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::AddedTimeAfterCompleteAllRitual()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddedTimeAfterCompleteAllRitual");

	AHSURGameState_C_AddedTimeAfterCompleteAllRitual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.SetActiveComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURGameState_C::SetActiveComponent(bool bActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.SetActiveComponent");

	AHSURGameState_C_SetActiveComponent_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddedTimeAfterCompleteOneRitual
// (BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::AddedTimeAfterCompleteOneRitual()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddedTimeAfterCompleteOneRitual");

	AHSURGameState_C_AddedTimeAfterCompleteOneRitual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AddSurvivorStatus
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      PlayerState                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::AddSurvivorStatus(class AHSURPlayerState_C* PlayerState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AddSurvivorStatus");

	AHSURGameState_C_AddSurvivorStatus_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.AssignSpawningPlayerInfoo
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURGameState_C::AssignSpawningPlayerInfoo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.AssignSpawningPlayerInfoo");

	AHSURGameState_C_AssignSpawningPlayerInfoo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.ExecuteUbergraph_HSURGameState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURGameState_C::ExecuteUbergraph_HSURGameState(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.ExecuteUbergraph_HSURGameState");

	AHSURGameState_C_ExecuteUbergraph_HSURGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.OnUpdateTrapTargetList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::OnUpdateTrapTargetList__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnUpdateTrapTargetList__DelegateSignature");

	AHSURGameState_C_OnUpdateTrapTargetList__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.OnSurvivorDie__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::OnSurvivorDie__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnSurvivorDie__DelegateSignature");

	AHSURGameState_C_OnSurvivorDie__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.OnHunterDie__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::OnHunterDie__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnHunterDie__DelegateSignature");

	AHSURGameState_C_OnHunterDie__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURGameState.HSURGameState_C.OnCharacterCountChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHSURGameState_C::OnCharacterCountChange__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURGameState.HSURGameState_C.OnCharacterCountChange__DelegateSignature");

	AHSURGameState_C_OnCharacterCountChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
