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

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.SpawnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpawnItemActor_C*       SpawnActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomSpawnItemsComponent_C::SpawnItem(class UClass* Class, class ASpawnItemActor_C* SpawnActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.SpawnItem");

	URandomSpawnItemsComponent_C_SpawnItem_Params params;
	params.Class = Class;
	params.SpawnActor = SpawnActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.FilterType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASpawnItemActor_C*> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class ASpawnItemActor_C*> ReturnDefualt                  (Parm, OutParm, ZeroConstructor)
// TArray<class ASpawnItemActor_C*> ReturnFixed                    (Parm, OutParm, ZeroConstructor)
void URandomSpawnItemsComponent_C::FilterType(TArray<class ASpawnItemActor_C*>* Items, TArray<class ASpawnItemActor_C*>* ReturnDefualt, TArray<class ASpawnItemActor_C*>* ReturnFixed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.FilterType");

	URandomSpawnItemsComponent_C_FilterType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (ReturnDefualt != nullptr)
		*ReturnDefualt = params.ReturnDefualt;
	if (ReturnFixed != nullptr)
		*ReturnFixed = params.ReturnFixed;

}


// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.InitializeSpawnItemsNew
// (Public, BlueprintCallable, BlueprintEvent)
void URandomSpawnItemsComponent_C::InitializeSpawnItemsNew()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.InitializeSpawnItemsNew");

	URandomSpawnItemsComponent_C_InitializeSpawnItemsNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.RandomSpawnItems
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ASpawnItemActor_C*> spawnitems                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class ASpawnItemActor_C*> ReturnItems                    (Parm, OutParm, ZeroConstructor)
void URandomSpawnItemsComponent_C::RandomSpawnItems(TArray<class ASpawnItemActor_C*>* spawnitems, TArray<class ASpawnItemActor_C*>* ReturnItems)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.RandomSpawnItems");

	URandomSpawnItemsComponent_C_RandomSpawnItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (spawnitems != nullptr)
		*spawnitems = params.spawnitems;
	if (ReturnItems != nullptr)
		*ReturnItems = params.ReturnItems;

}


// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULimitItemsBaseComponent_C* LimitItemBase                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomSpawnItemsComponent_C::Initialize(class ULimitItemsBaseComponent_C* LimitItemBase)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.Initialize");

	URandomSpawnItemsComponent_C_Initialize_Params params;
	params.LimitItemBase = LimitItemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.InitializeSpawnItemsLatent
// (BlueprintCallable, BlueprintEvent)
void URandomSpawnItemsComponent_C::InitializeSpawnItemsLatent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.InitializeSpawnItemsLatent");

	URandomSpawnItemsComponent_C_InitializeSpawnItemsLatent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.ExecuteUbergraph_RandomSpawnItemsComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomSpawnItemsComponent_C::ExecuteUbergraph_RandomSpawnItemsComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.ExecuteUbergraph_RandomSpawnItemsComponent");

	URandomSpawnItemsComponent_C_ExecuteUbergraph_RandomSpawnItemsComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
