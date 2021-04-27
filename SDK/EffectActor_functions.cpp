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

// Function EffectActor.EffectActor_C.RefreshEffect
// (Public, BlueprintCallable, BlueprintEvent)
void AEffectActor_C::RefreshEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EffectActor.EffectActor_C.RefreshEffect");

	AEffectActor_C_RefreshEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EffectActor.EffectActor_C.DeactiveEffect
// (Public, BlueprintCallable, BlueprintEvent)
void AEffectActor_C::DeactiveEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EffectActor.EffectActor_C.DeactiveEffect");

	AEffectActor_C_DeactiveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EffectActor.EffectActor_C.ActiveEffect
// (Public, BlueprintCallable, BlueprintEvent)
void AEffectActor_C::ActiveEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EffectActor.EffectActor_C.ActiveEffect");

	AEffectActor_C_ActiveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EffectActor.EffectActor_C.OnRep_bIsActive
// (BlueprintCallable, BlueprintEvent)
void AEffectActor_C::OnRep_bIsActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EffectActor.EffectActor_C.OnRep_bIsActive");

	AEffectActor_C_OnRep_bIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EffectActor.EffectActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AEffectActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EffectActor.EffectActor_C.ReceiveBeginPlay");

	AEffectActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EffectActor.EffectActor_C.ExecuteUbergraph_EffectActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEffectActor_C::ExecuteUbergraph_EffectActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EffectActor.EffectActor_C.ExecuteUbergraph_EffectActor");

	AEffectActor_C_ExecuteUbergraph_EffectActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
