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

// Function InteractionSigilScroll.InteractionSigilScroll_C.GetDestructible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractionSigilScroll_C::GetDestructible(bool* Destructable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.GetDestructible");

	AInteractionSigilScroll_C_GetDestructible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destructable != nullptr)
		*Destructable = params.Destructable;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.IsObjectReverse
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AInteractionSigilScroll_C::IsObjectReverse(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.IsObjectReverse");

	AInteractionSigilScroll_C_IsObjectReverse_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractionSigilScroll.InteractionSigilScroll_C.InverseXAxis
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::InverseXAxis(const struct FVector& Location, struct FVector* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.InverseXAxis");

	AInteractionSigilScroll_C_InverseXAxis_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.SetDestructible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractionSigilScroll_C::SetDestructible(bool Destructible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.SetDestructible");

	AInteractionSigilScroll_C_SetDestructible_Params params;
	params.Destructible = Destructible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.OnHunterChangeHiddenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHiddenState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractionSigilScroll_C::OnHunterChangeHiddenState(bool InHiddenState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.OnHunterChangeHiddenState");

	AInteractionSigilScroll_C_OnHunterChangeHiddenState_Params params;
	params.InHiddenState = InHiddenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.ShowIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::ShowIndicator(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.ShowIndicator");

	AInteractionSigilScroll_C_ShowIndicator_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.ReceiveTick");

	AInteractionSigilScroll_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.HideIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::HideIndicator(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.HideIndicator");

	AInteractionSigilScroll_C_HideIndicator_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractionSigilScroll_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.ReceiveBeginPlay");

	AInteractionSigilScroll_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.ShowOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::ShowOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.ShowOutline");

	AInteractionSigilScroll_C_ShowOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.HideOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::HideOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.HideOutline");

	AInteractionSigilScroll_C_HideOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.DestroyedByHunter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunterBase_C*           DestroyedBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.DestroyedByHunter");

	AInteractionSigilScroll_C_DestroyedByHunter_Params params;
	params.Damage = Damage;
	params.DestroyedBy = DestroyedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.ExecuteUbergraph_InteractionSigilScroll
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::ExecuteUbergraph_InteractionSigilScroll(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.ExecuteUbergraph_InteractionSigilScroll");

	AInteractionSigilScroll_C_ExecuteUbergraph_InteractionSigilScroll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.OnDestroyedByHunter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunterBase_C*           DestroyedBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractionSigilScroll_C::OnDestroyedByHunter__DelegateSignature(float Damage, class AHunterBase_C* DestroyedBy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.OnDestroyedByHunter__DelegateSignature");

	AInteractionSigilScroll_C_OnDestroyedByHunter__DelegateSignature_Params params;
	params.Damage = Damage;
	params.DestroyedBy = DestroyedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.OnHideOutline__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AInteractionSigilScroll_C::OnHideOutline__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.OnHideOutline__DelegateSignature");

	AInteractionSigilScroll_C_OnHideOutline__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractionSigilScroll.InteractionSigilScroll_C.OnShowOutline__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AInteractionSigilScroll_C::OnShowOutline__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractionSigilScroll.InteractionSigilScroll_C.OnShowOutline__DelegateSignature");

	AInteractionSigilScroll_C_OnShowOutline__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
