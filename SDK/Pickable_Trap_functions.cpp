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

// Function Pickable_Trap.Pickable_Trap_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_Trap_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_Trap.Pickable_Trap_C.Interaction");

	APickable_Trap_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_Trap.Pickable_Trap_C.SetUpItemDescription
// (Public, BlueprintCallable, BlueprintEvent)
void APickable_Trap_C::SetUpItemDescription()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_Trap.Pickable_Trap_C.SetUpItemDescription");

	APickable_Trap_C_SetUpItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_Trap.Pickable_Trap_C.OnRitualStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_Trap_C::OnRitualStateUpdate(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_Trap.Pickable_Trap_C.OnRitualStateUpdate");

	APickable_Trap_C_OnRitualStateUpdate_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_Trap.Pickable_Trap_C.SetCollisionResponseInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsResponse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APickable_Trap_C::SetCollisionResponseInteract(bool IsResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_Trap.Pickable_Trap_C.SetCollisionResponseInteract");

	APickable_Trap_C_SetCollisionResponseInteract_Params params;
	params.IsResponse = IsResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_Trap.Pickable_Trap_C.ExecuteUbergraph_Pickable_Trap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_Trap_C::ExecuteUbergraph_Pickable_Trap(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_Trap.Pickable_Trap_C.ExecuteUbergraph_Pickable_Trap");

	APickable_Trap_C_ExecuteUbergraph_Pickable_Trap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
