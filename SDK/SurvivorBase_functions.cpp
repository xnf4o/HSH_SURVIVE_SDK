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

// Function SurvivorBase.SurvivorBase_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetProgressTime");

	ASurvivorBase_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


// Function SurvivorBase.SurvivorBase_C.IsCanHelp?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsCanHelp_(bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsCanHelp?");

	ASurvivorBase_C_IsCanHelp__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function SurvivorBase.SurvivorBase_C.IsCanSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsImprement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsCanSkillCheck_(bool* IsImprement, bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsCanSkillCheck?");

	ASurvivorBase_C_IsCanSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImprement != nullptr)
		*IsImprement = params.IsImprement;
	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function SurvivorBase.SurvivorBase_C.IsResetResult?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReset                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsResetResult_(bool* IsReset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsResetResult?");

	ASurvivorBase_C_IsResetResult__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReset != nullptr)
		*IsReset = params.IsReset;

}


// Function SurvivorBase.SurvivorBase_C.GetSpeedSkillCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetSpeedSkillCheck(float* Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetSpeedSkillCheck");

	ASurvivorBase_C_GetSpeedSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;

}


// Function SurvivorBase.SurvivorBase_C.CanUseProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::CanUseProgress(bool* UseProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CanUseProgress");

	ASurvivorBase_C_CanUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseProgress != nullptr)
		*UseProgress = params.UseProgress;

}


// Function SurvivorBase.SurvivorBase_C.IsNotCancelProgressonMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotCancel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsNotCancelProgressonMove(bool* IsNotCancel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsNotCancelProgressonMove");

	ASurvivorBase_C_IsNotCancelProgressonMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNotCancel != nullptr)
		*IsNotCancel = params.IsNotCancel;

}


// Function SurvivorBase.SurvivorBase_C.IsForceSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceSkillCheck               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsForceSkillCheck_(bool* bForceSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsForceSkillCheck?");

	ASurvivorBase_C_IsForceSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bForceSkillCheck != nullptr)
		*bForceSkillCheck = params.bForceSkillCheck;

}


// Function SurvivorBase.SurvivorBase_C.GetSkilcheckPerfectSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetSkilcheckPerfectSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetSkilcheckPerfectSection");

	ASurvivorBase_C_GetSkilcheckPerfectSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.GetSkilcheckGreatSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetSkilcheckGreatSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetSkilcheckGreatSection");

	ASurvivorBase_C_GetSkilcheckGreatSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.GetSkilcheckFailedSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetSkilcheckFailedSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetSkilcheckFailedSection");

	ASurvivorBase_C_GetSkilcheckFailedSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.GetFinishSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetFinishSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetFinishSection");

	ASurvivorBase_C_GetFinishSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.IsLockCameraOnFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsLockCameraOnFinish");

	ASurvivorBase_C_IsLockCameraOnFinish_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.GetCurrentPickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CurrentPickable                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetCurrentPickable(struct FS_Pickable* CurrentPickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetCurrentPickable");

	ASurvivorBase_C_GetCurrentPickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickable != nullptr)
		*CurrentPickable = params.CurrentPickable;

}


// Function SurvivorBase.SurvivorBase_C.GetExecuteCameraTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::GetExecuteCameraTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetExecuteCameraTransform");

	ASurvivorBase_C_GetExecuteCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.isExecution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::isExecution(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.isExecution");

	ASurvivorBase_C_isExecution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.GetAimTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::GetAimTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetAimTransform");

	ASurvivorBase_C_GetAimTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.IsHaveSpawnPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHave                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   Tag                            (Parm, OutParm)
void ASurvivorBase_C::IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsHaveSpawnPerk");

	ASurvivorBase_C_IsHaveSpawnPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsHave != nullptr)
		*bIsHave = params.bIsHave;
	if (Tag != nullptr)
		*Tag = params.Tag;

}


// Function SurvivorBase.SurvivorBase_C.GetCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetCharacterID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetCharacterID");

	ASurvivorBase_C_GetCharacterID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function SurvivorBase.SurvivorBase_C.NotifyFootStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.NotifyFootStep");

	ASurvivorBase_C_NotifyFootStep_Params params;

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


// Function SurvivorBase.SurvivorBase_C.GetCurrentItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetCurrentItemID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetCurrentItemID");

	ASurvivorBase_C_GetCurrentItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function SurvivorBase.SurvivorBase_C.GetMainCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetMainCameraComponent(class UCameraComponent** CameraComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetMainCameraComponent");

	ASurvivorBase_C_GetMainCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;

}


// Function SurvivorBase.SurvivorBase_C.CheckHunterInCrosshair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCamera                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::CheckHunterInCrosshair(bool* InCamera)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckHunterInCrosshair");

	ASurvivorBase_C_CheckHunterInCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InCamera != nullptr)
		*InCamera = params.InCamera;

}


// Function SurvivorBase.SurvivorBase_C.ShouldInteractStartDelay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ASurvivorBase_C::ShouldInteractStartDelay(class AInteractionBase_C* Interact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ShouldInteractStartDelay");

	ASurvivorBase_C_ShouldInteractStartDelay_Params params;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.OnRep_CurrentPickItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnRep_CurrentPickItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRep_CurrentPickItem");

	ASurvivorBase_C_OnRep_CurrentPickItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnRep_IsHideMesh
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnRep_IsHideMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRep_IsHideMesh");

	ASurvivorBase_C_OnRep_IsHideMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnRep_CollisionMovement
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnRep_CollisionMovement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRep_CollisionMovement");

	ASurvivorBase_C_OnRep_CollisionMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GetMontageProgress
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHPickableItem*        HSHPickable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Anim_Montage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetMontageProgress(class UHSHPickableItem* HSHPickable, class UAnimMontage** Anim_Montage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetMontageProgress");

	ASurvivorBase_C_GetMontageProgress_Params params;
	params.HSHPickable = HSHPickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Anim_Montage != nullptr)
		*Anim_Montage = params.Anim_Montage;

}


// Function SurvivorBase.SurvivorBase_C.InitBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::InitBack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InitBack");

	ASurvivorBase_C_InitBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InitHead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::InitHead()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InitHead");

	ASurvivorBase_C_InitHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GetSpawnSoulLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform ASurvivorBase_C::GetSpawnSoulLocation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetSpawnSoulLocation");

	ASurvivorBase_C_GetSpawnSoulLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.IsGameStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ASurvivorBase_C::IsGameStarted()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsGameStarted");

	ASurvivorBase_C_IsGameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.IsHaveAnyAxis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ASurvivorBase_C::IsHaveAnyAxis()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsHaveAnyAxis");

	ASurvivorBase_C_IsHaveAnyAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.OnRep_IsKnockdown
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnRep_IsKnockdown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRep_IsKnockdown");

	ASurvivorBase_C_OnRep_IsKnockdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnRep_bIsAiming
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnRep_bIsAiming()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRep_bIsAiming");

	ASurvivorBase_C_OnRep_bIsAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnRep_MoveSpeed
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnRep_MoveSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRep_MoveSpeed");

	ASurvivorBase_C_OnRep_MoveSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.IsBlockKeys
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsBlockKeys(const struct FKey& Key, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsBlockKeys");

	ASurvivorBase_C_IsBlockKeys_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.CheckMovementModified
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AxisOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::CheckMovementModified(float AxisIn, float* AxisOut)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckMovementModified");

	ASurvivorBase_C_CheckMovementModified_Params params;
	params.AxisIn = AxisIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AxisOut != nullptr)
		*AxisOut = params.AxisOut;

}


