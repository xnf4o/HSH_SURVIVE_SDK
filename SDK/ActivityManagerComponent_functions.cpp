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

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetEscapedSurvivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EscapedSurvivor                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetEscapedSurvivor(int* EscapedSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetEscapedSurvivor");

	UActivityManagerComponent_C_GetEscapedSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EscapedSurvivor != nullptr)
		*EscapedSurvivor = params.EscapedSurvivor;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetCompletelyDeadSurvivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DeadSurvivor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetCompletelyDeadSurvivor(int* DeadSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetCompletelyDeadSurvivor");

	UActivityManagerComponent_C_GetCompletelyDeadSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeadSurvivor != nullptr)
		*DeadSurvivor = params.DeadSurvivor;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestRitualComplete
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighestRitualComplete          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestRitualComplete(int* HighestRitualComplete)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestRitualComplete");

	UActivityManagerComponent_C_GetHighestRitualComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestRitualComplete != nullptr)
		*HighestRitualComplete = params.HighestRitualComplete;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestRitualContribute
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HighestRitualContribute        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestRitualContribute(float* HighestRitualContribute)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestRitualContribute");

	UActivityManagerComponent_C_GetHighestRitualContribute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestRitualContribute != nullptr)
		*HighestRitualContribute = params.HighestRitualContribute;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.AddPenaltyScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UActivityManagerComponent_C::AddPenaltyScore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.AddPenaltyScore");

	UActivityManagerComponent_C_AddPenaltyScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.InitializeByController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UActivityManagerComponent_C::InitializeByController(class AController* Controller, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.InitializeByController");

	UActivityManagerComponent_C_InitializeByController_Params params;
	params.Controller = Controller;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestHPRemain
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HighestHPRemain                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestHPRemain(float* HighestHPRemain)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestHPRemain");

	UActivityManagerComponent_C_GetHighestHPRemain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestHPRemain != nullptr)
		*HighestHPRemain = params.HighestHPRemain;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateTotalScoreAndExpWithIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::CalculateTotalScoreAndExpWithIndex(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateTotalScoreAndExpWithIndex");

	UActivityManagerComponent_C_CalculateTotalScoreAndExpWithIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestDecoyTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighestDecoyTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestDecoyTime(int* HighestDecoyTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestDecoyTime");

	UActivityManagerComponent_C_GetHighestDecoyTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestDecoyTime != nullptr)
		*HighestDecoyTime = params.HighestDecoyTime;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.AddHighestScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UActivityManagerComponent_C::AddHighestScore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.AddHighestScore");

	UActivityManagerComponent_C_AddHighestScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.AddCustomMatchScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UActivityManagerComponent_C::AddCustomMatchScore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.AddCustomMatchScore");

	UActivityManagerComponent_C_AddCustomMatchScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerIndexByGameID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetPlayerIndexByGameID(int PlayerId, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerIndexByGameID");

	UActivityManagerComponent_C_GetPlayerIndexByGameID_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.AddActivityPointByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::AddActivityPointByID(int PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.AddActivityPointByID");

	UActivityManagerComponent_C_AddActivityPointByID_Params params;
	params.PlayerId = PlayerId;
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.RemovePlayerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::RemovePlayerData(class APlayerState* PlayerState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.RemovePlayerData");

	UActivityManagerComponent_C_RemovePlayerData_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetUnresurrectSurvivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UnResurrectCnt                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetUnresurrectSurvivor(int* UnResurrectCnt)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetUnresurrectSurvivor");

	UActivityManagerComponent_C_GetUnresurrectSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UnResurrectCnt != nullptr)
		*UnResurrectCnt = params.UnResurrectCnt;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.IsActivityCapped
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCapped                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UActivityManagerComponent_C::IsActivityCapped(const struct FString& PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, bool* IsCapped)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.IsActivityCapped");

	UActivityManagerComponent_C_IsActivityCapped_Params params;
	params.PlayerId = PlayerId;
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCapped != nullptr)
		*IsCapped = params.IsCapped;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.ReplaceActivityPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Coin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::ReplaceActivityPoint(const struct FString& PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, int Coin, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.ReplaceActivityPoint");

	UActivityManagerComponent_C_ReplaceActivityPoint_Params params;
	params.PlayerId = PlayerId;
	params.Activity = Activity;
	params.Coin = Coin;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateTotalScoreAndExp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UActivityManagerComponent_C::CalculateTotalScoreAndExp()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateTotalScoreAndExp");

	UActivityManagerComponent_C_CalculateTotalScoreAndExp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighestScore                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestScore(int* HighestScore)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestScore");

	UActivityManagerComponent_C_GetHighestScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestScore != nullptr)
		*HighestScore = params.HighestScore;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestDamageDoneToHunter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HighestDamageDone              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestDamageDoneToHunter(float* HighestDamageDone)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestDamageDoneToHunter");

	UActivityManagerComponent_C_GetHighestDamageDoneToHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestDamageDone != nullptr)
		*HighestDamageDone = params.HighestDamageDone;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestResurrectSurvivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighestResurrect               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestResurrectSurvivor(int* HighestResurrect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestResurrectSurvivor");

	UActivityManagerComponent_C_GetHighestResurrectSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestResurrect != nullptr)
		*HighestResurrect = params.HighestResurrect;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestPerfectSkillCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighestSkillCheck              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetHighestPerfectSkillCheck(int* HighestSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestPerfectSkillCheck");

	UActivityManagerComponent_C_GetHighestPerfectSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestSkillCheck != nullptr)
		*HighestSkillCheck = params.HighestSkillCheck;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateFinalScoreSummary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UActivityManagerComponent_C::CalculateFinalScoreSummary()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateFinalScoreSummary");

	UActivityManagerComponent_C_CalculateFinalScoreSummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerDataSummary
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTR_PlayerActivityData PlayerActivity                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetPlayerDataSummary(int PlayerIndex, TEnumAsByte<E_Role_E_Role> Role, struct FSTR_PlayerActivityData* PlayerActivity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerDataSummary");

	UActivityManagerComponent_C_GetPlayerDataSummary_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerActivity != nullptr)
		*PlayerActivity = params.PlayerActivity;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void UActivityManagerComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.Initialize");

	UActivityManagerComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.PrintDebugPlayerActivity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void UActivityManagerComponent_C::PrintDebugPlayerActivity()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.PrintDebugPlayerActivity");

	UActivityManagerComponent_C_PrintDebugPlayerActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerActivityData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 EventName                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int                            Coin                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasCap                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CoinCap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreCap                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetPlayerActivityData(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity, struct FString* EventName, int* Coin, int* Score, bool* HasCap, int* CoinCap, int* ScoreCap)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerActivityData");

	UActivityManagerComponent_C_GetPlayerActivityData_Params params;
	params.PlayerActivity = PlayerActivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EventName != nullptr)
		*EventName = params.EventName;
	if (Coin != nullptr)
		*Coin = params.Coin;
	if (Score != nullptr)
		*Score = params.Score;
	if (HasCap != nullptr)
		*HasCap = params.HasCap;
	if (CoinCap != nullptr)
		*CoinCap = params.CoinCap;
	if (ScoreCap != nullptr)
		*ScoreCap = params.ScoreCap;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerIndexByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::GetPlayerIndexByID(const struct FString& PlayerId, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerIndexByID");

	UActivityManagerComponent_C_GetPlayerIndexByID_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function ActivityManagerComponent.ActivityManagerComponent_C.AddActivityPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Coin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActivityManagerComponent_C::AddActivityPoint(const struct FString& PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, int Coin, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActivityManagerComponent.ActivityManagerComponent_C.AddActivityPoint");

	UActivityManagerComponent_C_AddActivityPoint_Params params;
	params.PlayerId = PlayerId;
	params.Activity = Activity;
	params.Coin = Coin;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
