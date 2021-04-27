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

// Function InteractComponent.InteractComponent_C.ChangeComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         RootComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::ChangeComponent(class USceneComponent* RootComponent, class USceneComponent* CameraComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.ChangeComponent");

	UInteractComponent_C_ChangeComponent_Params params;
	params.RootComponent = RootComponent;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractComponent.InteractComponent_C.GetSnapLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::GetSnapLocation(class AActor** Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.GetSnapLocation");

	UInteractComponent_C_GetSnapLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;

}


// Function InteractComponent.InteractComponent_C.LineTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Root                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractComponent_C::LineTrace(class USceneComponent* Root, class USceneComponent* Camera, float Distance, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.LineTrace");

	UInteractComponent_C_LineTrace_Params params;
	params.Root = Root;
	params.Camera = Camera;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function InteractComponent.InteractComponent_C.ChangeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InteractState_E_InteractState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::ChangeState(TEnumAsByte<E_InteractState_E_InteractState> State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.ChangeState");

	UInteractComponent_C_ChangeState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractComponent.InteractComponent_C.IsNotBehideConstruct
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInteractComponent_C::IsNotBehideConstruct(const struct FVector& Start, class USceneComponent* Target, TArray<class AActor*> ActorsToIgnore, bool* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.IsNotBehideConstruct");

	UInteractComponent_C_IsNotBehideConstruct_Params params;
	params.Start = Start;
	params.Target = Target;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function InteractComponent.InteractComponent_C.FindDistanceComponent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::FindDistanceComponent(class USceneComponent* Start, class USceneComponent* Target, float* Distance)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.FindDistanceComponent");

	UInteractComponent_C_FindDistanceComponent_Params params;
	params.Start = Start;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function InteractComponent.InteractComponent_C.FindDotProductComponent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         RootPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         TargetPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UInteractComponent_C::FindDotProductComponent(class USceneComponent* RootPoint, class USceneComponent* TargetPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.FindDotProductComponent");

	UInteractComponent_C_FindDotProductComponent_Params params;
	params.RootPoint = RootPoint;
	params.TargetPoint = TargetPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractComponent.InteractComponent_C.FindInteractionActorNearCenterOfCamera
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Root                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInteractionBase_C*      InteractionActor               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCanInteract_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInteractComponent_C::FindInteractionActorNearCenterOfCamera(class USceneComponent* Root, class USceneComponent* Camera, class AInteractionBase_C** InteractionActor, bool* IsCanInteract_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.FindInteractionActorNearCenterOfCamera");

	UInteractComponent_C_FindInteractionActorNearCenterOfCamera_Params params;
	params.Root = Root;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractionActor != nullptr)
		*InteractionActor = params.InteractionActor;
	if (IsCanInteract_ != nullptr)
		*IsCanInteract_ = params.IsCanInteract_;

}


// Function InteractComponent.InteractComponent_C.GetInteractionActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AInteractionBase_C*      InteractionActor               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCanInteract_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInteractComponent_C::GetInteractionActor(class AInteractionBase_C** InteractionActor, bool* IsCanInteract_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.GetInteractionActor");

	UInteractComponent_C_GetInteractionActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractionActor != nullptr)
		*InteractionActor = params.InteractionActor;
	if (IsCanInteract_ != nullptr)
		*IsCanInteract_ = params.IsCanInteract_;

}


// Function InteractComponent.InteractComponent_C.FindDotProduct
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         RootPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UInteractComponent_C::FindDotProduct(class USceneComponent* RootPoint, class AActor* TargetActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.FindDotProduct");

	UInteractComponent_C_FindDotProduct_Params params;
	params.RootPoint = RootPoint;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractComponent.InteractComponent_C.FindInteractionActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Root                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInteractionBase_C*      InteractionActor               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCanInteract_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInteractComponent_C::FindInteractionActor(class USceneComponent* Root, class USceneComponent* Camera, class AInteractionBase_C** InteractionActor, bool* IsCanInteract_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.FindInteractionActor");

	UInteractComponent_C_FindInteractionActor_Params params;
	params.Root = Root;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractionActor != nullptr)
		*InteractionActor = params.InteractionActor;
	if (IsCanInteract_ != nullptr)
		*IsCanInteract_ = params.IsCanInteract_;

}


// Function InteractComponent.InteractComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         RootComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::Initialize(class UUserWidget* HUD, class USceneComponent* RootComponent, class USceneComponent* CameraComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.Initialize");

	UInteractComponent_C_Initialize_Params params;
	params.HUD = HUD;
	params.RootComponent = RootComponent;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractComponent.InteractComponent_C.Deinitialize
// (BlueprintCallable, BlueprintEvent)
void UInteractComponent_C::Deinitialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.Deinitialize");

	UInteractComponent_C_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractComponent.InteractComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.ReceiveTick");

	UInteractComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractComponent.InteractComponent_C.ExecuteUbergraph_InteractComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::ExecuteUbergraph_InteractComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.ExecuteUbergraph_InteractComponent");

	UInteractComponent_C_ExecuteUbergraph_InteractComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractComponent.InteractComponent_C.OnStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InteractState_E_InteractState> OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_InteractState_E_InteractState> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractComponent_C::OnStateChanged__DelegateSignature(TEnumAsByte<E_InteractState_E_InteractState> OldState, TEnumAsByte<E_InteractState_E_InteractState> NewState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractComponent.InteractComponent_C.OnStateChanged__DelegateSignature");

	UInteractComponent_C_OnStateChanged__DelegateSignature_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
