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

// Function ProgressClientComponent.ProgressClientComponent_C.GetBonusDecreaseProgress
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UProgressClientComponent_C::GetBonusDecreaseProgress(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.GetBonusDecreaseProgress");

	UProgressClientComponent_C_GetBonusDecreaseProgress_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ProgressClientComponent.ProgressClientComponent_C.DebugRequestProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::DebugRequestProgress(class APlayerController* PlayerController, class UObject* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.DebugRequestProgress");

	UProgressClientComponent_C_DebugRequestProgress_Params params;
	params.PlayerController = PlayerController;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnRep_S_IsProgress
// (BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnRep_S_IsProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnRep_S_IsProgress");

	UProgressClientComponent_C_OnRep_S_IsProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.SetUnlockCamera
// (Public, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::SetUnlockCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.SetUnlockCamera");

	UProgressClientComponent_C_SetUnlockCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.SetLockCamera
// (Public, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::SetLockCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.SetLockCamera");

	UProgressClientComponent_C_SetLockCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.IsSkillCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsSkillCheck                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::IsSkillCheck(bool* bIsSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.IsSkillCheck");

	UProgressClientComponent_C_IsSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSkillCheck != nullptr)
		*bIsSkillCheck = params.bIsSkillCheck;

}


// Function ProgressClientComponent.ProgressClientComponent_C.GetProgressIncrement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSProgressInfo          ProgressInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::GetProgressIncrement(const struct FSProgressInfo& ProgressInfo, float DeltaTime, float* progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.GetProgressIncrement");

	UProgressClientComponent_C_GetProgressIncrement_Params params;
	params.ProgressInfo = ProgressInfo;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (progress != nullptr)
		*progress = params.progress;

}


// Function ProgressClientComponent.ProgressClientComponent_C.IsCanProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::IsCanProgress(class UObject* Interaction, bool* CanProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.IsCanProgress");

	UProgressClientComponent_C_IsCanProgress_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanProgress != nullptr)
		*CanProgress = params.CanProgress;

}


