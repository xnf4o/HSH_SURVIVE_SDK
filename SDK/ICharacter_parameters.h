#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ICharacter.ICharacter_C.GetCurrentPickable
struct UICharacter_C_GetCurrentPickable_Params
{
	struct FS_Pickable                                 CurrentPickable;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.GetExecuteCameraTransform
struct UICharacter_C_GetExecuteCameraTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function ICharacter.ICharacter_C.isExecution
struct UICharacter_C_isExecution_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ICharacter.ICharacter_C.ForceJumpCurrentMontage
struct UICharacter_C_ForceJumpCurrentMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.GetAimTransform
struct UICharacter_C_GetAimTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function ICharacter.ICharacter_C.NotifyAfterGetHit
struct UICharacter_C_NotifyAfterGetHit_Params
{
};

// Function ICharacter.ICharacter_C.IsHaveSpawnPerk
struct UICharacter_C_IsHaveSpawnPerk_Params
{
	bool                                               bIsHave;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       Tag;                                                       // (Parm, OutParm)
};

// Function ICharacter.ICharacter_C.GetCharacterID
struct UICharacter_C_GetCharacterID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.TryPlayMontage
struct UICharacter_C_TryPlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Section;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.FinishInteraction
struct UICharacter_C_FinishInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.EnableCanSeeSpecter
struct UICharacter_C_EnableCanSeeSpecter_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ICharacter.ICharacter_C.NotifyCameraShake
struct UICharacter_C_NotifyCameraShake_Params
{
	class UClass*                                      CameraShake;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.StopInteraction
struct UICharacter_C_StopInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.PlaySound
struct UICharacter_C_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAttachCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ICharacter.ICharacter_C.NotifyFootStep
struct UICharacter_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.SendMeleeDistance
struct UICharacter_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.GetCurrentItemID
struct UICharacter_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.GetMainCameraComponent
struct UICharacter_C_GetMainCameraComponent_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ICharacter.ICharacter_C.OnUpdateItem
struct UICharacter_C_OnUpdateItem_Params
{
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ICharacter.ICharacter_C.OnEndAbility
struct UICharacter_C_OnEndAbility_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCancel_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ICharacter.ICharacter_C.EndAttackAnimation
struct UICharacter_C_EndAttackAnimation_Params
{
};

// Function ICharacter.ICharacter_C.EndAttackCollision
struct UICharacter_C_EndAttackCollision_Params
{
};

// Function ICharacter.ICharacter_C.BeginAttackCollision
struct UICharacter_C_BeginAttackCollision_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundAtk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
