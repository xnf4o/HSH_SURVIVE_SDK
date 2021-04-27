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

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.StartHookTarget
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_PA_HunterPrisonerPrisonerChain_C::StartHookTarget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.StartHookTarget");

	UGA_PA_HunterPrisonerPrisonerChain_C_StartHookTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.FindSurvivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TraceLength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HalfSize                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASurvivorBase_C*         survivor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterPrisonerPrisonerChain_C::FindSurvivor(float TraceLength, const struct FVector& HalfSize, class ASurvivorBase_C** survivor, bool* IsHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.FindSurvivor");

	UGA_PA_HunterPrisonerPrisonerChain_C_FindSurvivor_Params params;
	params.TraceLength = TraceLength;
	params.HalfSize = HalfSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (survivor != nullptr)
		*survivor = params.survivor;
	if (IsHit != nullptr)
		*IsHit = params.IsHit;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.EventReceived_34CEA72B4AD100A32916948C478401D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterPrisonerPrisonerChain_C::EventReceived_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.EventReceived_34CEA72B4AD100A32916948C478401D5");

	UGA_PA_HunterPrisonerPrisonerChain_C_EventReceived_34CEA72B4AD100A32916948C478401D5_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnCancelled_34CEA72B4AD100A32916948C478401D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterPrisonerPrisonerChain_C::OnCancelled_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnCancelled_34CEA72B4AD100A32916948C478401D5");

	UGA_PA_HunterPrisonerPrisonerChain_C_OnCancelled_34CEA72B4AD100A32916948C478401D5_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnInterrupted_34CEA72B4AD100A32916948C478401D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterPrisonerPrisonerChain_C::OnInterrupted_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnInterrupted_34CEA72B4AD100A32916948C478401D5");

	UGA_PA_HunterPrisonerPrisonerChain_C_OnInterrupted_34CEA72B4AD100A32916948C478401D5_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnBlendOut_34CEA72B4AD100A32916948C478401D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterPrisonerPrisonerChain_C::OnBlendOut_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnBlendOut_34CEA72B4AD100A32916948C478401D5");

	UGA_PA_HunterPrisonerPrisonerChain_C_OnBlendOut_34CEA72B4AD100A32916948C478401D5_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnCompleted_34CEA72B4AD100A32916948C478401D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterPrisonerPrisonerChain_C::OnCompleted_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnCompleted_34CEA72B4AD100A32916948C478401D5");

	UGA_PA_HunterPrisonerPrisonerChain_C_OnCompleted_34CEA72B4AD100A32916948C478401D5_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_PA_HunterPrisonerPrisonerChain_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.K2_ActivateAbility");

	UGA_PA_HunterPrisonerPrisonerChain_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterPrisonerPrisonerChain_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.K2_OnEndAbility");

	UGA_PA_HunterPrisonerPrisonerChain_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnEndDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHookSuccess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterPrisonerPrisonerChain_C::OnEndDelegate(bool bHookSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnEndDelegate");

	UGA_PA_HunterPrisonerPrisonerChain_C_OnEndDelegate_Params params;
	params.bHookSuccess = bHookSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.CommitPrisonerCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHookSuccess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterPrisonerPrisonerChain_C::CommitPrisonerCooldown(bool bHookSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.CommitPrisonerCooldown");

	UGA_PA_HunterPrisonerPrisonerChain_C_CommitPrisonerCooldown_Params params;
	params.bHookSuccess = bHookSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.ExecuteUbergraph_GA_PA_HunterPrisonerPrisonerChain
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PA_HunterPrisonerPrisonerChain_C::ExecuteUbergraph_GA_PA_HunterPrisonerPrisonerChain(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.ExecuteUbergraph_GA_PA_HunterPrisonerPrisonerChain");

	UGA_PA_HunterPrisonerPrisonerChain_C_ExecuteUbergraph_GA_PA_HunterPrisonerPrisonerChain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
