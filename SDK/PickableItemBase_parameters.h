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

// Function PickableItemBase.PickableItemBase_C.SetCollisionResponseInteract
struct APickableItemBase_C_SetCollisionResponseInteract_Params
{
	bool                                               IsResponse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PickableItemBase.PickableItemBase_C.OnRitualStateUpdate
struct APickableItemBase_C_OnRitualStateUpdate_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.SetUpItemDescription
struct APickableItemBase_C_SetUpItemDescription_Params
{
};

// Function PickableItemBase.PickableItemBase_C.GetMainCameraComponent
struct APickableItemBase_C_GetMainCameraComponent_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.GetCurrentItemID
struct APickableItemBase_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.NotifyFootStep
struct APickableItemBase_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.GetInteractMontage
struct APickableItemBase_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.GetInteractSlateBrush
struct APickableItemBase_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PickableItemBase.PickableItemBase_C.UserConstructionScript
struct APickableItemBase_C_UserConstructionScript_Params
{
};

// Function PickableItemBase.PickableItemBase_C.Timeline_0__FinishedFunc
struct APickableItemBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function PickableItemBase.PickableItemBase_C.Timeline_0__UpdateFunc
struct APickableItemBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function PickableItemBase.PickableItemBase_C.RotateLoop__FinishedFunc
struct APickableItemBase_C_RotateLoop__FinishedFunc_Params
{
};

// Function PickableItemBase.PickableItemBase_C.RotateLoop__UpdateFunc
struct APickableItemBase_C_RotateLoop__UpdateFunc_Params
{
};

// Function PickableItemBase.PickableItemBase_C.ReceiveEndPlay
struct APickableItemBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.OnLoadItem
struct APickableItemBase_C_OnLoadItem_Params
{
};

// Function PickableItemBase.PickableItemBase_C.InitHIlightMaterial
struct APickableItemBase_C_InitHIlightMaterial_Params
{
};

// Function PickableItemBase.PickableItemBase_C.PlayFloating
struct APickableItemBase_C_PlayFloating_Params
{
};

// Function PickableItemBase.PickableItemBase_C.ReceiveBeginPlay
struct APickableItemBase_C_ReceiveBeginPlay_Params
{
};

// Function PickableItemBase.PickableItemBase_C.SelfRotate
struct APickableItemBase_C_SelfRotate_Params
{
};

// Function PickableItemBase.PickableItemBase_C.Interaction
struct APickableItemBase_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.HighlightItemMaterial
struct APickableItemBase_C_HighlightItemMaterial_Params
{
	bool                                               IsHunter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PickableItemBase.PickableItemBase_C.ExecuteUbergraph_PickableItemBase
struct APickableItemBase_C_ExecuteUbergraph_PickableItemBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PickableItemBase.PickableItemBase_C.OnCollected__DelegateSignature
struct APickableItemBase_C_OnCollected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
