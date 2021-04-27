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

// Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponHunterBase_C::SendMeleeDistance()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.SendMeleeDistance");

	UGA_WeaponHunterBase_C_SendMeleeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.OnPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponHunterBase_C::OnPlayMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.OnPlayMontage");

	UGA_WeaponHunterBase_C_OnPlayMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_WeaponHunterBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.K2_OnEndAbility");

	UGA_WeaponHunterBase_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.ExecuteUbergraph_GA_WeaponHunterBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_WeaponHunterBase_C::ExecuteUbergraph_GA_WeaponHunterBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponHunterBase.GA_WeaponHunterBase_C.ExecuteUbergraph_GA_WeaponHunterBase");

	UGA_WeaponHunterBase_C_ExecuteUbergraph_GA_WeaponHunterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
