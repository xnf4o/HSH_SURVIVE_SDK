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

// Function AIController_Hunter.AIController_Hunter_C.GetIsEnableBlockAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIController_Hunter_C::GetIsEnableBlockAction(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.GetIsEnableBlockAction");

	AAIController_Hunter_C_GetIsEnableBlockAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AIController_Hunter.AIController_Hunter_C.GetIsEnableBlockCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIController_Hunter_C::GetIsEnableBlockCamera(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.GetIsEnableBlockCamera");

	AAIController_Hunter_C_GetIsEnableBlockCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AIController_Hunter.AIController_Hunter_C.EnableMouseCameraClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::EnableMouseCameraClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.EnableMouseCameraClient");

	AAIController_Hunter_C_EnableMouseCameraClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.DisableMouseCameraClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::DisableMouseCameraClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.DisableMouseCameraClient");

	AAIController_Hunter_C_DisableMouseCameraClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.EnableBlockInputKeys
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::EnableBlockInputKeys()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.EnableBlockInputKeys");

	AAIController_Hunter_C_EnableBlockInputKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.DisableBlockInputKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKey>            Keys                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AAIController_Hunter_C::DisableBlockInputKeys(TArray<struct FKey> Keys)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.DisableBlockInputKeys");

	AAIController_Hunter_C_DisableBlockInputKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.DisableMovementClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::DisableMovementClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.DisableMovementClient");

	AAIController_Hunter_C_DisableMovementClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.EnableMovementClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::EnableMovementClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.EnableMovementClient");

	AAIController_Hunter_C_EnableMovementClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.EnableActionClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::EnableActionClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.EnableActionClient");

	AAIController_Hunter_C_EnableActionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.DisableActionClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::DisableActionClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.DisableActionClient");

	AAIController_Hunter_C_DisableActionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.DisableInputClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::DisableInputClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.DisableInputClient");

	AAIController_Hunter_C_DisableInputClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.EnableInputClient
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::EnableInputClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.EnableInputClient");

	AAIController_Hunter_C_EnableInputClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AAIController_Hunter_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	AAIController_Hunter_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.StopLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReasonString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AAIController_Hunter_C::StopLogic(const struct FString& ReasonString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.StopLogic");

	AAIController_Hunter_C_StopLogic_Params params;
	params.ReasonString = ReasonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.RestartLogic
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::RestartLogic()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.RestartLogic");

	AAIController_Hunter_C_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.FinishDuty
// (Public, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::FinishDuty()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.FinishDuty");

	AAIController_Hunter_C_FinishDuty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Hunter_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.ReceivePossess");

	AAIController_Hunter_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.PassCharacterInfoToServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AAIController_Hunter_C::PassCharacterInfoToServer(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.PassCharacterInfoToServer");

	AAIController_Hunter_C_PassCharacterInfoToServer_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Hunter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.ReceiveTick");

	AAIController_Hunter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.ExecuteUbergraph_AIController_Hunter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Hunter_C::ExecuteUbergraph_AIController_Hunter(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.ExecuteUbergraph_AIController_Hunter");

	AAIController_Hunter_C_ExecuteUbergraph_AIController_Hunter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Hunter.AIController_Hunter_C.OnFinishDuty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAIController_Hunter_C::OnFinishDuty__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIController_Hunter.AIController_Hunter_C.OnFinishDuty__DelegateSignature");

	AAIController_Hunter_C_OnFinishDuty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
