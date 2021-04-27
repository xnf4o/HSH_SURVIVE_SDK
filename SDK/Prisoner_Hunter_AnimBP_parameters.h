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

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.GetAimRotator
struct UPrisoner_Hunter_AnimBP_C_GetAimRotator_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKUpdateHandLeft
struct UPrisoner_Hunter_AnimBP_C_IKUpdateHandLeft_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKUpdateHandRight
struct UPrisoner_Hunter_AnimBP_C_IKUpdateHandRight_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKHandUpdate
struct UPrisoner_Hunter_AnimBP_C_IKHandUpdate_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKReset Vars
struct UPrisoner_Hunter_AnimBP_C_IKReset_Vars_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IsMoving
struct UPrisoner_Hunter_AnimBP_C_IsMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.UpdateCapsuleHalfHeight
struct UPrisoner_Hunter_AnimBP_C_UpdateCapsuleHalfHeight_Params
{
	float                                              Hips_Shifts;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Defualt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKUpdateFootOffset
struct UPrisoner_Hunter_AnimBP_C_IKUpdateFootOffset_Params
{
	float                                              targetValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effector_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Interp_Speed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKUpdateFootRotation
struct UPrisoner_Hunter_AnimBP_C_IKUpdateFootRotation_Params
{
	struct FRotator                                    Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.NormalToRotator
struct UPrisoner_Hunter_AnimBP_C_NormalToRotator_Params
{
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKUpdate
struct UPrisoner_Hunter_AnimBP_C_IKUpdate_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.IKFootTrace
struct UPrisoner_Hunter_AnimBP_C_IKFootTrace_Params
{
	float                                              Trace_Distance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impact;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.Set MoveAxis From Transform Direction
struct UPrisoner_Hunter_AnimBP_C_Set_MoveAxis_From_Transform_Direction_Params
{
	class AActor*                                      Pawn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Prisoner_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_A670F8D84BA4FF82B291A6B6B9E3BEFF
struct UPrisoner_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Prisoner_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_A670F8D84BA4FF82B291A6B6B9E3BEFF_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Prisoner_Hunter_AnimBP_AnimGraphNode_BlendListByBool_D2011A024BFA3BE8FF7B69A726C43C6B
struct UPrisoner_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Prisoner_Hunter_AnimBP_AnimGraphNode_BlendListByBool_D2011A024BFA3BE8FF7B69A726C43C6B_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.AnimNotify_EndAttack
struct UPrisoner_Hunter_AnimBP_C_AnimNotify_EndAttack_Params
{
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.BlueprintUpdateAnimation
struct UPrisoner_Hunter_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C.ExecuteUbergraph_Prisoner_Hunter_AnimBP
struct UPrisoner_Hunter_AnimBP_C_ExecuteUbergraph_Prisoner_Hunter_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
