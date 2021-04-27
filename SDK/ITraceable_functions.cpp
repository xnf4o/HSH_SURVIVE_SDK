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

// Function ITraceable.ITraceable_C.OnTracerChangeHitComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     PreviousComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     CurrentComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UITraceable_C::OnTracerChangeHitComponent(class APawn* Pawn, class UPrimitiveComponent* PreviousComponent, class UPrimitiveComponent* CurrentComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ITraceable.ITraceable_C.OnTracerChangeHitComponent");

	UITraceable_C_OnTracerChangeHitComponent_Params params;
	params.Pawn = Pawn;
	params.PreviousComponent = PreviousComponent;
	params.CurrentComponent = CurrentComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ITraceable.ITraceable_C.OnTracerLeave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UITraceable_C::OnTracerLeave(class APawn* Pawn, class UPrimitiveComponent* HitComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ITraceable.ITraceable_C.OnTracerLeave");

	UITraceable_C_OnTracerLeave_Params params;
	params.Pawn = Pawn;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ITraceable.ITraceable_C.OnTracerEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UITraceable_C::OnTracerEnter(class APawn* Pawn, class UPrimitiveComponent* HitComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ITraceable.ITraceable_C.OnTracerEnter");

	UITraceable_C_OnTracerEnter_Params params;
	params.Pawn = Pawn;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ITraceable.ITraceable_C.OnTracerInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UITraceable_C::OnTracerInteract(class APawn* Pawn, class UPrimitiveComponent* HitComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ITraceable.ITraceable_C.OnTracerInteract");

	UITraceable_C_OnTracerInteract_Params params;
	params.Pawn = Pawn;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
