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

// Function BP_MainMenuPawn.BP_MainMenuPawn_C.OnResponse_E6B110DB4700C67DD9702A90885225E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MainMenuPawn_C::OnResponse_E6B110DB4700C67DD9702A90885225E8(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_MainMenuPawn.BP_MainMenuPawn_C.OnResponse_E6B110DB4700C67DD9702A90885225E8");

	ABP_MainMenuPawn_C_OnResponse_E6B110DB4700C67DD9702A90885225E8_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenuPawn.BP_MainMenuPawn_C.PressAnyKeys
// (BlueprintCallable, BlueprintEvent)
void ABP_MainMenuPawn_C::PressAnyKeys()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_MainMenuPawn.BP_MainMenuPawn_C.PressAnyKeys");

	ABP_MainMenuPawn_C_PressAnyKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenuPawn.BP_MainMenuPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MainMenuPawn_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_MainMenuPawn.BP_MainMenuPawn_C.ReceiveBeginPlay");

	ABP_MainMenuPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenuPawn.BP_MainMenuPawn_C.OnConfirmServerOffline
// (BlueprintCallable, BlueprintEvent)
void ABP_MainMenuPawn_C::OnConfirmServerOffline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_MainMenuPawn.BP_MainMenuPawn_C.OnConfirmServerOffline");

	ABP_MainMenuPawn_C_OnConfirmServerOffline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenuPawn.BP_MainMenuPawn_C.OnConfirmVersion
// (BlueprintCallable, BlueprintEvent)
void ABP_MainMenuPawn_C::OnConfirmVersion()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_MainMenuPawn.BP_MainMenuPawn_C.OnConfirmVersion");

	ABP_MainMenuPawn_C_OnConfirmVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenuPawn.BP_MainMenuPawn_C.TryAgainCheckVersionAgain
// (BlueprintCallable, BlueprintEvent)
void ABP_MainMenuPawn_C::TryAgainCheckVersionAgain()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_MainMenuPawn.BP_MainMenuPawn_C.TryAgainCheckVersionAgain");

	ABP_MainMenuPawn_C_TryAgainCheckVersionAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenuPawn.BP_MainMenuPawn_C.ExecuteUbergraph_BP_MainMenuPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MainMenuPawn_C::ExecuteUbergraph_BP_MainMenuPawn(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_MainMenuPawn.BP_MainMenuPawn_C.ExecuteUbergraph_BP_MainMenuPawn");

	ABP_MainMenuPawn_C_ExecuteUbergraph_BP_MainMenuPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
