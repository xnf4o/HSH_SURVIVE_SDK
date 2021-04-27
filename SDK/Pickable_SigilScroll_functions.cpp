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

// Function Pickable_SigilScroll.Pickable_SigilScroll_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_SigilScroll_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_SigilScroll.Pickable_SigilScroll_C.Interaction");

	APickable_SigilScroll_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_SigilScroll.Pickable_SigilScroll_C.SetCollisionResponseInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsResponse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APickable_SigilScroll_C::SetCollisionResponseInteract(bool IsResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_SigilScroll.Pickable_SigilScroll_C.SetCollisionResponseInteract");

	APickable_SigilScroll_C_SetCollisionResponseInteract_Params params;
	params.IsResponse = IsResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_SigilScroll.Pickable_SigilScroll_C.ExecuteUbergraph_Pickable_SigilScroll
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_SigilScroll_C::ExecuteUbergraph_Pickable_SigilScroll(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_SigilScroll.Pickable_SigilScroll_C.ExecuteUbergraph_Pickable_SigilScroll");

	APickable_SigilScroll_C_ExecuteUbergraph_Pickable_SigilScroll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
