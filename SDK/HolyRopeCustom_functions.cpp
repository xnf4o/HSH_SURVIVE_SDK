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

// Function HolyRopeCustom.HolyRopeCustom_C.SetMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHolyRopeCustom_C::SetMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.SetMesh");

	AHolyRopeCustom_C_SetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.SetZeroTargentWithRootLine
// (Public, BlueprintCallable, BlueprintEvent)
void AHolyRopeCustom_C::SetZeroTargentWithRootLine()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.SetZeroTargentWithRootLine");

	AHolyRopeCustom_C_SetZeroTargentWithRootLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.GetEndPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DebugPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyRopeCustom_C::GetEndPosition(int LineIndex, struct FVector* EndPosition, int* DebugPosition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.GetEndPosition");

	AHolyRopeCustom_C_GetEndPosition_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndPosition != nullptr)
		*EndPosition = params.EndPosition;
	if (DebugPosition != nullptr)
		*DebugPosition = params.DebugPosition;

}


// Function HolyRopeCustom.HolyRopeCustom_C.GetStartPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 StartPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DebugPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyRopeCustom_C::GetStartPosition(int LineIndex, struct FVector* StartPosition, int* DebugPosition)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.GetStartPosition");

	AHolyRopeCustom_C_GetStartPosition_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartPosition != nullptr)
		*StartPosition = params.StartPosition;
	if (DebugPosition != nullptr)
		*DebugPosition = params.DebugPosition;

}


// Function HolyRopeCustom.HolyRopeCustom_C.InitialCuve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRandom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHolyRopeCustom_C::InitialCuve(bool IsRandom)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.InitialCuve");

	AHolyRopeCustom_C_InitialCuve_Params params;
	params.IsRandom = IsRandom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.CreateCuve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LineIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyRopeCustom_C::CreateCuve(int LineIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.CreateCuve");

	AHolyRopeCustom_C_CreateCuve_Params params;
	params.LineIndex = LineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHolyRopeCustom_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.UserConstructionScript");

	AHolyRopeCustom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.Timeline_Fade__FinishedFunc
// (BlueprintEvent)
void AHolyRopeCustom_C::Timeline_Fade__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.Timeline_Fade__FinishedFunc");

	AHolyRopeCustom_C_Timeline_Fade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.Timeline_Fade__UpdateFunc
// (BlueprintEvent)
void AHolyRopeCustom_C::Timeline_Fade__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.Timeline_Fade__UpdateFunc");

	AHolyRopeCustom_C_Timeline_Fade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
void AHolyRopeCustom_C::FadeIn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.FadeIn");

	AHolyRopeCustom_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
void AHolyRopeCustom_C::FadeOut()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.FadeOut");

	AHolyRopeCustom_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyRopeCustom.HolyRopeCustom_C.ExecuteUbergraph_HolyRopeCustom
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyRopeCustom_C::ExecuteUbergraph_HolyRopeCustom(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyRopeCustom.HolyRopeCustom_C.ExecuteUbergraph_HolyRopeCustom");

	AHolyRopeCustom_C_ExecuteUbergraph_HolyRopeCustom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
