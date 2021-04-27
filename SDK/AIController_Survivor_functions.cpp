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

// Function AIController_Survivor.AIController_Survivor_C.StopLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReasonString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AAIController_Survivor_C::StopLogic(const struct FString& ReasonString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.StopLogic");

	AAIController_Survivor_C_StopLogic_Params params;
	params.ReasonString = ReasonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Survivor.AIController_Survivor_C.RestartLogic
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Survivor_C::RestartLogic()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.RestartLogic");

	AAIController_Survivor_C_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Survivor.AIController_Survivor_C.FinishDuty
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Survivor_C::FinishDuty()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.FinishDuty");

	AAIController_Survivor_C_FinishDuty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Survivor.AIController_Survivor_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Survivor_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.ReceivePossess");

	AAIController_Survivor_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Survivor.AIController_Survivor_C.PassCharacterInfoToServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AAIController_Survivor_C::PassCharacterInfoToServer(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.PassCharacterInfoToServer");

	AAIController_Survivor_C_PassCharacterInfoToServer_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Survivor.AIController_Survivor_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
void AAIController_Survivor_C::OnTakeDamage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.OnTakeDamage");

	AAIController_Survivor_C_OnTakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Survivor.AIController_Survivor_C.ExecuteUbergraph_AIController_Survivor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Survivor_C::ExecuteUbergraph_AIController_Survivor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.ExecuteUbergraph_AIController_Survivor");

	AAIController_Survivor_C_ExecuteUbergraph_AIController_Survivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Survivor.AIController_Survivor_C.OnFinishDuty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAIController_Survivor_C::OnFinishDuty__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Survivor.AIController_Survivor_C.OnFinishDuty__DelegateSignature");

	AAIController_Survivor_C_OnFinishDuty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
