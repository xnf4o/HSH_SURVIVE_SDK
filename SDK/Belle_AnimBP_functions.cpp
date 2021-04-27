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

// Function Belle_AnimBP.Belle_AnimBP_C.Set MoveAxis From Transform Direction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveForward                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoveRight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_AnimBP_C::Set_MoveAxis_From_Transform_Direction(class AActor* Pawn, class USceneComponent* Camera, float* MoveForward, float* MoveRight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_AnimBP.Belle_AnimBP_C.Set MoveAxis From Transform Direction");

	UBelle_AnimBP_C_Set_MoveAxis_From_Transform_Direction_Params params;
	params.Pawn = Pawn;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MoveForward != nullptr)
		*MoveForward = params.MoveForward;
	if (MoveRight != nullptr)
		*MoveRight = params.MoveRight;

}


// Function Belle_AnimBP.Belle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_AnimBP_AnimGraphNode_BlendListByBool_B479A0794239D157CE4CA5AA3ADCE210
// (BlueprintEvent)
void UBelle_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_AnimBP_AnimGraphNode_BlendListByBool_B479A0794239D157CE4CA5AA3ADCE210()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_AnimBP.Belle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_AnimBP_AnimGraphNode_BlendListByBool_B479A0794239D157CE4CA5AA3ADCE210");

	UBelle_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_AnimBP_AnimGraphNode_BlendListByBool_B479A0794239D157CE4CA5AA3ADCE210_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_AnimBP.Belle_AnimBP_C.AnimNotify_EndAttack
// (BlueprintCallable, BlueprintEvent)
void UBelle_AnimBP_C::AnimNotify_EndAttack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_AnimBP.Belle_AnimBP_C.AnimNotify_EndAttack");

	UBelle_AnimBP_C_AnimNotify_EndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_AnimBP.Belle_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_AnimBP.Belle_AnimBP_C.BlueprintUpdateAnimation");

	UBelle_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_AnimBP.Belle_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UBelle_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_AnimBP.Belle_AnimBP_C.BlueprintBeginPlay");

	UBelle_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Belle_AnimBP.Belle_AnimBP_C.ExecuteUbergraph_Belle_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBelle_AnimBP_C::ExecuteUbergraph_Belle_AnimBP(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Belle_AnimBP.Belle_AnimBP_C.ExecuteUbergraph_Belle_AnimBP");

	UBelle_AnimBP_C_ExecuteUbergraph_Belle_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
