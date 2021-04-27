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

// Function HSURLobbyActor.HSURLobbyActor_C.SetupShowPet
struct AHSURLobbyActor_C_SetupShowPet_Params
{
	class UClass*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.ToggleVisiblePet
struct AHSURLobbyActor_C_ToggleVisiblePet_Params
{
	bool                                               bNewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.GetIsOtherSameRole
struct AHSURLobbyActor_C_GetIsOtherSameRole_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.ClearAccessories
struct AHSURLobbyActor_C_ClearAccessories_Params
{
	class UObject*                                     InputObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.UpdateAccessories
struct AHSURLobbyActor_C_UpdateAccessories_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               NewVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.SetAccMaterialsEffect
struct AHSURLobbyActor_C_SetAccMaterialsEffect_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InLinearColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.SetAccPreviewMeshVisible
struct AHSURLobbyActor_C_SetAccPreviewMeshVisible_Params
{
	bool                                               NewVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.PreviewAccBack
struct AHSURLobbyActor_C_PreviewAccBack_Params
{
	class UHSHBackItem*                                HSHBackItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.PreviewAccHead
struct AHSURLobbyActor_C_PreviewAccHead_Params
{
	class UHSHHeadItem*                                InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         InputPin2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.GetBackPreviewMesh
struct AHSURLobbyActor_C_GetBackPreviewMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAsBackSK;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.GetHeadPreviewMesh
struct AHSURLobbyActor_C_GetHeadPreviewMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.InitializeHunterAccHead
struct AHSURLobbyActor_C_InitializeHunterAccHead_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.InitializeHunterAccBack
struct AHSURLobbyActor_C_InitializeHunterAccBack_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.InitializeSurvivorAccHead
struct AHSURLobbyActor_C_InitializeSurvivorAccHead_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.InitializeSurvivorAccBack
struct AHSURLobbyActor_C_InitializeSurvivorAccBack_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.FilterPairTransform
struct AHSURLobbyActor_C_FilterPairTransform_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FTransform                                  DefaultTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TMap<class UClass*, struct FTransform>             PairTransform;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.SetMaterialEffect
struct AHSURLobbyActor_C_SetMaterialEffect_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InLinearColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.GetActorPosition
struct AHSURLobbyActor_C_GetActorPosition_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.GetIsPlayerOwner
struct AHSURLobbyActor_C_GetIsPlayerOwner_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.IsPlayerIsReady
struct AHSURLobbyActor_C_IsPlayerIsReady_Params
{
	bool                                               bIsReady;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.OnClearLobby
struct AHSURLobbyActor_C_OnClearLobby_Params
{
};

// Function HSURLobbyActor.HSURLobbyActor_C.SetUpWidget
struct AHSURLobbyActor_C_SetUpWidget_Params
{
	struct FS_PlayerLobby                              PlayerLobby;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.ClearWidgetStatus
struct AHSURLobbyActor_C_ClearWidgetStatus_Params
{
};

// Function HSURLobbyActor.HSURLobbyActor_C.UpdateWidgetStatus
struct AHSURLobbyActor_C_UpdateWidgetStatus_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.CreateWidgetStatus
struct AHSURLobbyActor_C_CreateWidgetStatus_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.SetCharacterScale
struct AHSURLobbyActor_C_SetCharacterScale_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.GetLobbyBoneLocation
struct AHSURLobbyActor_C_GetLobbyBoneLocation_Params
{
	struct FVector                                     BoneLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.CharacterTransform__FinishedFunc
struct AHSURLobbyActor_C_CharacterTransform__FinishedFunc_Params
{
};

// Function HSURLobbyActor.HSURLobbyActor_C.CharacterTransform__UpdateFunc
struct AHSURLobbyActor_C_CharacterTransform__UpdateFunc_Params
{
};

// Function HSURLobbyActor.HSURLobbyActor_C.RefreshWidget
struct AHSURLobbyActor_C_RefreshWidget_Params
{
	struct FS_PlayerLobby                              PlayerLobby;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.SetupLobbyActor
struct AHSURLobbyActor_C_SetupLobbyActor_Params
{
	class USkeletalMesh*                               NewMesh;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerOwnerId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.ClearLobbyActor
struct AHSURLobbyActor_C_ClearLobbyActor_Params
{
};

// Function HSURLobbyActor.HSURLobbyActor_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AHSURLobbyActor_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        ButtonPressed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.SetupLobbyActorWithPlayerLobby
struct AHSURLobbyActor_C_SetupLobbyActorWithPlayerLobby_Params
{
	struct FS_PlayerLobby                              PlayerLobby;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyActor.HSURLobbyActor_C.UpdateActorPosition
struct AHSURLobbyActor_C_UpdateActorPosition_Params
{
};

// Function HSURLobbyActor.HSURLobbyActor_C.OnSetupLobby
struct AHSURLobbyActor_C_OnSetupLobby_Params
{
	class USkeletalMesh*                               NewMesh;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsVisibile;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.ExecuteUbergraph_HSURLobbyActor
struct AHSURLobbyActor_C_ExecuteUbergraph_HSURLobbyActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyActor.HSURLobbyActor_C.OnClear__DelegateSignature
struct AHSURLobbyActor_C_OnClear__DelegateSignature_Params
{
};

// Function HSURLobbyActor.HSURLobbyActor_C.OnUpdate__DelegateSignature
struct AHSURLobbyActor_C_OnUpdate__DelegateSignature_Params
{
	bool                                               bIsValid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
