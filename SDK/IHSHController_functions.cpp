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

// Function IHSHController.IHSHController_C.DisableBlockInputKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKey>            Keys                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIHSHController_C::DisableBlockInputKeys(TArray<struct FKey> Keys)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.DisableBlockInputKeys");

	UIHSHController_C_DisableBlockInputKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.EnableBlockInputKeys
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::EnableBlockInputKeys()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.EnableBlockInputKeys");

	UIHSHController_C_EnableBlockInputKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.GetIsEnableBlockCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIHSHController_C::GetIsEnableBlockCamera(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.GetIsEnableBlockCamera");

	UIHSHController_C_GetIsEnableBlockCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function IHSHController.IHSHController_C.GetIsEnableBlockAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIHSHController_C::GetIsEnableBlockAction(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.GetIsEnableBlockAction");

	UIHSHController_C_GetIsEnableBlockAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function IHSHController.IHSHController_C.DisableMouseCameraClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::DisableMouseCameraClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.DisableMouseCameraClient");

	UIHSHController_C_DisableMouseCameraClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.EnableMouseCameraClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::EnableMouseCameraClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.EnableMouseCameraClient");

	UIHSHController_C_EnableMouseCameraClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.DisableActionClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::DisableActionClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.DisableActionClient");

	UIHSHController_C_DisableActionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.EnableActionClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::EnableActionClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.EnableActionClient");

	UIHSHController_C_EnableActionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.DisableMovementClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::DisableMovementClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.DisableMovementClient");

	UIHSHController_C_DisableMovementClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.EnableMovementClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::EnableMovementClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.EnableMovementClient");

	UIHSHController_C_EnableMovementClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.DisableInputClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::DisableInputClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.DisableInputClient");

	UIHSHController_C_DisableInputClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IHSHController.IHSHController_C.EnableInputClient
// (Public, BlueprintCallable, BlueprintEvent)
void UIHSHController_C::EnableInputClient()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IHSHController.IHSHController_C.EnableInputClient");

	UIHSHController_C_EnableInputClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