// Function SurvivorBase.SurvivorBase_C.GetPossessMinion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASurvivorMinionBase_C*   MinionCache                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetPossessMinion(class ASurvivorMinionBase_C** MinionCache)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetPossessMinion");

	ASurvivorBase_C_GetPossessMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinionCache != nullptr)
		*MinionCache = params.MinionCache;

}


// Function SurvivorBase.SurvivorBase_C.ResetPossessMinion
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ResetPossessMinion()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ResetPossessMinion");

	ASurvivorBase_C_ResetPossessMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SetUpPossessMinion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorMinionBase_C*   Minion                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SetUpPossessMinion(class ASurvivorMinionBase_C* Minion)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetUpPossessMinion");

	ASurvivorBase_C_SetUpPossessMinion_Params params;
	params.Minion = Minion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.TryGetHSURPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSURPlayerController_C* HSURPlayerController           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::TryGetHSURPlayerController(class AHSURPlayerController_C** HSURPlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.TryGetHSURPlayerController");

	ASurvivorBase_C_TryGetHSURPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURPlayerController != nullptr)
		*HSURPlayerController = params.HSURPlayerController;

}


// Function SurvivorBase.SurvivorBase_C.CheckingInitStartGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckingInitStartGame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckingInitStartGame");

	ASurvivorBase_C_CheckingInitStartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GetOverlapingCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
void ASurvivorBase_C::GetOverlapingCharacter(TArray<class AActor*>* OutActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetOverlapingCharacter");

	ASurvivorBase_C_GetOverlapingCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function SurvivorBase.SurvivorBase_C.InitializeCameraPostProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::InitializeCameraPostProcess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InitializeCameraPostProcess");

	ASurvivorBase_C_InitializeCameraPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DeinitializePreviewMeshInHand
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::DeinitializePreviewMeshInHand()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DeinitializePreviewMeshInHand");

	ASurvivorBase_C_DeinitializePreviewMeshInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GetExecutionSurvivorComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UExecutionSurvivorComponent_C* ExecutionSurvivorComponent     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetExecutionSurvivorComponent(class UExecutionSurvivorComponent_C** ExecutionSurvivorComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetExecutionSurvivorComponent");

	ASurvivorBase_C_GetExecutionSurvivorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExecutionSurvivorComponent != nullptr)
		*ExecutionSurvivorComponent = params.ExecutionSurvivorComponent;

}


// Function SurvivorBase.SurvivorBase_C.GetProgressComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressClientComponent_C* ProgressComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetProgressComponent(class UProgressClientComponent_C** ProgressComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetProgressComponent");

	ASurvivorBase_C_GetProgressComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProgressComponent != nullptr)
		*ProgressComponent = params.ProgressComponent;

}


// Function SurvivorBase.SurvivorBase_C.IsLookBack
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsLookBack(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsLookBack");

	ASurvivorBase_C_IsLookBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorBase.SurvivorBase_C.OnDroptItemEvent
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnDroptItemEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnDroptItemEvent");

	ASurvivorBase_C_OnDroptItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnCollectItemEvent
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnCollectItemEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnCollectItemEvent");

	ASurvivorBase_C_OnCollectItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GetOptionToggleCounch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ControlType_E_ControlType> ToggleCounch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetOptionToggleCounch(TEnumAsByte<E_ControlType_E_ControlType>* ToggleCounch)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetOptionToggleCounch");

	ASurvivorBase_C_GetOptionToggleCounch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToggleCounch != nullptr)
		*ToggleCounch = params.ToggleCounch;

}


// Function SurvivorBase.SurvivorBase_C.GetOptionToggleSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ControlType_E_ControlType> ToggleSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetOptionToggleSprint(TEnumAsByte<E_ControlType_E_ControlType>* ToggleSprint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetOptionToggleSprint");

	ASurvivorBase_C_GetOptionToggleSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToggleSprint != nullptr)
		*ToggleSprint = params.ToggleSprint;

}


// Function SurvivorBase.SurvivorBase_C.GetOptionSensitivity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Sensitivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetOptionSensitivity(float* Sensitivity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetOptionSensitivity");

	ASurvivorBase_C_GetOptionSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;

}


// Function SurvivorBase.SurvivorBase_C.ResetMovingHold
// (Protected, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ResetMovingHold()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ResetMovingHold");

	ASurvivorBase_C_ResetMovingHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.IsNotHoldMovementInput
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ASurvivorBase_C::IsNotHoldMovementInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsNotHoldMovementInput");

	ASurvivorBase_C_IsNotHoldMovementInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.CheckStopMovement_Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           bForceStop                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::CheckStopMovement_Item(const struct FS_Pickable& Item, bool bForceStop)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckStopMovement_Item");

	ASurvivorBase_C_CheckStopMovement_Item_Params params;
	params.Item = Item;
	params.bForceStop = bForceStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.IsPickItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsPick                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::IsPickItem(bool* bIsPick)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsPickItem");

	ASurvivorBase_C_IsPickItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsPick != nullptr)
		*bIsPick = params.bIsPick;

}


// Function SurvivorBase.SurvivorBase_C.CheckMovingHold
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckMovingHold()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckMovingHold");

	ASurvivorBase_C_CheckMovingHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckStopMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::CheckStopMovement(class UObject* Interaction)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckStopMovement");

	ASurvivorBase_C_CheckStopMovement_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GetPlayerID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayerId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetPlayerID(int* PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetPlayerID");

	ASurvivorBase_C_GetPlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

}


// Function SurvivorBase.SurvivorBase_C.OnRep_IsOnLockingItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnRep_IsOnLockingItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRep_IsOnLockingItem");

	ASurvivorBase_C_OnRep_IsOnLockingItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.IsContainHitActor
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ASurvivorBase_C::IsContainHitActor(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsContainHitActor");

	ASurvivorBase_C_IsContainHitActor_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.ClearHitActor
// (Protected, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ClearHitActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClearHitActor");

	ASurvivorBase_C_ClearHitActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.AddedHitActor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::AddedHitActor(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.AddedHitActor");

	ASurvivorBase_C_AddedHitActor_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UpdateFOV
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UpdateFOV()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdateFOV");

	ASurvivorBase_C_UpdateFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GetFootStepSound
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FootStepSurvivor     OutRow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetFootStepSound(struct FS_FootStepSurvivor* OutRow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetFootStepSound");

	ASurvivorBase_C_GetFootStepSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

}


// Function SurvivorBase.SurvivorBase_C.FindFlood
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
bool ASurvivorBase_C::FindFlood(struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.FindFlood");

	ASurvivorBase_C_FindFlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.DebugTagContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Str                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorBase_C::DebugTagContainer(const struct FGameplayTagContainer& TagContainer, struct FString* Str)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DebugTagContainer");

	ASurvivorBase_C_DebugTagContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Str != nullptr)
		*Str = params.Str;

}


// Function SurvivorBase.SurvivorBase_C.IsCharacterSprint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ASurvivorBase_C::IsCharacterSprint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.IsCharacterSprint");

	ASurvivorBase_C_IsCharacterSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SurvivorBase.SurvivorBase_C.SetVisiblePreviewMeshInHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::SetVisiblePreviewMeshInHand(bool Visibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetVisiblePreviewMeshInHand");

	ASurvivorBase_C_SetVisiblePreviewMeshInHand_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DebugAudio
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::DebugAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DebugAudio");

	ASurvivorBase_C_DebugAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.TryGetPingHunterComponent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPingHunterComponent_C*  PingHunterCache                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::TryGetPingHunterComponent(class UPingHunterComponent_C** PingHunterCache)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.TryGetPingHunterComponent");

	ASurvivorBase_C_TryGetPingHunterComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PingHunterCache != nullptr)
		*PingHunterCache = params.PingHunterCache;

}


