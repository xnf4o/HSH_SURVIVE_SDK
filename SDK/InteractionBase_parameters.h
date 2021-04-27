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

// Function InteractionBase.InteractionBase_C.GetSnapIKLocation
struct AInteractionBase_C_GetSnapIKLocation_Params
{
	bool                                               bIsSnap;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Enum_IKHand_Enum_IKHand>               IKTarget;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IKRight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IKLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.IsCanInteract
struct AInteractionBase_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.InteractSnapLocation
struct AInteractionBase_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.GetInteractMontage
struct AInteractionBase_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.GetInteractSlateBrush
struct AInteractionBase_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.IsLockCameraOnFinish
struct AInteractionBase_C_IsLockCameraOnFinish_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.GetFinishSection
struct AInteractionBase_C_GetFinishSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.GetSkilcheckFailedSection
struct AInteractionBase_C_GetSkilcheckFailedSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.GetSkilcheckGreatSection
struct AInteractionBase_C_GetSkilcheckGreatSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.GetSkilcheckPerfectSection
struct AInteractionBase_C_GetSkilcheckPerfectSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.IsForceSkillCheck?
struct AInteractionBase_C_IsForceSkillCheck__Params
{
	bool                                               bForceSkillCheck;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.IsNotCancelProgressonMove
struct AInteractionBase_C_IsNotCancelProgressonMove_Params
{
	bool                                               IsNotCancel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.CanUseProgress
struct AInteractionBase_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.GetSpeedSkillCheck
struct AInteractionBase_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.IsResetResult?
struct AInteractionBase_C_IsResetResult__Params
{
	bool                                               IsReset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.IsCanSkillCheck?
struct AInteractionBase_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.IsCanHelp?
struct AInteractionBase_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.GetProgressTime
struct AInteractionBase_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.GetStencilValueOnHide
struct AInteractionBase_C_GetStencilValueOnHide_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	int                                                Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.OutlineChangeOnHide
struct AInteractionBase_C_OutlineChangeOnHide_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.SetOutlineCustomSencilValue
struct AInteractionBase_C_SetOutlineCustomSencilValue_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.CanInteraction?
struct AInteractionBase_C_CanInteraction__Params
{
	bool                                               Can_;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.GetStencilValue
struct AInteractionBase_C_GetStencilValue_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	int                                                Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.OutlineChangeOnShow
struct AInteractionBase_C_OutlineChangeOnShow_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.SpriteChangeOnShow
struct AInteractionBase_C_SpriteChangeOnShow_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.GetSpriteIndicator
struct AInteractionBase_C_GetSpriteIndicator_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Sprite;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.SetIndicatorVisible
struct AInteractionBase_C_SetIndicatorVisible_Params
{
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.SetOutlineVisible
struct AInteractionBase_C_SetOutlineVisible_Params
{
	bool                                               bValue;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.GetValue
struct AInteractionBase_C_GetValue_Params
{
	TMap<TEnumAsByte<E_Role_E_Role>, bool>             ListMap;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsHunter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function InteractionBase.InteractionBase_C.ForceHideUI
struct AInteractionBase_C_ForceHideUI_Params
{
};

// Function InteractionBase.InteractionBase_C.OnCannotProgress
struct AInteractionBase_C_OnCannotProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.HideIndicator
struct AInteractionBase_C_HideIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.ShowIndicator
struct AInteractionBase_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.DisableUI
struct AInteractionBase_C_DisableUI_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.EnableUIOnRole
struct AInteractionBase_C_EnableUIOnRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.DisableUIOnRole
struct AInteractionBase_C_DisableUIOnRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.EnableUI
struct AInteractionBase_C_EnableUI_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.RefreshUI
struct AInteractionBase_C_RefreshUI_Params
{
};

// Function InteractionBase.InteractionBase_C.MulticastEnableUIOnRole
struct AInteractionBase_C_MulticastEnableUIOnRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.MulticastDisableUIOnRole
struct AInteractionBase_C_MulticastDisableUIOnRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.ReceiveBeginPlay
struct AInteractionBase_C_ReceiveBeginPlay_Params
{
};

// Function InteractionBase.InteractionBase_C.OnStopProgress
struct AInteractionBase_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.OnFinishProgress
struct AInteractionBase_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.ReceiveEndPlay
struct AInteractionBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.OnCommitSkillCheck
struct AInteractionBase_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.Interaction
struct AInteractionBase_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.OnStartProgressAction
struct AInteractionBase_C_OnStartProgressAction_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.ShowOutline
struct AInteractionBase_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.HideOutline
struct AInteractionBase_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionBase.InteractionBase_C.SetInteracted_Server
struct AInteractionBase_C_SetInteracted_Server_Params
{
};

// Function InteractionBase.InteractionBase_C.ExecuteUbergraph_InteractionBase
struct AInteractionBase_C_ExecuteUbergraph_InteractionBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
