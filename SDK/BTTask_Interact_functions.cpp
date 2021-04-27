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

// Function BTTask_Interact.BTTask_Interact_C.Interact
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AInteractionBase_C*      Interaction                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBTTask_Interact_C::Interact(class AActor* Owner, class AInteractionBase_C** Interaction)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Interact.BTTask_Interact_C.Interact");

	UBTTask_Interact_C_Interact_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interaction != nullptr)
		*Interaction = params.Interaction;


	return params.ReturnValue;
}


// Function BTTask_Interact.BTTask_Interact_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Interact_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Interact.BTTask_Interact_C.ReceiveExecuteAI");

	UBTTask_Interact_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_Interact.BTTask_Interact_C.OnStopInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Interact_C::OnStopInteraction(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Interact.BTTask_Interact_C.OnStopInteraction");

	UBTTask_Interact_C_OnStopInteraction_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_Interact.BTTask_Interact_C.OnFinishInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Interact_C::OnFinishInteraction(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Interact.BTTask_Interact_C.OnFinishInteraction");

	UBTTask_Interact_C_OnFinishInteraction_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_Interact.BTTask_Interact_C.ExecuteUbergraph_BTTask_Interact
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Interact_C::ExecuteUbergraph_BTTask_Interact(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Interact.BTTask_Interact_C.ExecuteUbergraph_BTTask_Interact");

	UBTTask_Interact_C_ExecuteUbergraph_BTTask_Interact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
