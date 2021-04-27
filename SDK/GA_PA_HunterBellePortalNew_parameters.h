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

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FilterSurvivorActive
struct UGA_PA_HunterBellePortalNew_C_FilterSurvivorActive_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ASurvivorBase_C*>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelection_New
struct UGA_PA_HunterBellePortalNew_C_FindSelection_New_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ASurvivorBase_C*                             Reutrn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelectionInCamera_New
struct UGA_PA_HunterBellePortalNew_C_FindSelectionInCamera_New_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ASurvivorBase_C*                             Reutrn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ConvertAxisToDirection
struct UGA_PA_HunterBellePortalNew_C_ConvertAxisToDirection_Params
{
	struct FVector                                     Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ActorRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.TraceBox_WithDirection
struct UGA_PA_HunterBellePortalNew_C_TraceBox_WithDirection_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HalfHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ActorsToIgnore;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.CheckLocation
struct UGA_PA_HunterBellePortalNew_C_CheckLocation_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCanTeleport;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindLookAtWithExcludeHight
struct UGA_PA_HunterBellePortalNew_C_FindLookAtWithExcludeHight_Params
{
	class AActor*                                      Origin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.IsBehideWall
struct UGA_PA_HunterBellePortalNew_C_IsBehideWall_Params
{
	struct FVector                                     StartLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.CanTeleportTo
struct UGA_PA_HunterBellePortalNew_C_CanTeleportTo_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorBase_C*                             Reutrn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelectionInCamera
struct UGA_PA_HunterBellePortalNew_C_FindSelectionInCamera_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ASurvivorBase_C*                             Reutrn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FillterDistance
struct UGA_PA_HunterBellePortalNew_C_FillterDistance_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASurvivorBase_C*>                     Output_Get;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.IsInRange
struct UGA_PA_HunterBellePortalNew_C_IsInRange_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.SpawnBloodPortal
struct UGA_PA_HunterBellePortalNew_C_SpawnBloodPortal_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindFloor
struct UGA_PA_HunterBellePortalNew_C_FindFloor_Params
{
	struct FHitResult                                  OutHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FloorLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHitFloor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsHidePlace;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindLocationTeleport
struct UGA_PA_HunterBellePortalNew_C_FindLocationTeleport_Params
{
	struct FHitResult                                  OutHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.TraceBox
struct UGA_PA_HunterBellePortalNew_C_TraceBox_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TraceDirection_E_TraceDirection>     Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.GetSurvivor
struct UGA_PA_HunterBellePortalNew_C_GetSurvivor_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASurvivorBase_C*>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ClearRef
struct UGA_PA_HunterBellePortalNew_C_ClearRef_Params
{
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelection
struct UGA_PA_HunterBellePortalNew_C_FindSelection_Params
{
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ASurvivorBase_C*                             Reutrn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.EventReceived_936E2D2A43728D3908C4F2ABF06446FE
struct UGA_PA_HunterBellePortalNew_C_EventReceived_936E2D2A43728D3908C4F2ABF06446FE_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCancelled_936E2D2A43728D3908C4F2ABF06446FE
struct UGA_PA_HunterBellePortalNew_C_OnCancelled_936E2D2A43728D3908C4F2ABF06446FE_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnInterrupted_936E2D2A43728D3908C4F2ABF06446FE
struct UGA_PA_HunterBellePortalNew_C_OnInterrupted_936E2D2A43728D3908C4F2ABF06446FE_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnBlendOut_936E2D2A43728D3908C4F2ABF06446FE
struct UGA_PA_HunterBellePortalNew_C_OnBlendOut_936E2D2A43728D3908C4F2ABF06446FE_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCompleted_936E2D2A43728D3908C4F2ABF06446FE
struct UGA_PA_HunterBellePortalNew_C_OnCompleted_936E2D2A43728D3908C4F2ABF06446FE_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.EventReceived_7410C53B4FA8A847895F2CA35C07136D
struct UGA_PA_HunterBellePortalNew_C_EventReceived_7410C53B4FA8A847895F2CA35C07136D_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCancelled_7410C53B4FA8A847895F2CA35C07136D
struct UGA_PA_HunterBellePortalNew_C_OnCancelled_7410C53B4FA8A847895F2CA35C07136D_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnInterrupted_7410C53B4FA8A847895F2CA35C07136D
struct UGA_PA_HunterBellePortalNew_C_OnInterrupted_7410C53B4FA8A847895F2CA35C07136D_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnBlendOut_7410C53B4FA8A847895F2CA35C07136D
struct UGA_PA_HunterBellePortalNew_C_OnBlendOut_7410C53B4FA8A847895F2CA35C07136D_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCompleted_7410C53B4FA8A847895F2CA35C07136D
struct UGA_PA_HunterBellePortalNew_C_OnCompleted_7410C53B4FA8A847895F2CA35C07136D_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FIndFloorAndTeleport
struct UGA_PA_HunterBellePortalNew_C_FIndFloorAndTeleport_Params
{
	struct FHitResult                                  OutHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.K2_ActivateAbility
struct UGA_PA_HunterBellePortalNew_C_K2_ActivateAbility_Params
{
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.Teleport
struct UGA_PA_HunterBellePortalNew_C_Teleport_Params
{
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.K2_OnEndAbility
struct UGA_PA_HunterBellePortalNew_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ExecuteUbergraph_GA_PA_HunterBellePortalNew
struct UGA_PA_HunterBellePortalNew_C_ExecuteUbergraph_GA_PA_HunterBellePortalNew_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
