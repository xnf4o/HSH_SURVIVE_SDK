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

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetPairTrapTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class ATrapTargetActor_C*> MakeArray                      (Parm, OutParm, ZeroConstructor)
void UGA_TrapSurvivorBase_C::GetPairTrapTarget(TArray<class ATrapTargetActor_C*>* Array, TArray<class ATrapTargetActor_C*>* MakeArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetPairTrapTarget");

	UGA_TrapSurvivorBase_C_GetPairTrapTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (MakeArray != nullptr)
		*MakeArray = params.MakeArray;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.ChangeInteractMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_InteractState_E_InteractState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_TrapSurvivorBase_C::ChangeInteractMode(class AActor* Owner, TEnumAsByte<E_InteractState_E_InteractState> State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.ChangeInteractMode");

	UGA_TrapSurvivorBase_C_ChangeInteractMode_Params params;
	params.Owner = Owner;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetHangPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FTransform>      HangPoint                      (Parm, OutParm, ZeroConstructor)
void UGA_TrapSurvivorBase_C::GetHangPoint(TArray<class ATrapTargetActor_C*>* TargetActor, TArray<struct FTransform>* HangPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetHangPoint");

	UGA_TrapSurvivorBase_C_GetHangPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;
	if (HangPoint != nullptr)
		*HangPoint = params.HangPoint;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GoToSection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_TrapSurvivorBase_C::GoToSection(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GoToSection");

	UGA_TrapSurvivorBase_C_GoToSection_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator UGA_TrapSurvivorBase_C::GetRotation(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetRotation");

	UGA_TrapSurvivorBase_C_GetRotation_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UGA_TrapSurvivorBase_C::GetLocation(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetLocation");

	UGA_TrapSurvivorBase_C_GetLocation_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.EventReceived_B119D4DF4AF0D70862CF2BBCF702EDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_TrapSurvivorBase_C::EventReceived_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.EventReceived_B119D4DF4AF0D70862CF2BBCF702EDC4");

	UGA_TrapSurvivorBase_C_EventReceived_B119D4DF4AF0D70862CF2BBCF702EDC4_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnCancelled_B119D4DF4AF0D70862CF2BBCF702EDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_TrapSurvivorBase_C::OnCancelled_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnCancelled_B119D4DF4AF0D70862CF2BBCF702EDC4");

	UGA_TrapSurvivorBase_C_OnCancelled_B119D4DF4AF0D70862CF2BBCF702EDC4_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnInterrupted_B119D4DF4AF0D70862CF2BBCF702EDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_TrapSurvivorBase_C::OnInterrupted_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnInterrupted_B119D4DF4AF0D70862CF2BBCF702EDC4");

	UGA_TrapSurvivorBase_C_OnInterrupted_B119D4DF4AF0D70862CF2BBCF702EDC4_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnBlendOut_B119D4DF4AF0D70862CF2BBCF702EDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_TrapSurvivorBase_C::OnBlendOut_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnBlendOut_B119D4DF4AF0D70862CF2BBCF702EDC4");

	UGA_TrapSurvivorBase_C_OnBlendOut_B119D4DF4AF0D70862CF2BBCF702EDC4_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnCompleted_B119D4DF4AF0D70862CF2BBCF702EDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_TrapSurvivorBase_C::OnCompleted_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnCompleted_B119D4DF4AF0D70862CF2BBCF702EDC4");

	UGA_TrapSurvivorBase_C_OnCompleted_B119D4DF4AF0D70862CF2BBCF702EDC4_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_TrapSurvivorBase_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.K2_ActivateAbility");

	UGA_TrapSurvivorBase_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_TrapSurvivorBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.K2_OnEndAbility");

	UGA_TrapSurvivorBase_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.ExecuteUbergraph_GA_TrapSurvivorBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_TrapSurvivorBase_C::ExecuteUbergraph_GA_TrapSurvivorBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.ExecuteUbergraph_GA_TrapSurvivorBase");

	UGA_TrapSurvivorBase_C_ExecuteUbergraph_GA_TrapSurvivorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
