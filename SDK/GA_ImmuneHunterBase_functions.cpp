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

// Function GA_ImmuneHunterBase.GA_ImmuneHunterBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_ImmuneHunterBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ImmuneHunterBase.GA_ImmuneHunterBase_C.K2_OnEndAbility");

	UGA_ImmuneHunterBase_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ImmuneHunterBase.GA_ImmuneHunterBase_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_ImmuneHunterBase_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ImmuneHunterBase.GA_ImmuneHunterBase_C.K2_ActivateAbility");

	UGA_ImmuneHunterBase_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ImmuneHunterBase.GA_ImmuneHunterBase_C.ExecuteUbergraph_GA_ImmuneHunterBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_ImmuneHunterBase_C::ExecuteUbergraph_GA_ImmuneHunterBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ImmuneHunterBase.GA_ImmuneHunterBase_C.ExecuteUbergraph_GA_ImmuneHunterBase");

	UGA_ImmuneHunterBase_C_ExecuteUbergraph_GA_ImmuneHunterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
