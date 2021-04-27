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

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetCurrentPickable
struct ASurvivorMinionBase_C_GetCurrentPickable_Params
{
	struct FS_Pickable                                 CurrentPickable;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetMainCameraComponent
struct ASurvivorMinionBase_C_GetMainCameraComponent_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetCurrentItemID
struct ASurvivorMinionBase_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyFootStep
struct ASurvivorMinionBase_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetCharacterID
struct ASurvivorMinionBase_C_GetCharacterID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.IsHaveSpawnPerk
struct ASurvivorMinionBase_C_IsHaveSpawnPerk_Params
{
	bool                                               bIsHave;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       Tag;                                                       // (Parm, OutParm)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetAimTransform
struct ASurvivorMinionBase_C_GetAimTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.isExecution
struct ASurvivorMinionBase_C_isExecution_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetExecuteCameraTransform
struct ASurvivorMinionBase_C_GetExecuteCameraTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetFootStepSound
struct ASurvivorMinionBase_C_GetFootStepSound_Params
{
	struct FS_FootStepSurvivor                         OutRow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.FindFlood
struct ASurvivorMinionBase_C_FindFlood_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.GetOptionSensitivity
struct ASurvivorMinionBase_C_GetOptionSensitivity_Params
{
	float                                              Sensitivity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.BeginAttackCollision
struct ASurvivorMinionBase_C_BeginAttackCollision_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundAtk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.EndAttackCollision
struct ASurvivorMinionBase_C_EndAttackCollision_Params
{
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.EndAttackAnimation
struct ASurvivorMinionBase_C_EndAttackAnimation_Params
{
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.OnEndAbility
struct ASurvivorMinionBase_C_OnEndAbility_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCancel_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.OnUpdateItem
struct ASurvivorMinionBase_C_OnUpdateItem_Params
{
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.SendMeleeDistance
struct ASurvivorMinionBase_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.PlaySound
struct ASurvivorMinionBase_C_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAttachCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.StopInteraction
struct ASurvivorMinionBase_C_StopInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyCameraShake
struct ASurvivorMinionBase_C_NotifyCameraShake_Params
{
	class UClass*                                      CameraShake;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.EnableCanSeeSpecter
struct ASurvivorMinionBase_C_EnableCanSeeSpecter_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.FinishInteraction
struct ASurvivorMinionBase_C_FinishInteraction_Params
{
	class AInteractionBase_C*                          Interact;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.TryPlayMontage
struct ASurvivorMinionBase_C_TryPlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Section;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.NotifyAfterGetHit
struct ASurvivorMinionBase_C_NotifyAfterGetHit_Params
{
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.ForceJumpCurrentMontage
struct ASurvivorMinionBase_C_ForceJumpCurrentMontage_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.SetMesh
struct ASurvivorMinionBase_C_SetMesh_Params
{
	bool                                               bCustomDepth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMinionBase.SurvivorMinionBase_C.ExecuteUbergraph_SurvivorMinionBase
struct ASurvivorMinionBase_C_ExecuteUbergraph_SurvivorMinionBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
