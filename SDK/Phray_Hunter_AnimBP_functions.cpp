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

// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.GetAimRotator
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator UPhray_Hunter_AnimBP_C::GetAimRotator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.GetAimRotator");

	UPhray_Hunter_AnimBP_C_GetAimRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.SetOnStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UPhray_Hunter_AnimBP_C::SetOnStateChanged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.SetOnStateChanged");

	UPhray_Hunter_AnimBP_C_SetOnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateHandLeft
// (Public, BlueprintCallable, BlueprintEvent)
void UPhray_Hunter_AnimBP_C::IKUpdateHandLeft()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateHandLeft");

	UPhray_Hunter_AnimBP_C_IKUpdateHandLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateHandRight
// (Public, BlueprintCallable, BlueprintEvent)
void UPhray_Hunter_AnimBP_C::IKUpdateHandRight()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateHandRight");

	UPhray_Hunter_AnimBP_C_IKUpdateHandRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKHandUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UPhray_Hunter_AnimBP_C::IKHandUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKHandUpdate");

	UPhray_Hunter_AnimBP_C_IKHandUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKReset Vars
// (Public, BlueprintCallable, BlueprintEvent)
void UPhray_Hunter_AnimBP_C::IKReset_Vars()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKReset Vars");

	UPhray_Hunter_AnimBP_C_IKReset_Vars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IsMoving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPhray_Hunter_AnimBP_C::IsMoving()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IsMoving");

	UPhray_Hunter_AnimBP_C_IsMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.UpdateCapsuleHalfHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Hips_Shifts                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset_Defualt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPhray_Hunter_AnimBP_C::UpdateCapsuleHalfHeight(float Hips_Shifts, bool Reset_Defualt)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.UpdateCapsuleHalfHeight");

	UPhray_Hunter_AnimBP_C_UpdateCapsuleHalfHeight_Params params;
	params.Hips_Shifts = Hips_Shifts;
	params.Reset_Defualt = Reset_Defualt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateFootOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          targetValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Effector_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Interp_Speed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhray_Hunter_AnimBP_C::IKUpdateFootOffset(float targetValue, float* Effector_Var, float Interp_Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateFootOffset");

	UPhray_Hunter_AnimBP_C_IKUpdateFootOffset_Params params;
	params.targetValue = targetValue;
	params.Interp_Speed = Interp_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Effector_Var != nullptr)
		*Effector_Var = params.Effector_Var;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateFootRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotation_Var                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhray_Hunter_AnimBP_C::IKUpdateFootRotation(const struct FRotator& Target, struct FRotator* Rotation_Var, float InterpSpeed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdateFootRotation");

	UPhray_Hunter_AnimBP_C_IKUpdateFootRotation_Params params;
	params.Target = Target;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation_Var != nullptr)
		*Rotation_Var = params.Rotation_Var;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.NormalToRotator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPhray_Hunter_AnimBP_C::NormalToRotator(const struct FVector& Normal, struct FRotator* Rotator)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.NormalToRotator");

	UPhray_Hunter_AnimBP_C_NormalToRotator_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void UPhray_Hunter_AnimBP_C::IKUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKUpdate");

	UPhray_Hunter_AnimBP_C_IKUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKFootTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Trace_Distance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Offest                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Impact                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhray_Hunter_AnimBP_C::IKFootTrace(float Trace_Distance, const struct FName& InputPin, float* Offest, struct FVector* Impact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.IKFootTrace");

	UPhray_Hunter_AnimBP_C_IKFootTrace_Params params;
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


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.Set MoveAxis From Transform Direction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveForward                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveRight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhray_Hunter_AnimBP_C::Set_MoveAxis_From_Transform_Direction(class AActor* Pawn_, class USceneComponent* Camera, float* MoveForward, float* MoveRight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.Set MoveAxis From Transform Direction");

	UPhray_Hunter_AnimBP_C_Set_MoveAxis_From_Transform_Direction_Params params;
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


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.AnimNotify_EndAttack
// (BlueprintCallable, BlueprintEvent)
void UPhray_Hunter_AnimBP_C::AnimNotify_EndAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.AnimNotify_EndAttack");

	UPhray_Hunter_AnimBP_C_AnimNotify_EndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhray_Hunter_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.BlueprintUpdateAnimation");

	UPhray_Hunter_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0
// (BlueprintEvent)
void UPhray_Hunter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0");

	UPhray_Hunter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.ExecuteUbergraph_Phray_Hunter_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhray_Hunter_AnimBP_C::ExecuteUbergraph_Phray_Hunter_AnimBP(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C.ExecuteUbergraph_Phray_Hunter_AnimBP");

	UPhray_Hunter_AnimBP_C_ExecuteUbergraph_Phray_Hunter_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
