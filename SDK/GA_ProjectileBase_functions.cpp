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

// Function GA_ProjectileBase.GA_ProjectileBase_C.OnEventPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_ProjectileBase_C::OnEventPlayMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.OnEventPlayMontage");

	UGA_ProjectileBase_C_OnEventPlayMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_ProjectileBase_C::Debug(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.Debug");

	UGA_ProjectileBase_C_Debug_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.TraceTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Forward                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DefualtDistance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UGA_ProjectileBase_C::TraceTarget(const struct FVector& Start, const struct FVector& Forward, float DefualtDistance)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.TraceTarget");

	UGA_ProjectileBase_C_TraceTarget_Params params;
	params.Start = Start;
	params.Forward = Forward;
	params.DefualtDistance = DefualtDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_ProjectileBase.GA_ProjectileBase_C.GetAnimationMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_ProjectileBase_C::GetAnimationMontage(class UAnimMontage** Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.GetAnimationMontage");

	UGA_ProjectileBase_C_GetAnimationMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.GetSpawnLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_ProjectileBase_C::GetSpawnLocation(class AActor* Actor, const struct FName& InSocketName, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.GetSpawnLocation");

	UGA_ProjectileBase_C_GetSpawnLocation_Params params;
	params.Actor = Actor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.Change
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_ProjectileBase_C::Change(float Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.Change");

	UGA_ProjectileBase_C_Change_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_ProjectileBase.GA_ProjectileBase_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_ProjectileBase_C::UpdateItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.UpdateItem");

	UGA_ProjectileBase_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.OnEventReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_ProjectileBase_C::OnEventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.OnEventReceived");

	UGA_ProjectileBase_C_OnEventReceived_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.GetRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator UGA_ProjectileBase_C::GetRotation(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.GetRotation");

	UGA_ProjectileBase_C_GetRotation_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_ProjectileBase.GA_ProjectileBase_C.GetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UGA_ProjectileBase_C::GetLocation(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.GetLocation");

	UGA_ProjectileBase_C_GetLocation_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_ProjectileBase.GA_ProjectileBase_C.EventReceived_5011CA2745EDF3960A85889E69BE0041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_ProjectileBase_C::EventReceived_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.EventReceived_5011CA2745EDF3960A85889E69BE0041");

	UGA_ProjectileBase_C_EventReceived_5011CA2745EDF3960A85889E69BE0041_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.OnCancelled_5011CA2745EDF3960A85889E69BE0041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_ProjectileBase_C::OnCancelled_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.OnCancelled_5011CA2745EDF3960A85889E69BE0041");

	UGA_ProjectileBase_C_OnCancelled_5011CA2745EDF3960A85889E69BE0041_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.OnInterrupted_5011CA2745EDF3960A85889E69BE0041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_ProjectileBase_C::OnInterrupted_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.OnInterrupted_5011CA2745EDF3960A85889E69BE0041");

	UGA_ProjectileBase_C_OnInterrupted_5011CA2745EDF3960A85889E69BE0041_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.OnBlendOut_5011CA2745EDF3960A85889E69BE0041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_ProjectileBase_C::OnBlendOut_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.OnBlendOut_5011CA2745EDF3960A85889E69BE0041");

	UGA_ProjectileBase_C_OnBlendOut_5011CA2745EDF3960A85889E69BE0041_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.OnCompleted_5011CA2745EDF3960A85889E69BE0041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_ProjectileBase_C::OnCompleted_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.OnCompleted_5011CA2745EDF3960A85889E69BE0041");

	UGA_ProjectileBase_C_OnCompleted_5011CA2745EDF3960A85889E69BE0041_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_ProjectileBase_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.K2_ActivateAbility");

	UGA_ProjectileBase_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_ProjectileBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.K2_OnEndAbility");

	UGA_ProjectileBase_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileBase.GA_ProjectileBase_C.ExecuteUbergraph_GA_ProjectileBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_ProjectileBase_C::ExecuteUbergraph_GA_ProjectileBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileBase.GA_ProjectileBase_C.ExecuteUbergraph_GA_ProjectileBase");

	UGA_ProjectileBase_C_ExecuteUbergraph_GA_ProjectileBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
