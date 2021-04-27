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

// Function HolyThreadActor.HolyThreadActor_C.InitialPosition
// (Public, BlueprintCallable, BlueprintEvent)
void AHolyThreadActor_C::InitialPosition()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.InitialPosition");

	AHolyThreadActor_C_InitialPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.SetMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHolyThreadActor_C::SetMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.SetMesh");

	AHolyThreadActor_C_SetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.GetEndPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DebugPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::GetEndPosition(int LineIndex, struct FVector* EndPosition, int* DebugPosition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.GetEndPosition");

	AHolyThreadActor_C_GetEndPosition_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndPosition != nullptr)
		*EndPosition = params.EndPosition;
	if (DebugPosition != nullptr)
		*DebugPosition = params.DebugPosition;

}


// Function HolyThreadActor.HolyThreadActor_C.GetStartPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 StartPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DebugPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::GetStartPosition(int LineIndex, struct FVector* StartPosition, int* DebugPosition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.GetStartPosition");

	AHolyThreadActor_C_GetStartPosition_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartPosition != nullptr)
		*StartPosition = params.StartPosition;
	if (DebugPosition != nullptr)
		*DebugPosition = params.DebugPosition;

}


// Function HolyThreadActor.HolyThreadActor_C.InitialCuve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRandom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHolyThreadActor_C::InitialCuve(bool IsRandom)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.InitialCuve");

	AHolyThreadActor_C_InitialCuve_Params params;
	params.IsRandom = IsRandom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.CreateCuve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::CreateCuve(int LineIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.CreateCuve");

	AHolyThreadActor_C_CreateCuve_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHolyThreadActor_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.UserConstructionScript");

	AHolyThreadActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.OnTracerInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::OnTracerInteract(class APawn* Pawn, class UPrimitiveComponent* HitComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.OnTracerInteract");

	AHolyThreadActor_C_OnTracerInteract_Params params;
	params.Pawn = Pawn;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.OnTracerEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::OnTracerEnter(class APawn* Pawn, class UPrimitiveComponent* HitComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.OnTracerEnter");

	AHolyThreadActor_C_OnTracerEnter_Params params;
	params.Pawn = Pawn;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.OnTracerLeave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::OnTracerLeave(class APawn* Pawn, class UPrimitiveComponent* HitComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.OnTracerLeave");

	AHolyThreadActor_C_OnTracerLeave_Params params;
	params.Pawn = Pawn;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.OnTracerChangeHitComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     PreviousComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     CurrentComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::OnTracerChangeHitComponent(class APawn* Pawn, class UPrimitiveComponent* PreviousComponent, class UPrimitiveComponent* CurrentComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.OnTracerChangeHitComponent");

	AHolyThreadActor_C_OnTracerChangeHitComponent_Params params;
	params.Pawn = Pawn;
	params.PreviousComponent = PreviousComponent;
	params.CurrentComponent = CurrentComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.GenerateCurve
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHolyThreadActor_C::GenerateCurve()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.GenerateCurve");

	AHolyThreadActor_C_GenerateCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.GenerateThread
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         MainPointer                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRandomStream           RandomStream                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AHolyThreadActor_C::GenerateThread(TArray<struct FVector> MainPointer, const struct FRandomStream& RandomStream)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.GenerateThread");

	AHolyThreadActor_C_GenerateThread_Params params;
	params.MainPointer = MainPointer;
	params.RandomStream = RandomStream;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyThreadActor.HolyThreadActor_C.ExecuteUbergraph_HolyThreadActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyThreadActor_C::ExecuteUbergraph_HolyThreadActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyThreadActor.HolyThreadActor_C.ExecuteUbergraph_HolyThreadActor");

	AHolyThreadActor_C_ExecuteUbergraph_HolyThreadActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
