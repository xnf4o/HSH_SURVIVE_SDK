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

// Function SuddenDeathEffect.SuddenDeathEffect_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ASuddenDeathEffect_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SuddenDeathEffect.SuddenDeathEffect_C.Timeline_0__FinishedFunc");

	ASuddenDeathEffect_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SuddenDeathEffect.SuddenDeathEffect_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ASuddenDeathEffect_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SuddenDeathEffect.SuddenDeathEffect_C.Timeline_0__UpdateFunc");

	ASuddenDeathEffect_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SuddenDeathEffect.SuddenDeathEffect_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASuddenDeathEffect_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SuddenDeathEffect.SuddenDeathEffect_C.ReceiveActorBeginOverlap");

	ASuddenDeathEffect_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SuddenDeathEffect.SuddenDeathEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASuddenDeathEffect_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SuddenDeathEffect.SuddenDeathEffect_C.ReceiveBeginPlay");

	ASuddenDeathEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SuddenDeathEffect.SuddenDeathEffect_C.ExecuteUbergraph_SuddenDeathEffect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASuddenDeathEffect_C::ExecuteUbergraph_SuddenDeathEffect(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SuddenDeathEffect.SuddenDeathEffect_C.ExecuteUbergraph_SuddenDeathEffect");

	ASuddenDeathEffect_C_ExecuteUbergraph_SuddenDeathEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
