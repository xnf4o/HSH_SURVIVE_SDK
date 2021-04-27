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

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetCurrentPickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CurrentPickable                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::GetCurrentPickable(struct FS_Pickable* CurrentPickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetCurrentPickable");

	ASurvivorMinionBase_C_GetCurrentPickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickable != nullptr)
		*CurrentPickable = params.CurrentPickable;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.GetMainCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::GetMainCameraComponent(class UCameraComponent** CameraComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetMainCameraComponent");

	ASurvivorMinionBase_C_GetMainCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.GetCurrentItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::GetCurrentItemID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetCurrentItemID");

	ASurvivorMinionBase_C_GetCurrentItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyFootStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyFootStep");

	ASurvivorMinionBase_C_NotifyFootStep_Params params;

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


// Function SurvivorMinionBase.SurvivorMinionBase_C.GetCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::GetCharacterID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetCharacterID");

	ASurvivorMinionBase_C_GetCharacterID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.IsHaveSpawnPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHave                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   Tag                            (Parm, OutParm)
void ASurvivorMinionBase_C::IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.IsHaveSpawnPerk");

	ASurvivorMinionBase_C_IsHaveSpawnPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsHave != nullptr)
		*bIsHave = params.bIsHave;
	if (Tag != nullptr)
		*Tag = params.Tag;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.GetAimTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void ASurvivorMinionBase_C::GetAimTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetAimTransform");

	ASurvivorMinionBase_C_GetAimTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.isExecution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorMinionBase_C::isExecution(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.isExecution");

	ASurvivorMinionBase_C_isExecution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.GetExecuteCameraTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void ASurvivorMinionBase_C::GetExecuteCameraTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetExecuteCameraTransform");

	ASurvivorMinionBase_C_GetExecuteCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.GetFootStepSound
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FootStepSurvivor     OutRow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::GetFootStepSound(struct FS_FootStepSurvivor* OutRow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetFootStepSound");

	ASurvivorMinionBase_C_GetFootStepSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.FindFlood
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
bool ASurvivorMinionBase_C::FindFlood(struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.FindFlood");

	ASurvivorMinionBase_C_FindFlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function SurvivorMinionBase.SurvivorMinionBase_C.GetOptionSensitivity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Sensitivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::GetOptionSensitivity(float* Sensitivity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.GetOptionSensitivity");

	ASurvivorMinionBase_C_GetOptionSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.BeginAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              SoundAtk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.BeginAttackCollision");

	ASurvivorMinionBase_C_BeginAttackCollision_Params params;
	params.Tag = Tag;
	params.SoundAtk = SoundAtk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.EndAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorMinionBase_C::EndAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.EndAttackCollision");

	ASurvivorMinionBase_C_EndAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.EndAttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorMinionBase_C::EndAttackAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.EndAttackAnimation");

	ASurvivorMinionBase_C_EndAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.OnEndAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                           IsCancel_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorMinionBase_C::OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.OnEndAbility");

	ASurvivorMinionBase_C_OnEndAbility_Params params;
	params.Tag = Tag;
	params.IsCancel_ = IsCancel_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ASurvivorMinionBase_C::OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.OnUpdateItem");

	ASurvivorMinionBase_C_OnUpdateItem_Params params;
	params.Durability = Durability;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.SendMeleeDistance");

	ASurvivorMinionBase_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAttachCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorMinionBase_C::PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.PlaySound");

	ASurvivorMinionBase_C_PlaySound_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;
	params.bAttachCharacter = bAttachCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.StopInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.StopInteraction");

	ASurvivorMinionBase_C_StopInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CameraShake                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::NotifyCameraShake(class UClass* CameraShake, float Magnitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyCameraShake");

	ASurvivorMinionBase_C_NotifyCameraShake_Params params;
	params.CameraShake = CameraShake;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.EnableCanSeeSpecter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivorMinionBase_C::EnableCanSeeSpecter(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.EnableCanSeeSpecter");

	ASurvivorMinionBase_C_EnableCanSeeSpecter_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.FinishInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.FinishInteraction");

	ASurvivorMinionBase_C_FinishInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.TryPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.TryPlayMontage");

	ASurvivorMinionBase_C_TryPlayMontage_Params params;
	params.Montage = Montage;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyAfterGetHit
// (Public, BlueprintCallable, BlueprintEvent)
void ASurvivorMinionBase_C::NotifyAfterGetHit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyAfterGetHit");

	ASurvivorMinionBase_C_NotifyAfterGetHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.ForceJumpCurrentMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::ForceJumpCurrentMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.ForceJumpCurrentMontage");

	ASurvivorMinionBase_C_ForceJumpCurrentMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.SetMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCustomDepth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::SetMesh(bool bCustomDepth, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.SetMesh");

	ASurvivorMinionBase_C_SetMesh_Params params;
	params.bCustomDepth = bCustomDepth;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvivorMinionBase.SurvivorMinionBase_C.ExecuteUbergraph_SurvivorMinionBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivorMinionBase_C::ExecuteUbergraph_SurvivorMinionBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SurvivorMinionBase.SurvivorMinionBase_C.ExecuteUbergraph_SurvivorMinionBase");

	ASurvivorMinionBase_C_ExecuteUbergraph_SurvivorMinionBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
