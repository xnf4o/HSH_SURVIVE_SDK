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

// Function GA_WeaponBase.GA_WeaponBase_C.UnlockCameraToFront
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponBase_C::UnlockCameraToFront()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.UnlockCameraToFront");

	UGA_WeaponBase_C_UnlockCameraToFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.LockCameraToFront
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponBase_C::LockCameraToFront()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.LockCameraToFront");

	UGA_WeaponBase_C_LockCameraToFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.GetAnimationMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimMontage* UGA_WeaponBase_C::GetAnimationMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.GetAnimationMontage");

	UGA_WeaponBase_C_GetAnimationMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_WeaponBase.GA_WeaponBase_C.OnPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponBase_C::OnPlayMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.OnPlayMontage");

	UGA_WeaponBase_C_OnPlayMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_WeaponBase_C::UpdateItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.UpdateItem");

	UGA_WeaponBase_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponBase_C::SendMeleeDistance()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.SendMeleeDistance");

	UGA_WeaponBase_C_SendMeleeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.EventReceived_41C7215442396D32690029AD68DF406C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_WeaponBase_C::EventReceived_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.EventReceived_41C7215442396D32690029AD68DF406C");

	UGA_WeaponBase_C_EventReceived_41C7215442396D32690029AD68DF406C_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.OnCancelled_41C7215442396D32690029AD68DF406C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_WeaponBase_C::OnCancelled_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.OnCancelled_41C7215442396D32690029AD68DF406C");

	UGA_WeaponBase_C_OnCancelled_41C7215442396D32690029AD68DF406C_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.OnInterrupted_41C7215442396D32690029AD68DF406C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_WeaponBase_C::OnInterrupted_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.OnInterrupted_41C7215442396D32690029AD68DF406C");

	UGA_WeaponBase_C_OnInterrupted_41C7215442396D32690029AD68DF406C_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.OnBlendOut_41C7215442396D32690029AD68DF406C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_WeaponBase_C::OnBlendOut_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.OnBlendOut_41C7215442396D32690029AD68DF406C");

	UGA_WeaponBase_C_OnBlendOut_41C7215442396D32690029AD68DF406C_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.OnCompleted_41C7215442396D32690029AD68DF406C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_WeaponBase_C::OnCompleted_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.OnCompleted_41C7215442396D32690029AD68DF406C");

	UGA_WeaponBase_C_OnCompleted_41C7215442396D32690029AD68DF406C_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_WeaponBase_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.K2_ActivateAbility");

	UGA_WeaponBase_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_WeaponBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.K2_OnEndAbility");

	UGA_WeaponBase_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.PlayHeavySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_WeaponBase_C::PlayHeavySound(class AActor* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.PlayHeavySound");

	UGA_WeaponBase_C_PlayHeavySound_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.PlayLightSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_WeaponBase_C::PlayLightSound(class AActor* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.PlayLightSound");

	UGA_WeaponBase_C_PlayLightSound_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponBase.GA_WeaponBase_C.ExecuteUbergraph_GA_WeaponBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_WeaponBase_C::ExecuteUbergraph_GA_WeaponBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponBase.GA_WeaponBase_C.ExecuteUbergraph_GA_WeaponBase");

	UGA_WeaponBase_C_ExecuteUbergraph_GA_WeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
