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

// Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.IsCanActivePerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanActivePerk                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_Prisoner_ActivePerk_C::IsCanActivePerk(bool* CanActivePerk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.IsCanActivePerk");

	UBTTask_Prisoner_ActivePerk_C_IsCanActivePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanActivePerk != nullptr)
		*CanActivePerk = params.CanActivePerk;

}


// Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Prisoner_ActivePerk_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.ReceiveExecuteAI");

	UBTTask_Prisoner_ActivePerk_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.ExecuteUbergraph_BTTask_Prisoner_ActivePerk
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Prisoner_ActivePerk_C::ExecuteUbergraph_BTTask_Prisoner_ActivePerk(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.ExecuteUbergraph_BTTask_Prisoner_ActivePerk");

	UBTTask_Prisoner_ActivePerk_C_ExecuteUbergraph_BTTask_Prisoner_ActivePerk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
