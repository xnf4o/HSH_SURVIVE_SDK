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

// Function AIFunctionLibrary.AIFunctionLibrary_C.ShouldOpenDoor?
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADoorBase_C*             Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldOpen_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAIFunctionLibrary_C::STATIC_ShouldOpenDoor_(class ADoorBase_C* Door, class APawn* Pawn, class UObject* __WorldContext, bool* ShouldOpen_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.ShouldOpenDoor?");

	UAIFunctionLibrary_C_ShouldOpenDoor__Params params;
	params.Door = Door;
	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldOpen_ != nullptr)
		*ShouldOpen_ = params.ShouldOpen_;

}


// Function AIFunctionLibrary.AIFunctionLibrary_C.GetForwardLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UAIFunctionLibrary_C::STATIC_GetForwardLocation(class AActor* Actor, float Distance, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.GetForwardLocation");

	UAIFunctionLibrary_C_GetForwardLocation_Params params;
	params.Actor = Actor;
	params.Distance = Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindInteract_SphereOverlap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SphereRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAIFunctionLibrary_C::STATIC_AISurvivorFindInteract_SphereOverlap(class AActor* Owner, float SphereRadius, class UObject* __WorldContext, TArray<class AActor*>* OutActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindInteract_SphereOverlap");

	UAIFunctionLibrary_C_AISurvivorFindInteract_SphereOverlap_Params params;
	params.Owner = Owner;
	params.SphereRadius = SphereRadius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanOpenDoorMulti
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>          Object                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ADoorBase_C*             HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UAIFunctionLibrary_C::STATIC_IsAISurvivorCanOpenDoorMulti(bool IsHit, TArray<class AActor*>* Object, class APawn* Pawn, class UObject* __WorldContext, class ADoorBase_C** HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanOpenDoorMulti");

	UAIFunctionLibrary_C_IsAISurvivorCanOpenDoorMulti_Params params;
	params.IsHit = IsHit;
	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
	if (HitActor != nullptr)
		*HitActor = params.HitActor;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindDoorOverlap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          OutHit                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAIFunctionLibrary_C::STATIC_AISurvivorFindDoorOverlap(class AActor* Owner, class UObject* __WorldContext, TArray<class AActor*>* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindDoorOverlap");

	UAIFunctionLibrary_C_AISurvivorFindDoorOverlap_Params params;
	params.Owner = Owner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanRitualActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ARitual_ReleaseGhost_C*  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UAIFunctionLibrary_C::STATIC_IsAISurvivorCanRitualActor(bool IsHit, class AActor* Result, class UObject* __WorldContext, class ARitual_ReleaseGhost_C** HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanRitualActor");

	UAIFunctionLibrary_C_IsAISurvivorCanRitualActor_Params params;
	params.IsHit = IsHit;
	params.Result = Result;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindRitualOverlap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          OutHit                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAIFunctionLibrary_C::STATIC_AISurvivorFindRitualOverlap(class AActor* Owner, class UObject* __WorldContext, TArray<class AActor*>* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindRitualOverlap");

	UAIFunctionLibrary_C_AISurvivorFindRitualOverlap_Params params;
	params.Owner = Owner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.AdjustLocationToFloor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAIFunctionLibrary_C::STATIC_AdjustLocationToFloor(class ACharacter* Character, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.AdjustLocationToFloor");

	UAIFunctionLibrary_C_AdjustLocationToFloor_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindInteractMulti
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>      OutHit                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAIFunctionLibrary_C::STATIC_AISurvivorFindInteractMulti(class AActor* Owner, class UObject* __WorldContext, TArray<struct FHitResult>* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindInteractMulti");

	UAIFunctionLibrary_C_AISurvivorFindInteractMulti_Params params;
	params.Owner = Owner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanRitual
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ARitual_ReleaseGhost_C*  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UAIFunctionLibrary_C::STATIC_IsAISurvivorCanRitual(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class ARitual_ReleaseGhost_C** HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanRitual");

	UAIFunctionLibrary_C_IsAISurvivorCanRitual_Params params;
	params.IsHit = IsHit;
	params.Result = Result;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanOpenDoor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ADoorBase_C*             HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UAIFunctionLibrary_C::STATIC_IsAISurvivorCanOpenDoor(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class ADoorBase_C** HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanOpenDoor");

	UAIFunctionLibrary_C_IsAISurvivorCanOpenDoor_Params params;
	params.IsHit = IsHit;
	params.Result = Result;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanInteraction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UAIFunctionLibrary_C::STATIC_IsAISurvivorCanInteraction(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class AActor** HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.IsAISurvivorCanInteraction");

	UAIFunctionLibrary_C_IsAISurvivorCanInteraction_Params params;
	params.IsHit = IsHit;
	params.Result = Result;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindInteract
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAIFunctionLibrary_C::STATIC_AISurvivorFindInteract(class AActor* Owner, class UObject* __WorldContext, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.AISurvivorFindInteract");

	UAIFunctionLibrary_C_AISurvivorFindInteract_Params params;
	params.Owner = Owner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.IsAIHunterCanInteraction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UAIFunctionLibrary_C::STATIC_IsAIHunterCanInteraction(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class AActor** HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.IsAIHunterCanInteraction");

	UAIFunctionLibrary_C_IsAIHunterCanInteraction_Params params;
	params.IsHit = IsHit;
	params.Result = Result;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;


	return params.ReturnValue;
}


// Function AIFunctionLibrary.AIFunctionLibrary_C.AIHunterFindInteract
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAIFunctionLibrary_C::STATIC_AIHunterFindInteract(class APawn* Owner, class UObject* __WorldContext, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIFunctionLibrary.AIFunctionLibrary_C.AIHunterFindInteract");

	UAIFunctionLibrary_C_AIHunterFindInteract_Params params;
	params.Owner = Owner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
