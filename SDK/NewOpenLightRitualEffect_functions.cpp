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

// Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ANewOpenLightRitualEffect_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.Timeline_0__FinishedFunc");

	ANewOpenLightRitualEffect_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ANewOpenLightRitualEffect_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.Timeline_0__UpdateFunc");

	ANewOpenLightRitualEffect_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.SpawnEffect
// (BlueprintCallable, BlueprintEvent)
void ANewOpenLightRitualEffect_C::SpawnEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.SpawnEffect");

	ANewOpenLightRitualEffect_C_SpawnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ANewOpenLightRitualEffect_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.ReceiveBeginPlay");

	ANewOpenLightRitualEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.ExecuteUbergraph_NewOpenLightRitualEffect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewOpenLightRitualEffect_C::ExecuteUbergraph_NewOpenLightRitualEffect(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NewOpenLightRitualEffect.NewOpenLightRitualEffect_C.ExecuteUbergraph_NewOpenLightRitualEffect");

	ANewOpenLightRitualEffect_C_ExecuteUbergraph_NewOpenLightRitualEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
