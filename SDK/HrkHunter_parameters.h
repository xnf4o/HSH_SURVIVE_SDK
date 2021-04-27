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

// Function HrkHunter.HrkHunter_C.NotifyFootStep
struct AHrkHunter_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HrkHunter.HrkHunter_C.SetVisibilityWaterball
struct AHrkHunter_C_SetVisibilityWaterball_Params
{
	bool                                               bNewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HrkHunter.HrkHunter_C.GetIsOnPhaseShift
struct AHrkHunter_C_GetIsOnPhaseShift_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HrkHunter.HrkHunter_C.Timeline_1__FinishedFunc
struct AHrkHunter_C_Timeline_1__FinishedFunc_Params
{
};

// Function HrkHunter.HrkHunter_C.Timeline_1__UpdateFunc
struct AHrkHunter_C_Timeline_1__UpdateFunc_Params
{
};

// Function HrkHunter.HrkHunter_C.ProjectileAttackSuccess
struct AHrkHunter_C_ProjectileAttackSuccess_Params
{
};

// Function HrkHunter.HrkHunter_C.ReceiveBeginPlay
struct AHrkHunter_C_ReceiveBeginPlay_Params
{
};

// Function HrkHunter.HrkHunter_C.PlayDestroyItemMontage
struct AHrkHunter_C_PlayDestroyItemMontage_Params
{
};

// Function HrkHunter.HrkHunter_C.OnDisableAttackCollision
struct AHrkHunter_C_OnDisableAttackCollision_Params
{
};

// Function HrkHunter.HrkHunter_C.ReceiveTick
struct AHrkHunter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HrkHunter.HrkHunter_C.MulticastPrayActivePerkLoopSound
struct AHrkHunter_C_MulticastPrayActivePerkLoopSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HrkHunter.HrkHunter_C.OnEnableAttackCollision
struct AHrkHunter_C_OnEnableAttackCollision_Params
{
};

// Function HrkHunter.HrkHunter_C.OnStateChanged
struct AHrkHunter_C_OnStateChanged_Params
{
	bool                                               bIsTransfrom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HrkHunter.HrkHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AHrkHunter_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HrkHunter.HrkHunter_C.SendMeleeDistance
struct AHrkHunter_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HrkHunter.HrkHunter_C.MulticastEnterHiddenEffect
struct AHrkHunter_C_MulticastEnterHiddenEffect_Params
{
};

// Function HrkHunter.HrkHunter_C.MulticastExitHiddenEffect
struct AHrkHunter_C_MulticastExitHiddenEffect_Params
{
};

// Function HrkHunter.HrkHunter_C.OnHitReaction
struct AHrkHunter_C_OnHitReaction_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_DmgDirection_E_DmgDirection>         Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HrkHunter.HrkHunter_C.ExecuteUbergraph_HrkHunter
struct AHrkHunter_C_ExecuteUbergraph_HrkHunter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
