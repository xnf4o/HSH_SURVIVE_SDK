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

// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.SortTrapTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATrapTargetActor_C*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class ATrapTargetActor_C*> UBTTask_SurvivorSigil_C::SortTrapTarget(TArray<class ATrapTargetActor_C*>* Source, class APawn* Pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.SortTrapTarget");

	UBTTask_SurvivorSigil_C_SortTrapTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;


	return params.ReturnValue;
}


// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.GetTrapTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATrapTargetActor_C*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ATrapTargetActor_C* UBTTask_SurvivorSigil_C::GetTrapTarget(class APawn* Pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.GetTrapTarget");

	UBTTask_SurvivorSigil_C_GetTrapTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.GetHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorSigil_C::GetHunter(class AHunterBase_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.GetHunter");

	UBTTask_SurvivorSigil_C_GetHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorSigil_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.ReceiveExecuteAI");

	UBTTask_SurvivorSigil_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.ExecuteUbergraph_BTTask_SurvivorSigil
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorSigil_C::ExecuteUbergraph_BTTask_SurvivorSigil(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorSigil.BTTask_SurvivorSigil_C.ExecuteUbergraph_BTTask_SurvivorSigil");

	UBTTask_SurvivorSigil_C_ExecuteUbergraph_BTTask_SurvivorSigil_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
