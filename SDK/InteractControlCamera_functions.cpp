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

// Function InteractControlCamera.InteractControlCamera_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInteractControlCamera_C::UpdateCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractControlCamera.InteractControlCamera_C.UpdateCamera");

	AInteractControlCamera_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractControlCamera.InteractControlCamera_C.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractControlCamera_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractControlCamera.InteractControlCamera_C.K2_OnEndViewTarget");

	AInteractControlCamera_C_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractControlCamera.InteractControlCamera_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractControlCamera_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractControlCamera.InteractControlCamera_C.K2_OnBecomeViewTarget");

	AInteractControlCamera_C_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractControlCamera.InteractControlCamera_C.RotateYaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractControlCamera_C::RotateYaw(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractControlCamera.InteractControlCamera_C.RotateYaw");

	AInteractControlCamera_C_RotateYaw_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractControlCamera.InteractControlCamera_C.RotatePitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractControlCamera_C::RotatePitch(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractControlCamera.InteractControlCamera_C.RotatePitch");

	AInteractControlCamera_C_RotatePitch_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractControlCamera.InteractControlCamera_C.ExecuteUbergraph_InteractControlCamera
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractControlCamera_C::ExecuteUbergraph_InteractControlCamera(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractControlCamera.InteractControlCamera_C.ExecuteUbergraph_InteractControlCamera");

	AInteractControlCamera_C_ExecuteUbergraph_InteractControlCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
