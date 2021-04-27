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

// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.RefreshProgress
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_ProgressComponent_C::RefreshProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.RefreshProgress");

	UIngame_ProgressComponent_C_RefreshProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ProgressComponent_C::GetPercent(float* Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.GetPercent");

	UIngame_ProgressComponent_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;

}


// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ProgressComponent_C::SetPercent(float Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.SetPercent");

	UIngame_ProgressComponent_C_SetPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.DestroyThis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsFinish                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ProgressComponent_C::DestroyThis(bool bIsFinish, float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.DestroyThis");

	UIngame_ProgressComponent_C_DestroyThis_Params params;
	params.bIsFinish = bIsFinish;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_ProgressComponent_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.Construct");

	UIngame_ProgressComponent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.DestroyThisSkipAnim
// (BlueprintCallable, BlueprintEvent)
void UIngame_ProgressComponent_C::DestroyThisSkipAnim()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.DestroyThisSkipAnim");

	UIngame_ProgressComponent_C_DestroyThisSkipAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.ExecuteUbergraph_Ingame_ProgressComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ProgressComponent_C::ExecuteUbergraph_Ingame_ProgressComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ProgressComponent.Ingame_ProgressComponent_C.ExecuteUbergraph_Ingame_ProgressComponent");

	UIngame_ProgressComponent_C_ExecuteUbergraph_Ingame_ProgressComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
