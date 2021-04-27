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

// Function ChainSplineActor.ChainSplineActor_C.GetSocketPoint
struct AChainSplineActor_C_GetSocketPoint_Params
{
	struct FName                                       InSocketName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChainSplineActor.ChainSplineActor_C.OnRep_TargetPoint
struct AChainSplineActor_C_OnRep_TargetPoint_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.CalculateSpline
struct AChainSplineActor_C_CalculateSpline_Params
{
	struct FVector                                     Start;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceCap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Points;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChainSplineActor.ChainSplineActor_C.OnRep_Location
struct AChainSplineActor_C_OnRep_Location_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.ClearMesh
struct AChainSplineActor_C_ClearMesh_Params
{
	TArray<class USplineMeshComponent*>                Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ChainSplineActor.ChainSplineActor_C.UpdateMesh
struct AChainSplineActor_C_UpdateMesh_Params
{
	TArray<class USplineMeshComponent*>                TargetArray;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USplineComponent*                            Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChainSplineActor.ChainSplineActor_C.CreateMesh
struct AChainSplineActor_C_CreateMesh_Params
{
	TArray<class USplineMeshComponent*>                TargetArray;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USplineComponent*                            Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChainSplineActor.ChainSplineActor_C.Timeline_0-1__FinishedFunc
struct AChainSplineActor_C_Timeline_0_1__FinishedFunc_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.Timeline_0-1__UpdateFunc
struct AChainSplineActor_C_Timeline_0_1__UpdateFunc_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.ChangeColor
struct AChainSplineActor_C_ChangeColor_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.ReceiveTick
struct AChainSplineActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChainSplineActor.ChainSplineActor_C.ReceiveBeginPlay
struct AChainSplineActor_C_ReceiveBeginPlay_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.MulticastStartAnimation
struct AChainSplineActor_C_MulticastStartAnimation_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.MulticastReverseAnimation
struct AChainSplineActor_C_MulticastReverseAnimation_Params
{
};

// Function ChainSplineActor.ChainSplineActor_C.ExecuteUbergraph_ChainSplineActor
struct AChainSplineActor_C_ExecuteUbergraph_ChainSplineActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChainSplineActor.ChainSplineActor_C.OnBeginOverlap__DelegateSignature
struct AChainSplineActor_C_OnBeginOverlap__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
