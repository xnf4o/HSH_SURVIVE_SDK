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

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.OnRep_Yaw
struct UMale_Survivor_ABP_C_OnRep_Yaw_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.UpdateClothing
struct UMale_Survivor_ABP_C_UpdateClothing_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateHandLeft
struct UMale_Survivor_ABP_C_IKUpdateHandLeft_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateHandRight
struct UMale_Survivor_ABP_C_IKUpdateHandRight_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKHandUpdate
struct UMale_Survivor_ABP_C_IKHandUpdate_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKReset Vars
struct UMale_Survivor_ABP_C_IKReset_Vars_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IsMoving
struct UMale_Survivor_ABP_C_IsMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.UpdateCapsuleHalfHeight
struct UMale_Survivor_ABP_C_UpdateCapsuleHalfHeight_Params
{
	float                                              Hips_Shifts;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Defualt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateFootOffset
struct UMale_Survivor_ABP_C_IKUpdateFootOffset_Params
{
	float                                              targetValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effector_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Interp_Speed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateFootRotation
struct UMale_Survivor_ABP_C_IKUpdateFootRotation_Params
{
	struct FRotator                                    Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.NormalToRotator
struct UMale_Survivor_ABP_C_NormalToRotator_Params
{
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdate
struct UMale_Survivor_ABP_C_IKUpdate_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKFootTrace
struct UMale_Survivor_ABP_C_IKFootTrace_Params
{
	float                                              Trace_Distance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impact;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.Set MoveAxis From Transform Direction
struct UMale_Survivor_ABP_C_Set_MoveAxis_From_Transform_Direction_Params
{
	class AActor*                                      Pawn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3
struct UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962
struct UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140
struct UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A
struct UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3
struct UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D
struct UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.AnimNotify_EndAttack
struct UMale_Survivor_ABP_C_AnimNotify_EndAttack_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.BlueprintUpdateAnimation
struct UMale_Survivor_ABP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.AnimNotify_FreeFall
struct UMale_Survivor_ABP_C_AnimNotify_FreeFall_Params
{
};

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.ExecuteUbergraph_Male_Survivor_ABP
struct UMale_Survivor_ABP_C_ExecuteUbergraph_Male_Survivor_ABP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
