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

// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateHandLeft
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_AnimBlueprint_C::IKUpdateHandLeft()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateHandLeft");

	UMale_AnimBlueprint_C_IKUpdateHandLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateHandRight
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_AnimBlueprint_C::IKUpdateHandRight()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateHandRight");

	UMale_AnimBlueprint_C_IKUpdateHandRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKHandUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_AnimBlueprint_C::IKHandUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKHandUpdate");

	UMale_AnimBlueprint_C_IKHandUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKReset Vars
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_AnimBlueprint_C::IKReset_Vars()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKReset Vars");

	UMale_AnimBlueprint_C_IKReset_Vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IsMoving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMale_AnimBlueprint_C::IsMoving()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IsMoving");

	UMale_AnimBlueprint_C_IsMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.UpdateCapsuleHalfHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Hips_Shifts                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset_Defualt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMale_AnimBlueprint_C::UpdateCapsuleHalfHeight(float Hips_Shifts, bool Reset_Defualt)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.UpdateCapsuleHalfHeight");

	UMale_AnimBlueprint_C_UpdateCapsuleHalfHeight_Params params;
	params.Hips_Shifts = Hips_Shifts;
	params.Reset_Defualt = Reset_Defualt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateFootOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          targetValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Effector_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Interp_Speed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_AnimBlueprint_C::IKUpdateFootOffset(float targetValue, float* Effector_Var, float Interp_Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateFootOffset");

	UMale_AnimBlueprint_C_IKUpdateFootOffset_Params params;
	params.targetValue = targetValue;
	params.Interp_Speed = Interp_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Effector_Var != nullptr)
		*Effector_Var = params.Effector_Var;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateFootRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotation_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_AnimBlueprint_C::IKUpdateFootRotation(const struct FRotator& Target, struct FRotator* Rotation_Var, float InterpSpeed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdateFootRotation");

	UMale_AnimBlueprint_C_IKUpdateFootRotation_Params params;
	params.Target = Target;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation_Var != nullptr)
		*Rotation_Var = params.Rotation_Var;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.NormalToRotator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMale_AnimBlueprint_C::NormalToRotator(const struct FVector& Normal, struct FRotator* Rotator)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.NormalToRotator");

	UMale_AnimBlueprint_C_NormalToRotator_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UMale_AnimBlueprint_C::IKUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKUpdate");

	UMale_AnimBlueprint_C_IKUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKFootTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Trace_Distance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Offest                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Impact                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_AnimBlueprint_C::IKFootTrace(float Trace_Distance, const struct FName& InputPin, float* Offest, struct FVector* Impact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.IKFootTrace");

	UMale_AnimBlueprint_C_IKFootTrace_Params params;
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


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.Set MoveAxis From Transform Direction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveForward                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveRight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_AnimBlueprint_C::Set_MoveAxis_From_Transform_Direction(class AActor* Pawn_, class USceneComponent* Camera, float* MoveForward, float* MoveRight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.Set MoveAxis From Transform Direction");

	UMale_AnimBlueprint_C_Set_MoveAxis_From_Transform_Direction_Params params;
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


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TransitionResult_3B8CB87C44BD7207EC8C1798A1D05486
// (BlueprintEvent)
void UMale_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TransitionResult_3B8CB87C44BD7207EC8C1798A1D05486()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TransitionResult_3B8CB87C44BD7207EC8C1798A1D05486");

	UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TransitionResult_3B8CB87C44BD7207EC8C1798A1D05486_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_F5D3819647F0400495F6EB9B43AD2579
// (BlueprintEvent)
void UMale_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_F5D3819647F0400495F6EB9B43AD2579()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_F5D3819647F0400495F6EB9B43AD2579");

	UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_F5D3819647F0400495F6EB9B43AD2579_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_42DA7E164994BB50F08D81A6F6B4C9D4
// (BlueprintEvent)
void UMale_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_42DA7E164994BB50F08D81A6F6B4C9D4()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_42DA7E164994BB50F08D81A6F6B4C9D4");

	UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_42DA7E164994BB50F08D81A6F6B4C9D4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_1703AA57409F50E39986818750A81F69
// (BlueprintEvent)
void UMale_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_1703AA57409F50E39986818750A81F69()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_1703AA57409F50E39986818750A81F69");

	UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_TwoBoneIK_1703AA57409F50E39986818750A81F69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.AnimNotify_EndAttack
// (BlueprintCallable, BlueprintEvent)
void UMale_AnimBlueprint_C::AnimNotify_EndAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.AnimNotify_EndAttack");

	UMale_AnimBlueprint_C_AnimNotify_EndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.BlueprintUpdateAnimation");

	UMale_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_ModifyBone_1B8A79454C7E1DB23E632DBB99146278
// (BlueprintEvent)
void UMale_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_ModifyBone_1B8A79454C7E1DB23E632DBB99146278()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_ModifyBone_1B8A79454C7E1DB23E632DBB99146278");

	UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_ModifyBone_1B8A79454C7E1DB23E632DBB99146278_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_BlendListByBool_B226D355427052F988E175816878D451
// (BlueprintEvent)
void UMale_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_BlendListByBool_B226D355427052F988E175816878D451()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_BlendListByBool_B226D355427052F988E175816878D451");

	UMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_AnimBlueprint_AnimGraphNode_BlendListByBool_B226D355427052F988E175816878D451_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.AnimNotify_FreeFall
// (BlueprintCallable, BlueprintEvent)
void UMale_AnimBlueprint_C::AnimNotify_FreeFall()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.AnimNotify_FreeFall");

	UMale_AnimBlueprint_C_AnimNotify_FreeFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Male_AnimBlueprint.Male_AnimBlueprint_C.ExecuteUbergraph_Male_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMale_AnimBlueprint_C::ExecuteUbergraph_Male_AnimBlueprint(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Male_AnimBlueprint.Male_AnimBlueprint_C.ExecuteUbergraph_Male_AnimBlueprint");

	UMale_AnimBlueprint_C_ExecuteUbergraph_Male_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
