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

// Function JaneDressSurvivor.JaneDressSurvivor_C.OnEnableAttackCollision
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AJaneDressSurvivor_C::OnEnableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JaneDressSurvivor.JaneDressSurvivor_C.OnEnableAttackCollision");

	AJaneDressSurvivor_C_OnEnableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JaneDressSurvivor.JaneDressSurvivor_C.OnDisableAttackCollision
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AJaneDressSurvivor_C::OnDisableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JaneDressSurvivor.JaneDressSurvivor_C.OnDisableAttackCollision");

	AJaneDressSurvivor_C_OnDisableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JaneDressSurvivor.JaneDressSurvivor_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AJaneDressSurvivor_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JaneDressSurvivor.JaneDressSurvivor_C.SendMeleeDistance");

	AJaneDressSurvivor_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JaneDressSurvivor.JaneDressSurvivor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AJaneDressSurvivor_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JaneDressSurvivor.JaneDressSurvivor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AJaneDressSurvivor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JaneDressSurvivor.JaneDressSurvivor_C.ExecuteUbergraph_JaneDressSurvivor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AJaneDressSurvivor_C::ExecuteUbergraph_JaneDressSurvivor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JaneDressSurvivor.JaneDressSurvivor_C.ExecuteUbergraph_JaneDressSurvivor");

	AJaneDressSurvivor_C_ExecuteUbergraph_JaneDressSurvivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JaneDressSurvivor.JaneDressSurvivor_C.Attacking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AJaneDressSurvivor_C::Attacking__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function JaneDressSurvivor.JaneDressSurvivor_C.Attacking__DelegateSignature");

	AJaneDressSurvivor_C_Attacking__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
