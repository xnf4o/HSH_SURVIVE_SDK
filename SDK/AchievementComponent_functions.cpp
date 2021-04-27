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

// Function AchievementComponent.AchievementComponent_C.UnlockAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Achievement_E_Achievement> Achievment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAchievementComponent_C::UnlockAchievement(TEnumAsByte<E_Achievement_E_Achievement> Achievment, int Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.UnlockAchievement");

	UAchievementComponent_C_UnlockAchievement_Params params;
	params.Achievment = Achievment;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AchievementComponent.AchievementComponent_C.InitAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAchievementComponent_C::InitAchievement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.InitAchievement");

	UAchievementComponent_C_InitAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AchievementComponent.AchievementComponent_C.EndGameAchievementUnlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAchievementComponent_C::EndGameAchievementUnlock()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.EndGameAchievementUnlock");

	UAchievementComponent_C_EndGameAchievementUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AchievementComponent.AchievementComponent_C.CheckRitualCompleteCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RitualCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAchievementComponent_C::CheckRitualCompleteCount(int* RitualCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.CheckRitualCompleteCount");

	UAchievementComponent_C_CheckRitualCompleteCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RitualCount != nullptr)
		*RitualCount = params.RitualCount;

}


// Function AchievementComponent.AchievementComponent_C.SetStats
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StatName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ProgressToIncrease             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAchievementComponent_C::SetStats(const struct FName& StatName, int ProgressToIncrease)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.SetStats");

	UAchievementComponent_C_SetStats_Params params;
	params.StatName = StatName;
	params.ProgressToIncrease = ProgressToIncrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AchievementComponent.AchievementComponent_C.SetAchievement
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Achievement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAchievementComponent_C::SetAchievement(const struct FName& Achievement)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.SetAchievement");

	UAchievementComponent_C_SetAchievement_Params params;
	params.Achievement = Achievement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AchievementComponent.AchievementComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UAchievementComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.ReceiveBeginPlay");

	UAchievementComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AchievementComponent.AchievementComponent_C.ExecuteUbergraph_AchievementComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAchievementComponent_C::ExecuteUbergraph_AchievementComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AchievementComponent.AchievementComponent_C.ExecuteUbergraph_AchievementComponent");

	UAchievementComponent_C_ExecuteUbergraph_AchievementComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
