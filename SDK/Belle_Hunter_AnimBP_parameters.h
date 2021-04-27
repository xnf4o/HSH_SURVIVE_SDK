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

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.GetAimRotator
struct UBelle_Hunter_AnimBP_C_GetAimRotator_Params
{
	struct FRotator                                    Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateHandLeft
struct UBelle_Hunter_AnimBP_C_IKUpdateHandLeft_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateHandRight
struct UBelle_Hunter_AnimBP_C_IKUpdateHandRight_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKHandUpdate
struct UBelle_Hunter_AnimBP_C_IKHandUpdate_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKReset Vars
struct UBelle_Hunter_AnimBP_C_IKReset_Vars_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IsMoving
struct UBelle_Hunter_AnimBP_C_IsMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.UpdateCapsuleHalfHeight
struct UBelle_Hunter_AnimBP_C_UpdateCapsuleHalfHeight_Params
{
	float                                              Hips_Shifts;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Defualt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateFootOffset
struct UBelle_Hunter_AnimBP_C_IKUpdateFootOffset_Params
{
	float                                              targetValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effector_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Interp_Speed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateFootRotation
struct UBelle_Hunter_AnimBP_C_IKUpdateFootRotation_Params
{
	struct FRotator                                    Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.NormalToRotator
struct UBelle_Hunter_AnimBP_C_NormalToRotator_Params
{
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdate
struct UBelle_Hunter_AnimBP_C_IKUpdate_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKFootTrace
struct UBelle_Hunter_AnimBP_C_IKFootTrace_Params
{
	float                                              Trace_Distance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impact;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.Set MoveAxis From Transform Direction
struct UBelle_Hunter_AnimBP_C_Set_MoveAxis_From_Transform_Direction_Params
{
	class AActor*                                      Pawn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F
struct UBelle_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.AnimNotify_EndAttack
struct UBelle_Hunter_AnimBP_C_AnimNotify_EndAttack_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.BlueprintUpdateAnimation
struct UBelle_Hunter_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74
struct UBelle_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74_Params
{
};

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.ExecuteUbergraph_Belle_Hunter_AnimBP
struct UBelle_Hunter_AnimBP_C_ExecuteUbergraph_Belle_Hunter_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
