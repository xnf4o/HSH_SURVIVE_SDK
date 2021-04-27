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

// Function AbilityTrapComponent.AbilityTrapComponent_C.IsLockCameraOnFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsLockCameraOnFinish");

	UAbilityTrapComponent_C_IsLockCameraOnFinish_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetFinishSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::GetFinishSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetFinishSection");

	UAbilityTrapComponent_C_GetFinishSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckFailedSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::GetSkilcheckFailedSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckFailedSection");

	UAbilityTrapComponent_C_GetSkilcheckFailedSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckGreatSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::GetSkilcheckGreatSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckGreatSection");

	UAbilityTrapComponent_C_GetSkilcheckGreatSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckPerfectSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::GetSkilcheckPerfectSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetSkilcheckPerfectSection");

	UAbilityTrapComponent_C_GetSkilcheckPerfectSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsForceSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceSkillCheck               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsForceSkillCheck_(bool* bForceSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsForceSkillCheck?");

	UAbilityTrapComponent_C_IsForceSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bForceSkillCheck != nullptr)
		*bForceSkillCheck = params.bForceSkillCheck;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsNotCancelProgressonMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotCancel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsNotCancelProgressonMove(bool* IsNotCancel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsNotCancelProgressonMove");

	UAbilityTrapComponent_C_IsNotCancelProgressonMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNotCancel != nullptr)
		*IsNotCancel = params.IsNotCancel;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.CanUseProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::CanUseProgress(bool* UseProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.CanUseProgress");

	UAbilityTrapComponent_C_CanUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseProgress != nullptr)
		*UseProgress = params.UseProgress;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSpeedSkillCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::GetSpeedSkillCheck(float* Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetSpeedSkillCheck");

	UAbilityTrapComponent_C_GetSpeedSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsResetResult?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReset                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsResetResult_(bool* IsReset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsResetResult?");

	UAbilityTrapComponent_C_IsResetResult__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReset != nullptr)
		*IsReset = params.IsReset;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetProgressTime");

	UAbilityTrapComponent_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsCanHelp?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsCanHelp_(bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsCanHelp?");

	UAbilityTrapComponent_C_IsCanHelp__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsCanSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsImprement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsCanSkillCheck_(bool* IsImprement, bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsCanSkillCheck?");

	UAbilityTrapComponent_C_IsCanSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImprement != nullptr)
		*IsImprement = params.IsImprement;
	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsPlayerProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsPlayerProgress(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsPlayerProgress");

	UAbilityTrapComponent_C_IsPlayerProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.AddedFirstTrapTarget
// (Public, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::AddedFirstTrapTarget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.AddedFirstTrapTarget");

	UAbilityTrapComponent_C_AddedFirstTrapTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.TryGetOwner
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::TryGetOwner(class AHSHCharacterBase** Owner)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.TryGetOwner");

	UAbilityTrapComponent_C_TryGetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawUpdateOneStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      TrapTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::DrawUpdateOneStep(class ATrapTargetActor_C* TrapTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.DrawUpdateOneStep");

	UAbilityTrapComponent_C_DrawUpdateOneStep_Params params;
	params.TrapTarget = TrapTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsShouldHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      TrapTargetActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsShouldHide                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsShouldHide(class ATrapTargetActor_C* TrapTargetActor, bool* bIsShouldHide)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsShouldHide");

	UAbilityTrapComponent_C_IsShouldHide_Params params;
	params.TrapTargetActor = TrapTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsShouldHide != nullptr)
		*bIsShouldHide = params.bIsShouldHide;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ResetTrapTargetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      TrapTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::ResetTrapTargetMaterial(class ATrapTargetActor_C* TrapTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ResetTrapTargetMaterial");

	UAbilityTrapComponent_C_ResetTrapTargetMaterial_Params params;
	params.TrapTarget = TrapTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetSectionStep
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Section                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::GetSectionStep(int Step, struct FName* Section)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetSectionStep");

	UAbilityTrapComponent_C_GetSectionStep_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Section != nullptr)
		*Section = params.Section;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.FindHightValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InVec2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAbilityTrapComponent_C::FindHightValue(const struct FVector& InVec, const struct FVector& InVec2)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.FindHightValue");

	UAbilityTrapComponent_C_FindHightValue_Params params;
	params.InVec = InVec;
	params.InVec2 = InVec2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawTargetMeshViewWithDistance
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      TrapTarget                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::DrawTargetMeshViewWithDistance(class ATrapTargetActor_C* TrapTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.DrawTargetMeshViewWithDistance");

	UAbilityTrapComponent_C_DrawTargetMeshViewWithDistance_Params params;
	params.TrapTarget = TrapTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawTargetMeshViewWithTrace
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::DrawTargetMeshViewWithTrace(const struct FHitResult& Hit, bool Condition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.DrawTargetMeshViewWithTrace");

	UAbilityTrapComponent_C_DrawTargetMeshViewWithTrace_Params params;
	params.Hit = Hit;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.HidePreviewCompleteMeshView
// (Public, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::HidePreviewCompleteMeshView()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.HidePreviewCompleteMeshView");

	UAbilityTrapComponent_C_HidePreviewCompleteMeshView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawPreviewCompleteMeshView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::DrawPreviewCompleteMeshView(class ATrapTargetActor_C* TargetActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.DrawPreviewCompleteMeshView");

	UAbilityTrapComponent_C_DrawPreviewCompleteMeshView_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsOutOfRange?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATrapTargetActor_C*      TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OutOfRange_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  PairTargetActor                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::IsOutOfRange_(class ATrapTargetActor_C* TargetActor, bool* OutOfRange_, class AActor** PairTargetActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsOutOfRange?");

	UAbilityTrapComponent_C_IsOutOfRange__Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOfRange_ != nullptr)
		*OutOfRange_ = params.OutOfRange_;
	if (PairTargetActor != nullptr)
		*PairTargetActor = params.PairTargetActor;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.CanPlaceTrapWithNearTarget?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATrapTargetActor_C*      TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATrapTargetActor_C*      PairTargetActor                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::CanPlaceTrapWithNearTarget_(class ATrapTargetActor_C* TargetActor, bool* Can_, class ATrapTargetActor_C** PairTargetActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.CanPlaceTrapWithNearTarget?");

	UAbilityTrapComponent_C_CanPlaceTrapWithNearTarget__Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;
	if (PairTargetActor != nullptr)
		*PairTargetActor = params.PairTargetActor;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.IsOwnerMoving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMoving_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::IsOwnerMoving(bool* IsMoving_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.IsOwnerMoving");

	UAbilityTrapComponent_C_IsOwnerMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsMoving_ != nullptr)
		*IsMoving_ = params.IsMoving_;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.HidePreviewMeshView
// (Private, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::HidePreviewMeshView()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.HidePreviewMeshView");

	UAbilityTrapComponent_C_HidePreviewMeshView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.SpawnPreviewMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APreviewMeshActor_C*     Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::SpawnPreviewMesh(const struct FTransform& SpawnTransform, class AActor* Owner, class UStaticMesh* NewMesh, class APreviewMeshActor_C** Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.SpawnPreviewMesh");

	UAbilityTrapComponent_C_SpawnPreviewMesh_Params params;
	params.SpawnTransform = SpawnTransform;
	params.Owner = Owner;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.PlaceTrapToTarget
// (Public, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::PlaceTrapToTarget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.PlaceTrapToTarget");

	UAbilityTrapComponent_C_PlaceTrapToTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.CanPlaceTrapWithLineTrace?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult              TraceHit                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                  TargetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  TargetActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::CanPlaceTrapWithLineTrace_(const struct FHitResult& TraceHit, bool IsHit, class UClass* TargetClass, bool* Can_, class AActor** TargetActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.CanPlaceTrapWithLineTrace?");

	UAbilityTrapComponent_C_CanPlaceTrapWithLineTrace__Params params;
	params.TraceHit = TraceHit;
	params.IsHit = IsHit;
	params.TargetClass = TargetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;
	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.UpdateLineTraceInfomation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilityTrapComponent_C::UpdateLineTraceInfomation(struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.UpdateLineTraceInfomation");

	UAbilityTrapComponent_C_UpdateLineTraceInfomation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetPlayerLocation
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UAbilityTrapComponent_C::GetPlayerLocation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetPlayerLocation");

	UAbilityTrapComponent_C_GetPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AbilityTrapComponent.AbilityTrapComponent_C.GetFloorLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 FloorVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::GetFloorLocation(const struct FHitResult& Hit, bool Condition, struct FVector* FloorVector, struct FRotator* Rotator)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.GetFloorLocation");

	UAbilityTrapComponent_C_GetFloorLocation_Params params;
	params.Hit = Hit;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloorVector != nullptr)
		*FloorVector = params.FloorVector;
	if (Rotator != nullptr)
		*Rotator = params.Rotator;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.DrawPreviewMeshView
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::DrawPreviewMeshView(const struct FHitResult& Hit, bool Condition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.DrawPreviewMeshView");

	UAbilityTrapComponent_C_DrawPreviewMeshView_Params params;
	params.Hit = Hit;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.UpdateComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::UpdateComponent(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.UpdateComponent");

	UAbilityTrapComponent_C_UpdateComponent_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.DeactivateAbilityComponent
// (Public, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::DeactivateAbilityComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.DeactivateAbilityComponent");

	UAbilityTrapComponent_C_DeactivateAbilityComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ActivateAbilityComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             PreviewMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             PreviewCompleteMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxCasting                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bTwoStep                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bOneStepWithProgress           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bSnapHeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsCanSkillCheck               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTrapComponent_C::ActivateAbilityComponent(int Count, class UStaticMesh* PreviewMesh, class UStaticMesh* PreviewCompleteMesh, class AActor* Owner, float MaxCasting, bool bTwoStep, bool bOneStepWithProgress, bool bSnapHeight, bool bIsCanSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ActivateAbilityComponent");

	UAbilityTrapComponent_C_ActivateAbilityComponent_Params params;
	params.Count = Count;
	params.PreviewMesh = PreviewMesh;
	params.PreviewCompleteMesh = PreviewCompleteMesh;
	params.Owner = Owner;
	params.MaxCasting = MaxCasting;
	params.bTwoStep = bTwoStep;
	params.bOneStepWithProgress = bOneStepWithProgress;
	params.bSnapHeight = bSnapHeight;
	params.bIsCanSkillCheck = bIsCanSkillCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnCannotProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::OnCannotProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnCannotProgress");

	UAbilityTrapComponent_C_OnCannotProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnStartProgressAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::OnStartProgressAction(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnStartProgressAction");

	UAbilityTrapComponent_C_OnStartProgressAction_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.EnableTargetOutline
// (BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::EnableTargetOutline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.EnableTargetOutline");

	UAbilityTrapComponent_C_EnableTargetOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientDisableTargetOutline
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::ClientDisableTargetOutline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ClientDisableTargetOutline");

	UAbilityTrapComponent_C_ClientDisableTargetOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientUpdateTargetOutline
// (BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::ClientUpdateTargetOutline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ClientUpdateTargetOutline");

	UAbilityTrapComponent_C_ClientUpdateTargetOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientEnableTargetOutline
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::ClientEnableTargetOutline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ClientEnableTargetOutline");

	UAbilityTrapComponent_C_ClientEnableTargetOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.DisableTargetOutline
// (BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::DisableTargetOutline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.DisableTargetOutline");

	UAbilityTrapComponent_C_DisableTargetOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.SpawnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::SpawnActor(class AActor* Owner, class UStaticMesh* NewMesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.SpawnActor");

	UAbilityTrapComponent_C_SpawnActor_Params params;
	params.Owner = Owner;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ServerJumpToMontage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::ServerJumpToMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ServerJumpToMontage");

	UAbilityTrapComponent_C_ServerJumpToMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.MulticastJumpToMontage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::MulticastJumpToMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.MulticastJumpToMontage");

	UAbilityTrapComponent_C_MulticastJumpToMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ServerCount
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::ServerCount()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ServerCount");

	UAbilityTrapComponent_C_ServerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.CancelProgress
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::CancelProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.CancelProgress");

	UAbilityTrapComponent_C_CancelProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ServerStopMovement
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::ServerStopMovement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ServerStopMovement");

	UAbilityTrapComponent_C_ServerStopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.MulticastStopMovement
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::MulticastStopMovement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.MulticastStopMovement");

	UAbilityTrapComponent_C_MulticastStopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ReceiveTick");

	UAbilityTrapComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.UseAbilityComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::UseAbilityComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.UseAbilityComponent");

	UAbilityTrapComponent_C_UseAbilityComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.EndAnimationNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   ContainGameplayTags            (BlueprintVisible, BlueprintReadOnly, Parm)
void UAbilityTrapComponent_C::EndAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.EndAnimationNotify");

	UAbilityTrapComponent_C_EndAnimationNotify_Params params;
	params.ContainGameplayTags = ContainGameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.BeginAnimationNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   ContainGameplayTags            (BlueprintVisible, BlueprintReadOnly, Parm)
void UAbilityTrapComponent_C::BeginAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.BeginAnimationNotify");

	UAbilityTrapComponent_C_BeginAnimationNotify_Params params;
	params.ContainGameplayTags = ContainGameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnProgressFinish_Event
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::OnProgressFinish_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnProgressFinish_Event");

	UAbilityTrapComponent_C_OnProgressFinish_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientDestroyPreview
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::ClientDestroyPreview()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ClientDestroyPreview");

	UAbilityTrapComponent_C_ClientDestroyPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnFinishProgress");

	UAbilityTrapComponent_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ClearTraceTargetActor
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::ClearTraceTargetActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ClearTraceTargetActor");

	UAbilityTrapComponent_C_ClearTraceTargetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnStopProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::OnStopProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnStopProgress");

	UAbilityTrapComponent_C_OnStopProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ClientStopMovement
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::ClientStopMovement(class ACharacter* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ClientStopMovement");

	UAbilityTrapComponent_C_ClientStopMovement_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnCommitSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnCommitSkillCheck");

	UAbilityTrapComponent_C_OnCommitSkillCheck_Params params;
	params.Result = Result;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ForcePlaceTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrapTargetActor_C*      TrapActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::ForcePlaceTrap(class ATrapTargetActor_C* TrapActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ForcePlaceTrap");

	UAbilityTrapComponent_C_ForcePlaceTrap_Params params;
	params.TrapActor = TrapActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.ExecuteUbergraph_AbilityTrapComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTrapComponent_C::ExecuteUbergraph_AbilityTrapComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.ExecuteUbergraph_AbilityTrapComponent");

	UAbilityTrapComponent_C_ExecuteUbergraph_AbilityTrapComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnTrapTargetUpdateList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::OnTrapTargetUpdateList__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnTrapTargetUpdateList__DelegateSignature");

	UAbilityTrapComponent_C_OnTrapTargetUpdateList__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityTrapComponent.AbilityTrapComponent_C.OnProgressFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UAbilityTrapComponent_C::OnProgressFinish__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AbilityTrapComponent.AbilityTrapComponent_C.OnProgressFinish__DelegateSignature");

	UAbilityTrapComponent_C_OnProgressFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
