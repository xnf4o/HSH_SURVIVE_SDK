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

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.GetGameplayAbilityCharge
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCharge                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PA_HunterWithCharge_C::GetGameplayAbilityCharge(int* CurrentCharge, int* MaxCharge)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.GetGameplayAbilityCharge");

	UGA_PA_HunterWithCharge_C_GetGameplayAbilityCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentCharge != nullptr)
		*CurrentCharge = params.CurrentCharge;
	if (MaxCharge != nullptr)
		*MaxCharge = params.MaxCharge;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.EventReceived_8B73BACE47A0D82EB26F258F5A811729
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterWithCharge_C::EventReceived_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.EventReceived_8B73BACE47A0D82EB26F258F5A811729");

	UGA_PA_HunterWithCharge_C_EventReceived_8B73BACE47A0D82EB26F258F5A811729_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnCancelled_8B73BACE47A0D82EB26F258F5A811729
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterWithCharge_C::OnCancelled_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnCancelled_8B73BACE47A0D82EB26F258F5A811729");

	UGA_PA_HunterWithCharge_C_OnCancelled_8B73BACE47A0D82EB26F258F5A811729_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnInterrupted_8B73BACE47A0D82EB26F258F5A811729
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterWithCharge_C::OnInterrupted_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnInterrupted_8B73BACE47A0D82EB26F258F5A811729");

	UGA_PA_HunterWithCharge_C_OnInterrupted_8B73BACE47A0D82EB26F258F5A811729_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnBlendOut_8B73BACE47A0D82EB26F258F5A811729
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterWithCharge_C::OnBlendOut_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnBlendOut_8B73BACE47A0D82EB26F258F5A811729");

	UGA_PA_HunterWithCharge_C_OnBlendOut_8B73BACE47A0D82EB26F258F5A811729_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnCompleted_8B73BACE47A0D82EB26F258F5A811729
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterWithCharge_C::OnCompleted_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnCompleted_8B73BACE47A0D82EB26F258F5A811729");

	UGA_PA_HunterWithCharge_C_OnCompleted_8B73BACE47A0D82EB26F258F5A811729_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterWithCharge_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.K2_OnEndAbility");

	UGA_PA_HunterWithCharge_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PA_HunterWithCharge_C::Update(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.Update");

	UGA_PA_HunterWithCharge_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnEventReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterWithCharge_C::OnEventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnEventReceived");

	UGA_PA_HunterWithCharge_C_OnEventReceived_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.Initialize
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UGA_PA_HunterWithCharge_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.Initialize");

	UGA_PA_HunterWithCharge_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_PA_HunterWithCharge_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.K2_ActivateAbility");

	UGA_PA_HunterWithCharge_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.ExecuteUbergraph_GA_PA_HunterWithCharge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PA_HunterWithCharge_C::ExecuteUbergraph_GA_PA_HunterWithCharge(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.ExecuteUbergraph_GA_PA_HunterWithCharge");

	UGA_PA_HunterWithCharge_C_ExecuteUbergraph_GA_PA_HunterWithCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
