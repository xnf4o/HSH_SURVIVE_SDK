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

// Function BelleHunter.BelleHunter_C.GetHeavyAtkGE
struct ABelleHunter_C_GetHeavyAtkGE_Params
{
	class UClass*                                      GameplayEffect;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.UserConstructionScript
struct ABelleHunter_C_UserConstructionScript_Params
{
};

// Function BelleHunter.BelleHunter_C.ResetCombo
struct ABelleHunter_C_ResetCombo_Params
{
};

// Function BelleHunter.BelleHunter_C.ComboAttackSave
struct ABelleHunter_C_ComboAttackSave_Params
{
};

// Function BelleHunter.BelleHunter_C.PlayAttackAnimation
struct ABelleHunter_C_PlayAttackAnimation_Params
{
	int                                                AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABelleHunter_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BelleHunter.BelleHunter_C.ReceiveBeginPlay
struct ABelleHunter_C_ReceiveBeginPlay_Params
{
};

// Function BelleHunter.BelleHunter_C.PlayDestroyItemMontage
struct ABelleHunter_C_PlayDestroyItemMontage_Params
{
};

// Function BelleHunter.BelleHunter_C.OnDisableAttackCollision
struct ABelleHunter_C_OnDisableAttackCollision_Params
{
};

// Function BelleHunter.BelleHunter_C.ReceiveTick
struct ABelleHunter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.OnEnableAttackCollision
struct ABelleHunter_C_OnEnableAttackCollision_Params
{
};

// Function BelleHunter.BelleHunter_C.SendMeleeDistance
struct ABelleHunter_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.MulticastEnterHiddenEffect
struct ABelleHunter_C_MulticastEnterHiddenEffect_Params
{
};

// Function BelleHunter.BelleHunter_C.MulticastExitHiddenEffect
struct ABelleHunter_C_MulticastExitHiddenEffect_Params
{
};

// Function BelleHunter.BelleHunter_C.SetBodyHalfHeight
struct ABelleHunter_C_SetBodyHalfHeight_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.SetMaterialsAlpha
struct ABelleHunter_C_SetMaterialsAlpha_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.SetMaterialsColor
struct ABelleHunter_C_SetMaterialsColor_Params
{
	struct FLinearColor                                InLinearColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.ExecuteUbergraph_BelleHunter
struct ABelleHunter_C_ExecuteUbergraph_BelleHunter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BelleHunter.BelleHunter_C.Attacking__DelegateSignature
struct ABelleHunter_C_Attacking__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
