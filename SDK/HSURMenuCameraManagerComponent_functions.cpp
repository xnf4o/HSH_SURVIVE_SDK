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

// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.AssignLootDropCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MenuState_E_MenuState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURMenuCameraManagerComponent_C::AssignLootDropCamera(TEnumAsByte<E_MenuState_E_MenuState> State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.AssignLootDropCamera");

	UHSURMenuCameraManagerComponent_C_AssignLootDropCamera_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.FindCameraState
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSMenuCameraState> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<E_MenuState_E_MenuState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFindSuccess                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURMenuCameraManagerComponent_C::FindCameraState(TArray<struct FSMenuCameraState>* Array, TEnumAsByte<E_MenuState_E_MenuState> State, bool* bFindSuccess, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.FindCameraState");

	UHSURMenuCameraManagerComponent_C_FindCameraState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (bFindSuccess != nullptr)
		*bFindSuccess = params.bFindSuccess;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.OnLoaded_0E2CC129418781613D53ADA3F4D9C9F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURMenuCameraManagerComponent_C::OnLoaded_0E2CC129418781613D53ADA3F4D9C9F5(class UObject* Loaded)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.OnLoaded_0E2CC129418781613D53ADA3F4D9C9F5");

	UHSURMenuCameraManagerComponent_C_OnLoaded_0E2CC129418781613D53ADA3F4D9C9F5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UHSURMenuCameraManagerComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.ReceiveBeginPlay");

	UHSURMenuCameraManagerComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.BlendCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MenuState_E_MenuState> Move_to_Camera                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bLockOutgoing                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURMenuCameraManagerComponent_C::BlendCamera(TEnumAsByte<E_MenuState_E_MenuState> Move_to_Camera, float BlendTime, TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.BlendCamera");

	UHSURMenuCameraManagerComponent_C_BlendCamera_Params params;
	params.Move_to_Camera = Move_to_Camera;
	params.BlendTime = BlendTime;
	params.BlendFunc = BlendFunc;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.ExecuteUbergraph_HSURMenuCameraManagerComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURMenuCameraManagerComponent_C::ExecuteUbergraph_HSURMenuCameraManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.ExecuteUbergraph_HSURMenuCameraManagerComponent");

	UHSURMenuCameraManagerComponent_C_ExecuteUbergraph_HSURMenuCameraManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
