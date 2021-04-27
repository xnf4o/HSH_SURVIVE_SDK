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

// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnCheckingEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<HSHSurvivor_EJokeEvent> Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJokeAudioSurvivorComponent_C::OnCheckingEvent(TEnumAsByte<HSHSurvivor_EJokeEvent> Event)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnCheckingEvent");

	UJokeAudioSurvivorComponent_C_OnCheckingEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.ResetIdleEvent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::ResetIdleEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.ResetIdleEvent");

	UJokeAudioSurvivorComponent_C_ResetIdleEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.ReceiveBeginPlay");

	UJokeAudioSurvivorComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnTakeDamage_Event
// (BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::OnTakeDamage_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnTakeDamage_Event");

	UJokeAudioSurvivorComponent_C_OnTakeDamage_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnActionUseItem_Event
// (BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::OnActionUseItem_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnActionUseItem_Event");

	UJokeAudioSurvivorComponent_C_OnActionUseItem_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnChasingEnable_Event
// (BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::OnChasingEnable_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnChasingEnable_Event");

	UJokeAudioSurvivorComponent_C_OnChasingEnable_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnFailResult_Event
// (BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::OnFailResult_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnFailResult_Event");

	UJokeAudioSurvivorComponent_C_OnFailResult_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnHunterScaned_Event
// (BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::OnHunterScaned_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnHunterScaned_Event");

	UJokeAudioSurvivorComponent_C_OnHunterScaned_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnRitaulSuccess_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJokeAudioSurvivorComponent_C::OnRitaulSuccess_Event(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnRitaulSuccess_Event");

	UJokeAudioSurvivorComponent_C_OnRitaulSuccess_Event_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnActionAttack_Event
// (BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::OnActionAttack_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnActionAttack_Event");

	UJokeAudioSurvivorComponent_C_OnActionAttack_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnSeeAnyOneChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJokeAudioSurvivorComponent_C::OnSeeAnyOneChanged_Event(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnSeeAnyOneChanged_Event");

	UJokeAudioSurvivorComponent_C_OnSeeAnyOneChanged_Event_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnInteractionStart_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJokeAudioSurvivorComponent_C::OnInteractionStart_Event(bool bIsProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnInteractionStart_Event");

	UJokeAudioSurvivorComponent_C_OnInteractionStart_Event_Params params;
	params.bIsProgress = bIsProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnInteractionDone_Event
// (BlueprintCallable, BlueprintEvent)
void UJokeAudioSurvivorComponent_C::OnInteractionDone_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.OnInteractionDone_Event");

	UJokeAudioSurvivorComponent_C_OnInteractionDone_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.ExecuteUbergraph_JokeAudioSurvivorComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJokeAudioSurvivorComponent_C::ExecuteUbergraph_JokeAudioSurvivorComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C.ExecuteUbergraph_JokeAudioSurvivorComponent");

	UJokeAudioSurvivorComponent_C_ExecuteUbergraph_JokeAudioSurvivorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
