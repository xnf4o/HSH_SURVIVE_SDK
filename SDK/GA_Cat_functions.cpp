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

// Function GA_Cat.GA_Cat_C.GetSpawnTransfrom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UGA_Cat_C::GetSpawnTransfrom()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.GetSpawnTransfrom");

	UGA_Cat_C_GetSpawnTransfrom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Cat.GA_Cat_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Cat_C::UpdateItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.UpdateItem");

	UGA_Cat_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.EventReceived_F0DCE78043A14E77EEF97BB37FB5325E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Cat_C::EventReceived_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.EventReceived_F0DCE78043A14E77EEF97BB37FB5325E");

	UGA_Cat_C_EventReceived_F0DCE78043A14E77EEF97BB37FB5325E_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.OnCancelled_F0DCE78043A14E77EEF97BB37FB5325E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Cat_C::OnCancelled_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.OnCancelled_F0DCE78043A14E77EEF97BB37FB5325E");

	UGA_Cat_C_OnCancelled_F0DCE78043A14E77EEF97BB37FB5325E_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.OnInterrupted_F0DCE78043A14E77EEF97BB37FB5325E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Cat_C::OnInterrupted_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.OnInterrupted_F0DCE78043A14E77EEF97BB37FB5325E");

	UGA_Cat_C_OnInterrupted_F0DCE78043A14E77EEF97BB37FB5325E_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.OnBlendOut_F0DCE78043A14E77EEF97BB37FB5325E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Cat_C::OnBlendOut_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.OnBlendOut_F0DCE78043A14E77EEF97BB37FB5325E");

	UGA_Cat_C_OnBlendOut_F0DCE78043A14E77EEF97BB37FB5325E_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.OnCompleted_F0DCE78043A14E77EEF97BB37FB5325E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Cat_C::OnCompleted_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.OnCompleted_F0DCE78043A14E77EEF97BB37FB5325E");

	UGA_Cat_C_OnCompleted_F0DCE78043A14E77EEF97BB37FB5325E_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Cat_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.K2_ActivateAbility");

	UGA_Cat_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Cat_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.K2_OnEndAbility");

	UGA_Cat_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Cat.GA_Cat_C.ExecuteUbergraph_GA_Cat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Cat_C::ExecuteUbergraph_GA_Cat(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Cat.GA_Cat_C.ExecuteUbergraph_GA_Cat");

	UGA_Cat_C_ExecuteUbergraph_GA_Cat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
