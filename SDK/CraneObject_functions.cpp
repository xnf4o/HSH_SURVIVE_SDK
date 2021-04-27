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

// Function CraneObject.CraneObject_C.IsSurvivorBlocked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBlocked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACraneObject_C::IsSurvivorBlocked(bool* IsBlocked)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneObject.CraneObject_C.IsSurvivorBlocked");

	ACraneObject_C_IsSurvivorBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBlocked != nullptr)
		*IsBlocked = params.IsBlocked;

}


// Function CraneObject.CraneObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACraneObject_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneObject.CraneObject_C.ReceiveTick");

	ACraneObject_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneObject.CraneObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACraneObject_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneObject.CraneObject_C.ReceiveBeginPlay");

	ACraneObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneObject.CraneObject_C.ExecuteUbergraph_CraneObject
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACraneObject_C::ExecuteUbergraph_CraneObject(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneObject.CraneObject_C.ExecuteUbergraph_CraneObject");

	ACraneObject_C_ExecuteUbergraph_CraneObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
