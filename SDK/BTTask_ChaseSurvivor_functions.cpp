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

// Function BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C.GetCanSpecter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanSpecter                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_ChaseSurvivor_C::GetCanSpecter(class APawn* ControlledPawn, bool* CanSpecter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C.GetCanSpecter");

	UBTTask_ChaseSurvivor_C_GetCanSpecter_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanSpecter != nullptr)
		*CanSpecter = params.CanSpecter;

}


// Function BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_ChaseSurvivor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C.ReceiveExecuteAI");

	UBTTask_ChaseSurvivor_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C.ExecuteUbergraph_BTTask_ChaseSurvivor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_ChaseSurvivor_C::ExecuteUbergraph_BTTask_ChaseSurvivor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C.ExecuteUbergraph_BTTask_ChaseSurvivor");

	UBTTask_ChaseSurvivor_C_ExecuteUbergraph_BTTask_ChaseSurvivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
