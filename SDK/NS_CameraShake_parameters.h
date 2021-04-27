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

// Function NS_CameraShake.NS_CameraShake_C.GetCurrentPickable
struct UNS_CameraShake_C_GetCurrentPickable_Params
{
	struct FS_Pickable                                 CurrentPickable;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function NS_CameraShake.NS_CameraShake_C.GetExecuteCameraTransform
struct UNS_CameraShake_C_GetExecuteCameraTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function NS_CameraShake.NS_CameraShake_C.isExecution
struct UNS_CameraShake_C_isExecution_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NS_CameraShake.NS_CameraShake_C.GetAimTransform
struct UNS_CameraShake_C_GetAimTransform_Params
{
	struct FTransform                                  Return;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function NS_CameraShake.NS_CameraShake_C.IsHaveSpawnPerk
struct UNS_CameraShake_C_IsHaveSpawnPerk_Params
{
	bool                                               bIsHave;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       Tag;                                                       // (Parm, OutParm)
};

// Function NS_CameraShake.NS_CameraShake_C.GetCharacterID
struct UNS_CameraShake_C_GetCharacterID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function NS_CameraShake.NS_CameraShake_C.GetMainCameraComponent
struct UNS_CameraShake_C_GetMainCameraComponent_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NS_CameraShake.NS_CameraShake_C.GetCurrentItemID
struct UNS_CameraShake_C_GetCurrentItemID_Params
{
	struct FPrimaryAssetId                             AssetID;                                                   // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function NS_CameraShake.NS_CameraShake_C.NotifyFootStep
struct UNS_CameraShake_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NS_CameraShake.NS_CameraShake_C.Received_NotifyEnd
struct UNS_CameraShake_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function NS_CameraShake.NS_CameraShake_C.Received_NotifyBegin
struct UNS_CameraShake_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
