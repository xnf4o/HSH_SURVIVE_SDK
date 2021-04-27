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

// Function LD_Back_Base.LD_Back_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALD_Back_Base_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.UserConstructionScript");

	ALD_Back_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Back_Base.LD_Back_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALD_Back_Base_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.ReceiveBeginPlay");

	ALD_Back_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Back_Base.LD_Back_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_Back_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.ReceiveTick");

	ALD_Back_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Back_Base.LD_Back_Base_C.UpdateMeshRotate
// (BlueprintCallable, BlueprintEvent)
void ALD_Back_Base_C::UpdateMeshRotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.UpdateMeshRotate");

	ALD_Back_Base_C_UpdateMeshRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Back_Base.LD_Back_Base_C.ResetRotation
// (BlueprintCallable, BlueprintEvent)
void ALD_Back_Base_C::ResetRotation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.ResetRotation");

	ALD_Back_Base_C_ResetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Back_Base.LD_Back_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALD_Back_Base_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ALD_Back_Base_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Back_Base.LD_Back_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnReleasedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    ButtonReleased                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALD_Back_Base_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnReleasedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonReleased)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnReleasedSignature__DelegateSignature");

	ALD_Back_Base_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnReleasedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Back_Base.LD_Back_Base_C.ExecuteUbergraph_LD_Back_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_Back_Base_C::ExecuteUbergraph_LD_Back_Base(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Back_Base.LD_Back_Base_C.ExecuteUbergraph_LD_Back_Base");

	ALD_Back_Base_C_ExecuteUbergraph_LD_Back_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
