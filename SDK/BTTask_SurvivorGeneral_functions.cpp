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

// Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.SortTrapTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATrapTargetActor_C*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class ATrapTargetActor_C*> UBTTask_SurvivorGeneral_C::SortTrapTarget(TArray<class ATrapTargetActor_C*>* Source, class APawn* Pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.SortTrapTarget");

	UBTTask_SurvivorGeneral_C_SortTrapTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;


	return params.ReturnValue;
}


// Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.GetTrapTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATrapTargetActor_C*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ATrapTargetActor_C* UBTTask_SurvivorGeneral_C::GetTrapTarget(class APawn* Pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.GetTrapTarget");

	UBTTask_SurvivorGeneral_C_GetTrapTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.GetHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorGeneral_C::GetHunter(class AHunterBase_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.GetHunter");

	UBTTask_SurvivorGeneral_C_GetHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.OnFinishOrCancelProgress_Event_1
// (BlueprintCallable, BlueprintEvent)
void UBTTask_SurvivorGeneral_C::OnFinishOrCancelProgress_Event_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.OnFinishOrCancelProgress_Event_1");

	UBTTask_SurvivorGeneral_C_OnFinishOrCancelProgress_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorGeneral_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.ReceiveExecuteAI");

	UBTTask_SurvivorGeneral_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.ExecuteUbergraph_BTTask_SurvivorGeneral
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorGeneral_C::ExecuteUbergraph_BTTask_SurvivorGeneral(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C.ExecuteUbergraph_BTTask_SurvivorGeneral");

	UBTTask_SurvivorGeneral_C_ExecuteUbergraph_BTTask_SurvivorGeneral_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
