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

// Function ChaseAudioComponent.ChaseAudioComponent_C.CheckEyeBoundRate
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChaseAudioComponent_C::CheckEyeBoundRate(float* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.CheckEyeBoundRate");

	UChaseAudioComponent_C_CheckEyeBoundRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.AddDecoyActivity
// (Public, BlueprintCallable, BlueprintEvent)
void UChaseAudioComponent_C::AddDecoyActivity()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.AddDecoyActivity");

	UChaseAudioComponent_C_AddDecoyActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.IsCharacterValid
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChaseAudioComponent_C::IsCharacterValid(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.IsCharacterValid");

	UChaseAudioComponent_C_IsCharacterValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.IsHunterSeen
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UChaseAudioComponent_C::IsHunterSeen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.IsHunterSeen");

	UChaseAudioComponent_C_IsHunterSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChaseAudioComponent.ChaseAudioComponent_C.CheckHeartEnd
// (Public, BlueprintCallable, BlueprintEvent)
void UChaseAudioComponent_C::CheckHeartEnd()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.CheckHeartEnd");

	UChaseAudioComponent_C_CheckHeartEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)
void UChaseAudioComponent_C::Debug()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.Debug");

	UChaseAudioComponent_C_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.OnChasing
// (Event, Protected, BlueprintEvent)
void UChaseAudioComponent_C::OnChasing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.OnChasing");

	UChaseAudioComponent_C_OnChasing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.OnEscape
// (Event, Protected, BlueprintEvent)
void UChaseAudioComponent_C::OnEscape()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.OnEscape");

	UChaseAudioComponent_C_OnEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.ChasingHandle
// (BlueprintCallable, BlueprintEvent)
void UChaseAudioComponent_C::ChasingHandle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.ChasingHandle");

	UChaseAudioComponent_C_ChasingHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.EscapeHandle
// (BlueprintCallable, BlueprintEvent)
void UChaseAudioComponent_C::EscapeHandle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.EscapeHandle");

	UChaseAudioComponent_C_EscapeHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChaseAudioComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.ReceiveTick");

	UChaseAudioComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.OnInitialize
// (Event, Protected, BlueprintEvent)
void UChaseAudioComponent_C::OnInitialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.OnInitialize");

	UChaseAudioComponent_C_OnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.ExecuteUbergraph_ChaseAudioComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChaseAudioComponent_C::ExecuteUbergraph_ChaseAudioComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.ExecuteUbergraph_ChaseAudioComponent");

	UChaseAudioComponent_C_ExecuteUbergraph_ChaseAudioComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.OnTriggerEscape__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UChaseAudioComponent_C::OnTriggerEscape__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.OnTriggerEscape__DelegateSignature");

	UChaseAudioComponent_C_OnTriggerEscape__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaseAudioComponent.ChaseAudioComponent_C.OnTriggerChasing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UChaseAudioComponent_C::OnTriggerChasing__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChaseAudioComponent.ChaseAudioComponent_C.OnTriggerChasing__DelegateSignature");

	UChaseAudioComponent_C_OnTriggerChasing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
