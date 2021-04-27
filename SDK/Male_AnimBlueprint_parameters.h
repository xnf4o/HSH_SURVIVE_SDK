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

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateHandLeft
struct UMale_AnimBlueprint_C_IKUpdateHandLeft_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateHandRight
struct UMale_AnimBlueprint_C_IKUpdateHandRight_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKHandUpdate
struct UMale_AnimBlueprint_C_IKHandUpdate_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKReset Vars
struct UMale_AnimBlueprint_C_IKReset_Vars_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IsMoving
struct UMale_AnimBlueprint_C_IsMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.UpdateCapsuleHalfHeight
struct UMale_AnimBlueprint_C_UpdateCapsuleHalfHeight_Params
{
	float                                              Hips_Shifts;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Defualt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateFootOffset
struct UMale_AnimBlueprint_C_IKUpdateFootOffset_Params
{
	float                                              targetValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effector_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Interp_Speed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateFootRotation
struct UMale_AnimBlueprint_C_IKUpdateFootRotation_Params
{
	struct FRotator                                    Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.NormalToRotator
struct UMale_AnimBlueprint_C_NormalToRotator_Params
{
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdate
struct UMale_AnimBlueprint_C_IKUpdate_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKFootTrace
struct UMale_AnimBlueprint_C_IKFootTrace_Params
{
	float                                              Trace_Distance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impact;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.Set MoveAxis From Transform Direction
struct UMale_AnimBlueprint_C_Set_MoveAxis_From_Transform_Direction_Params
{
	class AActor*                                      Pawn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TransitionResult_3B8CB87C44BD7207EC8C1798A1D05486
struct UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TransitionResult_3B8CB87C44BD7207EC8C1798A1D05486_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_F5D3819647F0400495F6EB9B43AD2579
struct UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_F5D3819647F0400495F6EB9B43AD2579_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_42DA7E164994BB50F08D81A6F6B4C9D4
struct UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_42DA7E164994BB50F08D81A6F6B4C9D4_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_1703AA57409F50E39986818750A81F69
struct UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_1703AA57409F50E39986818750A81F69_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.AnimNotify_EndAttack
struct UMale_AnimBlueprint_C_AnimNotify_EndAttack_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.BlueprintUpdateAnimation
struct UMale_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_ModifyBone_1B8A79454C7E1DB23E632DBB99146278
struct UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_ModifyBone_1B8A79454C7E1DB23E632DBB99146278_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_BlendListByBool_B226D355427052F988E175816878D451
struct UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_BlendListByBool_B226D355427052F988E175816878D451_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.AnimNotify_FreeFall
struct UMale_AnimBlueprint_C_AnimNotify_FreeFall_Params
{
};

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.ExecuteUbergraph_Male_AnimBlueprint
struct UMale_AnimBlueprint_C_ExecuteUbergraph_Male_AnimBlueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
