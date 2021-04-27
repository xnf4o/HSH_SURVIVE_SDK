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

// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FilterSurvivorActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class ASurvivorBase_C*> Return                         (Parm, OutParm, ZeroConstructor)
void UGA_PA_HunterBellePortalNew_C::FilterSurvivorActive(TArray<class ASurvivorBase_C*>* Survivors, TArray<class ASurvivorBase_C*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FilterSurvivorActive");

	UGA_PA_HunterBellePortalNew_C_FilterSurvivorActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelection_New
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ASurvivorBase_C*         Reutrn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::FindSelection_New(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, struct FHitResult* OutHit, bool* IsFound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelection_New");

	UGA_PA_HunterBellePortalNew_C_FindSelection_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Reutrn != nullptr)
		*Reutrn = params.Reutrn;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelectionInCamera_New
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ASurvivorBase_C*         Reutrn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::FindSelectionInCamera_New(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, bool* IsFound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelectionInCamera_New");

	UGA_PA_HunterBellePortalNew_C_FindSelectionInCamera_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Reutrn != nullptr)
		*Reutrn = params.Reutrn;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ConvertAxisToDirection
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ActorRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UGA_PA_HunterBellePortalNew_C::ConvertAxisToDirection(const struct FVector& Axis, const struct FRotator& ActorRotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ConvertAxisToDirection");

	UGA_PA_HunterBellePortalNew_C_ConvertAxisToDirection_Params params;
	params.Axis = Axis;
	params.ActorRotation = ActorRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.TraceBox_WithDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_PA_HunterBellePortalNew_C::TraceBox_WithDirection(class ASurvivorBase_C* survivor, float Distance, float Radius, float HalfHeight, const struct FVector& Direction, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.TraceBox_WithDirection");

	UGA_PA_HunterBellePortalNew_C_TraceBox_WithDirection_Params params;
	params.survivor = survivor;
	params.Distance = Distance;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.Direction = Direction;
	params.TraceChannel = TraceChannel;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.CheckLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsCanTeleport                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::CheckLocation(class ASurvivorBase_C* survivor, bool* bIsCanTeleport, struct FHitResult* OutHit, bool* IsHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.CheckLocation");

	UGA_PA_HunterBellePortalNew_C_CheckLocation_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsCanTeleport != nullptr)
		*bIsCanTeleport = params.bIsCanTeleport;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (IsHit != nullptr)
		*IsHit = params.IsHit;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindLookAtWithExcludeHight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator UGA_PA_HunterBellePortalNew_C::FindLookAtWithExcludeHight(class AActor* Origin, class AActor* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindLookAtWithExcludeHight");

	UGA_PA_HunterBellePortalNew_C_FindLookAtWithExcludeHight_Params params;
	params.Origin = Origin;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.IsBehideWall
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_PA_HunterBellePortalNew_C::IsBehideWall(const struct FVector& StartLocation, const struct FVector& EndLocation, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.IsBehideWall");

	UGA_PA_HunterBellePortalNew_C_IsBehideWall_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.CanTeleportTo
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASurvivorBase_C*         Reutrn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::CanTeleportTo(class ASurvivorBase_C* survivor, class ASurvivorBase_C** Reutrn, struct FHitResult* OutHit, bool* IsFound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.CanTeleportTo");

	UGA_PA_HunterBellePortalNew_C_CanTeleportTo_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reutrn != nullptr)
		*Reutrn = params.Reutrn;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelectionInCamera
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ASurvivorBase_C*         Reutrn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::FindSelectionInCamera(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, bool* IsFound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelectionInCamera");

	UGA_PA_HunterBellePortalNew_C_FindSelectionInCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Reutrn != nullptr)
		*Reutrn = params.Reutrn;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FillterDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASurvivorBase_C*> Output_Get                     (Parm, OutParm, ZeroConstructor)
void UGA_PA_HunterBellePortalNew_C::FillterDistance(TArray<class ASurvivorBase_C*>* Survivors, float Distance, TArray<class ASurvivorBase_C*>* Output_Get)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FillterDistance");

	UGA_PA_HunterBellePortalNew_C_FillterDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.IsInRange
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::IsInRange(TArray<class ASurvivorBase_C*>* Survivors, class AHunterBase_C* hunter, float Distance, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.IsInRange");

	UGA_PA_HunterBellePortalNew_C_IsInRange_Params params;
	params.hunter = hunter;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.SpawnBloodPortal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UGA_PA_HunterBellePortalNew_C::SpawnBloodPortal(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.SpawnBloodPortal");

	UGA_PA_HunterBellePortalNew_C_SpawnBloodPortal_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindFloor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 FloorLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHitFloor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsHidePlace                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::FindFloor(const struct FHitResult& OutHit, bool IsHit, struct FVector* FloorLocation, bool* IsHitFloor, bool* IsHidePlace)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindFloor");

	UGA_PA_HunterBellePortalNew_C_FindFloor_Params params;
	params.OutHit = OutHit;
	params.IsHit = IsHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloorLocation != nullptr)
		*FloorLocation = params.FloorLocation;
	if (IsHitFloor != nullptr)
		*IsHitFloor = params.IsHitFloor;
	if (IsHidePlace != nullptr)
		*IsHidePlace = params.IsHidePlace;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindLocationTeleport
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::FindLocationTeleport(const struct FHitResult& OutHit, bool IsHit, struct FTransform* Transform)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindLocationTeleport");

	UGA_PA_HunterBellePortalNew_C_FindLocationTeleport_Params params;
	params.OutHit = OutHit;
	params.IsHit = IsHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.TraceBox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_TraceDirection_E_TraceDirection> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_PA_HunterBellePortalNew_C::TraceBox(class ASurvivorBase_C* survivor, float Distance, TEnumAsByte<E_TraceDirection_E_TraceDirection> Direction, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.TraceBox");

	UGA_PA_HunterBellePortalNew_C_TraceBox_Params params;
	params.survivor = survivor;
	params.Distance = Distance;
	params.Direction = Direction;
	params.TraceChannel = TraceChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.GetSurvivor
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASurvivorBase_C*> Return                         (Parm, OutParm, ZeroConstructor)
void UGA_PA_HunterBellePortalNew_C::GetSurvivor(class AHunterBase_C* hunter, TArray<class ASurvivorBase_C*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.GetSurvivor");

	UGA_PA_HunterBellePortalNew_C_GetSurvivor_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ClearRef
// (Protected, BlueprintCallable, BlueprintEvent)
void UGA_PA_HunterBellePortalNew_C::ClearRef()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ClearRef");

	UGA_PA_HunterBellePortalNew_C_ClearRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelection
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ASurvivorBase_C*         Reutrn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::FindSelection(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, struct FHitResult* OutHit, bool* IsFound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FindSelection");

	UGA_PA_HunterBellePortalNew_C_FindSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Reutrn != nullptr)
		*Reutrn = params.Reutrn;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.EventReceived_936E2D2A43728D3908C4F2ABF06446FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::EventReceived_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.EventReceived_936E2D2A43728D3908C4F2ABF06446FE");

	UGA_PA_HunterBellePortalNew_C_EventReceived_936E2D2A43728D3908C4F2ABF06446FE_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCancelled_936E2D2A43728D3908C4F2ABF06446FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnCancelled_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCancelled_936E2D2A43728D3908C4F2ABF06446FE");

	UGA_PA_HunterBellePortalNew_C_OnCancelled_936E2D2A43728D3908C4F2ABF06446FE_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnInterrupted_936E2D2A43728D3908C4F2ABF06446FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnInterrupted_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnInterrupted_936E2D2A43728D3908C4F2ABF06446FE");

	UGA_PA_HunterBellePortalNew_C_OnInterrupted_936E2D2A43728D3908C4F2ABF06446FE_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnBlendOut_936E2D2A43728D3908C4F2ABF06446FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnBlendOut_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnBlendOut_936E2D2A43728D3908C4F2ABF06446FE");

	UGA_PA_HunterBellePortalNew_C_OnBlendOut_936E2D2A43728D3908C4F2ABF06446FE_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCompleted_936E2D2A43728D3908C4F2ABF06446FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnCompleted_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCompleted_936E2D2A43728D3908C4F2ABF06446FE");

	UGA_PA_HunterBellePortalNew_C_OnCompleted_936E2D2A43728D3908C4F2ABF06446FE_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.EventReceived_7410C53B4FA8A847895F2CA35C07136D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::EventReceived_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.EventReceived_7410C53B4FA8A847895F2CA35C07136D");

	UGA_PA_HunterBellePortalNew_C_EventReceived_7410C53B4FA8A847895F2CA35C07136D_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCancelled_7410C53B4FA8A847895F2CA35C07136D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnCancelled_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCancelled_7410C53B4FA8A847895F2CA35C07136D");

	UGA_PA_HunterBellePortalNew_C_OnCancelled_7410C53B4FA8A847895F2CA35C07136D_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnInterrupted_7410C53B4FA8A847895F2CA35C07136D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnInterrupted_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnInterrupted_7410C53B4FA8A847895F2CA35C07136D");

	UGA_PA_HunterBellePortalNew_C_OnInterrupted_7410C53B4FA8A847895F2CA35C07136D_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnBlendOut_7410C53B4FA8A847895F2CA35C07136D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnBlendOut_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnBlendOut_7410C53B4FA8A847895F2CA35C07136D");

	UGA_PA_HunterBellePortalNew_C_OnBlendOut_7410C53B4FA8A847895F2CA35C07136D_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCompleted_7410C53B4FA8A847895F2CA35C07136D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PA_HunterBellePortalNew_C::OnCompleted_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.OnCompleted_7410C53B4FA8A847895F2CA35C07136D");

	UGA_PA_HunterBellePortalNew_C_OnCompleted_7410C53B4FA8A847895F2CA35C07136D_Params params;
	params.EventTag = EventTag;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FIndFloorAndTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::FIndFloorAndTeleport(const struct FHitResult& OutHit, bool IsHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.FIndFloorAndTeleport");

	UGA_PA_HunterBellePortalNew_C_FIndFloorAndTeleport_Params params;
	params.OutHit = OutHit;
	params.IsHit = IsHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_PA_HunterBellePortalNew_C::K2_ActivateAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.K2_ActivateAbility");

	UGA_PA_HunterBellePortalNew_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.Teleport
// (BlueprintCallable, BlueprintEvent)
void UGA_PA_HunterBellePortalNew_C::Teleport()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.Teleport");

	UGA_PA_HunterBellePortalNew_C_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PA_HunterBellePortalNew_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.K2_OnEndAbility");

	UGA_PA_HunterBellePortalNew_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ExecuteUbergraph_GA_PA_HunterBellePortalNew
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PA_HunterBellePortalNew_C::ExecuteUbergraph_GA_PA_HunterBellePortalNew(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C.ExecuteUbergraph_GA_PA_HunterBellePortalNew");

	UGA_PA_HunterBellePortalNew_C_ExecuteUbergraph_GA_PA_HunterBellePortalNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
