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

// Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.SortTrapTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATrapTargetActor_C*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class ATrapTargetActor_C*> UBTTask_SurvivorTraped_C::SortTrapTarget(TArray<class ATrapTargetActor_C*>* Source, class APawn* Pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.SortTrapTarget");

	UBTTask_SurvivorTraped_C_SortTrapTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;


	return params.ReturnValue;
}


// Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.GetTrapTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATrapTargetActor_C*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ATrapTargetActor_C* UBTTask_SurvivorTraped_C::GetTrapTarget(class APawn* Pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.GetTrapTarget");

	UBTTask_SurvivorTraped_C_GetTrapTarget_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.GetHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorTraped_C::GetHunter(class AHunterBase_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.GetHunter");

	UBTTask_SurvivorTraped_C_GetHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorTraped_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.ReceiveExecuteAI");

	UBTTask_SurvivorTraped_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorTraped_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.ReceiveTickAI");

	UBTTask_SurvivorTraped_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.Reset
// (BlueprintCallable, BlueprintEvent)
void UBTTask_SurvivorTraped_C::Reset()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.Reset");

	UBTTask_SurvivorTraped_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.ExecuteUbergraph_BTTask_SurvivorTraped
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SurvivorTraped_C::ExecuteUbergraph_BTTask_SurvivorTraped(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SurvivorTraped.BTTask_SurvivorTraped_C.ExecuteUbergraph_BTTask_SurvivorTraped");

	UBTTask_SurvivorTraped_C_ExecuteUbergraph_BTTask_SurvivorTraped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
