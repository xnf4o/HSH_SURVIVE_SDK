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

// Function RecordsCanvas.RecordsCanvas_C.GetSurvivorEliminatePercentage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Performance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URecordsCanvas_C::GetSurvivorEliminatePercentage(float* Performance)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RecordsCanvas.RecordsCanvas_C.GetSurvivorEliminatePercentage");

	URecordsCanvas_C_GetSurvivorEliminatePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Performance != nullptr)
		*Performance = params.Performance;

}


// Function RecordsCanvas.RecordsCanvas_C.GetSurvivorEscapePercentage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Escape                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URecordsCanvas_C::GetSurvivorEscapePercentage(float* Escape)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RecordsCanvas.RecordsCanvas_C.GetSurvivorEscapePercentage");

	URecordsCanvas_C_GetSurvivorEscapePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Escape != nullptr)
		*Escape = params.Escape;

}


// Function RecordsCanvas.RecordsCanvas_C.GetHunterPerformance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Performance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URecordsCanvas_C::GetHunterPerformance(float* Performance)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RecordsCanvas.RecordsCanvas_C.GetHunterPerformance");

	URecordsCanvas_C_GetHunterPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Performance != nullptr)
		*Performance = params.Performance;

}


// Function RecordsCanvas.RecordsCanvas_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void URecordsCanvas_C::UpdateValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RecordsCanvas.RecordsCanvas_C.UpdateValue");

	URecordsCanvas_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RecordsCanvas.RecordsCanvas_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URecordsCanvas_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RecordsCanvas.RecordsCanvas_C.AssignWidgetManager");

	URecordsCanvas_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