// Function SurvivorBase.SurvivorBase_C.TryGetHunter
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHunterBase_C*           HunterRef                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::TryGetHunter(class AHunterBase_C** HunterRef)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.TryGetHunter");

	ASurvivorBase_C_TryGetHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HunterRef != nullptr)
		*HunterRef = params.HunterRef;

}


// Function SurvivorBase.SurvivorBase_C.OnHitReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnHitReaction(class UAnimMontage* AnimMontage, TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnHitReaction");

	ASurvivorBase_C_OnHitReaction_Params params;
	params.AnimMontage = AnimMontage;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InitializePreviewMeshInHand
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APreviewMeshActor_C*     RightPreviewMesh               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APreviewMeshActor_C*     LeftPreviewMesh                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InitializePreviewMeshInHand(class APreviewMeshActor_C** RightPreviewMesh, class APreviewMeshActor_C** LeftPreviewMesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InitializePreviewMeshInHand");

	ASurvivorBase_C_InitializePreviewMeshInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RightPreviewMesh != nullptr)
		*RightPreviewMesh = params.RightPreviewMesh;
	if (LeftPreviewMesh != nullptr)
		*LeftPreviewMesh = params.LeftPreviewMesh;

}


// Function SurvivorBase.SurvivorBase_C.UpdatePreviewMeshInHand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHPickableItem*        PickableObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::UpdatePreviewMeshInHand(class UHSHPickableItem* PickableObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdatePreviewMeshInHand");

	ASurvivorBase_C_UpdatePreviewMeshInHand_Params params;
	params.PickableObject = PickableObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckCurrentItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DurabilityLeft                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RemoveItem_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::CheckCurrentItem(float DurabilityLeft, bool* RemoveItem_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckCurrentItem");

	ASurvivorBase_C_CheckCurrentItem_Params params;
	params.DurabilityLeft = DurabilityLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemoveItem_ != nullptr)
		*RemoveItem_ = params.RemoveItem_;

}


// Function SurvivorBase.SurvivorBase_C.AddInventory
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FHSHItemSlot, class UHSHItem*> Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FHSHItemSlot            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UHSHItem*                NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FHSHItemSlot, class UHSHItem*> TestInventory                  (Parm, OutParm, ZeroConstructor)
void ASurvivorBase_C::AddInventory(TMap<struct FHSHItemSlot, class UHSHItem*>* Inventory, const struct FHSHItemSlot& Slot, class UHSHItem* NewItem, TMap<struct FHSHItemSlot, class UHSHItem*>* TestInventory)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.AddInventory");

	ASurvivorBase_C_AddInventory_Params params;
	params.Slot = Slot;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
	if (TestInventory != nullptr)
		*TestInventory = params.TestInventory;

}


// Function SurvivorBase.SurvivorBase_C.OnAttackCollisionOverlap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                           IsSend                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::OnAttackCollisionOverlap(class AActor* OtherActor, const struct FGameplayTag& EventTag, bool* IsSend)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnAttackCollisionOverlap");

	ASurvivorBase_C_OnAttackCollisionOverlap_Params params;
	params.OtherActor = OtherActor;
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSend != nullptr)
		*IsSend = params.IsSend;

}


// Function SurvivorBase.SurvivorBase_C.UpdateDurabiilty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseAllDurability_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DurabilityLeft                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Pickable             CurrentPickItem                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::UpdateDurabiilty(bool UseAllDurability_, float DurabilityLeft, struct FS_Pickable* CurrentPickItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdateDurabiilty");

	ASurvivorBase_C_UpdateDurabiilty_Params params;
	params.UseAllDurability_ = UseAllDurability_;
	params.DurabilityLeft = DurabilityLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickItem != nullptr)
		*CurrentPickItem = params.CurrentPickItem;

}


// Function SurvivorBase.SurvivorBase_C.GetSurvivalSpeed
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BackwardAxis                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::GetSurvivalSpeed(float Axis, float BackwardAxis, float* Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GetSurvivalSpeed");

	ASurvivorBase_C_GetSurvivalSpeed_Params params;
	params.Axis = Axis;
	params.BackwardAxis = BackwardAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;

}


// Function SurvivorBase.SurvivorBase_C.CheckAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DoingProgress                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::CheckAction(bool* DoingProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckAction");

	ASurvivorBase_C_CheckAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoingProgress != nullptr)
		*DoingProgress = params.DoingProgress;

}


// Function SurvivorBase.SurvivorBase_C.RegenStamina
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::RegenStamina()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RegenStamina");

	ASurvivorBase_C_RegenStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DrainStamina
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::DrainStamina()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DrainStamina");

	ASurvivorBase_C_DrainStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UserConstructionScript");

	ASurvivorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ASurvivorBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Timeline_0__FinishedFunc");

	ASurvivorBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ASurvivorBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Timeline_0__UpdateFunc");

	ASurvivorBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Dissolve__FinishedFunc
// (BlueprintEvent)
void ASurvivorBase_C::Dissolve__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Dissolve__FinishedFunc");

	ASurvivorBase_C_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Dissolve__UpdateFunc
// (BlueprintEvent)
void ASurvivorBase_C::Dissolve__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Dissolve__UpdateFunc");

	ASurvivorBase_C_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Delay__FinishedFunc
// (BlueprintEvent)
void ASurvivorBase_C::Delay__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Delay__FinishedFunc");

	ASurvivorBase_C_Delay__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Delay__UpdateFunc
// (BlueprintEvent)
void ASurvivorBase_C::Delay__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Delay__UpdateFunc");

	ASurvivorBase_C_Delay__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.FadeControl__FinishedFunc
// (BlueprintEvent)
void ASurvivorBase_C::FadeControl__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.FadeControl__FinishedFunc");

	ASurvivorBase_C_FadeControl__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.FadeControl__UpdateFunc
// (BlueprintEvent)
void ASurvivorBase_C::FadeControl__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.FadeControl__UpdateFunc");

	ASurvivorBase_C_FadeControl__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.LookAtCrosshairTimeline__FinishedFunc
// (BlueprintEvent)
void ASurvivorBase_C::LookAtCrosshairTimeline__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.LookAtCrosshairTimeline__FinishedFunc");

	ASurvivorBase_C_LookAtCrosshairTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.LookAtCrosshairTimeline__UpdateFunc
// (BlueprintEvent)
void ASurvivorBase_C::LookAtCrosshairTimeline__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.LookAtCrosshairTimeline__UpdateFunc");

	ASurvivorBase_C_LookAtCrosshairTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.RotateMeshToDefaultTimeline__FinishedFunc
// (BlueprintEvent)
void ASurvivorBase_C::RotateMeshToDefaultTimeline__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RotateMeshToDefaultTimeline__FinishedFunc");

	ASurvivorBase_C_RotateMeshToDefaultTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.RotateMeshToDefaultTimeline__UpdateFunc
