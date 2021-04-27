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

// Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.Change
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_WeaponSurvivorBase_C::Change(float Percent, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.Change");

	UGA_WeaponSurvivorBase_C_Change_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponSurvivorBase_C::SendMeleeDistance()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.SendMeleeDistance");

	UGA_WeaponSurvivorBase_C_SendMeleeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.UpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponSurvivorBase_C::UpdateItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.UpdateItem");

	UGA_WeaponSurvivorBase_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.ExecuteUbergraph_GA_WeaponSurvivorBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_WeaponSurvivorBase_C::ExecuteUbergraph_GA_WeaponSurvivorBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C.ExecuteUbergraph_GA_WeaponSurvivorBase");

	UGA_WeaponSurvivorBase_C_ExecuteUbergraph_GA_WeaponSurvivorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