// Function ProgressClientComponent.ProgressClientComponent_C.IsProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::IsProgress(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.IsProgress");

	UProgressClientComponent_C_IsProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ProgressClientComponent.ProgressClientComponent_C.PlayGreatSound
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::PlayGreatSound(const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.PlayGreatSound");

	UProgressClientComponent_C_PlayGreatSound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.PlayFailedSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::PlayFailedSound(const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.PlayFailedSound");

	UProgressClientComponent_C_PlayFailedSound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.PlayFinishSound
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::PlayFinishSound(const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.PlayFinishSound");

	UProgressClientComponent_C_PlayFinishSound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.RequestProgress
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DefualtProgressTime            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DefualtSkillCheck              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::RequestProgress(class AActor* Target, float DefualtProgressTime, bool DefualtSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.RequestProgress");

	UProgressClientComponent_C_RequestProgress_Params params;
	params.Target = Target;
	params.DefualtProgressTime = DefualtProgressTime;
	params.DefualtSkillCheck = DefualtSkillCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.RequestProgressHandle
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::RequestProgressHandle(class UObject* Target, float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.RequestProgressHandle");

	UProgressClientComponent_C_RequestProgressHandle_Params params;
	params.Target = Target;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.PlayPerfectSound
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::PlayPerfectSound(const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.PlayPerfectSound");

	UProgressClientComponent_C_PlayPerfectSound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.StopProgress
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WithDecreasePercent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::StopProgress(float WithDecreasePercent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.StopProgress");

	UProgressClientComponent_C_StopProgress_Params params;
	params.WithDecreasePercent = WithDecreasePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.StopProgressHandle
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFinish                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::StopProgressHandle(bool IsFinish, float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.StopProgressHandle");

	UProgressClientComponent_C_StopProgressHandle_Params params;
	params.IsFinish = IsFinish;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.SkillCheckHandle
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::SkillCheckHandle(float Speed, class UObject* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.SkillCheckHandle");

	UProgressClientComponent_C_SkillCheckHandle_Params params;
	params.Speed = Speed;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.FinishProgressHandle
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsLockCamera                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::FinishProgressHandle(bool bIsLockCamera)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.FinishProgressHandle");

	UProgressClientComponent_C_FinishProgressHandle_Params params;
	params.bIsLockCamera = bIsLockCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.CommitResult
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::CommitResult(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.CommitResult");

	UProgressClientComponent_C_CommitResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.CommitResultHandle
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::CommitResultHandle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.CommitResultHandle");

	UProgressClientComponent_C_CommitResultHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.RemoveTargetProgress
// (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UProgressClientComponent_C::RemoveTargetProgress(TArray<class UObject*> Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.RemoveTargetProgress");

	UProgressClientComponent_C_RemoveTargetProgress_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.ServerFinishProgress
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsLockCamera                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::ServerFinishProgress(bool bIsLockCamera)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.ServerFinishProgress");

	UProgressClientComponent_C_ServerFinishProgress_Params params;
	params.bIsLockCamera = bIsLockCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.ServerStopProgress
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsFinish                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::ServerStopProgress(bool bIsFinish)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.ServerStopProgress");

	UProgressClientComponent_C_ServerStopProgress_Params params;
	params.bIsFinish = bIsFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.CannotProgressHandle
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::CannotProgressHandle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.CannotProgressHandle");

	UProgressClientComponent_C_CannotProgressHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.ServerStopMontage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::ServerStopMontage(class ASurvivorBase_C* InputPin)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.ServerStopMontage");

	UProgressClientComponent_C_ServerStopMontage_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.RequestProgressWithObject
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DefualtProgressTime            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DefualtSkillCheck              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressClientComponent_C::RequestProgressWithObject(class UObject* Target, float DefualtProgressTime, bool DefualtSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.RequestProgressWithObject");

	UProgressClientComponent_C_RequestProgressWithObject_Params params;
	params.Target = Target;
	params.DefualtProgressTime = DefualtProgressTime;
	params.DefualtSkillCheck = DefualtSkillCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.SkillCheckClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::SkillCheckClient(float Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.SkillCheckClient");

	UProgressClientComponent_C_SkillCheckClient_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.RequestSkillCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::RequestSkillCheck()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.RequestSkillCheck");

	UProgressClientComponent_C_RequestSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.CheckonDamaged
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::CheckonDamaged(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.CheckonDamaged");

	UProgressClientComponent_C_CheckonDamaged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.RemoveProgressWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsFinish                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::RemoveProgressWidget(bool bIsFinish, float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.RemoveProgressWidget");

	UProgressClientComponent_C_RemoveProgressWidget_Params params;
	params.bIsFinish = bIsFinish;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.RemoveSkillCheck
// (BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::RemoveSkillCheck()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.RemoveSkillCheck");

	UProgressClientComponent_C_RemoveSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnPlayerRequestProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ProgressActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::OnPlayerRequestProgress(class UObject* ProgressActor, float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnPlayerRequestProgress");

	UProgressClientComponent_C_OnPlayerRequestProgress_Params params;
	params.ProgressActor = ProgressActor;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnPlayerStopProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::OnPlayerStopProgress(float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnPlayerStopProgress");

	UProgressClientComponent_C_OnPlayerStopProgress_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UProgressClientComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.ReceiveBeginPlay");

	UProgressClientComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.Initialize
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::Initialize(class APlayerController* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.Initialize");

	UProgressClientComponent_C_Initialize_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.ReceiveTick");

	UProgressClientComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnSnapSucesss
// (BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnSnapSucesss()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnSnapSucesss");

	UProgressClientComponent_C_OnSnapSucesss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.ExecuteUbergraph_ProgressClientComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::ExecuteUbergraph_ProgressClientComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.ExecuteUbergraph_ProgressClientComponent");

	UProgressClientComponent_C_ExecuteUbergraph_ProgressClientComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnStopProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::OnStopProgress__DelegateSignature(float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnStopProgress__DelegateSignature");

	UProgressClientComponent_C_OnStopProgress__DelegateSignature_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnTriggerRitualActivity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ContributePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::OnTriggerRitualActivity__DelegateSignature(float ContributePercent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnTriggerRitualActivity__DelegateSignature");

	UProgressClientComponent_C_OnTriggerRitualActivity__DelegateSignature_Params params;
	params.ContributePercent = ContributePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnCommitSkillCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::OnCommitSkillCheck__DelegateSignature(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnCommitSkillCheck__DelegateSignature");

	UProgressClientComponent_C_OnCommitSkillCheck__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnRequestProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressClientComponent_C::OnRequestProgress__DelegateSignature(class UObject* Target, float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnRequestProgress__DelegateSignature");

	UProgressClientComponent_C_OnRequestProgress__DelegateSignature_Params params;
	params.Target = Target;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnFinishOrCancelProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnFinishOrCancelProgress__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnFinishOrCancelProgress__DelegateSignature");

	UProgressClientComponent_C_OnFinishOrCancelProgress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnFailResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnFailResult__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnFailResult__DelegateSignature");

	UProgressClientComponent_C_OnFailResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnGreatResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnGreatResult__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnGreatResult__DelegateSignature");

	UProgressClientComponent_C_OnGreatResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnPerfectResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnPerfectResult__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnPerfectResult__DelegateSignature");

	UProgressClientComponent_C_OnPerfectResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnUpdateProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnUpdateProgress__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnUpdateProgress__DelegateSignature");

	UProgressClientComponent_C_OnUpdateProgress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnCancelProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnCancelProgress__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnCancelProgress__DelegateSignature");

	UProgressClientComponent_C_OnCancelProgress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressClientComponent.ProgressClientComponent_C.OnFinishProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UProgressClientComponent_C::OnFinishProgress__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressClientComponent.ProgressClientComponent_C.OnFinishProgress__DelegateSignature");

	UProgressClientComponent_C_OnFinishProgress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
