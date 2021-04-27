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

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.GetAimRotator
struct UPhray_Hunter_AnimBP_C_GetAimRotator_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.SetOnStateChanged
struct UPhray_Hunter_AnimBP_C_SetOnStateChanged_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateHandLeft
struct UPhray_Hunter_AnimBP_C_IKUpdateHandLeft_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateHandRight
struct UPhray_Hunter_AnimBP_C_IKUpdateHandRight_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKHandUpdate
struct UPhray_Hunter_AnimBP_C_IKHandUpdate_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKReset Vars
struct UPhray_Hunter_AnimBP_C_IKReset_Vars_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IsMoving
struct UPhray_Hunter_AnimBP_C_IsMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.UpdateCapsuleHalfHeight
struct UPhray_Hunter_AnimBP_C_UpdateCapsuleHalfHeight_Params
{
	float                                              Hips_Shifts;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Defualt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateFootOffset
struct UPhray_Hunter_AnimBP_C_IKUpdateFootOffset_Params
{
	float                                              targetValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effector_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Interp_Speed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateFootRotation
struct UPhray_Hunter_AnimBP_C_IKUpdateFootRotation_Params
{
	struct FRotator                                    Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation_Var;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.NormalToRotator
struct UPhray_Hunter_AnimBP_C_NormalToRotator_Params
{
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdate
struct UPhray_Hunter_AnimBP_C_IKUpdate_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKFootTrace
struct UPhray_Hunter_AnimBP_C_IKFootTrace_Params
{
	float                                              Trace_Distance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impact;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.Set MoveAxis From Transform Direction
struct UPhray_Hunter_AnimBP_C_Set_MoveAxis_From_Transform_Direction_Params
{
	class AActor*                                      Pawn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.AnimNotify_EndAttack
struct UPhray_Hunter_AnimBP_C_AnimNotify_EndAttack_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.BlueprintUpdateAnimation
struct UPhray_Hunter_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0
struct UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0_Params
{
};

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.ExecuteUbergraph_Phray_Hunter_AnimBP
struct UPhray_Hunter_AnimBP_C_ExecuteUbergraph_Phray_Hunter_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
