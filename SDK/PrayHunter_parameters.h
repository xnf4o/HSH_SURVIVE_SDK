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

// Function PrayHunter.PrayHunter_C.GetIsOnPhaseShift
struct APrayHunter_C_GetIsOnPhaseShift_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PrayHunter.PrayHunter_C.SetVisibilityWaterball
struct APrayHunter_C_SetVisibilityWaterball_Params
{
	bool                                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PrayHunter.PrayHunter_C.PlayAttackHitAnimation
struct APrayHunter_C_PlayAttackHitAnimation_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrayHunter.PrayHunter_C.NotifyFootStep
struct APrayHunter_C_NotifyFootStep_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrayHunter.PrayHunter_C.GetHeavyAtkGE
struct APrayHunter_C_GetHeavyAtkGE_Params
{
	class UClass*                                      GameplayEffect;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrayHunter.PrayHunter_C.UserConstructionScript
struct APrayHunter_C_UserConstructionScript_Params
{
};

// Function PrayHunter.PrayHunter_C.BlendCamera__FinishedFunc
struct APrayHunter_C_BlendCamera__FinishedFunc_Params
{
};

// Function PrayHunter.PrayHunter_C.BlendCamera__UpdateFunc
struct APrayHunter_C_BlendCamera__UpdateFunc_Params
{
};

// Function PrayHunter.PrayHunter_C.OnStateChanged
struct APrayHunter_C_OnStateChanged_Params
{
	bool                                               bIsTransfrom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PrayHunter.PrayHunter_C.ProjectileAttackSuccess
struct APrayHunter_C_ProjectileAttackSuccess_Params
{
};

// Function PrayHunter.PrayHunter_C.ReceiveBeginPlay
struct APrayHunter_C_ReceiveBeginPlay_Params
{
};

// Function PrayHunter.PrayHunter_C.PlayDestroyItemMontage
struct APrayHunter_C_PlayDestroyItemMontage_Params
{
};

// Function PrayHunter.PrayHunter_C.OnDisableAttackCollision
struct APrayHunter_C_OnDisableAttackCollision_Params
{
};

// Function PrayHunter.PrayHunter_C.ReceiveTick
struct APrayHunter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrayHunter.PrayHunter_C.OnEnableAttackCollision
struct APrayHunter_C_OnEnableAttackCollision_Params
{
};

// Function PrayHunter.PrayHunter_C.MulticastPrayActivePerkLoopSound
struct APrayHunter_C_MulticastPrayActivePerkLoopSound_Params
{
	bool                                               Play;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PrayHunter.PrayHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct APrayHunter_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function PrayHunter.PrayHunter_C.SendMeleeDistance
struct APrayHunter_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrayHunter.PrayHunter_C.MulticastEnterHiddenEffect
struct APrayHunter_C_MulticastEnterHiddenEffect_Params
{
};

// Function PrayHunter.PrayHunter_C.MulticastExitHiddenEffect
struct APrayHunter_C_MulticastExitHiddenEffect_Params
{
};

// Function PrayHunter.PrayHunter_C.OnHitReaction
struct APrayHunter_C_OnHitReaction_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_DmgDirection_E_DmgDirection>         Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrayHunter.PrayHunter_C.OnEndSpecter
struct APrayHunter_C_OnEndSpecter_Params
{
};

// Function PrayHunter.PrayHunter_C.ExecuteUbergraph_PrayHunter
struct APrayHunter_C_ExecuteUbergraph_PrayHunter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
