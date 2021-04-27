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

// Function PingSurvivorComponent.PingSurvivorComponent_C.FindHunterNearActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunterBase_C*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::FindHunterNearActor(class AActor* OtherActor, class AHunterBase_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.FindHunterNearActor");

	UPingSurvivorComponent_C_FindHunterNearActor_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.TryGetOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::TryGetOwner(class AHSHCharacterBase** OutputPin)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.TryGetOwner");

	UPingSurvivorComponent_C_TryGetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.FillterArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_PingPair>     OutArray                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UPingSurvivorComponent_C::FillterArray(TArray<struct FS_PingPair>* Array, TArray<struct FS_PingPair>* OutArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.FillterArray");

	UPingSurvivorComponent_C_FillterArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (OutArray != nullptr)
		*OutArray = params.OutArray;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.SoundIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::SoundIcon(class AActor* HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.SoundIcon");

	UPingSurvivorComponent_C_SoundIcon_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.PingPotal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::PingPotal(class AActor* Portal, const struct FVector& Offset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.PingPotal");

	UPingSurvivorComponent_C_PingPotal_Params params;
	params.Portal = Portal;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.PingHunterSpecter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::PingHunterSpecter(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.PingHunterSpecter");

	UPingSurvivorComponent_C_PingHunterSpecter_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.PingHunter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::PingHunter(const struct FVector& Location, const struct FVector& Direction, float Distance)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.PingHunter");

	UPingSurvivorComponent_C_PingHunter_Params params;
	params.Location = Location;
	params.Direction = Direction;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.ExecuteUbergraph_PingSurvivorComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::ExecuteUbergraph_PingSurvivorComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.ExecuteUbergraph_PingSurvivorComponent");

	UPingSurvivorComponent_C_ExecuteUbergraph_PingSurvivorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingSurvivorComponent.PingSurvivorComponent_C.OnSoundIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingSurvivorComponent_C::OnSoundIcon__DelegateSignature(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingSurvivorComponent.PingSurvivorComponent_C.OnSoundIcon__DelegateSignature");

	UPingSurvivorComponent_C_OnSoundIcon__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
