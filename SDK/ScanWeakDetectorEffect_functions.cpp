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

// Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AScanWeakDetectorEffect_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.Timeline_0__FinishedFunc");

	AScanWeakDetectorEffect_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AScanWeakDetectorEffect_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.Timeline_0__UpdateFunc");

	AScanWeakDetectorEffect_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScanWeakDetectorEffect_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.ReceiveActorBeginOverlap");

	AScanWeakDetectorEffect_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScanWeakDetectorEffect_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.ReceiveBeginPlay");

	AScanWeakDetectorEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.ExecuteUbergraph_ScanWeakDetectorEffect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScanWeakDetectorEffect_C::ExecuteUbergraph_ScanWeakDetectorEffect(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ScanWeakDetectorEffect.ScanWeakDetectorEffect_C.ExecuteUbergraph_ScanWeakDetectorEffect");

	AScanWeakDetectorEffect_C_ExecuteUbergraph_ScanWeakDetectorEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
