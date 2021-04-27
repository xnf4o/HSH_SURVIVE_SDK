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

// Function GameStatisticComponent.GameStatisticComponent_C.AddRitualContribution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddRitualContribution(class AController* Controller, float Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddRitualContribution");

	UGameStatisticComponent_C_AddRitualContribution_Params params;
	params.Controller = Controller;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.TryGetPlayerStatisticByID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 GameSparkID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FS_GameStatistic        PlayerStatistic                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::TryGetPlayerStatisticByID(const struct FString& GameSparkID, struct FS_GameStatistic* PlayerStatistic)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.TryGetPlayerStatisticByID");

	UGameStatisticComponent_C_TryGetPlayerStatisticByID_Params params;
	params.GameSparkID = GameSparkID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStatistic != nullptr)
		*PlayerStatistic = params.PlayerStatistic;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddUseActivePerk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddUseActivePerk(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddUseActivePerk");

	UGameStatisticComponent_C_AddUseActivePerk_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.GetItemUsedCount
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::GetItemUsedCount(class APlayerController* PlayerController, int* Count)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.GetItemUsedCount");

	UGameStatisticComponent_C_GetItemUsedCount_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function GameStatisticComponent.GameStatisticComponent_C.GetRitualItemPlacedCount
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::GetRitualItemPlacedCount(class APlayerController* PlayerController, int* Count)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.GetRitualItemPlacedCount");

	UGameStatisticComponent_C_GetRitualItemPlacedCount_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddRemainingHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddRemainingHP(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddRemainingHP");

	UGameStatisticComponent_C_AddRemainingHP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddRitualComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddRitualComplete(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddRitualComplete");

	UGameStatisticComponent_C_AddRitualComplete_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.GetData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_GameStatistic        Output                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::GetData(class AController* Controller, bool* bFound, struct FS_GameStatistic* Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.GetData");

	UGameStatisticComponent_C_GetData_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function GameStatisticComponent.GameStatisticComponent_C.GetRemainingHP
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UGameStatisticComponent_C::GetRemainingHP(class AHSHCharacterBase* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.GetRemainingHP");

	UGameStatisticComponent_C_GetRemainingHP_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameStatisticComponent.GameStatisticComponent_C.AddGameResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddGameResult(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddGameResult");

	UGameStatisticComponent_C_AddGameResult_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddLeaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddLeaveGame(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddLeaveGame");

	UGameStatisticComponent_C_AddLeaveGame_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddKillCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddKillCount(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddKillCount");

	UGameStatisticComponent_C_AddKillCount_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.totalSurvivorHp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnTotalHP                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::totalSurvivorHp(float* ReturnTotalHP)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.totalSurvivorHp");

	UGameStatisticComponent_C_totalSurvivorHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReturnTotalHP != nullptr)
		*ReturnTotalHP = params.ReturnTotalHP;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageTrapReceive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddDamageTrapReceive(class AController* Controller, float Damage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddDamageTrapReceive");

	UGameStatisticComponent_C_AddDamageTrapReceive_Params params;
	params.Controller = Controller;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageTrapDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddDamageTrapDone(class AController* Controller, float Damage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddDamageTrapDone");

	UGameStatisticComponent_C_AddDamageTrapDone_Params params;
	params.Controller = Controller;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddDeathCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddDeathCount(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddDeathCount");

	UGameStatisticComponent_C_AddDeathCount_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.CreateData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::CreateData(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.CreateData");

	UGameStatisticComponent_C_CreateData_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddDestroyedEnvirment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHaveSurvivor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameStatisticComponent_C::AddDestroyedEnvirment(class AController* Controller, bool IsHaveSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddDestroyedEnvirment");

	UGameStatisticComponent_C_AddDestroyedEnvirment_Params params;
	params.Controller = Controller;
	params.IsHaveSurvivor = IsHaveSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddResurrectPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddResurrectPlayer(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddResurrectPlayer");

	UGameStatisticComponent_C_AddResurrectPlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddPerfectSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddPerfectSuccess(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddPerfectSuccess");

	UGameStatisticComponent_C_AddPerfectSuccess_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageReceive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddDamageReceive(class AController* Controller, float Damage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddDamageReceive");

	UGameStatisticComponent_C_AddDamageReceive_Params params;
	params.Controller = Controller;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddDamageDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddDamageDone(class AController* Controller, float Damage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddDamageDone");

	UGameStatisticComponent_C_AddDamageDone_Params params;
	params.Controller = Controller;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.GetCeremonyActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  CeremonyClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ARitualBase_C*>   OutActors                      (Parm, OutParm, ZeroConstructor)
void UGameStatisticComponent_C::GetCeremonyActor(class UClass* CeremonyClass, TArray<class ARitualBase_C*>* OutActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.GetCeremonyActor");

	UGameStatisticComponent_C_GetCeremonyActor_Params params;
	params.CeremonyClass = CeremonyClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddCarryItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddCarryItem(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddCarryItem");

	UGameStatisticComponent_C_AddCarryItem_Params params;
	params.Controller = Controller;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.EndCloseEnemy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::EndCloseEnemy(class AHSURPlayerController_C* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.EndCloseEnemy");

	UGameStatisticComponent_C_EndCloseEnemy_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.EndHealthFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::EndHealthFull(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.EndHealthFull");

	UGameStatisticComponent_C_EndHealthFull_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.BeginHealthFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::BeginHealthFull(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.BeginHealthFull");

	UGameStatisticComponent_C_BeginHealthFull_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.BeginCloseEnemy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::BeginCloseEnemy(class AHSURPlayerController_C* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.BeginCloseEnemy");

	UGameStatisticComponent_C_BeginCloseEnemy_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddCloseEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddCloseEnemy(class AController* Controller, float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddCloseEnemy");

	UGameStatisticComponent_C_AddCloseEnemy_Params params;
	params.Controller = Controller;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddPlayerHPFull
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddPlayerHPFull(class AController* Controller, float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddPlayerHPFull");

	UGameStatisticComponent_C_AddPlayerHPFull_Params params;
	params.Controller = Controller;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddRevivePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddRevivePlayer(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddRevivePlayer");

	UGameStatisticComponent_C_AddRevivePlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.DebugPrintListWithController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DebugTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::DebugPrintListWithController(class AHSURPlayerController_C* PlayerController, float DebugTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.DebugPrintListWithController");

	UGameStatisticComponent_C_DebugPrintListWithController_Params params;
	params.PlayerController = PlayerController;
	params.DebugTime = DebugTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddOpenChest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddOpenChest(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddOpenChest");

	UGameStatisticComponent_C_AddOpenChest_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddPingEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddPingEnemy(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddPingEnemy");

	UGameStatisticComponent_C_AddPingEnemy_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddItemEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddItemEmpty(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddItemEmpty");

	UGameStatisticComponent_C_AddItemEmpty_Params params;
	params.Controller = Controller;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddItemSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddItemSuccess(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddItemSuccess");

	UGameStatisticComponent_C_AddItemSuccess_Params params;
	params.Controller = Controller;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.DebugPrintList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DebugTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::DebugPrintList(float DebugTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.DebugPrintList");

	UGameStatisticComponent_C_DebugPrintList_Params params;
	params.DebugTime = DebugTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.FindAssetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PrimaryAssetsIDCount> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PrimaryAssetsIDCount FoundID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::FindAssetID(const struct FPrimaryAssetId& ID, TArray<struct FS_PrimaryAssetsIDCount>* Array, bool* IsFound, struct FS_PrimaryAssetsIDCount* FoundID, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.FindAssetID");

	UGameStatisticComponent_C_FindAssetID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (FoundID != nullptr)
		*FoundID = params.FoundID;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function GameStatisticComponent.GameStatisticComponent_C.AddItemUsed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::AddItemUsed(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.AddItemUsed");

	UGameStatisticComponent_C_AddItemUsed_Params params;
	params.Controller = Controller;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.TryGetPlayerStatistic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GameStatistic        PlayerStatistic                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::TryGetPlayerStatistic(class AController* Controller, struct FS_GameStatistic* PlayerStatistic)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.TryGetPlayerStatistic");

	UGameStatisticComponent_C_TryGetPlayerStatistic_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStatistic != nullptr)
		*PlayerStatistic = params.PlayerStatistic;

}


// Function GameStatisticComponent.GameStatisticComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UGameStatisticComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.Initialize");

	UGameStatisticComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.ReceiveTick");

	UGameStatisticComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.OnStatisticUpdate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::OnStatisticUpdate_Event(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.OnStatisticUpdate_Event");

	UGameStatisticComponent_C_OnStatisticUpdate_Event_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.ExecuteUbergraph_GameStatisticComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::ExecuteUbergraph_GameStatisticComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.ExecuteUbergraph_GameStatisticComponent");

	UGameStatisticComponent_C_ExecuteUbergraph_GameStatisticComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameStatisticComponent.GameStatisticComponent_C.OnStatisticUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameStatisticComponent_C::OnStatisticUpdate__DelegateSignature(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameStatisticComponent.GameStatisticComponent_C.OnStatisticUpdate__DelegateSignature");

	UGameStatisticComponent_C_OnStatisticUpdate__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
