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

// Function GA_Camera.GA_Camera_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Camera_C::UpdateItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.UpdateItem");

	UGA_Camera_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.EventReceived_7A287AA14C8797A7DF3155A6F43A3133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Camera_C::EventReceived_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.EventReceived_7A287AA14C8797A7DF3155A6F43A3133");

	UGA_Camera_C_EventReceived_7A287AA14C8797A7DF3155A6F43A3133_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.OnCancelled_7A287AA14C8797A7DF3155A6F43A3133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Camera_C::OnCancelled_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.OnCancelled_7A287AA14C8797A7DF3155A6F43A3133");

	UGA_Camera_C_OnCancelled_7A287AA14C8797A7DF3155A6F43A3133_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.OnInterrupted_7A287AA14C8797A7DF3155A6F43A3133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Camera_C::OnInterrupted_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.OnInterrupted_7A287AA14C8797A7DF3155A6F43A3133");

	UGA_Camera_C_OnInterrupted_7A287AA14C8797A7DF3155A6F43A3133_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.OnBlendOut_7A287AA14C8797A7DF3155A6F43A3133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Camera_C::OnBlendOut_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.OnBlendOut_7A287AA14C8797A7DF3155A6F43A3133");

	UGA_Camera_C_OnBlendOut_7A287AA14C8797A7DF3155A6F43A3133_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.OnCompleted_7A287AA14C8797A7DF3155A6F43A3133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Camera_C::OnCompleted_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.OnCompleted_7A287AA14C8797A7DF3155A6F43A3133");

	UGA_Camera_C_OnCompleted_7A287AA14C8797A7DF3155A6F43A3133_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Camera_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.K2_ActivateAbility");

	UGA_Camera_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Camera_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.K2_OnEndAbility");

	UGA_Camera_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Camera.GA_Camera_C.ExecuteUbergraph_GA_Camera
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Camera_C::ExecuteUbergraph_GA_Camera(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_Camera.GA_Camera_C.ExecuteUbergraph_GA_Camera");

	UGA_Camera_C_ExecuteUbergraph_GA_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
