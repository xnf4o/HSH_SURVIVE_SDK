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

// Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UHSURLobbyCameraManagerComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.ReceiveBeginPlay");

	UHSURLobbyCameraManagerComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.BlendCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOnCharacterSetting_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Role_E_Role>     Move_to_Camera_Role            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BlendExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bLockOutgoing                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHSURLobbyCameraManagerComponent_C::BlendCamera(bool IsOnCharacterSetting_, TEnumAsByte<E_Role_E_Role> Move_to_Camera_Role, float BlendTime, TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.BlendCamera");

	UHSURLobbyCameraManagerComponent_C_BlendCamera_Params params;
	params.IsOnCharacterSetting_ = IsOnCharacterSetting_;
	params.Move_to_Camera_Role = Move_to_Camera_Role;
	params.BlendTime = BlendTime;
	params.BlendFunc = BlendFunc;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.ExecuteUbergraph_HSURLobbyCameraManagerComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSURLobbyCameraManagerComponent_C::ExecuteUbergraph_HSURLobbyCameraManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.ExecuteUbergraph_HSURLobbyCameraManagerComponent");

	UHSURLobbyCameraManagerComponent_C_ExecuteUbergraph_HSURLobbyCameraManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
