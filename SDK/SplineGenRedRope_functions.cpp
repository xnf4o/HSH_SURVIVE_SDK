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

// Function SplineGenRedRope.SplineGenRedRope_C.UpdatePointer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASplineGenRedRope_C::UpdatePointer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SplineGenRedRope.SplineGenRedRope_C.UpdatePointer");

	ASplineGenRedRope_C_UpdatePointer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SplineGenRedRope.SplineGenRedRope_C.InitialMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASplineGenRedRope_C::InitialMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SplineGenRedRope.SplineGenRedRope_C.InitialMesh");

	ASplineGenRedRope_C_InitialMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SplineGenRedRope.SplineGenRedRope_C.InitialArray
// (Public, BlueprintCallable, BlueprintEvent)
void ASplineGenRedRope_C::InitialArray()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SplineGenRedRope.SplineGenRedRope_C.InitialArray");

	ASplineGenRedRope_C_InitialArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SplineGenRedRope.SplineGenRedRope_C.InitialNumberOfSplinePoint
// (Public, BlueprintCallable, BlueprintEvent)
void ASplineGenRedRope_C::InitialNumberOfSplinePoint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SplineGenRedRope.SplineGenRedRope_C.InitialNumberOfSplinePoint");

	ASplineGenRedRope_C_InitialNumberOfSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SplineGenRedRope.SplineGenRedRope_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASplineGenRedRope_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SplineGenRedRope.SplineGenRedRope_C.UserConstructionScript");

	ASplineGenRedRope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SplineGenRedRope.SplineGenRedRope_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASplineGenRedRope_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SplineGenRedRope.SplineGenRedRope_C.ReceiveBeginPlay");

	ASplineGenRedRope_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SplineGenRedRope.SplineGenRedRope_C.ExecuteUbergraph_SplineGenRedRope
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplineGenRedRope_C::ExecuteUbergraph_SplineGenRedRope(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SplineGenRedRope.SplineGenRedRope_C.ExecuteUbergraph_SplineGenRedRope");

	ASplineGenRedRope_C_ExecuteUbergraph_SplineGenRedRope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
