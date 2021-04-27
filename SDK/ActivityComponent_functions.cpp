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

// Function ActivityComponent.ActivityComponent_C.CalculateRitualContributionPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CoinValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Coin                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::CalculateRitualContributionPoint(int CoinValue, int ScoreValue, int* Coin, int* Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.CalculateRitualContributionPoint");

	UActivityComponent_C_CalculateRitualContributionPoint_Params params;
	params.CoinValue = CoinValue;
	params.ScoreValue = ScoreValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Coin != nullptr)
		*Coin = params.Coin;
	if (Score != nullptr)
		*Score = params.Score;

}


// Function ActivityComponent.ActivityComponent_C.CalculateAttackHunterPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CoinValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Coin                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::CalculateAttackHunterPoint(int CoinValue, int ScoreValue, int* Coin, int* Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.CalculateAttackHunterPoint");

	UActivityComponent_C_CalculateAttackHunterPoint_Params params;
	params.CoinValue = CoinValue;
	params.ScoreValue = ScoreValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Coin != nullptr)
		*Coin = params.Coin;
	if (Score != nullptr)
		*Score = params.Score;

}


// Function ActivityComponent.ActivityComponent_C.CalculateAttackSurvivorPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CoinValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Coin                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::CalculateAttackSurvivorPoint(int CoinValue, int ScoreValue, int* Coin, int* Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.CalculateAttackSurvivorPoint");

	UActivityComponent_C_CalculateAttackSurvivorPoint_Params params;
	params.CoinValue = CoinValue;
	params.ScoreValue = ScoreValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Coin != nullptr)
		*Coin = params.Coin;
	if (Score != nullptr)
		*Score = params.Score;

}


// Function ActivityComponent.ActivityComponent_C.RefreshPlayerController
// (Public, BlueprintCallable, BlueprintEvent)
void UActivityComponent_C::RefreshPlayerController()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.RefreshPlayerController");

	UActivityComponent_C_RefreshPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityComponent.ActivityComponent_C.TryGetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSURPlayerController_C* HSURPlayerController           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::TryGetPlayerController(class AHSURPlayerController_C** HSURPlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.TryGetPlayerController");

	UActivityComponent_C_TryGetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURPlayerController != nullptr)
		*HSURPlayerController = params.HSURPlayerController;

}


// Function ActivityComponent.ActivityComponent_C.TriggerActivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::TriggerActivity(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.TriggerActivity");

	UActivityComponent_C_TriggerActivity_Params params;
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityComponent.ActivityComponent_C.GetOwnerPlayerID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UActivityComponent_C::GetOwnerPlayerID(struct FString* PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.GetOwnerPlayerID");

	UActivityComponent_C_GetOwnerPlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function ActivityComponent.ActivityComponent_C.TriggerActivityWithValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CoinValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::TriggerActivityWithValue(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, int ScoreValue, int CoinValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.TriggerActivityWithValue");

	UActivityComponent_C_TriggerActivityWithValue_Params params;
	params.Activity = Activity;
	params.ScoreValue = ScoreValue;
	params.CoinValue = CoinValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityComponent.ActivityComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void UActivityComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.Initialize");

	UActivityComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityComponent.ActivityComponent_C.CalculateActivityPoint
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CoinValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int                            Coin                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UActivityComponent_C::CalculateActivityPoint(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity, int ScoreValue, int CoinValue, const struct FString& PlayerId, struct FString* Name, int* Coin, int* Score, bool* Success)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.CalculateActivityPoint");

	UActivityComponent_C_CalculateActivityPoint_Params params;
	params.PlayerActivity = PlayerActivity;
	params.ScoreValue = ScoreValue;
	params.CoinValue = CoinValue;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Coin != nullptr)
		*Coin = params.Coin;
	if (Score != nullptr)
		*Score = params.Score;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function ActivityComponent.ActivityComponent_C.Server_TriggerActivity
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CoinValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::Server_TriggerActivity(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity, const struct FString& PlayerId, int ScoreValue, int CoinValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.Server_TriggerActivity");

	UActivityComponent_C_Server_TriggerActivity_Params params;
	params.PlayerActivity = PlayerActivity;
	params.PlayerId = PlayerId;
	params.ScoreValue = ScoreValue;
	params.CoinValue = CoinValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityComponent.ActivityComponent_C.Client_TriggerActivity
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Coin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::Client_TriggerActivity(const struct FString& EventName, int Coin, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.Client_TriggerActivity");

	UActivityComponent_C_Client_TriggerActivity_Params params;
	params.EventName = EventName;
	params.Coin = Coin;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityComponent.ActivityComponent_C.ExecuteUbergraph_ActivityComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityComponent_C::ExecuteUbergraph_ActivityComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityComponent.ActivityComponent_C.ExecuteUbergraph_ActivityComponent");

	UActivityComponent_C_ExecuteUbergraph_ActivityComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
