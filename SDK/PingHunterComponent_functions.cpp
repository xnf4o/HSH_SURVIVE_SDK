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

// Function PingHunterComponent.PingHunterComponent_C.TryGetOwner
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       AsHSHCharacter_Base            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingHunterComponent_C::TryGetOwner(class AHSHCharacterBase** AsHSHCharacter_Base)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingHunterComponent.PingHunterComponent_C.TryGetOwner");

	UPingHunterComponent_C_TryGetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsHSHCharacter_Base != nullptr)
		*AsHSHCharacter_Base = params.AsHSHCharacter_Base;

}


// Function PingHunterComponent.PingHunterComponent_C.FillterArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_PingPair>     OutArray                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UPingHunterComponent_C::FillterArray(TArray<struct FS_PingPair>* Array, TArray<struct FS_PingPair>* OutArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingHunterComponent.PingHunterComponent_C.FillterArray");

	UPingHunterComponent_C_FillterArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (OutArray != nullptr)
		*OutArray = params.OutArray;

}


// Function PingHunterComponent.PingHunterComponent_C.SoundIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingHunterComponent_C::SoundIcon(class AActor* HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingHunterComponent.PingHunterComponent_C.SoundIcon");

	UPingHunterComponent_C_SoundIcon_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingHunterComponent.PingHunterComponent_C.ExecuteUbergraph_PingHunterComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingHunterComponent_C::ExecuteUbergraph_PingHunterComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingHunterComponent.PingHunterComponent_C.ExecuteUbergraph_PingHunterComponent");

	UPingHunterComponent_C_ExecuteUbergraph_PingHunterComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingHunterComponent.PingHunterComponent_C.OnSoundIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingHunterComponent_C::OnSoundIcon__DelegateSignature(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingHunterComponent.PingHunterComponent_C.OnSoundIcon__DelegateSignature");

	UPingHunterComponent_C_OnSoundIcon__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
