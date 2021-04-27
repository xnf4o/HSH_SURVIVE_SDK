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

// Function Pickable_WeaponBase.Pickable_WeaponBase_C.SetUpItemDescription
// (Public, BlueprintCallable, BlueprintEvent)
void APickable_WeaponBase_C::SetUpItemDescription()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_WeaponBase.Pickable_WeaponBase_C.SetUpItemDescription");

	APickable_WeaponBase_C_SetUpItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_WeaponBase.Pickable_WeaponBase_C.OnRitualStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_WeaponBase_C::OnRitualStateUpdate(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_WeaponBase.Pickable_WeaponBase_C.OnRitualStateUpdate");

	APickable_WeaponBase_C_OnRitualStateUpdate_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_WeaponBase.Pickable_WeaponBase_C.SetCollisionResponseInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsResponse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APickable_WeaponBase_C::SetCollisionResponseInteract(bool IsResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_WeaponBase.Pickable_WeaponBase_C.SetCollisionResponseInteract");

	APickable_WeaponBase_C_SetCollisionResponseInteract_Params params;
	params.IsResponse = IsResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_WeaponBase.Pickable_WeaponBase_C.ExecuteUbergraph_Pickable_WeaponBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_WeaponBase_C::ExecuteUbergraph_Pickable_WeaponBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_WeaponBase.Pickable_WeaponBase_C.ExecuteUbergraph_Pickable_WeaponBase");

	APickable_WeaponBase_C_ExecuteUbergraph_Pickable_WeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