// (BlueprintEvent)
void ASurvivorBase_C::RotateMeshToDefaultTimeline__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RotateMeshToDefaultTimeline__UpdateFunc");

	ASurvivorBase_C_RotateMeshToDefaultTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_UseItem_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_UseItem_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_UseItem_K2Node_InputActionEvent_22");

	ASurvivorBase_C_InpActEvt_Survivor_UseItem_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_21");

	ASurvivorBase_C_InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_20");

	ASurvivorBase_C_InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_19");

	ASurvivorBase_C_InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_18");

	ASurvivorBase_C_InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_17");

	ASurvivorBase_C_InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpTchEvt_Moved
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<InputCore_ETouchIndex> FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpTchEvt_Moved(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpTchEvt_Moved");

	ASurvivorBase_C_InpTchEvt_Moved_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<InputCore_ETouchIndex> FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpTchEvt_Released(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpTchEvt_Released");

	ASurvivorBase_C_InpTchEvt_Released_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<InputCore_ETouchIndex> FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpTchEvt_Pressed(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpTchEvt_Pressed");

	ASurvivorBase_C_InpTchEvt_Pressed_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_16");

	ASurvivorBase_C_InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_General_Ping_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_General_Ping_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_General_Ping_K2Node_InputActionEvent_15");

	ASurvivorBase_C_InpActEvt_General_Ping_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_14");

	ASurvivorBase_C_InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_13");

	ASurvivorBase_C_InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_12");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_11");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_10");

	ASurvivorBase_C_InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker1_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker1_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker1_K2Node_InputActionEvent_9");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker1_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker2_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker2_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker2_K2Node_InputActionEvent_8");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker2_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker3_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker3_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker3_K2Node_InputActionEvent_7");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker3_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker4_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker4_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker4_K2Node_InputActionEvent_6");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker4_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker5_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker5_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker5_K2Node_InputActionEvent_5");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker5_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker6_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker6_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker6_K2Node_InputActionEvent_4");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker6_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker7_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker7_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker7_K2Node_InputActionEvent_3");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker7_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker8_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Sticker8_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Sticker8_K2Node_InputActionEvent_2");

	ASurvivorBase_C_InpActEvt_Survivor_Sticker8_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Interact_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_Survivor_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_Survivor_Interact_K2Node_InputActionEvent_1");

	ASurvivorBase_C_InpActEvt_Survivor_Interact_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_3");

	ASurvivorBase_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_2");

	ASurvivorBase_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpActEvt_R_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::InpActEvt_R_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpActEvt_R_K2Node_InputKeyEvent_1");

	ASurvivorBase_C_InpActEvt_R_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SendMeleeDistance");

	ASurvivorBase_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EnableCanSeeSpecter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::EnableCanSeeSpecter(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EnableCanSeeSpecter");

	ASurvivorBase_C_EnableCanSeeSpecter_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.TryPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.TryPlayMontage");

	ASurvivorBase_C_TryPlayMontage_Params params;
	params.Montage = Montage;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UpdateSurvivalCrosshair
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UpdateSurvivalCrosshair()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdateSurvivalCrosshair");

	ASurvivorBase_C_UpdateSurvivalCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UpdatePickableType
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UpdatePickableType()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdatePickableType");

	ASurvivorBase_C_UpdatePickableType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastSpawnParticle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAutoDestroy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// Engine_EPSCPoolMethod          PoolingMethod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::MulticastSpawnParticle(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, Engine_EPSCPoolMethod PoolingMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastSpawnParticle");

	ASurvivorBase_C_MulticastSpawnParticle_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.PoolingMethod = PoolingMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientAddDesignEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 eventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientAddDesignEvent(const struct FString& eventId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientAddDesignEvent");

	ASurvivorBase_C_ClientAddDesignEvent_Params params;
	params.eventId = eventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientAddDesignEventWithValue
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 eventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientAddDesignEventWithValue(const struct FString& eventId, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientAddDesignEventWithValue");

	ASurvivorBase_C_ClientAddDesignEventWithValue_Params params;
	params.eventId = eventId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SetCameraMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CameraMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SetCameraMode(int CameraMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetCameraMode");

	ASurvivorBase_C_SetCameraMode_Params params;
	params.CameraMode = CameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ChangeMode_0_LockRotate
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ChangeMode_0_LockRotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ChangeMode_0_LockRotate");

	ASurvivorBase_C_ChangeMode_0_LockRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ChangeMode_1_UnlockRotate
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ChangeMode_1_UnlockRotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ChangeMode_1_UnlockRotate");

	ASurvivorBase_C_ChangeMode_1_UnlockRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckInfiniteStaminaEffect
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckInfiniteStaminaEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckInfiniteStaminaEffect");

	ASurvivorBase_C_CheckInfiniteStaminaEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastSetBloodEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInjury                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::MulticastSetBloodEffect(bool IsInjury)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastSetBloodEffect");

	ASurvivorBase_C_MulticastSetBloodEffect_Params params;
	params.IsInjury = IsInjury;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastOnResurrect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::MulticastOnResurrect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastOnResurrect");

	ASurvivorBase_C_MulticastOnResurrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SetMaterialsEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SetMaterialsEffect(float Alpha, const struct FLinearColor& Color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetMaterialsEffect");

	ASurvivorBase_C_SetMaterialsEffect_Params params;
	params.Alpha = Alpha;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EnableDissolveEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::EnableDissolveEffect(bool bIsEnable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EnableDissolveEffect");

	ASurvivorBase_C_EnableDissolveEffect_Params params;
	params.bIsEnable = bIsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastOnDissolve
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::MulticastOnDissolve()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastOnDissolve");

	ASurvivorBase_C_MulticastOnDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.NotifyItemIcon
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::NotifyItemIcon()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.NotifyItemIcon");

	ASurvivorBase_C_NotifyItemIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EnableFogManager
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::EnableFogManager()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EnableFogManager");

	ASurvivorBase_C_EnableFogManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UpdateFogManager
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UpdateFogManager()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdateFogManager");

	ASurvivorBase_C_UpdateFogManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnAttributeChange
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnAttributeChange(const struct FGameplayAttribute& Attribute, float NewValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnAttributeChange");

	ASurvivorBase_C_OnAttributeChange_Params params;
	params.Attribute = Attribute;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnGameplayEffectApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ASurvivorBase_C::OnGameplayEffectApply(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnGameplayEffectApply");

	ASurvivorBase_C_OnGameplayEffectApply_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SendOnGameplayEffectApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ASurvivorBase_C::SendOnGameplayEffectApply(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SendOnGameplayEffectApply");

	ASurvivorBase_C_SendOnGameplayEffectApply_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientReceiveGameplayEffectApply
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
void ASurvivorBase_C::ClientReceiveGameplayEffectApply(const struct FGameplayTagContainer& GameplayTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientReceiveGameplayEffectApply");

	ASurvivorBase_C_ClientReceiveGameplayEffectApply_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerPlayAudio
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Attach                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::ServerPlayAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool Attach)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerPlayAudio");

	ASurvivorBase_C_ServerPlayAudio_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;
	params.Attach = Attach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Attach                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::MulticastAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool Attach)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastAudio");

	ASurvivorBase_C_MulticastAudio_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;
	params.Attach = Attach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAttachCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.PlaySound");

	ASurvivorBase_C_PlaySound_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;
	params.bAttachCharacter = bAttachCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastInjuredSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::MulticastInjuredSound(bool Active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastInjuredSound");

	ASurvivorBase_C_MulticastInjuredSound_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastExhaustedSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::MulticastExhaustedSound(bool Active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastExhaustedSound");

	ASurvivorBase_C_MulticastExhaustedSound_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASurvivorBase_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ReceiveBeginPlay");

	ASurvivorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ReceivePossessed");

	ASurvivorBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EnableOutlineComponent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::EnableOutlineComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EnableOutlineComponent");

	ASurvivorBase_C_EnableOutlineComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ReceiveUnpossessed");

	ASurvivorBase_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastInitSpeed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::MulticastInitSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastInitSpeed");

	ASurvivorBase_C_MulticastInitSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EnableInteractComponent
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::EnableInteractComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EnableInteractComponent");

	ASurvivorBase_C_EnableInteractComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnProgressFailed
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnProgressFailed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnProgressFailed");

	ASurvivorBase_C_OnProgressFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EnableChaseAudioComponent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::EnableChaseAudioComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EnableChaseAudioComponent");

	ASurvivorBase_C_EnableChaseAudioComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnCharacterChange
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnCharacterChange()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnCharacterChange");

	ASurvivorBase_C_OnCharacterChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ShowSurvivorAura
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ShowSurvivorAura()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ShowSurvivorAura");

	ASurvivorBase_C_ShowSurvivorAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnStartProgressAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnStartProgressAction(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnStartProgressAction");

	ASurvivorBase_C_OnStartProgressAction_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnCommitSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnCommitSkillCheck");

	ASurvivorBase_C_OnCommitSkillCheck_Params params;
	params.Result = Result;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnCannotProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnCannotProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnCannotProgress");

	ASurvivorBase_C_OnCannotProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnTriggerChasing_Event
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnTriggerChasing_Event()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnTriggerChasing_Event");

	ASurvivorBase_C_OnTriggerChasing_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerChasing
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ServerChasing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerChasing");

	ASurvivorBase_C_ServerChasing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnRequestProgress_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnRequestProgress_Event(class UObject* Target, float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRequestProgress_Event");

	ASurvivorBase_C_OnRequestProgress_Event_Params params;
	params.Target = Target;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerRequestProgress
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ServerRequestProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerRequestProgress");

	ASurvivorBase_C_ServerRequestProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Emit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Emit(class UParticleSystem* EmitterTemplate)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Emit");

	ASurvivorBase_C_Emit_Params params;
	params.EmitterTemplate = EmitterTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnTriggerRitualActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ContributePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnTriggerRitualActivity(float ContributePercent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnTriggerRitualActivity");

	ASurvivorBase_C_OnTriggerRitualActivity_Params params;
	params.ContributePercent = ContributePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnStopProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnStopProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnStopProgress");

	ASurvivorBase_C_OnStopProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnFinishProgress");

	ASurvivorBase_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.HotfixedHiddenSpecter
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::HotfixedHiddenSpecter(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.HotfixedHiddenSpecter");

	ASurvivorBase_C_HotfixedHiddenSpecter_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DoDamage
// (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ASurvivorBase_C::DoDamage(const struct FHitResult& HitInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DoDamage");

	ASurvivorBase_C_DoDamage_Params params;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SpawnHitParticleAndSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SpawnHitParticleAndSound(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SpawnHitParticleAndSound");

	ASurvivorBase_C_SpawnHitParticleAndSound_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnEnableAttackCollision
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnEnableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnEnableAttackCollision");

	ASurvivorBase_C_OnEnableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnDisableAttackCollision
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnDisableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnDisableAttackCollision");

	ASurvivorBase_C_OnDisableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnEndAttackAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnEndAttackAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnEndAttackAnimation");

	ASurvivorBase_C_OnEndAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.BeginAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              SoundAtk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.BeginAttackCollision");

	ASurvivorBase_C_BeginAttackCollision_Params params;
	params.Tag = Tag;
	params.SoundAtk = SoundAtk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EndAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::EndAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EndAttackCollision");

	ASurvivorBase_C_EndAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EndAttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::EndAttackAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EndAttackAnimation");

	ASurvivorBase_C_EndAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DoAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::DoAttack(int AttackType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DoAttack");

	ASurvivorBase_C_DoAttack_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Injure
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Injure()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Injure");

	ASurvivorBase_C_Injure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.PerfromAttack
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::PerfromAttack(int AttackType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.PerfromAttack");

	ASurvivorBase_C_PerfromAttack_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ChooseAttackSection
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ChooseAttackSection(int Selection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ChooseAttackSection");

	ASurvivorBase_C_ChooseAttackSection_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnHealthChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   EventTags                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ASurvivorBase_C::OnHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnHealthChanged");

	ASurvivorBase_C_OnHealthChanged_Params params;
	params.DeltaValue = DeltaValue;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CancelAbility
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CancelAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CancelAbility");

	ASurvivorBase_C_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GameStatisticMelee
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::GameStatisticMelee()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GameStatisticMelee");

	ASurvivorBase_C_GameStatisticMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.GameStatisticHealthFull
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::GameStatisticHealthFull()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.GameStatisticHealthFull");

	ASurvivorBase_C_GameStatisticHealthFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CameraShake
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ShakeClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::CameraShake(class UClass* ShakeClass, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CameraShake");

	ASurvivorBase_C_CameraShake_Params params;
	params.ShakeClass = ShakeClass;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OwningTakeOnDamage
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OwningTakeOnDamage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OwningTakeOnDamage");

	ASurvivorBase_C_OwningTakeOnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.NotifyCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CameraShake                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::NotifyCameraShake(class UClass* CameraShake, float Magnitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.NotifyCameraShake");

	ASurvivorBase_C_NotifyCameraShake_Params params;
	params.CameraShake = CameraShake;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnDamaged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   EffectGrantedTags              (BlueprintVisible, BlueprintReadOnly, Parm)
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnDamaged");

	ASurvivorBase_C_OnDamaged_Params params;
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


// Function SurvivorBase.SurvivorBase_C.SlowAnimMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::SlowAnimMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SlowAnimMontage");

	ASurvivorBase_C_SlowAnimMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastCloseBodyBlock
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::MulticastCloseBodyBlock(float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastCloseBodyBlock");

	ASurvivorBase_C_MulticastCloseBodyBlock_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ShowNotifyText
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ShowNotifyText(const struct FText& Text, float PlayRate)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ShowNotifyText");

	ASurvivorBase_C_ShowNotifyText_Params params;
	params.Text = Text;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.PerformHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       CauserCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  CauserActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::PerformHitReaction(class AHSHCharacterBase* CauserCharacter, class AActor* CauserActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.PerformHitReaction");

	ASurvivorBase_C_PerformHitReaction_Params params;
	params.CauserCharacter = CauserCharacter;
	params.CauserActor = CauserActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ShowNotifyTextPortal
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ShowTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ShowNotifyTextPortal(const struct FText& Text, float FadeTime, float ShowTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ShowNotifyTextPortal");

	ASurvivorBase_C_ShowNotifyTextPortal_Params params;
	params.Text = Text;
	params.FadeTime = FadeTime;
	params.ShowTime = ShowTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.NotifyAfterGetHit
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::NotifyAfterGetHit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.NotifyAfterGetHit");

	ASurvivorBase_C_NotifyAfterGetHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.TakeOnDamage
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::TakeOnDamage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.TakeOnDamage");

	ASurvivorBase_C_TakeOnDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.StartLookAtCrosshair
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::StartLookAtCrosshair()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.StartLookAtCrosshair");

	ASurvivorBase_C_StartLookAtCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.StartRotateMeshToDefault
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::StartRotateMeshToDefault()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.StartRotateMeshToDefault");

	ASurvivorBase_C_StartRotateMeshToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerActivateGE
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameplayEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ServerActivateGE(class UClass* GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerActivateGE");

	ASurvivorBase_C_ServerActivateGE_Params params;
	params.GameplayEffect = GameplayEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnEndAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                           IsCancel_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnEndAbility");

	ASurvivorBase_C_OnEndAbility_Params params;
	params.Tag = Tag;
	params.IsCancel_ = IsCancel_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ASurvivorBase_C::OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnUpdateItem");

	ASurvivorBase_C_OnUpdateItem_Params params;
	params.Durability = Durability;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerActivateGEWithMagnitude
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameplayEffectClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            DataTag                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ServerActivateGEWithMagnitude(class UClass* GameplayEffectClass, const struct FGameplayTag& DataTag, float Magnitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerActivateGEWithMagnitude");

	ASurvivorBase_C_ServerActivateGEWithMagnitude_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.DataTag = DataTag;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.AddedItemPassiveEffect
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             PickableStruct                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::AddedItemPassiveEffect(const struct FS_Pickable& PickableStruct)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.AddedItemPassiveEffect");

	ASurvivorBase_C_AddedItemPassiveEffect_Params params;
	params.PickableStruct = PickableStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.RemoveItemPassiveEffect
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             PickableStruct                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::RemoveItemPassiveEffect(const struct FS_Pickable& PickableStruct)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RemoveItemPassiveEffect");

	ASurvivorBase_C_RemoveItemPassiveEffect_Params params;
	params.PickableStruct = PickableStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerSetWalkSpeed
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ServerSetWalkSpeed(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerSetWalkSpeed");

	ASurvivorBase_C_ServerSetWalkSpeed_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EMovementMode> PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.K2_OnMovementModeChanged");

	ASurvivorBase_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckFallingDamage
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckFallingDamage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckFallingDamage");

	ASurvivorBase_C_CheckFallingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ASurvivorBase_C::OnLanded(const struct FHitResult& Hit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnLanded");

	ASurvivorBase_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.RefreshFallingLocation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::RefreshFallingLocation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RefreshFallingLocation");

	ASurvivorBase_C_RefreshFallingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ChangeCameraSide
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ChangeCameraSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ChangeCameraSide");

	ASurvivorBase_C_ChangeCameraSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastChangeCameraSide
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::MulticastChangeCameraSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastChangeCameraSide");

	ASurvivorBase_C_MulticastChangeCameraSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientSetWalkSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientSetWalkSpeed(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientSetWalkSpeed");

	ASurvivorBase_C_ClientSetWalkSpeed_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	ASurvivorBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	ASurvivorBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	ASurvivorBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");

	ASurvivorBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3");

	ASurvivorBase_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4");

	ASurvivorBase_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Movement_Forward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Movement_Forward(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Movement_Forward");

	ASurvivorBase_C_Movement_Forward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Movement_MoveRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Movement_MoveRight(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Movement_MoveRight");

	ASurvivorBase_C_Movement_MoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Movement_Turn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Movement_Turn(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Movement_Turn");

	ASurvivorBase_C_Movement_Turn_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Movement_LookUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Movement_LookUp(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Movement_LookUp");

	ASurvivorBase_C_Movement_LookUp_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_Interaction
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_Interaction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_Interaction");

	ASurvivorBase_C_Action_Interaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_UseItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_UseItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_UseItem");

	ASurvivorBase_C_Action_UseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_ToggleCrouch
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_ToggleCrouch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_ToggleCrouch");

	ASurvivorBase_C_Action_ToggleCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_SprintPress
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_SprintPress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_SprintPress");

	ASurvivorBase_C_Action_SprintPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_SprintReleased
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_SprintReleased()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_SprintReleased");

	ASurvivorBase_C_Action_SprintReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_SprintToggle
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_SprintToggle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_SprintToggle");

	ASurvivorBase_C_Action_SprintToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_SkillCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurvivorBase_C::Action_SkillCheck(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_SkillCheck");

	ASurvivorBase_C_Action_SkillCheck_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_DropItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_DropItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_DropItem");

	ASurvivorBase_C_Action_DropItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_Ping
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_Ping()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_Ping");

	ASurvivorBase_C_Action_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckingInteractState
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckingInteractState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckingInteractState");

	ASurvivorBase_C_CheckingInteractState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckingBlockAction
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckingBlockAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckingBlockAction");

	ASurvivorBase_C_CheckingBlockAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_Aiming
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_Aiming()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_Aiming");

	ASurvivorBase_C_Action_Aiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckingLockItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckingLockItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckingLockItem");

	ASurvivorBase_C_CheckingLockItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_ChangeCameraSide
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_ChangeCameraSide()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_ChangeCameraSide");

	ASurvivorBase_C_Action_ChangeCameraSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_PingEnemy
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_PingEnemy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_PingEnemy");

	ASurvivorBase_C_Action_PingEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.RunSticker
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::RunSticker()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RunSticker");

	ASurvivorBase_C_RunSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_Crouch
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_Crouch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_Crouch");

	ASurvivorBase_C_Action_Crouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Action_Uncrouch
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::Action_Uncrouch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Action_Uncrouch");

	ASurvivorBase_C_Action_Uncrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ResetLockItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ResetLockItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ResetLockItem");

	ASurvivorBase_C_ResetLockItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.StartDelayInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::StartDelayInput(float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.StartDelayInput");

	ASurvivorBase_C_StartDelayInput_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.S_Survivor_ActiveSkill
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::S_Survivor_ActiveSkill()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.S_Survivor_ActiveSkill");

	ASurvivorBase_C_S_Survivor_ActiveSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Death
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Death(class AHunterBase_C* KilledBy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Death");

	ASurvivorBase_C_Death_Params params;
	params.KilledBy = KilledBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UseItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UseItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UseItem");

	ASurvivorBase_C_UseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      InteractionItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ServerInteraction(class AInteractionBase_C* InteractionItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerInteraction");

	ASurvivorBase_C_ServerInteraction_Params params;
	params.InteractionItem = InteractionItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Crouching
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Crouching(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Crouching");

	ASurvivorBase_C_Crouching_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.sprint
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::sprint(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.sprint");

	ASurvivorBase_C_sprint_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Walk
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Walk(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Walk");

	ASurvivorBase_C_Walk_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ReceiveTick");

	ASurvivorBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CollectItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickableItemBase_C*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::CollectItem(class APickableItemBase_C* Item, const struct FPrimaryAssetId& ItemId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CollectItem");

	ASurvivorBase_C_CollectItem_Params params;
	params.Item = Item;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MovePlayerTo
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::MovePlayerTo(class USceneComponent* Component, const struct FVector& Location, const struct FRotator& Rotation, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MovePlayerTo");

	ASurvivorBase_C_MovePlayerTo_Params params;
	params.Component = Component;
	params.Location = Location;
	params.Rotation = Rotation;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ASurvivorBase_C::BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	ASurvivorBase_C_BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function SurvivorBase.SurvivorBase_C.BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	ASurvivorBase_C_BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ItemOutline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ItemOutline(class AActor* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ItemOutline");

	ASurvivorBase_C_ItemOutline_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DeleteOutline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::DeleteOutline(class AActor* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DeleteOutline");

	ASurvivorBase_C_DeleteOutline_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ActionCrouch
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ActionCrouch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ActionCrouch");

	ASurvivorBase_C_ActionCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ActionUnCrouch
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ActionUnCrouch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ActionUnCrouch");

	ASurvivorBase_C_ActionUnCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastSetMeshOwnerSee
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewOnlyOwnerSee               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::MulticastSetMeshOwnerSee(bool bNewOnlyOwnerSee)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastSetMeshOwnerSee");

	ASurvivorBase_C_MulticastSetMeshOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.AddedActorToOutlineComponent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::AddedActorToOutlineComponent(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.AddedActorToOutlineComponent");

	ASurvivorBase_C_AddedActorToOutlineComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DisableandEnableInputAfterDelay
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::DisableandEnableInputAfterDelay(float Delay)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DisableandEnableInputAfterDelay");

	ASurvivorBase_C_DisableandEnableInputAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.TeleportToVentilator
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Ventilator           PairVentilator                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVentilatorManager_C*    VentilatorMechanic             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::TeleportToVentilator(const struct FVector& DestLocation, const struct FRotator& DestRotation, const struct FS_Ventilator& PairVentilator, class AVentilatorManager_C* VentilatorMechanic, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.TeleportToVentilator");

	ASurvivorBase_C_TeleportToVentilator_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.PairVentilator = PairVentilator;
	params.VentilatorMechanic = VentilatorMechanic;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.FadeCamera
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FromAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToAlpha                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShouldFadeAudio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHoldWhenFinished              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::FadeCamera(float FromAlpha, float ToAlpha, float Duration, bool bShouldFadeAudio, bool bHoldWhenFinished)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.FadeCamera");

	ASurvivorBase_C_FadeCamera_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SetActorCollision
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionEnabled> Collsion                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SetActorCollision(TEnumAsByte<Engine_ECollisionEnabled> Collsion, TEnumAsByte<Engine_EMovementMode> NewMovementMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetActorCollision");

	ASurvivorBase_C_SetActorCollision_Params params;
	params.Collsion = Collsion;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CallUseItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CallUseItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CallUseItem");

	ASurvivorBase_C_CallUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CheckItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CheckItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CheckItem");

	ASurvivorBase_C_CheckItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UpdateItemDurability
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseAllDurability_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          UseDurability                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::UpdateItemDurability(bool UseAllDurability_, float UseDurability)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdateItemDurability");

	ASurvivorBase_C_UpdateItemDurability_Params params;
	params.UseAllDurability_ = UseAllDurability_;
	params.UseDurability = UseDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.DropItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DropItemOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::DropItem(bool DropItemOnly)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.DropItem");

	ASurvivorBase_C_DropItem_Params params;
	params.DropItemOnly = DropItemOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastSetMeshHiddenInGame
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHidden                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::MulticastSetMeshHiddenInGame(bool bHidden)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastSetMeshHiddenInGame");

	ASurvivorBase_C_MulticastSetMeshHiddenInGame_Params params;
	params.bHidden = bHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastPlayDropSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::MulticastPlayDropSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastPlayDropSound");

	ASurvivorBase_C_MulticastPlayDropSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastPlayCollectSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::MulticastPlayCollectSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastPlayCollectSound");

	ASurvivorBase_C_MulticastPlayCollectSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ForcePlayMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InPlayRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ForcePlayMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ForcePlayMontage");

	ASurvivorBase_C_ForcePlayMontage_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SetActorCollisionResponse
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECollisionResponse> NewResponse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SetActorCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> NewResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetActorCollisionResponse");

	ASurvivorBase_C_SetActorCollisionResponse_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.StopInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorBase_C::StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.StopInteraction");

	ASurvivorBase_C_StopInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerStopInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ServerStopInteraction(class AInteractionBase_C* Interact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerStopInteraction");

	ASurvivorBase_C_ServerStopInteraction_Params params;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ExitHiddenPlace
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ExitHiddenPlace()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ExitHiddenPlace");

	ASurvivorBase_C_ExitHiddenPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnStopUsingItem
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnStopUsingItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnStopUsingItem");

	ASurvivorBase_C_OnStopUsingItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.RemoveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::RemoveItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RemoveItem");

	ASurvivorBase_C_RemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ForceStopMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ForceStopMontage(class UAnimMontage* AnimMontage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ForceStopMontage");

	ASurvivorBase_C_ForceStopMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnExecutionSuccess
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnExecutionSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnExecutionSuccess");

	ASurvivorBase_C_OnExecutionSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientRotationToLocation
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BaseRelativeLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientRotationToLocation(class APlayerController* PlayerController, const struct FVector& BaseRelativeLocation, const struct FVector& TargetRelativeLocation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientRotationToLocation");

	ASurvivorBase_C_ClientRotationToLocation_Params params;
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


// Function SurvivorBase.SurvivorBase_C.SnapToInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRelativeRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 TargetLookAtLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::SnapToInteraction(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, const struct FVector& TargetLookAtLocation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SnapToInteraction");

	ASurvivorBase_C_SnapToInteraction_Params params;
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


// Function SurvivorBase.SurvivorBase_C.ClientMoveTo
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRelativeRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientMoveTo(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientMoveTo");

	ASurvivorBase_C_ClientMoveTo_Params params;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientSendTutorialEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientSendTutorialEvent(const struct FName& EventName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientSendTutorialEvent");

	ASurvivorBase_C_ClientSendTutorialEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientChangeToHideCamara
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientChangeToHideCamara(class AActor* Actor, float BlendTime, float BlendExp)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientChangeToHideCamara");

	ASurvivorBase_C_ClientChangeToHideCamara_Params params;
	params.Actor = Actor;
	params.BlendTime = BlendTime;
	params.BlendExp = BlendExp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.EnterAiming
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::EnterAiming()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.EnterAiming");

	ASurvivorBase_C_EnterAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ExitAiming
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ExitAiming()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ExitAiming");

	ASurvivorBase_C_ExitAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.FinishInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorBase_C::FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.FinishInteraction");

	ASurvivorBase_C_FinishInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ServerFinishInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ServerFinishInteraction(class AInteractionBase_C* Interact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ServerFinishInteraction");

	ASurvivorBase_C_ServerFinishInteraction_Params params;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.TeleportPlayer
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::TeleportPlayer(const struct FVector& TargetLocation, const struct FRotator& TargetRotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.TeleportPlayer");

	ASurvivorBase_C_TeleportPlayer_Params params;
	params.TargetLocation = TargetLocation;
	params.TargetRotation = TargetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.MulticastJumpMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::MulticastJumpMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.MulticastJumpMontage");

	ASurvivorBase_C_MulticastJumpMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientResetMovingHold
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ClientResetMovingHold()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientResetMovingHold");

	ASurvivorBase_C_ClientResetMovingHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.RotateActorTo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::RotateActorTo(const struct FRotator& Rotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.RotateActorTo");

	ASurvivorBase_C_RotateActorTo_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.LocationTo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::LocationTo(const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.LocationTo");

	ASurvivorBase_C_LocationTo_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.Interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      InteractionItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::Interaction(class AInteractionBase_C* InteractionItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.Interaction");

	ASurvivorBase_C_Interaction_Params params;
	params.InteractionItem = InteractionItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ShowSpawnLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::ShowSpawnLocation(bool bIsShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ShowSpawnLocation");

	ASurvivorBase_C_ShowSpawnLocation_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ForceJumpCurrentMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ForceJumpCurrentMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ForceJumpCurrentMontage");

	ASurvivorBase_C_ForceJumpCurrentMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientCrouch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientCrouch(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientCrouch");

	ASurvivorBase_C_ClientCrouch_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientWalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientWalk(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientWalk");

	ASurvivorBase_C_ClientWalk_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientSprint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientSprint(float Axis)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientSprint");

	ASurvivorBase_C_ClientSprint_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnHunterScan
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnHunterScan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnHunterScan");

	ASurvivorBase_C_OnHunterScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnRitualStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnRitualStateChanged(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRitualStateChanged");

	ASurvivorBase_C_OnRitualStateChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientSendEventSnap
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ClientSendEventSnap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientSendEventSnap");

	ASurvivorBase_C_ClientSendEventSnap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ForceRemoveItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ForceRemoveItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ForceRemoveItem");

	ASurvivorBase_C_ForceRemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientFinishInteraction
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientFinishInteraction(const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientFinishInteraction");

	ASurvivorBase_C_ClientFinishInteraction_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientStopInteraction
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorBase_C::ClientStopInteraction(const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientStopInteraction");

	ASurvivorBase_C_ClientStopInteraction_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ReportAFK
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ReportAFK()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ReportAFK");

	ASurvivorBase_C_ReportAFK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ClientTrackDeathEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::ClientTrackDeathEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ClientTrackDeathEvent");

	ASurvivorBase_C_ClientTrackDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.BindUseItemEvent
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::BindUseItemEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.BindUseItemEvent");

	ASurvivorBase_C_BindUseItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UnbindUseItemEvent
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UnbindUseItemEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UnbindUseItemEvent");

	ASurvivorBase_C_UnbindUseItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.UpdateAimTransform
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::UpdateAimTransform()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.UpdateAimTransform");

	ASurvivorBase_C_UpdateAimTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ReceiveEndPlay");

	ASurvivorBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SetMeshHiddenInGames
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bPropagateToChildren           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::SetMeshHiddenInGames(bool NewHidden, bool bPropagateToChildren)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetMeshHiddenInGames");

	ASurvivorBase_C_SetMeshHiddenInGames_Params params;
	params.NewHidden = NewHidden;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.SetMeshOwnerSees
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewOnlyOwnerSee               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::SetMeshOwnerSees(bool bNewOnlyOwnerSee)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.SetMeshOwnerSees");

	ASurvivorBase_C_SetMeshOwnerSees_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.HideMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::HideMesh(bool IsHide)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.HideMesh");

	ASurvivorBase_C_HideMesh_Params params;
	params.IsHide = IsHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ForceCollectItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CurrentPickItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ForceCollectItem(const struct FS_Pickable& CurrentPickItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ForceCollectItem");

	ASurvivorBase_C_ForceCollectItem_Params params;
	params.CurrentPickItem = CurrentPickItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.CallExitHiddenPlace
// (BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::CallExitHiddenPlace()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.CallExitHiddenPlace");

	ASurvivorBase_C_CallExitHiddenPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.ExecuteUbergraph_SurvivorBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::ExecuteUbergraph_SurvivorBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.ExecuteUbergraph_SurvivorBase");

	ASurvivorBase_C_ExecuteUbergraph_SurvivorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnHiddenSurvivor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::OnHiddenSurvivor__DelegateSignature(bool IsHidden)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnHiddenSurvivor__DelegateSignature");

	ASurvivorBase_C_OnHiddenSurvivor__DelegateSignature_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnSurvivorDoorStun__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnSurvivorDoorStun__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnSurvivorDoorStun__DelegateSignature");

	ASurvivorBase_C_OnSurvivorDoorStun__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnCharacterDie__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnCharacterDie__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnCharacterDie__DelegateSignature");

	ASurvivorBase_C_OnCharacterDie__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnActionUseItemFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnActionUseItemFinish__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnActionUseItemFinish__DelegateSignature");

	ASurvivorBase_C_OnActionUseItemFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnStopUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnStopUseItem__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnStopUseItem__DelegateSignature");

	ASurvivorBase_C_OnStopUseItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnFinishInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnFinishInteraction__DelegateSignature(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnFinishInteraction__DelegateSignature");

	ASurvivorBase_C_OnFinishInteraction__DelegateSignature_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnStopInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnStopInteraction__DelegateSignature(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnStopInteraction__DelegateSignature");

	ASurvivorBase_C_OnStopInteraction__DelegateSignature_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnFinishedVent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnFinishedVent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnFinishedVent__DelegateSignature");

	ASurvivorBase_C_OnFinishedVent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnCharacterFall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnCharacterFall__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnCharacterFall__DelegateSignature");

	ASurvivorBase_C_OnCharacterFall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnClientTakeDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnClientTakeDamage__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnClientTakeDamage__DelegateSignature");

	ASurvivorBase_C_OnClientTakeDamage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnSnapLocationSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnSnapLocationSuccess__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnSnapLocationSuccess__DelegateSignature");

	ASurvivorBase_C_OnSnapLocationSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnInteractionStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorBase_C::OnInteractionStart__DelegateSignature(bool bIsProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnInteractionStart__DelegateSignature");

	ASurvivorBase_C_OnInteractionStart__DelegateSignature_Params params;
	params.bIsProgress = bIsProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnInteractionDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnInteractionDone__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnInteractionDone__DelegateSignature");

	ASurvivorBase_C_OnInteractionDone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnSeeAnyOneChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnSeeAnyOneChanged__DelegateSignature(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnSeeAnyOneChanged__DelegateSignature");

	ASurvivorBase_C_OnSeeAnyOneChanged__DelegateSignature_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnAttackSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnAttackSuccess__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnAttackSuccess__DelegateSignature");

	ASurvivorBase_C_OnAttackSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnRitualDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnRitualDone__DelegateSignature(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnRitualDone__DelegateSignature");

	ASurvivorBase_C_OnRitualDone__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnScaned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnScaned__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnScaned__DelegateSignature");

	ASurvivorBase_C_OnScaned__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnChasing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnChasing__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnChasing__DelegateSignature");

	ASurvivorBase_C_OnChasing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnActionUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnActionUseItem__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnActionUseItem__DelegateSignature");

	ASurvivorBase_C_OnActionUseItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnActionAttack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnActionAttack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnActionAttack__DelegateSignature");

	ASurvivorBase_C_OnActionAttack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnDropItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickableItemBase_C*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorBase_C::OnDropItem__DelegateSignature(class APickableItemBase_C* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnDropItem__DelegateSignature");

	ASurvivorBase_C_OnDropItem__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ASurvivorBase_C::OnUseItem__DelegateSignature(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnUseItem__DelegateSignature");

	ASurvivorBase_C_OnUseItem__DelegateSignature_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnTakeDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnTakeDamage__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnTakeDamage__DelegateSignature");

	ASurvivorBase_C_OnTakeDamage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorBase.SurvivorBase_C.OnMoveToCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASurvivorBase_C::OnMoveToCompleted__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorBase.SurvivorBase_C.OnMoveToCompleted__DelegateSignature");

	ASurvivorBase_C_OnMoveToCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
