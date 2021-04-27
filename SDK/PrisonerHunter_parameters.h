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

// Function PrisonerHunter.PrisonerHunter_C.NearCamera
struct APrisonerHunter_C_NearCamera_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PrisonerHunter.PrisonerHunter_C.GetHeavyAtkGE
struct APrisonerHunter_C_GetHeavyAtkGE_Params
{
	class UClass*                                      GameplayEffect;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrisonerHunter.PrisonerHunter_C.MoveSurviveTimeline__FinishedFunc
struct APrisonerHunter_C_MoveSurviveTimeline__FinishedFunc_Params
{
};

// Function PrisonerHunter.PrisonerHunter_C.MoveSurviveTimeline__UpdateFunc
struct APrisonerHunter_C_MoveSurviveTimeline__UpdateFunc_Params
{
};

// Function PrisonerHunter.PrisonerHunter_C.TraceFloor
struct APrisonerHunter_C_TraceFloor_Params
{
};

// Function PrisonerHunter.PrisonerHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct APrisonerHunter_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function PrisonerHunter.PrisonerHunter_C.ReceiveBeginPlay
struct APrisonerHunter_C_ReceiveBeginPlay_Params
{
};

// Function PrisonerHunter.PrisonerHunter_C.PlayDestroyItemMontage
struct APrisonerHunter_C_PlayDestroyItemMontage_Params
{
};

// Function PrisonerHunter.PrisonerHunter_C.OnDisableAttackCollision
struct APrisonerHunter_C_OnDisableAttackCollision_Params
{
};

// Function PrisonerHunter.PrisonerHunter_C.ReceiveTick
struct APrisonerHunter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrisonerHunter.PrisonerHunter_C.OnEnableAttackCollision
struct APrisonerHunter_C_OnEnableAttackCollision_Params
{
};

// Function PrisonerHunter.PrisonerHunter_C.SendMeleeDistance
struct APrisonerHunter_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrisonerHunter.PrisonerHunter_C.TryToMoveSurvive
struct APrisonerHunter_C_TryToMoveSurvive_Params
{
	class ASurvivorBase_C*                             SurvivorChain;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrisonerHunter.PrisonerHunter_C.ExecuteUbergraph_PrisonerHunter
struct APrisonerHunter_C_ExecuteUbergraph_PrisonerHunter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrisonerHunter.PrisonerHunter_C.Attacking__DelegateSignature
struct APrisonerHunter_C_Attacking__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
