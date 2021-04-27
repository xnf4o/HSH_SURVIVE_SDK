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

// Function AIController_Hunter_Belle.AIController_Hunter_Belle_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Hunter_Belle_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter_Belle.AIController_Hunter_Belle_C.ReceivePossess");

	AAIController_Hunter_Belle_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter_Belle.AIController_Hunter_Belle_C.ExecuteUbergraph_AIController_Hunter_Belle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Hunter_Belle_C::ExecuteUbergraph_AIController_Hunter_Belle(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter_Belle.AIController_Hunter_Belle_C.ExecuteUbergraph_AIController_Hunter_Belle");

	AAIController_Hunter_Belle_C_ExecuteUbergraph_AIController_Hunter_Belle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
