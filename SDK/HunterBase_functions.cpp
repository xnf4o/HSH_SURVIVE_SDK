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

// Function HunterBase.HunterBase_C.GetCurrentPickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CurrentPickable                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetCurrentPickable(struct FS_Pickable* CurrentPickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetCurrentPickable");

	AHunterBase_C_GetCurrentPickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickable != nullptr)
		*CurrentPickable = params.CurrentPickable;

}


// Function HunterBase.HunterBase_C.GetExecuteCameraTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void AHunterBase_C::GetExecuteCameraTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetExecuteCameraTransform");

	AHunterBase_C_GetExecuteCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.isExecution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::isExecution(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.isExecution");

	AHunterBase_C_isExecution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.GetAimTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void AHunterBase_C::GetAimTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetAimTransform");

	AHunterBase_C_GetAimTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.IsHaveSpawnPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHave                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   Tag                            (Parm, OutParm)
void AHunterBase_C::IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsHaveSpawnPerk");

	AHunterBase_C_IsHaveSpawnPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsHave != nullptr)
		*bIsHave = params.bIsHave;
	if (Tag != nullptr)
		*Tag = params.Tag;

}


// Function HunterBase.HunterBase_C.GetCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetCharacterID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetCharacterID");

	AHunterBase_C_GetCharacterID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function HunterBase.HunterBase_C.NotifyFootStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.NotifyFootStep");

	AHunterBase_C_NotifyFootStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
	if (VolumeMultiplier != nullptr)
		*VolumeMultiplier = params.VolumeMultiplier;
	if (AttenuationSettings != nullptr)
		*AttenuationSettings = params.AttenuationSettings;

}


// Function HunterBase.HunterBase_C.GetCurrentItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetCurrentItemID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetCurrentItemID");

	AHunterBase_C_GetCurrentItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function HunterBase.HunterBase_C.GetMainCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetMainCameraComponent(class UCameraComponent** CameraComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetMainCameraComponent");

	AHunterBase_C_GetMainCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;

}


// Function HunterBase.HunterBase_C.IsLockCameraOnFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsLockCameraOnFinish");

	AHunterBase_C_IsLockCameraOnFinish_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.GetFinishSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetFinishSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetFinishSection");

	AHunterBase_C_GetFinishSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.GetSkilcheckFailedSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetSkilcheckFailedSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetSkilcheckFailedSection");

	AHunterBase_C_GetSkilcheckFailedSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.GetSkilcheckGreatSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetSkilcheckGreatSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetSkilcheckGreatSection");

	AHunterBase_C_GetSkilcheckGreatSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.GetSkilcheckPerfectSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetSkilcheckPerfectSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetSkilcheckPerfectSection");

	AHunterBase_C_GetSkilcheckPerfectSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.IsForceSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceSkillCheck               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsForceSkillCheck_(bool* bForceSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsForceSkillCheck?");

	AHunterBase_C_IsForceSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bForceSkillCheck != nullptr)
		*bForceSkillCheck = params.bForceSkillCheck;

}


// Function HunterBase.HunterBase_C.IsNotCancelProgressonMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotCancel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsNotCancelProgressonMove(bool* IsNotCancel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsNotCancelProgressonMove");

	AHunterBase_C_IsNotCancelProgressonMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNotCancel != nullptr)
		*IsNotCancel = params.IsNotCancel;

}


// Function HunterBase.HunterBase_C.CanUseProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::CanUseProgress(bool* UseProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CanUseProgress");

	AHunterBase_C_CanUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseProgress != nullptr)
		*UseProgress = params.UseProgress;

}


// Function HunterBase.HunterBase_C.GetSpeedSkillCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetSpeedSkillCheck(float* Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetSpeedSkillCheck");

	AHunterBase_C_GetSpeedSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;

}


// Function HunterBase.HunterBase_C.IsResetResult?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReset                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsResetResult_(bool* IsReset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsResetResult?");

	AHunterBase_C_IsResetResult__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReset != nullptr)
		*IsReset = params.IsReset;

}


// Function HunterBase.HunterBase_C.IsCanSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsImprement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsCanSkillCheck_(bool* IsImprement, bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsCanSkillCheck?");

	AHunterBase_C_IsCanSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImprement != nullptr)
		*IsImprement = params.IsImprement;
	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function HunterBase.HunterBase_C.IsCanHelp?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsCanHelp_(bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsCanHelp?");

	AHunterBase_C_IsCanHelp__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function HunterBase.HunterBase_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetProgressTime");

	AHunterBase_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


// Function HunterBase.HunterBase_C.CheckPlayerInCrossHair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCamera                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::CheckPlayerInCrossHair(bool* InCamera)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CheckPlayerInCrossHair");

	AHunterBase_C_CheckPlayerInCrossHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InCamera != nullptr)
		*InCamera = params.InCamera;

}


// Function HunterBase.HunterBase_C.OnRep_CollisionMovement
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnRep_CollisionMovement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnRep_CollisionMovement");

	AHunterBase_C_OnRep_CollisionMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InitBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::InitBack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InitBack");

	AHunterBase_C_InitBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InitHead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::InitHead()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InitHead");

	AHunterBase_C_InitHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.IsGameStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsGameStarted()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsGameStarted");

	AHunterBase_C_IsGameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.ApplyDeleySpecter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ApplyDeleySpecter(float DelayDuration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ApplyDeleySpecter");

	AHunterBase_C_ApplyDeleySpecter_Params params;
	params.DelayDuration = DelayDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.GetReachRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReachRange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetReachRange(float* ReachRange)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetReachRange");

	AHunterBase_C_GetReachRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReachRange != nullptr)
		*ReachRange = params.ReachRange;

}


