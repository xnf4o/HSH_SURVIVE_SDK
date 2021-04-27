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

// Function ChainSplineActor.ChainSplineActor_C.GetSocketPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector AChainSplineActor_C::GetSocketPoint(const struct FName& InSocketName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.GetSocketPoint");

	AChainSplineActor_C_GetSocketPoint_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChainSplineActor.ChainSplineActor_C.OnRep_TargetPoint
// (BlueprintCallable, BlueprintEvent)
void AChainSplineActor_C::OnRep_TargetPoint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.OnRep_TargetPoint");

	AChainSplineActor_C_OnRep_TargetPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.CalculateSpline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DistanceCap                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Points                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChainSplineActor_C::CalculateSpline(const struct FVector& Start, const struct FVector& End, float DistanceCap, int* Points)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.CalculateSpline");

	AChainSplineActor_C_CalculateSpline_Params params;
	params.Start = Start;
	params.End = End;
	params.DistanceCap = DistanceCap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;

}


// Function ChainSplineActor.ChainSplineActor_C.OnRep_Location
// (BlueprintCallable, BlueprintEvent)
void AChainSplineActor_C::OnRep_Location()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.OnRep_Location");

	AChainSplineActor_C_OnRep_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.ClearMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USplineMeshComponent*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AChainSplineActor_C::ClearMesh(TArray<class USplineMeshComponent*>* Array)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.ClearMesh");

	AChainSplineActor_C_ClearMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function ChainSplineActor.ChainSplineActor_C.UpdateMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USplineMeshComponent*> TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USplineComponent*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChainSplineActor_C::UpdateMesh(TArray<class USplineMeshComponent*> TargetArray, class USplineComponent** Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.UpdateMesh");

	AChainSplineActor_C_UpdateMesh_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function ChainSplineActor.ChainSplineActor_C.CreateMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USplineMeshComponent*> TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USplineComponent*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChainSplineActor_C::CreateMesh(TArray<class USplineMeshComponent*> TargetArray, class USplineComponent** Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.CreateMesh");

	AChainSplineActor_C_CreateMesh_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function ChainSplineActor.ChainSplineActor_C.Timeline_0-1__FinishedFunc
// (BlueprintEvent)
void AChainSplineActor_C::Timeline_0_1__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.Timeline_0-1__FinishedFunc");

	AChainSplineActor_C_Timeline_0_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.Timeline_0-1__UpdateFunc
// (BlueprintEvent)
void AChainSplineActor_C::Timeline_0_1__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.Timeline_0-1__UpdateFunc");

	AChainSplineActor_C_Timeline_0_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.ChangeColor
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AChainSplineActor_C::ChangeColor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.ChangeColor");

	AChainSplineActor_C_ChangeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChainSplineActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.ReceiveTick");

	AChainSplineActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AChainSplineActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.ReceiveBeginPlay");

	AChainSplineActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.MulticastStartAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AChainSplineActor_C::MulticastStartAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.MulticastStartAnimation");

	AChainSplineActor_C_MulticastStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.MulticastReverseAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AChainSplineActor_C::MulticastReverseAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.MulticastReverseAnimation");

	AChainSplineActor_C_MulticastReverseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.ExecuteUbergraph_ChainSplineActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChainSplineActor_C::ExecuteUbergraph_ChainSplineActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.ExecuteUbergraph_ChainSplineActor");

	AChainSplineActor_C_ExecuteUbergraph_ChainSplineActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChainSplineActor.ChainSplineActor_C.OnBeginOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChainSplineActor_C::OnBeginOverlap__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChainSplineActor.ChainSplineActor_C.OnBeginOverlap__DelegateSignature");

	AChainSplineActor_C_OnBeginOverlap__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
