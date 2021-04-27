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

// Function BP_CharacterSetting.BP_CharacterSetting_C.FilterPairTrasform
struct ABP_CharacterSetting_C_FilterPairTrasform_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FTransform                                  DefaultTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TMap<class UClass*, struct FTransform>             PairTransform;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ClearAccessories
struct ABP_CharacterSetting_C_ClearAccessories_Params
{
	class UObject*                                     InputObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.GetHeadPreviewMesh
struct ABP_CharacterSetting_C_GetHeadPreviewMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.SetAccMaterialsEffect
struct ABP_CharacterSetting_C_SetAccMaterialsEffect_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InLinearColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.SetAccPreviewMeshVisible
struct ABP_CharacterSetting_C_SetAccPreviewMeshVisible_Params
{
	bool                                               bNewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.GetBackPreviewMesh
struct ABP_CharacterSetting_C_GetBackPreviewMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAsBackSK;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.PreviewAccBack
struct ABP_CharacterSetting_C_PreviewAccBack_Params
{
	class UHSHBackItem*                                HSHBackItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         Player_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.PreviewAccHead
struct ABP_CharacterSetting_C_PreviewAccHead_Params
{
	class UHSHHeadItem*                                HSHHeadItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateAccesories
struct ABP_CharacterSetting_C_UpdateAccesories_Params
{
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeHunterAccHead
struct ABP_CharacterSetting_C_InitializeHunterAccHead_Params
{
	struct FPlayerInfoStruct_G                         Player_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSurvivorAccHead
struct ABP_CharacterSetting_C_InitializeSurvivorAccHead_Params
{
	struct FPlayerInfoStruct_G                         Player_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeHunterAccBack
struct ABP_CharacterSetting_C_InitializeHunterAccBack_Params
{
	struct FPlayerInfoStruct_G                         Player_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSurvivorAccBack
struct ABP_CharacterSetting_C_InitializeSurvivorAccBack_Params
{
	struct FPlayerInfoStruct_G                         Player_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.FilterIgnoreSimulate
struct ABP_CharacterSetting_C_FilterIgnoreSimulate_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSkeletalMesh
struct ABP_CharacterSetting_C_InitializeSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.SetMaterialEffect
struct ABP_CharacterSetting_C_SetMaterialEffect_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InLinearColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializePreviewMesh
struct ABP_CharacterSetting_C_InitializePreviewMesh_Params
{
	class APreviewMeshActor_C*                         RightPreviewMesh;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APreviewMeshActor_C*                         LeftPreviewMesh;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.GetItemSocketName
struct ABP_CharacterSetting_C_GetItemSocketName_Params
{
	class UClass*                                      ActorClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.SetCharacterScale
struct ABP_CharacterSetting_C_SetCharacterScale_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.EndTransfomr__FinishedFunc
struct ABP_CharacterSetting_C_EndTransfomr__FinishedFunc_Params
{
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.EndTransfomr__UpdateFunc
struct ABP_CharacterSetting_C_EndTransfomr__UpdateFunc_Params
{
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerItems
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerSkins
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerPerks
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerProfiles
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerStickers
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerCharacters
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerHeads
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerBacks
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.OnUnhoverEvent
struct ABP_CharacterSetting_C_OnUnhoverEvent_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.OnHoverEvent
struct ABP_CharacterSetting_C_OnHoverEvent_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.OnClickedEvent
struct ABP_CharacterSetting_C_OnClickedEvent_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        ButtonPressed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.OnReleaseEvent
struct ABP_CharacterSetting_C_OnReleaseEvent_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        ButtonPressed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveBeginPlay
struct ABP_CharacterSetting_C_ReceiveBeginPlay_Params
{
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.SetupCharacterSettingActor
struct ABP_CharacterSetting_C_SetupCharacterSettingActor_Params
{
	class USkeletalMesh*                               NewMesh;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationAsset*                             NewAnimToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerInfo
struct ABP_CharacterSetting_C_ReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateMeshRotate
struct ABP_CharacterSetting_C_UpdateMeshRotate_Params
{
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveTick
struct ABP_CharacterSetting_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ResetRotation
struct ABP_CharacterSetting_C_ResetRotation_Params
{
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.SpawnInGameItem
struct ABP_CharacterSetting_C_SpawnInGameItem_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateCharacter
struct ABP_CharacterSetting_C_UpdateCharacter_Params
{
	struct FPlayerInfoStruct_G                         Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_CharacterSetting.BP_CharacterSetting_C.ExecuteUbergraph_BP_CharacterSetting
struct ABP_CharacterSetting_C_ExecuteUbergraph_BP_CharacterSetting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
