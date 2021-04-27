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

// Function IDestructible.IDestructible_C.OnHunterChangeHiddenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHiddenState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIDestructible_C::OnHunterChangeHiddenState(bool InHiddenState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IDestructible.IDestructible_C.OnHunterChangeHiddenState");

	UIDestructible_C_OnHunterChangeHiddenState_Params params;
	params.InHiddenState = InHiddenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IDestructible.IDestructible_C.DestroyedByHunter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunterBase_C*           DestroyedBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIDestructible_C::DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IDestructible.IDestructible_C.DestroyedByHunter");

	UIDestructible_C_DestroyedByHunter_Params params;
	params.Damage = Damage;
	params.DestroyedBy = DestroyedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IDestructible.IDestructible_C.SetDestructible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIDestructible_C::SetDestructible(bool Destructible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IDestructible.IDestructible_C.SetDestructible");

	UIDestructible_C_SetDestructible_Params params;
	params.Destructible = Destructible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IDestructible.IDestructible_C.GetDestructible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIDestructible_C::GetDestructible(bool* Destructable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IDestructible.IDestructible_C.GetDestructible");

	UIDestructible_C_GetDestructible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destructable != nullptr)
		*Destructable = params.Destructable;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
