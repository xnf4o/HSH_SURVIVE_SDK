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

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInputActionKeyMapping  Output                         (Parm, OutParm)
void UIngame_SkillcheckProgressComponent_C::RandomKey(struct FInputActionKeyMapping* Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomKey");

	UIngame_SkillcheckProgressComponent_C_RandomKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.StartSkillCheckKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::StartSkillCheckKey(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.StartSkillCheckKey");

	UIngame_SkillcheckProgressComponent_C_StartSkillCheckKey_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.CreateSkillCheckKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIngame_SkillcheckKey_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EndAnimationTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UIngame_SkillcheckKey_C* UIngame_SkillcheckProgressComponent_C::CreateSkillCheckKey(float* EndAnimationTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.CreateSkillCheckKey");

	UIngame_SkillcheckProgressComponent_C_CreateSkillCheckKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndAnimationTime != nullptr)
		*EndAnimationTime = params.EndAnimationTime;


	return params.ReturnValue;
}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RemapAnimationValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::RemapAnimationValue(float In, float* Out)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RemapAnimationValue");

	UIngame_SkillcheckProgressComponent_C_RemapAnimationValue_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsNormalCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngame_SkillcheckProgressComponent_C::IsNormalCheck(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsNormalCheck");

	UIngame_SkillcheckProgressComponent_C_IsNormalCheck_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsPerfectCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngame_SkillcheckProgressComponent_C::IsPerfectCheck(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsPerfectCheck");

	UIngame_SkillcheckProgressComponent_C_IsPerfectCheck_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.SetUpValue
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckProgressComponent_C::SetUpValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.SetUpValue");

	UIngame_SkillcheckProgressComponent_C_SetUpValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.SetUpSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckProgressComponent_C::SetUpSize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.SetUpSize");

	UIngame_SkillcheckProgressComponent_C_SetUpSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomRange
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckProgressComponent_C::RandomRange()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomRange");

	UIngame_SkillcheckProgressComponent_C_RandomRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.StartArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::StartArrow(float PlaybackSpeed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.StartArrow");

	UIngame_SkillcheckProgressComponent_C_StartArrow_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsOwnerHavePerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HavePerk_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_SkillcheckProgressComponent_C::IsOwnerHavePerk(bool* HavePerk_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsOwnerHavePerk");

	UIngame_SkillcheckProgressComponent_C_IsOwnerHavePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HavePerk_ != nullptr)
		*HavePerk_ = params.HavePerk_;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.GetInRange
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_SkillcheckProgressComponent_C::GetInRange(float Value, class UWidget* Widget, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.GetInRange");

	UIngame_SkillcheckProgressComponent_C_GetInRange_Params params;
	params.Value = Value;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.GetExpertiseValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::GetExpertiseValue(float* Min, float* Max)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.GetExpertiseValue");

	UIngame_SkillcheckProgressComponent_C_GetExpertiseValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomSpeed
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MinTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UIngame_SkillcheckProgressComponent_C::RandomSpeed(float MinTime, float MaxTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomSpeed");

	UIngame_SkillcheckProgressComponent_C_RandomSpeed_Params params;
	params.MinTime = MinTime;
	params.MaxTime = MaxTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.DestroyThis
// (BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckProgressComponent_C::DestroyThis()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.DestroyThis");

	UIngame_SkillcheckProgressComponent_C_DestroyThis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.OnFinishSkillCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CommitTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PerfectIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::OnFinishSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, float CommitTime, int PerfectIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.OnFinishSkillCheck");

	UIngame_SkillcheckProgressComponent_C_OnFinishSkillCheck_Params params;
	params.Result = Result;
	params.CommitTime = CommitTime;
	params.PerfectIndex = PerfectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_SkillcheckProgressComponent_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.Construct");

	UIngame_SkillcheckProgressComponent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.CommitSkillCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::CommitSkillCheck(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.CommitSkillCheck");

	UIngame_SkillcheckProgressComponent_C_CommitSkillCheck_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.Tick");

	UIngame_SkillcheckProgressComponent_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.DestroyThisSkipAnim
// (BlueprintCallable, BlueprintEvent)
void UIngame_SkillcheckProgressComponent_C::DestroyThisSkipAnim()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.DestroyThisSkipAnim");

	UIngame_SkillcheckProgressComponent_C_DestroyThisSkipAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.ExecuteUbergraph_Ingame_SkillcheckProgressComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SkillcheckProgressComponent_C::ExecuteUbergraph_Ingame_SkillcheckProgressComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.ExecuteUbergraph_Ingame_SkillcheckProgressComponent");

	UIngame_SkillcheckProgressComponent_C_ExecuteUbergraph_Ingame_SkillcheckProgressComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
