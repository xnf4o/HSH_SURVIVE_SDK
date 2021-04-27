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

// Function IHSHAIController.IHSHAIController_C.FinishDuty
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHAIController_C::FinishDuty()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHAIController.IHSHAIController_C.FinishDuty");

	UIHSHAIController_C_FinishDuty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHAIController.IHSHAIController_C.RestartLogic
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHAIController_C::RestartLogic()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHAIController.IHSHAIController_C.RestartLogic");

	UIHSHAIController_C_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHAIController.IHSHAIController_C.StopLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReasonString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UIHSHAIController_C::StopLogic(const struct FString& ReasonString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHAIController.IHSHAIController_C.StopLogic");

	UIHSHAIController_C_StopLogic_Params params;
	params.ReasonString = ReasonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