// Function HunterBase.HunterBase_C.SetMaterialsAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SetMaterialsAlpha(float ParameterValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetMaterialsAlpha");

	AHunterBase_C_SetMaterialsAlpha_Params params;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SetMaterialsColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InLinearColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SetMaterialsColor(const struct FLinearColor& InLinearColor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetMaterialsColor");

	AHunterBase_C_SetMaterialsColor_Params params;
	params.InLinearColor = InLinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.GetScanTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AHunterBase_C::GetScanTime()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetScanTime");

	AHunterBase_C_GetScanTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsHaveAnyAxis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsHaveAnyAxis()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsHaveAnyAxis");

	AHunterBase_C_IsHaveAnyAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsStunned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsStunned()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsStunned");

	AHunterBase_C_IsStunned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.OnRep_MoveSpeed
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnRep_MoveSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnRep_MoveSpeed");

	AHunterBase_C_OnRep_MoveSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CheckingInitStartGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::CheckingInitStartGame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CheckingInitStartGame");

	AHunterBase_C_CheckingInitStartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.GetSurvivorNearestDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterSurvivorBase* NearSurvivor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetSurvivorNearestDistance(float* Return, class AHSHCharacterSurvivorBase** NearSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetSurvivorNearestDistance");

	AHunterBase_C_GetSurvivorNearestDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (NearSurvivor != nullptr)
		*NearSurvivor = params.NearSurvivor;

}


// Function HunterBase.HunterBase_C.CheckDelaySpecter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DelayDuration                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::CheckDelaySpecter(float Distance, float* DelayDuration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CheckDelaySpecter");

	AHunterBase_C_CheckDelaySpecter_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DelayDuration != nullptr)
		*DelayDuration = params.DelayDuration;

}


// Function HunterBase.HunterBase_C.GetExecutionSpecterComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UExecutionSpecterComponent_C* ExecutionSpecterComponent      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetExecutionSpecterComponent(class UExecutionSpecterComponent_C** ExecutionSpecterComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetExecutionSpecterComponent");

	AHunterBase_C_GetExecutionSpecterComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExecutionSpecterComponent != nullptr)
		*ExecutionSpecterComponent = params.ExecutionSpecterComponent;

}


// Function HunterBase.HunterBase_C.GetOptionSensitivity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Sensitivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetOptionSensitivity(float* Sensitivity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetOptionSensitivity");

	AHunterBase_C_GetOptionSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;

}


// Function HunterBase.HunterBase_C.GetCheckHoldRight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::GetCheckHoldRight()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetCheckHoldRight");

	AHunterBase_C_GetCheckHoldRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.GetCheckHoldForward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::GetCheckHoldForward()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetCheckHoldForward");

	AHunterBase_C_GetCheckHoldForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsInExecution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsExecution                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsInExecution(bool* bIsExecution)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsInExecution");

	AHunterBase_C_IsInExecution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsExecution != nullptr)
		*bIsExecution = params.bIsExecution;

}


