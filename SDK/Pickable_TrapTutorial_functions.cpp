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

// Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_TrapTutorial_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.Interaction");

	APickable_TrapTutorial_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.SetUpItemDescription
// (Public, BlueprintCallable, BlueprintEvent)
void APickable_TrapTutorial_C::SetUpItemDescription()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.SetUpItemDescription");

	APickable_TrapTutorial_C_SetUpItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.OnRitualStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_TrapTutorial_C::OnRitualStateUpdate(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.OnRitualStateUpdate");

	APickable_TrapTutorial_C_OnRitualStateUpdate_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.ExecuteUbergraph_Pickable_TrapTutorial
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_TrapTutorial_C::ExecuteUbergraph_Pickable_TrapTutorial(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_TrapTutorial.Pickable_TrapTutorial_C.ExecuteUbergraph_Pickable_TrapTutorial");

	APickable_TrapTutorial_C_ExecuteUbergraph_Pickable_TrapTutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
