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

// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.GetExecutionCameraTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UExecutionSurvivorComponent_C::GetExecutionCameraTransform()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.GetExecutionCameraTransform");

	UExecutionSurvivorComponent_C_GetExecutionCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.SetUpMontageData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            SurvivorMontage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendInTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendOutTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera> ExecutionMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UExecutionSurvivorComponent_C::SetUpMontageData(class UAnimMontage* SurvivorMontage, float Distance, float BlendInTime, float BlendOutTime, TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera> ExecutionMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.SetUpMontageData");

	UExecutionSurvivorComponent_C_SetUpMontageData_Params params;
	params.SurvivorMontage = SurvivorMontage;
	params.Distance = Distance;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.ExecutionMode = ExecutionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::OnRep_State()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.OnRep_State");

	UExecutionSurvivorComponent_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.GetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ExecutionState_E_ExecutionState> State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UExecutionSurvivorComponent_C::GetState(TEnumAsByte<E_ExecutionState_E_ExecutionState>* State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.GetState");

	UExecutionSurvivorComponent_C_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.UpdateCameraTransfrom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::UpdateCameraTransfrom()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.UpdateCameraTransfrom");

	UExecutionSurvivorComponent_C_UpdateCameraTransfrom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.TryCloseProgress
// (Public, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::TryCloseProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.TryCloseProgress");

	UExecutionSurvivorComponent_C_TryCloseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.IsCanExecution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UExecutionSurvivorComponent_C::IsCanExecution(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.IsCanExecution");

	UExecutionSurvivorComponent_C_IsCanExecution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.CheckingExecution
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   GameplayTagContainer           (BlueprintVisible, BlueprintReadOnly, Parm)
void UExecutionSurvivorComponent_C::CheckingExecution(class AHunterBase_C* hunter, const struct FGameplayTagContainer& GameplayTagContainer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.CheckingExecution");

	UExecutionSurvivorComponent_C_CheckingExecution_Params params;
	params.hunter = hunter;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.MoveCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bLockOutgoing                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UExecutionSurvivorComponent_C::MoveCamera(class AActor* Actor, float BlendTime, TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.MoveCamera");

	UExecutionSurvivorComponent_C_MoveCamera_Params params;
	params.Actor = Actor;
	params.BlendTime = BlendTime;
	params.BlendFunc = BlendFunc;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.SetCameraLocation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::SetCameraLocation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.SetCameraLocation");

	UExecutionSurvivorComponent_C_SetCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UExecutionSurvivorComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ReceiveTick");

	UExecutionSurvivorComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.PrepareCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::PrepareCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.PrepareCamera");

	UExecutionSurvivorComponent_C_PrepareCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.CameraFade
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UExecutionSurvivorComponent_C::CameraFade(float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.CameraFade");

	UExecutionSurvivorComponent_C_CameraFade_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ToggleShowHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UExecutionSurvivorComponent_C::ToggleShowHUD(bool Show)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ToggleShowHUD");

	UExecutionSurvivorComponent_C_ToggleShowHUD_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Continue
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::Continue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Continue");

	UExecutionSurvivorComponent_C_Continue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ClearValue
// (BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::ClearValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ClearValue");

	UExecutionSurvivorComponent_C_ClearValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Cancel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::Cancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Cancel");

	UExecutionSurvivorComponent_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UExecutionSurvivorComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ReceiveEndPlay");

	UExecutionSurvivorComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Initialize
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.Initialize");

	UExecutionSurvivorComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ExecuteUbergraph_ExecutionSurvivorComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UExecutionSurvivorComponent_C::ExecuteUbergraph_ExecutionSurvivorComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.ExecuteUbergraph_ExecutionSurvivorComponent");

	UExecutionSurvivorComponent_C_ExecuteUbergraph_ExecutionSurvivorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.OnCameraSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UExecutionSurvivorComponent_C::OnCameraSuccess__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ExecutionSurvivorComponent.ExecutionSurvivorComponent_C.OnCameraSuccess__DelegateSignature");

	UExecutionSurvivorComponent_C_OnCameraSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
