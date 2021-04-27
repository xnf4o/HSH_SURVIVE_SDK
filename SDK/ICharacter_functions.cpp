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

// Function ICharacter.ICharacter_C.GetCurrentPickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CurrentPickable                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::GetCurrentPickable(struct FS_Pickable* CurrentPickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.GetCurrentPickable");

	UICharacter_C_GetCurrentPickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickable != nullptr)
		*CurrentPickable = params.CurrentPickable;

}


// Function ICharacter.ICharacter_C.GetExecuteCameraTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void UICharacter_C::GetExecuteCameraTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.GetExecuteCameraTransform");

	UICharacter_C_GetExecuteCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ICharacter.ICharacter_C.isExecution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UICharacter_C::isExecution(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.isExecution");

	UICharacter_C_isExecution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ICharacter.ICharacter_C.ForceJumpCurrentMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::ForceJumpCurrentMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.ForceJumpCurrentMontage");

	UICharacter_C_ForceJumpCurrentMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.GetAimTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void UICharacter_C::GetAimTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.GetAimTransform");

	UICharacter_C_GetAimTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ICharacter.ICharacter_C.NotifyAfterGetHit
// (Public, BlueprintCallable, BlueprintEvent)
void UICharacter_C::NotifyAfterGetHit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.NotifyAfterGetHit");

	UICharacter_C_NotifyAfterGetHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.IsHaveSpawnPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHave                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   Tag                            (Parm, OutParm)
void UICharacter_C::IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.IsHaveSpawnPerk");

	UICharacter_C_IsHaveSpawnPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsHave != nullptr)
		*bIsHave = params.bIsHave;
	if (Tag != nullptr)
		*Tag = params.Tag;

}


// Function ICharacter.ICharacter_C.GetCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::GetCharacterID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.GetCharacterID");

	UICharacter_C_GetCharacterID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function ICharacter.ICharacter_C.TryPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.TryPlayMontage");

	UICharacter_C_TryPlayMontage_Params params;
	params.Montage = Montage;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.FinishInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UICharacter_C::FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.FinishInteraction");

	UICharacter_C_FinishInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.EnableCanSeeSpecter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UICharacter_C::EnableCanSeeSpecter(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.EnableCanSeeSpecter");

	UICharacter_C_EnableCanSeeSpecter_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.NotifyCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CameraShake                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::NotifyCameraShake(class UClass* CameraShake, float Magnitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.NotifyCameraShake");

	UICharacter_C_NotifyCameraShake_Params params;
	params.CameraShake = CameraShake;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.StopInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UICharacter_C::StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.StopInteraction");

	UICharacter_C_StopInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAttachCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UICharacter_C::PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.PlaySound");

	UICharacter_C_PlaySound_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;
	params.bAttachCharacter = bAttachCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.NotifyFootStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.NotifyFootStep");

	UICharacter_C_NotifyFootStep_Params params;

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


// Function ICharacter.ICharacter_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.SendMeleeDistance");

	UICharacter_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.GetCurrentItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::GetCurrentItemID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.GetCurrentItemID");

	UICharacter_C_GetCurrentItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function ICharacter.ICharacter_C.GetMainCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::GetMainCameraComponent(class UCameraComponent** CameraComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.GetMainCameraComponent");

	UICharacter_C_GetMainCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;

}


// Function ICharacter.ICharacter_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UICharacter_C::OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.OnUpdateItem");

	UICharacter_C_OnUpdateItem_Params params;
	params.Durability = Durability;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.OnEndAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                           IsCancel_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UICharacter_C::OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.OnEndAbility");

	UICharacter_C_OnEndAbility_Params params;
	params.Tag = Tag;
	params.IsCancel_ = IsCancel_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.EndAttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void UICharacter_C::EndAttackAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.EndAttackAnimation");

	UICharacter_C_EndAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.EndAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
void UICharacter_C::EndAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.EndAttackCollision");

	UICharacter_C_EndAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ICharacter.ICharacter_C.BeginAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              SoundAtk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UICharacter_C::BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ICharacter.ICharacter_C.BeginAttackCollision");

	UICharacter_C_BeginAttackCollision_Params params;
	params.Tag = Tag;
	params.SoundAtk = SoundAtk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
