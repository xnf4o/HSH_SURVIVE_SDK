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

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.IsCorrectKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    CheckKey                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngame_SkillcheckKey_C::IsCorrectKey(const struct FKey& CheckKey)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.IsCorrectKey");

	UIngame_SkillcheckKey_C_IsCorrectKey_Params params;
	params.CheckKey = CheckKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.SetStartCountingIsTrue
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckKey_C::SetStartCountingIsTrue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.SetStartCountingIsTrue");

	UIngame_SkillcheckKey_C_SetStartCountingIsTrue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.DeactiveRender
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckKey_C::DeactiveRender()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.DeactiveRender");

	UIngame_SkillcheckKey_C_DeactiveRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ActiveRender
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckKey_C::ActiveRender()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ActiveRender");

	UIngame_SkillcheckKey_C_ActiveRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ReceiveKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            PerfectIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::ReceiveKey(const struct FKey& Key, int PerfectIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ReceiveKey");

	UIngame_SkillcheckKey_C_ReceiveKey_Params params;
	params.Key = Key;
	params.PerfectIndex = PerfectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.SetKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UIngame_SkillcheckKey_C::SetKey(const struct FInputActionKeyMapping& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.SetKey");

	UIngame_SkillcheckKey_C_SetKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.GetPerfectRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::GetPerfectRange(float* Min, float* Max)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.GetPerfectRange");

	UIngame_SkillcheckKey_C_GetPerfectRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.PrintValue
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckKey_C::PrintValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.PrintValue");

	UIngame_SkillcheckKey_C_PrintValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.RandomPerfect
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckKey_C::RandomPerfect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.RandomPerfect");

	UIngame_SkillcheckKey_C_RandomPerfect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckKey_C::Refresh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Refresh");

	UIngame_SkillcheckKey_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.GetResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UIngame_SkillcheckKey_C::GetResult(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult>* Result)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.GetResult");

	UIngame_SkillcheckKey_C_GetResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.StopCounting
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckKey_C::StopCounting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.StopCounting");

	UIngame_SkillcheckKey_C_StopCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.StartCounting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::StartCounting(float Time)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.StartCounting");

	UIngame_SkillcheckKey_C_StartCounting_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_SkillcheckKey_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Construct");

	UIngame_SkillcheckKey_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Tick");

	UIngame_SkillcheckKey_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.PlayBeginAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::PlayBeginAnimation(float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.PlayBeginAnimation");

	UIngame_SkillcheckKey_C_PlayBeginAnimation_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnSkillcheckCommit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CommitTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PerfectIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::OnSkillcheckCommit(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, float CommitTime, int PerfectIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnSkillcheckCommit");

	UIngame_SkillcheckKey_C_OnSkillcheckCommit_Params params;
	params.Result = Result;
	params.CommitTime = CommitTime;
	params.PerfectIndex = PerfectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ExecuteUbergraph_Ingame_SkillcheckKey
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::ExecuteUbergraph_Ingame_SkillcheckKey(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ExecuteUbergraph_Ingame_SkillcheckKey");

	UIngame_SkillcheckKey_C_ExecuteUbergraph_Ingame_SkillcheckKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnReceiveKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            PerfectIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::OnReceiveKey__DelegateSignature(const struct FKey& Key, int PerfectIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnReceiveKey__DelegateSignature");

	UIngame_SkillcheckKey_C_OnReceiveKey__DelegateSignature_Params params;
	params.Key = Key;
	params.PerfectIndex = PerfectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnFinishCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CommitTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PerfectIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckKey_C::OnFinishCheck__DelegateSignature(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, float CommitTime, int PerfectIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnFinishCheck__DelegateSignature");

	UIngame_SkillcheckKey_C_OnFinishCheck__DelegateSignature_Params params;
	params.Result = Result;
	params.CommitTime = CommitTime;
	params.PerfectIndex = PerfectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
