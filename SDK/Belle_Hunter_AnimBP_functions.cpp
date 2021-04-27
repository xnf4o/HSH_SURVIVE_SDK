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

// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.GetAimRotator
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBelle_Hunter_AnimBP_C::GetAimRotator(struct FRotator* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.GetAimRotator");

	UBelle_Hunter_AnimBP_C_GetAimRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateHandLeft
// (Public, BlueprintCallable, BlueprintEvent)
void UBelle_Hunter_AnimBP_C::IKUpdateHandLeft()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateHandLeft");

	UBelle_Hunter_AnimBP_C_IKUpdateHandLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateHandRight
// (Public, BlueprintCallable, BlueprintEvent)
void UBelle_Hunter_AnimBP_C::IKUpdateHandRight()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateHandRight");

	UBelle_Hunter_AnimBP_C_IKUpdateHandRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKHandUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UBelle_Hunter_AnimBP_C::IKHandUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKHandUpdate");

	UBelle_Hunter_AnimBP_C_IKHandUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKReset Vars
// (Public, BlueprintCallable, BlueprintEvent)
void UBelle_Hunter_AnimBP_C::IKReset_Vars()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKReset Vars");

	UBelle_Hunter_AnimBP_C_IKReset_Vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IsMoving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBelle_Hunter_AnimBP_C::IsMoving()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IsMoving");

	UBelle_Hunter_AnimBP_C_IsMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.UpdateCapsuleHalfHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Hips_Shifts                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset_Defualt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBelle_Hunter_AnimBP_C::UpdateCapsuleHalfHeight(float Hips_Shifts, bool Reset_Defualt)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.UpdateCapsuleHalfHeight");

	UBelle_Hunter_AnimBP_C_UpdateCapsuleHalfHeight_Params params;
	params.Hips_Shifts = Hips_Shifts;
	params.Reset_Defualt = Reset_Defualt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateFootOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          targetValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Effector_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Interp_Speed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_Hunter_AnimBP_C::IKUpdateFootOffset(float targetValue, float* Effector_Var, float Interp_Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateFootOffset");

	UBelle_Hunter_AnimBP_C_IKUpdateFootOffset_Params params;
	params.targetValue = targetValue;
	params.Interp_Speed = Interp_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Effector_Var != nullptr)
		*Effector_Var = params.Effector_Var;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateFootRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotation_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_Hunter_AnimBP_C::IKUpdateFootRotation(const struct FRotator& Target, struct FRotator* Rotation_Var, float InterpSpeed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdateFootRotation");

	UBelle_Hunter_AnimBP_C_IKUpdateFootRotation_Params params;
	params.Target = Target;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation_Var != nullptr)
		*Rotation_Var = params.Rotation_Var;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.NormalToRotator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBelle_Hunter_AnimBP_C::NormalToRotator(const struct FVector& Normal, struct FRotator* Rotator)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.NormalToRotator");

	UBelle_Hunter_AnimBP_C_NormalToRotator_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UBelle_Hunter_AnimBP_C::IKUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKUpdate");

	UBelle_Hunter_AnimBP_C_IKUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKFootTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Trace_Distance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Offest                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Impact                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_Hunter_AnimBP_C::IKFootTrace(float Trace_Distance, const struct FName& InputPin, float* Offest, struct FVector* Impact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.IKFootTrace");

	UBelle_Hunter_AnimBP_C_IKFootTrace_Params params;
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


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.Set MoveAxis From Transform Direction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveForward                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveRight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_Hunter_AnimBP_C::Set_MoveAxis_From_Transform_Direction(class AActor* Pawn_, class USceneComponent* Camera, float* MoveForward, float* MoveRight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.Set MoveAxis From Transform Direction");

	UBelle_Hunter_AnimBP_C_Set_MoveAxis_From_Transform_Direction_Params params;
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


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F
// (BlueprintEvent)
void UBelle_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F");

	UBelle_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.AnimNotify_EndAttack
// (BlueprintCallable, BlueprintEvent)
void UBelle_Hunter_AnimBP_C::AnimNotify_EndAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.AnimNotify_EndAttack");

	UBelle_Hunter_AnimBP_C_AnimNotify_EndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_Hunter_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.BlueprintUpdateAnimation");

	UBelle_Hunter_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74
// (BlueprintEvent)
void UBelle_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74");

	UBelle_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.ExecuteUbergraph_Belle_Hunter_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_Hunter_AnimBP_C::ExecuteUbergraph_Belle_Hunter_AnimBP(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C.ExecuteUbergraph_Belle_Hunter_AnimBP");

	UBelle_Hunter_AnimBP_C_ExecuteUbergraph_Belle_Hunter_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
