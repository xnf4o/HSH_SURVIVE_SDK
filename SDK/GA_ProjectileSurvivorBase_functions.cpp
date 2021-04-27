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

// Function GA_ProjectileSurvivorBase.GA_ProjectileSurvivorBase_C.OnEventPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_ProjectileSurvivorBase_C::OnEventPlayMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileSurvivorBase.GA_ProjectileSurvivorBase_C.OnEventPlayMontage");

	UGA_ProjectileSurvivorBase_C_OnEventPlayMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileSurvivorBase.GA_ProjectileSurvivorBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_ProjectileSurvivorBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileSurvivorBase.GA_ProjectileSurvivorBase_C.K2_OnEndAbility");

	UGA_ProjectileSurvivorBase_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProjectileSurvivorBase.GA_ProjectileSurvivorBase_C.ExecuteUbergraph_GA_ProjectileSurvivorBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_ProjectileSurvivorBase_C::ExecuteUbergraph_GA_ProjectileSurvivorBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_ProjectileSurvivorBase.GA_ProjectileSurvivorBase_C.ExecuteUbergraph_GA_ProjectileSurvivorBase");

	UGA_ProjectileSurvivorBase_C_ExecuteUbergraph_GA_ProjectileSurvivorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
