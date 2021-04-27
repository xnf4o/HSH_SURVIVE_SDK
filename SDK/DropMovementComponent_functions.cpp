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

// Function DropMovementComponent.DropMovementComponent_C.ActorFloatingLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ZValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*         WaterComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropMovementComponent_C::ActorFloatingLoop(float Alpha, float ZValue, class UActorComponent* WaterComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DropMovementComponent.DropMovementComponent_C.ActorFloatingLoop");

	UDropMovementComponent_C_ActorFloatingLoop_Params params;
	params.Alpha = Alpha;
	params.ZValue = ZValue;
	params.WaterComponent = WaterComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DropMovementComponent.DropMovementComponent_C.SetActorMovementActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropMovementComponent_C::SetActorMovementActive(bool Active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DropMovementComponent.DropMovementComponent_C.SetActorMovementActive");

	UDropMovementComponent_C_SetActorMovementActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DropMovementComponent.DropMovementComponent_C.OnRep_ParentActor
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void UDropMovementComponent_C::OnRep_ParentActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DropMovementComponent.DropMovementComponent_C.OnRep_ParentActor");

	UDropMovementComponent_C_OnRep_ParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DropMovementComponent.DropMovementComponent_C.Initialize
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShouldNotMove               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropMovementComponent_C::Initialize(bool bIsShouldNotMove)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DropMovementComponent.DropMovementComponent_C.Initialize");

	UDropMovementComponent_C_Initialize_Params params;
	params.bIsShouldNotMove = bIsShouldNotMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DropMovementComponent.DropMovementComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropMovementComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DropMovementComponent.DropMovementComponent_C.ReceiveEndPlay");

	UDropMovementComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DropMovementComponent.DropMovementComponent_C.Init
// (Event, Public, BlueprintEvent)
void UDropMovementComponent_C::Init()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DropMovementComponent.DropMovementComponent_C.Init");

	UDropMovementComponent_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DropMovementComponent.DropMovementComponent_C.ExecuteUbergraph_DropMovementComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropMovementComponent_C::ExecuteUbergraph_DropMovementComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DropMovementComponent.DropMovementComponent_C.ExecuteUbergraph_DropMovementComponent");

	UDropMovementComponent_C_ExecuteUbergraph_DropMovementComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
