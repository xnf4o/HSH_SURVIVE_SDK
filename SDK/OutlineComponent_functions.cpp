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

// Function OutlineComponent.OutlineComponent_C.IsChildClassOfArray?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 TestActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          ClassFillter                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsChildClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutlineComponent_C::IsChildClassOfArray_(class UObject* TestActor, TArray<class UClass*>* ClassFillter, bool* IsChildClass)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.IsChildClassOfArray?");

	UOutlineComponent_C_IsChildClassOfArray__Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClassFillter != nullptr)
		*ClassFillter = params.ClassFillter;
	if (IsChildClass != nullptr)
		*IsChildClass = params.IsChildClass;

}


// Function OutlineComponent.OutlineComponent_C.IsIsUseOutlineForInteraction?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsUseOutlineForInteraction_   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutlineComponent_C::IsIsUseOutlineForInteraction_(bool* bIsUseOutlineForInteraction_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.IsIsUseOutlineForInteraction?");

	UOutlineComponent_C_IsIsUseOutlineForInteraction__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsUseOutlineForInteraction_ != nullptr)
		*bIsUseOutlineForInteraction_ = params.bIsUseOutlineForInteraction_;

}


// Function OutlineComponent.OutlineComponent_C.CheckInteractActor
// (Public, BlueprintCallable, BlueprintEvent)
void UOutlineComponent_C::CheckInteractActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.CheckInteractActor");

	UOutlineComponent_C_CheckInteractActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.FillterClass
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ClassTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ClassFillter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsPass_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutlineComponent_C::FillterClass(class UClass* ClassTarget, class UClass* ClassFillter, bool* IsPass_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.FillterClass");

	UOutlineComponent_C_FillterClass_Params params;
	params.ClassTarget = ClassTarget;
	params.ClassFillter = ClassFillter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPass_ != nullptr)
		*IsPass_ = params.IsPass_;

}


// Function OutlineComponent.OutlineComponent_C.GetOverlapActors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        Collision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::GetOverlapActors(class USphereComponent* Collision)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.GetOverlapActors");

	UOutlineComponent_C_GetOverlapActors_Params params;
	params.Collision = Collision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.RemoveFromArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::RemoveFromArray(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.RemoveFromArray");

	UOutlineComponent_C_RemoveFromArray_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.FillterHideOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::FillterHideOutline(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.FillterHideOutline");

	UOutlineComponent_C_FillterHideOutline_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.FillterShowOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::FillterShowOutline(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.FillterShowOutline");

	UOutlineComponent_C_FillterShowOutline_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.RefreshActorsList
// (Public, BlueprintCallable, BlueprintEvent)
void UOutlineComponent_C::RefreshActorsList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.RefreshActorsList");

	UOutlineComponent_C_RefreshActorsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.AddedToArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::AddedToArray(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.AddedToArray");

	UOutlineComponent_C_AddedToArray_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.FindInHeightRange
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Root                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UOutlineComponent_C::FindInHeightRange(class USceneComponent* Target, class USceneComponent* Root)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.FindInHeightRange");

	UOutlineComponent_C_FindInHeightRange_Params params;
	params.Target = Target;
	params.Root = Root;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OutlineComponent.OutlineComponent_C.CheckMethodNearCharacter
// (Public, BlueprintCallable, BlueprintEvent)
void UOutlineComponent_C::CheckMethodNearCharacter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.CheckMethodNearCharacter");

	UOutlineComponent_C_CheckMethodNearCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.FillterActorsArray
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          In                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Out                            (Parm, OutParm, ZeroConstructor)
void UOutlineComponent_C::FillterActorsArray(TArray<class AActor*>* In, TArray<class AActor*>* Out)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.FillterActorsArray");

	UOutlineComponent_C_FillterActorsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
	if (Out != nullptr)
		*Out = params.Out;

}


// Function OutlineComponent.OutlineComponent_C.GetNearCenterOfViewport
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*        Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NearValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::GetNearCenterOfViewport(class UCameraComponent* Camera, class AActor* Actor, float* NearValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.GetNearCenterOfViewport");

	UOutlineComponent_C_GetNearCenterOfViewport_Params params;
	params.Camera = Camera;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NearValue != nullptr)
		*NearValue = params.NearValue;

}


// Function OutlineComponent.OutlineComponent_C.FindLenght
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         ActorA                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         ActorB                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Lenght                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::FindLenght(class USceneComponent* ActorA, class USceneComponent* ActorB, float* Lenght)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.FindLenght");

	UOutlineComponent_C_FindLenght_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Lenght != nullptr)
		*Lenght = params.Lenght;

}


// Function OutlineComponent.OutlineComponent_C.Uninitialized
// (BlueprintCallable, BlueprintEvent)
void UOutlineComponent_C::Uninitialized()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.Uninitialized");

	UOutlineComponent_C_Uninitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.EnableUIOnObject
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::EnableUIOnObject(class UObject* Object)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.EnableUIOnObject");

	UOutlineComponent_C_EnableUIOnObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.DisableUIOnObject
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::DisableUIOnObject(class UObject* Object)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.DisableUIOnObject");

	UOutlineComponent_C_DisableUIOnObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.VisibleIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::VisibleIndicator(bool IsShow_, class UObject* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.VisibleIndicator");

	UOutlineComponent_C_VisibleIndicator_Params params;
	params.IsShow_ = IsShow_;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.VisibleOutline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::VisibleOutline(bool IsShow_, class AActor* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.VisibleOutline");

	UOutlineComponent_C_VisibleOutline_Params params;
	params.IsShow_ = IsShow_;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.CheckingInterectionInCamera
// (BlueprintCallable, BlueprintEvent)
void UOutlineComponent_C::CheckingInterectionInCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.CheckingInterectionInCamera");

	UOutlineComponent_C_CheckingInterectionInCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         pointRoot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*        Collision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::Initialize(class UCameraComponent* Camera, class USceneComponent* pointRoot, class USphereComponent* Collision)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.Initialize");

	UOutlineComponent_C_Initialize_Params params;
	params.Camera = Camera;
	params.pointRoot = pointRoot;
	params.Collision = Collision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.ReceiveTick");

	UOutlineComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineComponent.OutlineComponent_C.ExecuteUbergraph_OutlineComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineComponent_C::ExecuteUbergraph_OutlineComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineComponent.OutlineComponent_C.ExecuteUbergraph_OutlineComponent");

	UOutlineComponent_C_ExecuteUbergraph_OutlineComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
