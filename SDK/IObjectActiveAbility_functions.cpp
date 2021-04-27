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

// Function IObjectActiveAbility.IObjectActiveAbility_C.IsActivate?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActivate_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIObjectActiveAbility_C::IsActivate_(bool* IsActivate_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IObjectActiveAbility.IObjectActiveAbility_C.IsActivate?");

	UIObjectActiveAbility_C_IsActivate__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsActivate_ != nullptr)
		*IsActivate_ = params.IsActivate_;

}


// Function IObjectActiveAbility.IObjectActiveAbility_C.ThisIsTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerTeam_E_PlayerTeam> IsTeam                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIObjectActiveAbility_C::ThisIsTeam(TEnumAsByte<E_PlayerTeam_E_PlayerTeam>* IsTeam)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IObjectActiveAbility.IObjectActiveAbility_C.ThisIsTeam");

	UIObjectActiveAbility_C_ThisIsTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTeam != nullptr)
		*IsTeam = params.IsTeam;

}


// Function IObjectActiveAbility.IObjectActiveAbility_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
void UIObjectActiveAbility_C::Deactivate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IObjectActiveAbility.IObjectActiveAbility_C.Deactivate");

	UIObjectActiveAbility_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IObjectActiveAbility.IObjectActiveAbility_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
void UIObjectActiveAbility_C::Activate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IObjectActiveAbility.IObjectActiveAbility_C.Activate");

	UIObjectActiveAbility_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
