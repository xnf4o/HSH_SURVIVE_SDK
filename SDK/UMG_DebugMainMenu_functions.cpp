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

// Function UMG_DebugMainMenu.UMG_DebugMainMenu_C.OnResponse_FCD17CC84EFF7F06FBD2D58ADA2302D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_DebugMainMenu_C::OnResponse_FCD17CC84EFF7F06FBD2D58ADA2302D3(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_DebugMainMenu.UMG_DebugMainMenu_C.OnResponse_FCD17CC84EFF7F06FBD2D58ADA2302D3");

	UUMG_DebugMainMenu_C_OnResponse_FCD17CC84EFF7F06FBD2D58ADA2302D3_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_DebugMainMenu.UMG_DebugMainMenu_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UUMG_DebugMainMenu_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_DebugMainMenu.UMG_DebugMainMenu_C.Initialize");

	UUMG_DebugMainMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_DebugMainMenu.UMG_DebugMainMenu_C.ExecuteUbergraph_UMG_DebugMainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_DebugMainMenu_C::ExecuteUbergraph_UMG_DebugMainMenu(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_DebugMainMenu.UMG_DebugMainMenu_C.ExecuteUbergraph_UMG_DebugMainMenu");

	UUMG_DebugMainMenu_C_ExecuteUbergraph_UMG_DebugMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
