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

// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.NewTryGetLootDropTarget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALootDropTarget_C*       Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxPreviewManagerComponent_C::NewTryGetLootDropTarget(int Amount, int Index, class ALootDropTarget_C** Output_Get)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.NewTryGetLootDropTarget");

	ULootBoxPreviewManagerComponent_C_NewTryGetLootDropTarget_Params params;
	params.Amount = Amount;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.TryGetLootDropTarget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ALootDropTarget_C*> Output_Get                     (Parm, OutParm, ZeroConstructor)
void ULootBoxPreviewManagerComponent_C::TryGetLootDropTarget(int Amount, TArray<class ALootDropTarget_C*>* Output_Get)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.TryGetLootDropTarget");

	ULootBoxPreviewManagerComponent_C_TryGetLootDropTarget_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.DestroyLootDropActor
// (BlueprintCallable, BlueprintEvent)
void ULootBoxPreviewManagerComponent_C::DestroyLootDropActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.DestroyLootDropActor");

	ULootBoxPreviewManagerComponent_C_DestroyLootDropActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.SpawnLootDrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxPreviewManagerComponent_C::SpawnLootDrop(const struct FString& Type, class UObject* Object, int Index, const struct FString& Name, int Amount, int Currency, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.SpawnLootDrop");

	ULootBoxPreviewManagerComponent_C_SpawnLootDrop_Params params;
	params.Type = Type;
	params.Object = Object;
	params.Index = Index;
	params.Name = Name;
	params.Amount = Amount;
	params.Currency = Currency;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.SpawnLootDropNew
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LootDrop             LootDropData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxPreviewManagerComponent_C::SpawnLootDropNew(const struct FS_LootDrop& LootDropData, int Amount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.SpawnLootDropNew");

	ULootBoxPreviewManagerComponent_C_SpawnLootDropNew_Params params;
	params.LootDropData = LootDropData;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.ExecuteUbergraph_LootBoxPreviewManagerComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxPreviewManagerComponent_C::ExecuteUbergraph_LootBoxPreviewManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.ExecuteUbergraph_LootBoxPreviewManagerComponent");

	ULootBoxPreviewManagerComponent_C_ExecuteUbergraph_LootBoxPreviewManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
