// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Male_Survivor_ABP.Male_Survivor_ABP_C.OnRep_Yaw
// (BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::OnRep_Yaw()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.OnRep_Yaw");

	UMale_Survivor_ABP_C_OnRep_Yaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.UpdateClothing
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::UpdateClothing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.UpdateClothing");

	UMale_Survivor_ABP_C_UpdateClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateHandLeft
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::IKUpdateHandLeft()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateHandLeft");

	UMale_Survivor_ABP_C_IKUpdateHandLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateHandRight
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::IKUpdateHandRight()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateHandRight");

	UMale_Survivor_ABP_C_IKUpdateHandRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKHandUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::IKHandUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKHandUpdate");

	UMale_Survivor_ABP_C_IKHandUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKReset Vars
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::IKReset_Vars()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKReset Vars");

	UMale_Survivor_ABP_C_IKReset_Vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IsMoving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMale_Survivor_ABP_C::IsMoving()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IsMoving");

	UMale_Survivor_ABP_C_IsMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.UpdateCapsuleHalfHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Hips_Shifts                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset_Defualt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMale_Survivor_ABP_C::UpdateCapsuleHalfHeight(float Hips_Shifts, bool Reset_Defualt)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.UpdateCapsuleHalfHeight");

	UMale_Survivor_ABP_C_UpdateCapsuleHalfHeight_Params params;
	params.Hips_Shifts = Hips_Shifts;
	params.Reset_Defualt = Reset_Defualt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateFootOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          targetValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Effector_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Interp_Speed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_Survivor_ABP_C::IKUpdateFootOffset(float targetValue, float* Effector_Var, float Interp_Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateFootOffset");

	UMale_Survivor_ABP_C_IKUpdateFootOffset_Params params;
	params.targetValue = targetValue;
	params.Interp_Speed = Interp_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Effector_Var != nullptr)
		*Effector_Var = params.Effector_Var;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateFootRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotation_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_Survivor_ABP_C::IKUpdateFootRotation(const struct FRotator& Target, struct FRotator* Rotation_Var, float InterpSpeed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdateFootRotation");

	UMale_Survivor_ABP_C_IKUpdateFootRotation_Params params;
	params.Target = Target;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation_Var != nullptr)
		*Rotation_Var = params.Rotation_Var;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.NormalToRotator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMale_Survivor_ABP_C::NormalToRotator(const struct FVector& Normal, struct FRotator* Rotator)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.NormalToRotator");

	UMale_Survivor_ABP_C_NormalToRotator_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::IKUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKUpdate");

	UMale_Survivor_ABP_C_IKUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKFootTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Trace_Distance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Offest                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Impact                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_Survivor_ABP_C::IKFootTrace(float Trace_Distance, const struct FName& InputPin, float* Offest, struct FVector* Impact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.IKFootTrace");

	UMale_Survivor_ABP_C_IKFootTrace_Params params;
	params.Trace_Distance = Trace_Distance;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Offest != nullptr)
		*Offest = params.Offest;
	if (Impact != nullptr)
		*Impact = params.Impact;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.Set MoveAxis From Transform Direction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveForward                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveRight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_Survivor_ABP_C::Set_MoveAxis_From_Transform_Direction(class AActor* Pawn_, class USceneComponent* Camera, float* MoveForward, float* MoveRight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.Set MoveAxis From Transform Direction");

	UMale_Survivor_ABP_C_Set_MoveAxis_From_Transform_Direction_Params params;
	params.Pawn_ = Pawn_;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MoveForward != nullptr)
		*MoveForward = params.MoveForward;
	if (MoveRight != nullptr)
		*MoveRight = params.MoveRight;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3
// (BlueprintEvent)
void UMale_Survivor_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3");

	UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962
// (BlueprintEvent)
void UMale_Survivor_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962");

	UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140
// (BlueprintEvent)
void UMale_Survivor_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140");

	UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A
// (BlueprintEvent)
void UMale_Survivor_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A");

	UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3
// (BlueprintEvent)
void UMale_Survivor_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3");

	UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D
// (BlueprintEvent)
void UMale_Survivor_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D");

	UMale_Survivor_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.AnimNotify_EndAttack
// (BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::AnimNotify_EndAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.AnimNotify_EndAttack");

	UMale_Survivor_ABP_C_AnimNotify_EndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_Survivor_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.BlueprintUpdateAnimation");

	UMale_Survivor_ABP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.AnimNotify_FreeFall
// (BlueprintCallable, BlueprintEvent)
void UMale_Survivor_ABP_C::AnimNotify_FreeFall()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.AnimNotify_FreeFall");

	UMale_Survivor_ABP_C_AnimNotify_FreeFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_Survivor_ABP.Male_Survivor_ABP_C.ExecuteUbergraph_Male_Survivor_ABP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_Survivor_ABP_C::ExecuteUbergraph_Male_Survivor_ABP(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_Survivor_ABP.Male_Survivor_ABP_C.ExecuteUbergraph_Male_Survivor_ABP");

	UMale_Survivor_ABP_C_ExecuteUbergraph_Male_Survivor_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
