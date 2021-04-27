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

// Function GA_WeaponPrisoner.GA_WeaponPrisoner_C.OnPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_WeaponPrisoner_C::OnPlayMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponPrisoner.GA_WeaponPrisoner_C.OnPlayMontage");

	UGA_WeaponPrisoner_C_OnPlayMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_WeaponPrisoner.GA_WeaponPrisoner_C.ExecuteUbergraph_GA_WeaponPrisoner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_WeaponPrisoner_C::ExecuteUbergraph_GA_WeaponPrisoner(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_WeaponPrisoner.GA_WeaponPrisoner_C.ExecuteUbergraph_GA_WeaponPrisoner");

	UGA_WeaponPrisoner_C_ExecuteUbergraph_GA_WeaponPrisoner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
