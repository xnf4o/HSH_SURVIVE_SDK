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

// Function SpawnItemActor.SpawnItemActor_C.DestroySelf
// (Public, BlueprintCallable, BlueprintEvent)
void ASpawnItemActor_C::DestroySelf()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.DestroySelf");

	ASpawnItemActor_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.OnRep_bIsDone
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void ASpawnItemActor_C::OnRep_bIsDone()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.OnRep_bIsDone");

	ASpawnItemActor_C_OnRep_bIsDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.OnRep_Text
// (BlueprintCallable, BlueprintEvent)
void ASpawnItemActor_C::OnRep_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.OnRep_Text");

	ASpawnItemActor_C_OnRep_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.OnRep_SpawnClass
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void ASpawnItemActor_C::OnRep_SpawnClass()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.OnRep_SpawnClass");

	ASpawnItemActor_C_OnRep_SpawnClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASpawnItemActor_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.UserConstructionScript");

	ASpawnItemActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.NoneItem
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASpawnItemActor_C::NoneItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.NoneItem");

	ASpawnItemActor_C_NoneItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.SpawnItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnItemActor_C::SpawnItem(class UClass* Class)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.SpawnItem");

	ASpawnItemActor_C_SpawnItem_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpawnItemActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.ReceiveBeginPlay");

	ASpawnItemActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnItemActor.SpawnItemActor_C.ExecuteUbergraph_SpawnItemActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnItemActor_C::ExecuteUbergraph_SpawnItemActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnItemActor.SpawnItemActor_C.ExecuteUbergraph_SpawnItemActor");

	ASpawnItemActor_C_ExecuteUbergraph_SpawnItemActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
