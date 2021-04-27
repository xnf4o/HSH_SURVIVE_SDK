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

// Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.GetChestItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AItemChest_C*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AItemChest_C*> UBTDecorator_IfHaveChest_C::GetChestItems()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.GetChestItems");

	UBTDecorator_IfHaveChest_C_GetChestItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.GetChestObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AItemChest_C*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AItemChest_C*> UBTDecorator_IfHaveChest_C::GetChestObjective()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.GetChestObjective");

	UBTDecorator_IfHaveChest_C_GetChestObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBTDecorator_IfHaveChest_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.PerformConditionCheckAI");

	UBTDecorator_IfHaveChest_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