// Function HunterBase.HunterBase_C.OnTrapDamged
// (Public, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnTrapDamged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnTrapDamged");

	AHunterBase_C_OnTrapDamged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.IsBlockKeys
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsBlockKeys(const struct FKey& Key, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockKeys");

	AHunterBase_C_IsBlockKeys_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.IsBlockAction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::IsBlockAction(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockAction");

	AHunterBase_C_IsBlockAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HunterBase.HunterBase_C.PlayAttackHitAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InPlayRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AHunterBase_C::PlayAttackHitAnimation(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PlayAttackHitAnimation");

	AHunterBase_C_PlayAttackHitAnimation_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.LockHiddenModeButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::LockHiddenModeButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.LockHiddenModeButton");

	AHunterBase_C_LockHiddenModeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.UnlockHiddenModeButton
// (Public, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::UnlockHiddenModeButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.UnlockHiddenModeButton");

	AHunterBase_C_UnlockHiddenModeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SetBodyHalfHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SetBodyHalfHeight(float ParameterValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetBodyHalfHeight");

	AHunterBase_C_SetBodyHalfHeight_Params params;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.NextHunterRitualState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::NextHunterRitualState(int* State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.NextHunterRitualState");

	AHunterBase_C_NextHunterRitualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function HunterBase.HunterBase_C.GetHunterRitualState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetHunterRitualState(int* State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetHunterRitualState");

	AHunterBase_C_GetHunterRitualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function HunterBase.HunterBase_C.CommitSpecterCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::CommitSpecterCooldown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CommitSpecterCooldown");

	AHunterBase_C_CommitSpecterCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.GetSpecterCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::GetSpecterCooldown(float* TimeRemaining, float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetSpecterCooldown");

	AHunterBase_C_GetSpecterCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
	if (Duration != nullptr)
		*Duration = params.Duration;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsBlockMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsBlockMove()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockMove");

	AHunterBase_C_IsBlockMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsBlockSpecter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsBlockSpecter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockSpecter");

	AHunterBase_C_IsBlockSpecter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsInStun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsInStun()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsInStun");

	AHunterBase_C_IsInStun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsInSpecter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsInSpecter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsInSpecter");

	AHunterBase_C_IsInSpecter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.SurvivorInRange
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bInRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::SurvivorInRange(float Distance, bool* bInRange)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SurvivorInRange");

	AHunterBase_C_SurvivorInRange_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bInRange != nullptr)
		*bInRange = params.bInRange;

}


// Function HunterBase.HunterBase_C.GetFootStepSound
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FootStepHunter       Out_Row                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetFootStepSound(struct FS_FootStepHunter* Out_Row)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetFootStepSound");

	AHunterBase_C_GetFootStepSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;

}


// Function HunterBase.HunterBase_C.FindFlood
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
bool AHunterBase_C::FindFlood(struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.FindFlood");

	AHunterBase_C_FindFlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsBlockAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsBlockAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockAttack");

	AHunterBase_C_IsBlockAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.DebugBellePortal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::DebugBellePortal()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DebugBellePortal");

	AHunterBase_C_DebugBellePortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.IsBlockActivePerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsBlockActivePerk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockActivePerk");

	AHunterBase_C_IsBlockActivePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsBlockScan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsBlockScan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockScan");

	AHunterBase_C_IsBlockScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsBlockTeleport
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsBlockTeleport()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsBlockTeleport");

	AHunterBase_C_IsBlockTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.IsActiveAbilitiesWithTags
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   AbilityTags                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHunterBase_C::IsActiveAbilitiesWithTags(const struct FGameplayTagContainer& AbilityTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.IsActiveAbilitiesWithTags");

	AHunterBase_C_IsActiveAbilitiesWithTags_Params params;
	params.AbilityTags = AbilityTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterBase.HunterBase_C.CheckDoorDestroyable
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isCanDestroy_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::CheckDoorDestroyable(class AActor* Actor, bool* isCanDestroy_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CheckDoorDestroyable");

	AHunterBase_C_CheckDoorDestroyable_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isCanDestroy_ != nullptr)
		*isCanDestroy_ = params.isCanDestroy_;

}


// Function HunterBase.HunterBase_C.OnHitReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnHitReaction(class UAnimMontage* AnimMontage, TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnHitReaction");

	AHunterBase_C_OnHitReaction_Params params;
	params.AnimMontage = AnimMontage;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.DebugHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InBool                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::DebugHealth(float Dmg, bool InBool)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DebugHealth");

	AHunterBase_C_DebugHealth_Params params;
	params.Dmg = Dmg;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ResetAttackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AndSendToServer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::ResetAttackState(bool AndSendToServer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ResetAttackState");

	AHunterBase_C_ResetAttackState_Params params;
	params.AndSendToServer = AndSendToServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.AddInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FHSHItemSlot, class UHSHItem*> Inventory                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FHSHItemSlot            Slot                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UHSHItem*                NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FHSHItemSlot, class UHSHItem*> TestInventory                  (ConstParm, Parm, OutParm, ZeroConstructor)
void AHunterBase_C::AddInventory(TMap<struct FHSHItemSlot, class UHSHItem*> Inventory, const struct FHSHItemSlot& Slot, class UHSHItem* NewItem, TMap<struct FHSHItemSlot, class UHSHItem*> TestInventory)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.AddInventory");

	AHunterBase_C_AddInventory_Params params;
	params.Inventory = Inventory;
	params.Slot = Slot;
	params.NewItem = NewItem;
	params.TestInventory = TestInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.GetHeavyAtkGE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  GameplayEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::GetHeavyAtkGE(class UClass** GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GetHeavyAtkGE");

	AHunterBase_C_GetHeavyAtkGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayEffect != nullptr)
		*GameplayEffect = params.GameplayEffect;

}


// Function HunterBase.HunterBase_C.StopMontage
// (Public, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::StopMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.StopMontage");

	AHunterBase_C_StopMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnAttackCollisionOverlap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnAttackCollisionOverlap(class AActor* OtherActor, const struct FGameplayTag& EventTag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnAttackCollisionOverlap");

	AHunterBase_C_OnAttackCollisionOverlap_Params params;
	params.OtherActor = OtherActor;
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.UserConstructionScript");

	AHunterBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_Bodyfade__FinishedFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_Bodyfade__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_Bodyfade__FinishedFunc");

	AHunterBase_C_Timeline_Bodyfade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_Bodyfade__UpdateFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_Bodyfade__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_Bodyfade__UpdateFunc");

	AHunterBase_C_Timeline_Bodyfade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OuterShield__FinishedFunc
// (BlueprintEvent)
void AHunterBase_C::OuterShield__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OuterShield__FinishedFunc");

	AHunterBase_C_OuterShield__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OuterShield__UpdateFunc
// (BlueprintEvent)
void AHunterBase_C::OuterShield__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OuterShield__UpdateFunc");

	AHunterBase_C_OuterShield__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_0__FinishedFunc");

	AHunterBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_0__UpdateFunc");

	AHunterBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_SlowAnimation__FinishedFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_SlowAnimation__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_SlowAnimation__FinishedFunc");

	AHunterBase_C_Timeline_SlowAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_SlowAnimation__UpdateFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_SlowAnimation__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_SlowAnimation__UpdateFunc");

	AHunterBase_C_Timeline_SlowAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.LookAtCrosshairTimeline__FinishedFunc
// (BlueprintEvent)
void AHunterBase_C::LookAtCrosshairTimeline__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.LookAtCrosshairTimeline__FinishedFunc");

	AHunterBase_C_LookAtCrosshairTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.LookAtCrosshairTimeline__UpdateFunc
// (BlueprintEvent)
void AHunterBase_C::LookAtCrosshairTimeline__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.LookAtCrosshairTimeline__UpdateFunc");

	AHunterBase_C_LookAtCrosshairTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_Camera__FinishedFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_Camera__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_Camera__FinishedFunc");

	AHunterBase_C_Timeline_Camera__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_Camera__UpdateFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_Camera__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_Camera__UpdateFunc");

	AHunterBase_C_Timeline_Camera__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_FOV__FinishedFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_FOV__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_FOV__FinishedFunc");

	AHunterBase_C_Timeline_FOV__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Timeline_FOV__UpdateFunc
// (BlueprintEvent)
void AHunterBase_C::Timeline_FOV__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Timeline_FOV__UpdateFunc");

	AHunterBase_C_Timeline_FOV__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Scan_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHunterBase_C::InpActEvt_Hunter_Scan_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpActEvt_Hunter_Scan_K2Node_InputActionEvent_5");

	AHunterBase_C_InpActEvt_Hunter_Scan_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpTchEvt_Moved
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<InputCore_ETouchIndex> FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpTchEvt_Moved(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpTchEvt_Moved");

	AHunterBase_C_InpTchEvt_Moved_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<InputCore_ETouchIndex> FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpTchEvt_Released(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpTchEvt_Released");

	AHunterBase_C_InpTchEvt_Released_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<InputCore_ETouchIndex> FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpTchEvt_Pressed(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpTchEvt_Pressed");

	AHunterBase_C_InpTchEvt_Pressed_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpActEvt_Hunter_ActivatePerk_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHunterBase_C::InpActEvt_Hunter_ActivatePerk_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpActEvt_Hunter_ActivatePerk_K2Node_InputActionEvent_4");

	AHunterBase_C_InpActEvt_Hunter_ActivatePerk_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Attack_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHunterBase_C::InpActEvt_Hunter_Attack_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpActEvt_Hunter_Attack_K2Node_InputActionEvent_3");

	AHunterBase_C_InpActEvt_Hunter_Attack_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Immunity_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHunterBase_C::InpActEvt_Hunter_Immunity_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpActEvt_Hunter_Immunity_K2Node_InputActionEvent_2");

	AHunterBase_C_InpActEvt_Hunter_Immunity_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpActEvt_Hunter_Interact_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHunterBase_C::InpActEvt_Hunter_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpActEvt_Hunter_Interact_K2Node_InputActionEvent_1");

	AHunterBase_C_InpActEvt_Hunter_Interact_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHunterBase_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1");

	AHunterBase_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.HideAccessory
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::HideAccessory(bool Hide)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.HideAccessory");

	AHunterBase_C_HideAccessory_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientAddDesignEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 eventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHunterBase_C::ClientAddDesignEvent(const struct FString& eventId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientAddDesignEvent");

	AHunterBase_C_ClientAddDesignEvent_Params params;
	params.eventId = eventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientAddDesignEventWithValue
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 eventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ClientAddDesignEventWithValue(const struct FString& eventId, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientAddDesignEventWithValue");

	AHunterBase_C_ClientAddDesignEventWithValue_Params params;
	params.eventId = eventId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ChangeCameraSide
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ChangeCameraSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ChangeCameraSide");

	AHunterBase_C_ChangeCameraSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastChangeCameraSide
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::MulticastChangeCameraSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastChangeCameraSide");

	AHunterBase_C_MulticastChangeCameraSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.BndEvt__BloodSeekComponent_K2Node_ComponentBoundEvent_1_EventDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Stack                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OldStack                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::BndEvt__BloodSeekComponent_K2Node_ComponentBoundEvent_1_EventDelegate__DelegateSignature(int Stack, int OldStack)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.BndEvt__BloodSeekComponent_K2Node_ComponentBoundEvent_1_EventDelegate__DelegateSignature");

	AHunterBase_C_BndEvt__BloodSeekComponent_K2Node_ComponentBoundEvent_1_EventDelegate__DelegateSignature_Params params;
	params.Stack = Stack;
	params.OldStack = OldStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerUpdateSpeed
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxWalkSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ServerUpdateSpeed(float MaxWalkSpeed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerUpdateSpeed");

	AHunterBase_C_ServerUpdateSpeed_Params params;
	params.MaxWalkSpeed = MaxWalkSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastActivateBloodseek
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Stack                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StackOld                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::MulticastActivateBloodseek(bool Activate, int Stack, int StackOld)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastActivateBloodseek");

	AHunterBase_C_MulticastActivateBloodseek_Params params;
	params.Activate = Activate;
	params.Stack = Stack;
	params.StackOld = StackOld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnAttributeChange
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnAttributeChange(const struct FGameplayAttribute& Attribute, float NewValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnAttributeChange");

	AHunterBase_C_OnAttributeChange_Params params;
	params.Attribute = Attribute;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnPostGameplayEffectExecute
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   EventTags                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AHunterBase_C::OnPostGameplayEffectExecute(const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnPostGameplayEffectExecute");

	AHunterBase_C_OnPostGameplayEffectExecute_Params params;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SetBodyTranslucent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::SetBodyTranslucent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetBodyTranslucent");

	AHunterBase_C_SetBodyTranslucent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientEnableDissolve
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ClientEnableDissolve()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientEnableDissolve");

	AHunterBase_C_ClientEnableDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnGameplayEffectApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void AHunterBase_C::OnGameplayEffectApply(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnGameplayEffectApply");

	AHunterBase_C_OnGameplayEffectApply_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientReceiveGameplayEffectApply
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
void AHunterBase_C::ClientReceiveGameplayEffectApply(const struct FGameplayTagContainer& GameplayTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientReceiveGameplayEffectApply");

	AHunterBase_C_ClientReceiveGameplayEffectApply_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SendOnGameplayEffectApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void AHunterBase_C::SendOnGameplayEffectApply(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SendOnGameplayEffectApply");

	AHunterBase_C_SendOnGameplayEffectApply_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SpawnSmokeAtHunterLocation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::SpawnSmokeAtHunterLocation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SpawnSmokeAtHunterLocation");

	AHunterBase_C_SpawnSmokeAtHunterLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.BodyfadeForceExit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::BodyfadeForceExit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.BodyfadeForceExit");

	AHunterBase_C_BodyfadeForceExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnEyesightChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   EventTags                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AHunterBase_C::OnEyesightChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnEyesightChanged");

	AHunterBase_C_OnEyesightChanged_Params params;
	params.DeltaValue = DeltaValue;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EnableFogManager
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::EnableFogManager()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EnableFogManager");

	AHunterBase_C_EnableFogManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.UpdateFogManager
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::UpdateFogManager()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.UpdateFogManager");

	AHunterBase_C_UpdateFogManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHunterBase_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ReceiveBeginPlay");

	AHunterBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ReceivePossessed");

	AHunterBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Death
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::Death()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Death");

	AHunterBase_C_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Bodyfade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::Bodyfade(bool Active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Bodyfade");

	AHunterBase_C_Bodyfade_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EnableInteraction
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::EnableInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EnableInteraction");

	AHunterBase_C_EnableInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EnableDissolveEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::EnableDissolveEffect(bool bIsEnable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EnableDissolveEffect");

	AHunterBase_C_EnableDissolveEffect_Params params;
	params.bIsEnable = bIsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EnableOutlineComponent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::EnableOutlineComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EnableOutlineComponent");

	AHunterBase_C_EnableOutlineComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnExecutionSuccess
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnExecutionSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnExecutionSuccess");

	AHunterBase_C_OnExecutionSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SetMaterialsEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SetMaterialsEffect(float Alpha, const struct FLinearColor& Color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetMaterialsEffect");

	AHunterBase_C_SetMaterialsEffect_Params params;
	params.Alpha = Alpha;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.StartGameCooldown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::StartGameCooldown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.StartGameCooldown");

	AHunterBase_C_StartGameCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AHunterBase_C::BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AHunterBase_C_BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	AHunterBase_C_BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ItemOutline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ItemOutline(class AActor* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ItemOutline");

	AHunterBase_C_ItemOutline_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.DeleteOutline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::DeleteOutline(class AActor* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DeleteOutline");

	AHunterBase_C_DeleteOutline_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EnableChaseAudioComponent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::EnableChaseAudioComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EnableChaseAudioComponent");

	AHunterBase_C_EnableChaseAudioComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.UpdateHunterCrosshair
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::UpdateHunterCrosshair()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.UpdateHunterCrosshair");

	AHunterBase_C_UpdateHunterCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnStartProgressAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnStartProgressAction(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnStartProgressAction");

	AHunterBase_C_OnStartProgressAction_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnCommitSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnCommitSkillCheck");

	AHunterBase_C_OnCommitSkillCheck_Params params;
	params.Result = Result;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ReceiveUnpossessed");

	AHunterBase_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnCannotProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnCannotProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnCannotProgress");

	AHunterBase_C_OnCannotProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnStopProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnStopProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnStopProgress");

	AHunterBase_C_OnStopProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnFinishProgress");

	AHunterBase_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnUseActivePerk
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnUseActivePerk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnUseActivePerk");

	AHunterBase_C_OnUseActivePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceJumpCurrentMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ForceJumpCurrentMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceJumpCurrentMontage");

	AHunterBase_C_ForceJumpCurrentMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerPlayAudio
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ServerPlayAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerPlayAudio");

	AHunterBase_C_ServerPlayAudio_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::MulticastAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastAudio");

	AHunterBase_C_MulticastAudio_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.TryPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.TryPlayMontage");

	AHunterBase_C_TryPlayMontage_Params params;
	params.Montage = Montage;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAttachCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PlaySound");

	AHunterBase_C_PlaySound_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;
	params.bAttachCharacter = bAttachCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerPlayAudioOnCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ServerPlayAudioOnCharacter(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerPlayAudioOnCharacter");

	AHunterBase_C_ServerPlayAudioOnCharacter_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastAudioOnCharacter
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::MulticastAudioOnCharacter(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastAudioOnCharacter");

	AHunterBase_C_MulticastAudioOnCharacter_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastStateLoopSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::MulticastStateLoopSound(bool Play)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastStateLoopSound");

	AHunterBase_C_MulticastStateLoopSound_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastGetHitSFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::MulticastGetHitSFX()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastGetHitSFX");

	AHunterBase_C_MulticastGetHitSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PlayHiddenSoundLoop
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::PlayHiddenSoundLoop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PlayHiddenSoundLoop");

	AHunterBase_C_PlayHiddenSoundLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.StopHiddenSoundLoop
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::StopHiddenSoundLoop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.StopHiddenSoundLoop");

	AHunterBase_C_StopHiddenSoundLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastGetHitOnImmune
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         HSHSurvivor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::MulticastGetHitOnImmune(class ASurvivorBase_C* HSHSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastGetHitOnImmune");

	AHunterBase_C_MulticastGetHitOnImmune_Params params;
	params.HSHSurvivor = HSHSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnEndAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                           IsCancel_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnEndAbility");

	AHunterBase_C_OnEndAbility_Params params;
	params.Tag = Tag;
	params.IsCancel_ = IsCancel_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerActivateGE
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameplayEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ServerActivateGE(class UClass* GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerActivateGE");

	AHunterBase_C_ServerActivateGE_Params params;
	params.GameplayEffect = GameplayEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerActivateGEWithTarget
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameplayEffectClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ServerActivateGEWithTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerActivateGEWithTarget");

	AHunterBase_C_ServerActivateGEWithTarget_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.FinishInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHunterBase_C::FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.FinishInteraction");

	AHunterBase_C_FinishInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerActivateGESetByCaller
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameplayEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            DataTag                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ServerActivateGESetByCaller(class UClass* GameplayEffect, const struct FGameplayTag& DataTag, float Magnitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerActivateGESetByCaller");

	AHunterBase_C_ServerActivateGESetByCaller_Params params;
	params.GameplayEffect = GameplayEffect;
	params.DataTag = DataTag;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EnableCanSeeSpecter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::EnableCanSeeSpecter(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EnableCanSeeSpecter");

	AHunterBase_C_EnableCanSeeSpecter_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.StopInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHunterBase_C::StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.StopInteraction");

	AHunterBase_C_StopInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastCanSeeSpecter
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::MulticastCanSeeSpecter(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastCanSeeSpecter");

	AHunterBase_C_MulticastCanSeeSpecter_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.DoDamage
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AHunterBase_C::DoDamage(const struct FHitResult& HitInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DoDamage");

	AHunterBase_C_DoDamage_Params params;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SpawnHitParticle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SpawnHitParticle(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SpawnHitParticle");

	AHunterBase_C_SpawnHitParticle_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SendMeleeDistance");

	AHunterBase_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnEnableAttackCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnEnableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnEnableAttackCollision");

	AHunterBase_C_OnEnableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnDisableAttackCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnDisableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnDisableAttackCollision");

	AHunterBase_C_OnDisableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void AHunterBase_C::OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnUpdateItem");

	AHunterBase_C_OnUpdateItem_Params params;
	params.Durability = Durability;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnEndAttackAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnEndAttackAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnEndAttackAnimation");

	AHunterBase_C_OnEndAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnDamaged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   EffectGrantedTags              (BlueprintVisible, BlueprintReadOnly, Parm)
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnDamaged");

	AHunterBase_C_OnDamaged_Params params;
	params.DamageAmount = DamageAmount;
	params.HitInfo = HitInfo;
	params.DamageTags = DamageTags;
	params.EffectGrantedTags = EffectGrantedTags;
	params.InstigatorCharacter = InstigatorCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.BeginAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              SoundAtk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.BeginAttackCollision");

	AHunterBase_C_BeginAttackCollision_Params params;
	params.Tag = Tag;
	params.SoundAtk = SoundAtk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EndAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::EndAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EndAttackCollision");

	AHunterBase_C_EndAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EndAttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::EndAttackAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EndAttackAnimation");

	AHunterBase_C_EndAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.DoAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::DoAttack(int AttackType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DoAttack");

	AHunterBase_C_DoAttack_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ChooseAttackSection
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ChooseAttackSection(int Selection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ChooseAttackSection");

	AHunterBase_C_ChooseAttackSection_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PerfromAttack
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::PerfromAttack(int AttackType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PerfromAttack");

	AHunterBase_C_PerfromAttack_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PerformHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       CauserCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  CauserActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::PerformHitReaction(class AHSHCharacterBase* CauserCharacter, class AActor* CauserActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PerformHitReaction");

	AHunterBase_C_PerformHitReaction_Params params;
	params.CauserCharacter = CauserCharacter;
	params.CauserActor = CauserActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.FadeHiddenSpecter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::FadeHiddenSpecter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.FadeHiddenSpecter");

	AHunterBase_C_FadeHiddenSpecter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CameraShake
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ShakeClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::CameraShake(class UClass* ShakeClass, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CameraShake");

	AHunterBase_C_CameraShake_Params params;
	params.ShakeClass = ShakeClass;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.DoImmunityState
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::DoImmunityState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DoImmunityState");

	AHunterBase_C_DoImmunityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PerfromSecondAttack
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::PerfromSecondAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PerfromSecondAttack");

	AHunterBase_C_PerfromSecondAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OwningTakeOnDamage
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OwningTakeOnDamage(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OwningTakeOnDamage");

	AHunterBase_C_OwningTakeOnDamage_Params params;
	params.InstigatorCharacter = InstigatorCharacter;
	params.OwnerCharacter = OwnerCharacter;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CancelAbility
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::CancelAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CancelAbility");

	AHunterBase_C_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.NotifyCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CameraShake                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::NotifyCameraShake(class UClass* CameraShake, float Magnitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.NotifyCameraShake");

	AHunterBase_C_NotifyCameraShake_Params params;
	params.CameraShake = CameraShake;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SlowAnimMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::SlowAnimMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SlowAnimMontage");

	AHunterBase_C_SlowAnimMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PerformShieldEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::PerformShieldEffect(class AActor* Causer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PerformShieldEffect");

	AHunterBase_C_PerformShieldEffect_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PerformBeginState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::PerformBeginState(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PerformBeginState");

	AHunterBase_C_PerformBeginState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerResetAttackState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ServerResetAttackState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerResetAttackState");

	AHunterBase_C_ServerResetAttackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnTakeDamageSurvivorAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnTakeDamageSurvivorAchievement(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnTakeDamageSurvivorAchievement");

	AHunterBase_C_OnTakeDamageSurvivorAchievement_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnDieSurvivorAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnDieSurvivorAchievement(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnDieSurvivorAchievement");

	AHunterBase_C_OnDieSurvivorAchievement_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SpawnGetHitParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SpawnGetHitParticle(class UParticleSystem* EmitterTemplate, class AActor* Causer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SpawnGetHitParticle");

	AHunterBase_C_SpawnGetHitParticle_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientResetAttackState
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ClientResetAttackState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientResetAttackState");

	AHunterBase_C_ClientResetAttackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.NotifyAfterGetHit
// (Public, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::NotifyAfterGetHit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.NotifyAfterGetHit");

	AHunterBase_C_NotifyAfterGetHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CheckAttackCollision
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AHunterBase_C::CheckAttackCollision(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FHitResult& HitInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CheckAttackCollision");

	AHunterBase_C_CheckAttackCollision_Params params;
	params.OtherActor = OtherActor;
	params.OtherComponent = OtherComponent;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastShowTextDmg
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::MulticastShowTextDmg(float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastShowTextDmg");

	AHunterBase_C_MulticastShowTextDmg_Params params;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CommitSpecterCooldownOnAttack
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::CommitSpecterCooldownOnAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CommitSpecterCooldownOnAttack");

	AHunterBase_C_CommitSpecterCooldownOnAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.TimerDoAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::TimerDoAttack(float Duration, int AttackType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.TimerDoAttack");

	AHunterBase_C_TimerDoAttack_Params params;
	params.Duration = Duration;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.StartLookAtCrosshair
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::StartLookAtCrosshair()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.StartLookAtCrosshair");

	AHunterBase_C_StartLookAtCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.UseCameraControl_2
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::UseCameraControl_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.UseCameraControl_2");

	AHunterBase_C_UseCameraControl_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.UseCameraControl_3
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::UseCameraControl_3()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.UseCameraControl_3");

	AHunterBase_C_UseCameraControl_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastSwitchCameraMode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::MulticastSwitchCameraMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastSwitchCameraMode");

	AHunterBase_C_MulticastSwitchCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientToSpecterCamera
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ClientToSpecterCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientToSpecterCamera");

	AHunterBase_C_ClientToSpecterCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientToNormalCamera
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ClientToNormalCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientToNormalCamera");

	AHunterBase_C_ClientToNormalCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ToSpecterCamera
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ToSpecterCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ToSpecterCamera");

	AHunterBase_C_ToSpecterCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ToNormalCamera
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ToNormalCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ToNormalCamera");

	AHunterBase_C_ToNormalCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ChangeMode_0_LockRotate
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ChangeMode_0_LockRotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ChangeMode_0_LockRotate");

	AHunterBase_C_ChangeMode_0_LockRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ChangeMode_1_UnlockRotate
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ChangeMode_1_UnlockRotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ChangeMode_1_UnlockRotate");

	AHunterBase_C_ChangeMode_1_UnlockRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnEndSpecter
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnEndSpecter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnEndSpecter");

	AHunterBase_C_OnEndSpecter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	AHunterBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	AHunterBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	AHunterBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");

	AHunterBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3");

	AHunterBase_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4");

	AHunterBase_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Action_Immunity
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::Action_Immunity()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Action_Immunity");

	AHunterBase_C_Action_Immunity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Action_Attack
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::Action_Attack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Action_Attack");

	AHunterBase_C_Action_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Movement_Forward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::Movement_Forward(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Movement_Forward");

	AHunterBase_C_Movement_Forward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Movement_MoveRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::Movement_MoveRight(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Movement_MoveRight");

	AHunterBase_C_Movement_MoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Movement_Turn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::Movement_Turn(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Movement_Turn");

	AHunterBase_C_Movement_Turn_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Movement_LookUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::Movement_LookUp(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Movement_LookUp");

	AHunterBase_C_Movement_LookUp_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Action_Perk
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::Action_Perk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Action_Perk");

	AHunterBase_C_Action_Perk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerActivePerk
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ServerActivePerk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerActivePerk");

	AHunterBase_C_ServerActivePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CheckIsAttack
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::CheckIsAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CheckIsAttack");

	AHunterBase_C_CheckIsAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Action_Interact
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::Action_Interact()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Action_Interact");

	AHunterBase_C_Action_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Action_HiddingState
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::Action_HiddingState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Action_HiddingState");

	AHunterBase_C_Action_HiddingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.Action_ChangeCameraSide
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::Action_ChangeCameraSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.Action_ChangeCameraSide");

	AHunterBase_C_Action_ChangeCameraSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ResetCheckAttack
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ResetCheckAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ResetCheckAttack");

	AHunterBase_C_ResetCheckAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerActivePerkCallback
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ServerActivePerkCallback()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerActivePerkCallback");

	AHunterBase_C_ServerActivePerkCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerOnInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ServerOnInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerOnInteraction");

	AHunterBase_C_ServerOnInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ServerSetAutoAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Set                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::ServerSetAutoAttack(bool Set)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ServerSetAutoAttack");

	AHunterBase_C_ServerSetAutoAttack_Params params;
	params.Set = Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.AIAction_Attack
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::AIAction_Attack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.AIAction_Attack");

	AHunterBase_C_AIAction_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.AIAction_HiddingState
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::AIAction_HiddingState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.AIAction_HiddingState");

	AHunterBase_C_AIAction_HiddingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.AIAction_Perk
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::AIAction_Perk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.AIAction_Perk");

	AHunterBase_C_AIAction_Perk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.AIAction_Immune
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::AIAction_Immune()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.AIAction_Immune");

	AHunterBase_C_AIAction_Immune_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ReceiveTick");

	AHunterBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.DestroyItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      InteractBase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::DestroyItem(class AInteractionBase_C* InteractBase)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DestroyItem");

	AHunterBase_C_DestroyItem_Params params;
	params.InteractBase = InteractBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.FadeCamera
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FromAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToAlpha                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShouldFadeAudio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHoldWhenFinished              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::FadeCamera(float FromAlpha, float ToAlpha, float Duration, bool bShouldFadeAudio, bool bHoldWhenFinished)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.FadeCamera");

	AHunterBase_C_FadeCamera_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.PlayDestroyItemMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::PlayDestroyItemMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.PlayDestroyItemMontage");

	AHunterBase_C_PlayDestroyItemMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.GrantPerk
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::GrantPerk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.GrantPerk");

	AHunterBase_C_GrantPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastPlaySound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::MulticastPlaySound(class USoundBase* Sound, const struct FVector& Location, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastPlaySound");

	AHunterBase_C_MulticastPlaySound_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.NotifyDestroyItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::NotifyDestroyItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.NotifyDestroyItem");

	AHunterBase_C_NotifyDestroyItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForcePlayMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InPlayRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ForcePlayMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForcePlayMontage");

	AHunterBase_C_ForcePlayMontage_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SetActorCollision
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionEnabled> Collsion                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SetActorCollision(TEnumAsByte<Engine_ECollisionEnabled> Collsion, TEnumAsByte<Engine_EMovementMode> NewMovementMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetActorCollision");

	AHunterBase_C_SetActorCollision_Params params;
	params.Collsion = Collsion;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceRotation
// (Net, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                NewRotation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AHunterBase_C::ForceRotation(class AController* Controller, const struct FRotator& NewRotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceRotation");

	AHunterBase_C_ForceRotation_Params params;
	params.Controller = Controller;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CeremonyScan
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::CeremonyScan(class ACharacter* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CeremonyScan");

	AHunterBase_C_CeremonyScan_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceScan
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ForceScan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceScan");

	AHunterBase_C_ForceScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SpawnScanEffect
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::SpawnScanEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SpawnScanEffect");

	AHunterBase_C_SpawnScanEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientSendTutorialEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ClientSendTutorialEvent(const struct FName& EventName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientSendTutorialEvent");

	AHunterBase_C_ClientSendTutorialEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.EnterHiddingState
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::EnterHiddingState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.EnterHiddingState");

	AHunterBase_C_EnterHiddingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ExitHiddingState
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ExitHiddingState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ExitHiddingState");

	AHunterBase_C_ExitHiddingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SpawnHiddenEffect
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::SpawnHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SpawnHiddenEffect");

	AHunterBase_C_SpawnHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.HideHiddenEffect
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::HideHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.HideHiddenEffect");

	AHunterBase_C_HideHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastEnterHiddenEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::MulticastEnterHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastEnterHiddenEffect");

	AHunterBase_C_MulticastEnterHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastExitHiddenEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::MulticastExitHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastExitHiddenEffect");

	AHunterBase_C_MulticastExitHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceExitHiddenState
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ForceExitHiddenState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceExitHiddenState");

	AHunterBase_C_ForceExitHiddenState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ShowNotifyRange
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ShowNotifyRange()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ShowNotifyRange");

	AHunterBase_C_ShowNotifyRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ShowNotifyText
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ShowNotifyText(const struct FText& Text, float PlayRate)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ShowNotifyText");

	AHunterBase_C_ShowNotifyText_Params params;
	params.Text = Text;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.DebugGE
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::DebugGE()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.DebugGE");

	AHunterBase_C_DebugGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SpecterScan
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::SpecterScan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SpecterScan");

	AHunterBase_C_SpecterScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceEnterHiddingState
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ForceEnterHiddingState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceEnterHiddingState");

	AHunterBase_C_ForceEnterHiddingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceJumpMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ForceJumpMontage(class UAnimMontage* AnimMontage, const struct FName& StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceJumpMontage");

	AHunterBase_C_ForceJumpMontage_Params params;
	params.AnimMontage = AnimMontage;
	params.StartSectionName = StartSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SnapToInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRelativeRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 TargetLookAtLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SnapToInteraction(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, const struct FVector& TargetLookAtLocation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SnapToInteraction");

	AHunterBase_C_SnapToInteraction_Params params;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.TargetLookAtLocation = TargetLookAtLocation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientRotationTo
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BaseRelativeLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ClientRotationTo(class APlayerController* PlayerController, const struct FVector& BaseRelativeLocation, const struct FVector& TargetRelativeLocation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientRotationTo");

	AHunterBase_C_ClientRotationTo_Params params;
	params.PlayerController = PlayerController;
	params.BaseRelativeLocation = BaseRelativeLocation;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ClientMoveTo
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRelativeRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ClientMoveTo(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ClientMoveTo");

	AHunterBase_C_ClientMoveTo_Params params;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.CheckHiddenWorking
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::CheckHiddenWorking()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.CheckHiddenWorking");

	AHunterBase_C_CheckHiddenWorking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ResetCheckHiddenWorking
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ResetCheckHiddenWorking()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ResetCheckHiddenWorking");

	AHunterBase_C_ResetCheckHiddenWorking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnRitualStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnRitualStateChanged(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnRitualStateChanged");

	AHunterBase_C_OnRitualStateChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ReportAFK
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ReportAFK()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ReportAFK");

	AHunterBase_C_ReportAFK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastSetCollisionResponse
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECollisionResponse> NewResponse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::MulticastSetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> NewResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastSetCollisionResponse");

	AHunterBase_C_MulticastSetCollisionResponse_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnChangeHiddenState
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHiddenState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::OnChangeHiddenState(bool InHiddenState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnChangeHiddenState");

	AHunterBase_C_OnChangeHiddenState_Params params;
	params.InHiddenState = InHiddenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SpecterScanWithTime
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::SpecterScanWithTime(float Timer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SpecterScanWithTime");

	AHunterBase_C_SpecterScanWithTime_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceStopMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ForceStopMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceStopMontage");

	AHunterBase_C_ForceStopMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.UpdateAimTransform
// (BlueprintCallable, BlueprintEvent)
void AHunterBase_C::UpdateAimTransform()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.UpdateAimTransform");

	AHunterBase_C_UpdateAimTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.StartDelayInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::StartDelayInput(float Time)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.StartDelayInput");

	AHunterBase_C_StartDelayInput_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.TryToNormalCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::TryToNormalCamera(float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.TryToNormalCamera");

	AHunterBase_C_TryToNormalCamera_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ForceExitHiddenStateWithDelayCamera
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayReturnCamera              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ForceExitHiddenStateWithDelayCamera(float DelayReturnCamera)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ForceExitHiddenStateWithDelayCamera");

	AHunterBase_C_ForceExitHiddenStateWithDelayCamera_Params params;
	params.DelayReturnCamera = DelayReturnCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.MulticastSetMeshHiddenInGame
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHidden                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::MulticastSetMeshHiddenInGame(bool bHidden)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.MulticastSetMeshHiddenInGame");

	AHunterBase_C_MulticastSetMeshHiddenInGame_Params params;
	params.bHidden = bHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SetMeshHiddenInGames
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bPropagateToChildren           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::SetMeshHiddenInGames(bool NewHidden, bool bPropagateToChildren)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetMeshHiddenInGames");

	AHunterBase_C_SetMeshHiddenInGames_Params params;
	params.NewHidden = NewHidden;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.SetRenderMainPass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHunterBase_C::SetRenderMainPass(bool Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.SetRenderMainPass");

	AHunterBase_C_SetRenderMainPass_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ShowEffectClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::ShowEffectClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ShowEffectClient");

	AHunterBase_C_ShowEffectClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.ExecuteUbergraph_HunterBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::ExecuteUbergraph_HunterBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.ExecuteUbergraph_HunterBase");

	AHunterBase_C_ExecuteUbergraph_HunterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnShowTextDmg__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnShowTextDmg__DelegateSignature(class AHSHCharacterBase* OwnerCharacter, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnShowTextDmg__DelegateSignature");

	AHunterBase_C_OnShowTextDmg__DelegateSignature_Params params;
	params.OwnerCharacter = OwnerCharacter;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnTraped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnTraped__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnTraped__DelegateSignature");

	AHunterBase_C_OnTraped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnSeeAnyOneChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnSeeAnyOneChanged__DelegateSignature(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnSeeAnyOneChanged__DelegateSignature");

	AHunterBase_C_OnSeeAnyOneChanged__DelegateSignature_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnRitualDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnRitualDone__DelegateSignature(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnRitualDone__DelegateSignature");

	AHunterBase_C_OnRitualDone__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnActionImmuntity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnActionImmuntity__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnActionImmuntity__DelegateSignature");

	AHunterBase_C_OnActionImmuntity__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnActionInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnActionInteraction__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnActionInteraction__DelegateSignature");

	AHunterBase_C_OnActionInteraction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnActionActivePerk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnActionActivePerk__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnActionActivePerk__DelegateSignature");

	AHunterBase_C_OnActionActivePerk__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnScaned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnScaned__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnScaned__DelegateSignature");

	AHunterBase_C_OnScaned__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnExitInvisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnExitInvisible__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnExitInvisible__DelegateSignature");

	AHunterBase_C_OnExitInvisible__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnEnterInvisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnEnterInvisible__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnEnterInvisible__DelegateSignature");

	AHunterBase_C_OnEnterInvisible__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnAttackSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnAttackSuccess__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnAttackSuccess__DelegateSignature");

	AHunterBase_C_OnAttackSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnActionAttack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnActionAttack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnActionAttack__DelegateSignature");

	AHunterBase_C_OnActionAttack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnReciveDamaged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnReciveDamaged__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnReciveDamaged__DelegateSignature");

	AHunterBase_C_OnReciveDamaged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnTakeDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHunterBase_C::OnTakeDamage__DelegateSignature(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnTakeDamage__DelegateSignature");

	AHunterBase_C_OnTakeDamage__DelegateSignature_Params params;
	params.InstigatorCharacter = InstigatorCharacter;
	params.OwnerCharacter = OwnerCharacter;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterBase.HunterBase_C.OnDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHunterBase_C::OnDeath__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HunterBase.HunterBase_C.OnDeath__DelegateSignature");

	AHunterBase_C_OnDeath__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
