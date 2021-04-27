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

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.UpdateClothing
struct USurvivor_Male_AnimBP_C_UpdateClothing_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKUpdateHandLeft
struct USurvivor_Male_AnimBP_C_IKUpdateHandLeft_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKUpdateHandRight
struct USurvivor_Male_AnimBP_C_IKUpdateHandRight_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKHandUpdate
struct USurvivor_Male_AnimBP_C_IKHandUpdate_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKReset Vars
struct USurvivor_Male_AnimBP_C_IKReset_Vars_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IsMoving
struct USurvivor_Male_AnimBP_C_IsMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.UpdateCapsuleHalfHeight
struct USurvivor_Male_AnimBP_C_UpdateCapsuleHalfHeight_Params
{
	float                                              Hips_Shifts;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Defualt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKUpdateFootOffset
struct USurvivor_Male_AnimBP_C_IKUpdateFootOffset_Params
{
	float                                              targetValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effector_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Interp_Speed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKUpdateFootRotation
struct USurvivor_Male_AnimBP_C_IKUpdateFootRotation_Params
{
	struct FRotator                                    Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.NormalToRotator
struct USurvivor_Male_AnimBP_C_NormalToRotator_Params
{
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKUpdate
struct USurvivor_Male_AnimBP_C_IKUpdate_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.IKFootTrace
struct USurvivor_Male_AnimBP_C_IKFootTrace_Params
{
	float                                              Trace_Distance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impact;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.Set MoveAxis From Transform Direction
struct USurvivor_Male_AnimBP_C_Set_MoveAxis_From_Transform_Direction_Params
{
	class AActor*                                      Pawn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_LayeredBoneBlend_BE53F15646608232EF5BB5AAECA4B045
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_LayeredBoneBlend_BE53F15646608232EF5BB5AAECA4B045_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_BlendSpacePlayer_EF7EB08B428E72E42BABBB944FC9FD1C
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_BlendSpacePlayer_EF7EB08B428E72E42BABBB944FC9FD1C_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TwoBoneIK_4C8ADD6A4251032C5C8A5BA92CF5D69A
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TwoBoneIK_4C8ADD6A4251032C5C8A5BA92CF5D69A_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TwoBoneIK_73DA3A334758D1409BB187BFDB843AC6
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TwoBoneIK_73DA3A334758D1409BB187BFDB843AC6_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_ModifyBone_ACFB84CC4CC7370FD976379F0B9CFB2A
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_ModifyBone_ACFB84CC4CC7370FD976379F0B9CFB2A_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_BlendListByBool_1B17B6824245D8B090620286F4C8B1D4
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_BlendListByBool_1B17B6824245D8B090620286F4C8B1D4_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.AnimNotify_EndAttack
struct USurvivor_Male_AnimBP_C_AnimNotify_EndAttack_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.BlueprintUpdateAnimation
struct USurvivor_Male_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TransitionResult_1C7FEFAD4D901EC00E2ECDAA7AF0C38E
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TransitionResult_1C7FEFAD4D901EC00E2ECDAA7AF0C38E_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.AnimNotify_FreeFall
struct USurvivor_Male_AnimBP_C_AnimNotify_FreeFall_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TransitionResult_E9B48AD945133ED42EF6B189EF4A8DEE
struct USurvivor_Male_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TransitionResult_E9B48AD945133ED42EF6B189EF4A8DEE_Params
{
};

// Function Survivor_Male_AnimBP.Survivor_Male_AnimBP_C.ExecuteUbergraph_Survivor_Male_AnimBP
struct USurvivor_Male_AnimBP_C_ExecuteUbergraph_Survivor_Male_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
