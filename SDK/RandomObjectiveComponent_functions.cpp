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

// Function RandomObjectiveComponent.RandomObjectiveComponent_C.StartRandomPattern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<int> URandomObjectiveComponent_C::StartRandomPattern()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.StartRandomPattern");

	URandomObjectiveComponent_C_StartRandomPattern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.OnRep_RandomPattern
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void URandomObjectiveComponent_C::OnRep_RandomPattern()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.OnRep_RandomPattern");

	URandomObjectiveComponent_C_OnRep_RandomPattern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.SameClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          ListA                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_RandomObject> randomObjectList               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URandomObjectiveComponent_C::SameClass(TArray<class AActor*>* ListA, TArray<struct FS_RandomObject>* randomObjectList, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.SameClass");

	URandomObjectiveComponent_C_SameClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ListA != nullptr)
		*ListA = params.ListA;
	if (randomObjectList != nullptr)
		*randomObjectList = params.randomObjectList;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.ActiveRandomPattern
// (Public, BlueprintCallable, BlueprintEvent)
void URandomObjectiveComponent_C::ActiveRandomPattern()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.ActiveRandomPattern");

	URandomObjectiveComponent_C_ActiveRandomPattern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.TryGetRandomObjectiveActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARandomObjectiveActor_C* Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomObjectiveComponent_C::TryGetRandomObjectiveActor(class ARandomObjectiveActor_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.TryGetRandomObjectiveActor");

	URandomObjectiveComponent_C_TryGetRandomObjectiveActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.ActiveRandomList
// (Public, BlueprintCallable, BlueprintEvent)
void URandomObjectiveComponent_C::ActiveRandomList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.ActiveRandomList");

	URandomObjectiveComponent_C_ActiveRandomList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.OnRep_RandomList
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void URandomObjectiveComponent_C::OnRep_RandomList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.OnRep_RandomList");

	URandomObjectiveComponent_C_OnRep_RandomList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.SetupList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_RandomObject> randomObjectList               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_RandomList>   Return                         (Parm, OutParm, ZeroConstructor)
void URandomObjectiveComponent_C::SetupList(TArray<struct FS_RandomObject>* randomObjectList, TArray<struct FS_RandomList>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.SetupList");

	URandomObjectiveComponent_C_SetupList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (randomObjectList != nullptr)
		*randomObjectList = params.randomObjectList;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void URandomObjectiveComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.Initialize");

	URandomObjectiveComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomObjectiveComponent.RandomObjectiveComponent_C.ExecuteUbergraph_RandomObjectiveComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomObjectiveComponent_C::ExecuteUbergraph_RandomObjectiveComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomObjectiveComponent.RandomObjectiveComponent_C.ExecuteUbergraph_RandomObjectiveComponent");

	URandomObjectiveComponent_C_ExecuteUbergraph_RandomObjectiveComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
