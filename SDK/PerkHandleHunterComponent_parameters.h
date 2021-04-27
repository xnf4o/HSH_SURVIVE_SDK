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

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.FindSurvivorForStaminaDrain
struct UPerkHandleHunterComponent_C_FindSurvivorForStaminaDrain_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class AHSHCharacterSurvivorBase*                   Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.IsCanHookInFrontOf
struct UPerkHandleHunterComponent_C_IsCanHookInFrontOf_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.IsHookSuccess
struct UPerkHandleHunterComponent_C_IsHookSuccess_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ChainTraceActor_Camera
struct UPerkHandleHunterComponent_C_ChainTraceActor_Camera_Params
{
	class AActor*                                      ChainActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Start;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorBase_C*                             HitActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.UpdateShowSpecter
struct UPerkHandleHunterComponent_C_UpdateShowSpecter_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.DebugHitActors
struct UPerkHandleHunterComponent_C_DebugHitActors_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ChainTraceActor
struct UPerkHandleHunterComponent_C_ChainTraceActor_Params
{
	struct FVector                                     Start;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      HitActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.FilterHitActors
struct UPerkHandleHunterComponent_C_FilterHitActors_Params
{
	TArray<class AHSHCharacterBase*>                   Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AHSHCharacterBase*>                   Filter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AHSHCharacterBase*>                   FilterdArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.GetGameplayAbilityCharge
struct UPerkHandleHunterComponent_C_GetGameplayAbilityCharge_Params
{
	int                                                CurrentCharge;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCharge;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.EndPrisonerChain
struct UPerkHandleHunterComponent_C_EndPrisonerChain_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.UpdatePrisonerChainShoot
struct UPerkHandleHunterComponent_C_UpdatePrisonerChainShoot_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ClientEndAbility
struct UPerkHandleHunterComponent_C_ClientEndAbility_Params
{
	bool                                               bHookSuccess;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.Draw
struct UPerkHandleHunterComponent_C_Draw_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MulticastTryRotate
struct UPerkHandleHunterComponent_C_MulticastTryRotate_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.Rotate
struct UPerkHandleHunterComponent_C_Rotate_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MulticastTryMoveSurvivor
struct UPerkHandleHunterComponent_C_MulticastTryMoveSurvivor_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MoveSurvivor
struct UPerkHandleHunterComponent_C_MoveSurvivor_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.StartHookAnimation
struct UPerkHandleHunterComponent_C_StartHookAnimation_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.StartHookTarget
struct UPerkHandleHunterComponent_C_StartHookTarget_Params
{
	float                                              StunSurvivorTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayAfterHookSuccess;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DurationPrisoner;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HookBound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraForward;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Length;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionHookSuccess;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionHookFailure;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.DebugDraw
struct UPerkHandleHunterComponent_C_DebugDraw_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ClearPrisonerChainValue
struct UPerkHandleHunterComponent_C_ClearPrisonerChainValue_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckApplyStatusWhenAttacked
struct UPerkHandleHunterComponent_C_CheckApplyStatusWhenAttacked_Params
{
	struct FPerkHandleData                             PerkHandleData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.InitiliazeOnServer
struct UPerkHandleHunterComponent_C_InitiliazeOnServer_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ReceiveTick
struct UPerkHandleHunterComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckApplyStatusWhenEndAttack
struct UPerkHandleHunterComponent_C_CheckApplyStatusWhenEndAttack_Params
{
	struct FPerkHandleData                             PerkHandleData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.AddedHitActor
struct UPerkHandleHunterComponent_C_AddedHitActor_Params
{
	class AHSHCharacterBase*                           HitActor;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckonDamaged
struct UPerkHandleHunterComponent_C_CheckonDamaged_Params
{
	struct FPerkHandleData                             PerkHandleData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ShowSoundIcon
struct UPerkHandleHunterComponent_C_ShowSoundIcon_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ExecuteUbergraph_PerkHandleHunterComponent
struct UPerkHandleHunterComponent_C_ExecuteUbergraph_PerkHandleHunterComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.OnPrisonerHookSuccess__DelegateSignature
struct UPerkHandleHunterComponent_C_OnPrisonerHookSuccess__DelegateSignature_Params
{
};

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.OnPrisonerChainEnd__DelegateSignature
struct UPerkHandleHunterComponent_C_OnPrisonerChainEnd__DelegateSignature_Params
{
	bool                                               bHookSuccess;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
