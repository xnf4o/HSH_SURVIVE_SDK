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

// Function SecretPortal.SecretPortal_C.InteractSnapLocation
struct ASecretPortal_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortal.SecretPortal_C.GetSnapIKLocation
struct ASecretPortal_C_GetSnapIKLocation_Params
{
	bool                                               bIsSnap;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Enum_IKHand_Enum_IKHand>               IKTarget;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IKRight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IKLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortal.SecretPortal_C.CanUseProgress
struct ASecretPortal_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortal.SecretPortal_C.GetProgressTime
struct ASecretPortal_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortal.SecretPortal_C.UserConstructionScript
struct ASecretPortal_C_UserConstructionScript_Params
{
};

// Function SecretPortal.SecretPortal_C.Timeline_0__FinishedFunc
struct ASecretPortal_C_Timeline_0__FinishedFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.Timeline_0__UpdateFunc
struct ASecretPortal_C_Timeline_0__UpdateFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.ShowGate__FinishedFunc
struct ASecretPortal_C_ShowGate__FinishedFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.ShowGate__UpdateFunc
struct ASecretPortal_C_ShowGate__UpdateFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.CloseGate__FinishedFunc
struct ASecretPortal_C_CloseGate__FinishedFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.CloseGate__UpdateFunc
struct ASecretPortal_C_CloseGate__UpdateFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.Timeline_1__FinishedFunc
struct ASecretPortal_C_Timeline_1__FinishedFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.Timeline_1__UpdateFunc
struct ASecretPortal_C_Timeline_1__UpdateFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.Timeline_1__PlaySound__EventFunc
struct ASecretPortal_C_Timeline_1__PlaySound__EventFunc_Params
{
};

// Function SecretPortal.SecretPortal_C.ProgressPortalSound
struct ASecretPortal_C_ProgressPortalSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortal.SecretPortal_C.SetOutlineVisible
struct ASecretPortal_C_SetOutlineVisible_Params
{
	bool                                               bValue;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortal.SecretPortal_C.OutlineChangeOnShow
struct ASecretPortal_C_OutlineChangeOnShow_Params
{
	bool                                               bIsHunter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortal.SecretPortal_C.ReceiveBeginPlay
struct ASecretPortal_C_ReceiveBeginPlay_Params
{
};

// Function SecretPortal.SecretPortal_C.MulticastProgressPortalSound
struct ASecretPortal_C_MulticastProgressPortalSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortal.SecretPortal_C.OnPlayerExit
struct ASecretPortal_C_OnPlayerExit_Params
{
};

// Function SecretPortal.SecretPortal_C.Interaction
struct ASecretPortal_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortal.SecretPortal_C.MulticastFinish
struct ASecretPortal_C_MulticastFinish_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortal.SecretPortal_C.SpawnDimensionLoopSound
struct ASecretPortal_C_SpawnDimensionLoopSound_Params
{
};

// Function SecretPortal.SecretPortal_C.OnPortalOpen
struct ASecretPortal_C_OnPortalOpen_Params
{
};

// Function SecretPortal.SecretPortal_C.DuringOpen
struct ASecretPortal_C_DuringOpen_Params
{
};

// Function SecretPortal.SecretPortal_C.ReceiveTick
struct ASecretPortal_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortal.SecretPortal_C.OnStopProgress
struct ASecretPortal_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortal.SecretPortal_C.OnFinishProgress
struct ASecretPortal_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortal.SecretPortal_C.OpenDoorAnimation
struct ASecretPortal_C_OpenDoorAnimation_Params
{
};

// Function SecretPortal.SecretPortal_C.Opendoor
struct ASecretPortal_C_Opendoor_Params
{
};

// Function SecretPortal.SecretPortal_C.OnRepIsProgress
struct ASecretPortal_C_OnRepIsProgress_Params
{
};

// Function SecretPortal.SecretPortal_C.ReturnToCloseDoor
struct ASecretPortal_C_ReturnToCloseDoor_Params
{
};

// Function SecretPortal.SecretPortal_C.MulticastCloseDoor
struct ASecretPortal_C_MulticastCloseDoor_Params
{
};

// Function SecretPortal.SecretPortal_C.ExecuteUbergraph_SecretPortal
struct ASecretPortal_C_ExecuteUbergraph_SecretPortal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
