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

// Function BP_GS_PlayerController.BP_GS_PlayerController_C.GetWidgetManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWidgetMainMenuManager_C* Array_Element                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GS_PlayerController_C::GetWidgetManager(class AWidgetMainMenuManager_C** Array_Element)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_GS_PlayerController.BP_GS_PlayerController_C.GetWidgetManager");

	ABP_GS_PlayerController_C_GetWidgetManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;

}


// Function BP_GS_PlayerController.BP_GS_PlayerController_C.ToggleGameplayInput
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GS_PlayerController_C::ToggleGameplayInput(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_GS_PlayerController.BP_GS_PlayerController_C.ToggleGameplayInput");

	ABP_GS_PlayerController_C_ToggleGameplayInput_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GS_PlayerController.BP_GS_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GS_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_GS_PlayerController.BP_GS_PlayerController_C.ReceiveBeginPlay");

	ABP_GS_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GS_PlayerController.BP_GS_PlayerController_C.OnGameSparksAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           available                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GS_PlayerController_C::OnGameSparksAvailable(bool available)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_GS_PlayerController.BP_GS_PlayerController_C.OnGameSparksAvailable");

	ABP_GS_PlayerController_C_OnGameSparksAvailable_Params params;
	params.available = available;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GS_PlayerController.BP_GS_PlayerController_C.ToggleGamePlayInputEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GS_PlayerController_C::ToggleGamePlayInputEvent(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_GS_PlayerController.BP_GS_PlayerController_C.ToggleGamePlayInputEvent");

	ABP_GS_PlayerController_C_ToggleGamePlayInputEvent_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GS_PlayerController.BP_GS_PlayerController_C.ExecuteUbergraph_BP_GS_PlayerController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GS_PlayerController_C::ExecuteUbergraph_BP_GS_PlayerController(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_GS_PlayerController.BP_GS_PlayerController_C.ExecuteUbergraph_BP_GS_PlayerController");

	ABP_GS_PlayerController_C_ExecuteUbergraph_BP_GS_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
