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

// Function RitualRope.RitualRope_C.IncreaseCurve
// (Public, BlueprintCallable, BlueprintEvent)
void ARitualRope_C::IncreaseCurve()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.IncreaseCurve");

	ARitualRope_C_IncreaseCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.DisableTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARitualRope_C::DisableTick(bool bEnabled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.DisableTick");

	ARitualRope_C_DisableTick_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.RefreshInit
// (Public, BlueprintCallable, BlueprintEvent)
void ARitualRope_C::RefreshInit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.RefreshInit");

	ARitualRope_C_RefreshInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.InitSocketLocation
// (Public, BlueprintCallable, BlueprintEvent)
void ARitualRope_C::InitSocketLocation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.InitSocketLocation");

	ARitualRope_C_InitSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.SetMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ARitualRope_C::SetMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.SetMesh");

	ARitualRope_C_SetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.SetZeroTargentWithRootLine
// (Public, BlueprintCallable, BlueprintEvent)
void ARitualRope_C::SetZeroTargentWithRootLine()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.SetZeroTargentWithRootLine");

	ARitualRope_C_SetZeroTargentWithRootLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.GetEndPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DebugPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualRope_C::GetEndPosition(int LineIndex, struct FVector* EndPosition, int* DebugPosition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.GetEndPosition");

	ARitualRope_C_GetEndPosition_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndPosition != nullptr)
		*EndPosition = params.EndPosition;
	if (DebugPosition != nullptr)
		*DebugPosition = params.DebugPosition;

}


// Function RitualRope.RitualRope_C.GetStartPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 StartPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DebugPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualRope_C::GetStartPosition(int LineIndex, struct FVector* StartPosition, int* DebugPosition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.GetStartPosition");

	ARitualRope_C_GetStartPosition_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartPosition != nullptr)
		*StartPosition = params.StartPosition;
	if (DebugPosition != nullptr)
		*DebugPosition = params.DebugPosition;

}


// Function RitualRope.RitualRope_C.InitialCuve
// (Public, BlueprintCallable, BlueprintEvent)
void ARitualRope_C::InitialCuve()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.InitialCuve");

	ARitualRope_C_InitialCuve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.CreateCuve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualRope_C::CreateCuve(int LineIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.CreateCuve");

	ARitualRope_C_CreateCuve_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ARitualRope_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.UserConstructionScript");

	ARitualRope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualRope_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.ReceiveTick");

	ARitualRope_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualRope.RitualRope_C.ExecuteUbergraph_RitualRope
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualRope_C::ExecuteUbergraph_RitualRope(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualRope.RitualRope_C.ExecuteUbergraph_RitualRope");

	ARitualRope_C_ExecuteUbergraph_RitualRope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
