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

// Function RitualEffectBase.RitualEffectBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualEffectBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualEffectBase.RitualEffectBase_C.ReceiveActorBeginOverlap");

	ARitualEffectBase_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualEffectBase.RitualEffectBase_C.ExecuteUbergraph_RitualEffectBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualEffectBase_C::ExecuteUbergraph_RitualEffectBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualEffectBase.RitualEffectBase_C.ExecuteUbergraph_RitualEffectBase");

	ARitualEffectBase_C_ExecuteUbergraph_RitualEffectBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RitualEffectBase.RitualEffectBase_C.OnBeginOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlapActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitualEffectBase_C::OnBeginOverlap__DelegateSignature(class AActor* OverlapActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RitualEffectBase.RitualEffectBase_C.OnBeginOverlap__DelegateSignature");

	ARitualEffectBase_C_OnBeginOverlap__DelegateSignature_Params params;
	params.OverlapActor = OverlapActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
