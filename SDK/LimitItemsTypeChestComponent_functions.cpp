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

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.SetItemTypeLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_LimitItemType> ArraySource                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_LimitItemType> ArrayChanged                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULimitItemsTypeChestComponent_C::SetItemTypeLimit(TArray<struct FS_LimitItemType>* ArraySource, TArray<struct FS_LimitItemType>* ArrayChanged)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.SetItemTypeLimit");

	ULimitItemsTypeChestComponent_C_SetItemTypeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArraySource != nullptr)
		*ArraySource = params.ArraySource;
	if (ArrayChanged != nullptr)
		*ArrayChanged = params.ArrayChanged;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeChestComponent_C::SetData(const struct FName& RowName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.SetData");

	ULimitItemsTypeChestComponent_C_SetData_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.FindIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LimitItemType        Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_LimitItemType> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeChestComponent_C::FindIndex(const struct FS_LimitItemType& Source, TArray<struct FS_LimitItemType>* Array, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.FindIndex");

	ULimitItemsTypeChestComponent_C_FindIndex_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.GetRandomItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           bIsFixedItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULimitItemsTypeChestComponent_C::GetRandomItem(struct FPrimaryAssetId* PrimaryAssetId, bool* bIsFixedItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.GetRandomItem");

	ULimitItemsTypeChestComponent_C_GetRandomItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrimaryAssetId != nullptr)
		*PrimaryAssetId = params.PrimaryAssetId;
	if (bIsFixedItem != nullptr)
		*bIsFixedItem = params.bIsFixedItem;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.GetSurvivorHPBelow50
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeChestComponent_C::GetSurvivorHPBelow50(int* Count)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.GetSurvivorHPBelow50");

	ULimitItemsTypeChestComponent_C_GetSurvivorHPBelow50_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.IncreaseCountItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeChestComponent_C::IncreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.IncreaseCountItem");

	ULimitItemsTypeChestComponent_C_IncreaseCountItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.DecreaseCountItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeChestComponent_C::DecreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.DecreaseCountItem");

	ULimitItemsTypeChestComponent_C_DecreaseCountItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.OnBeforeGetRandomItem
// (BlueprintCallable, BlueprintEvent)
void ULimitItemsTypeChestComponent_C::OnBeforeGetRandomItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.OnBeforeGetRandomItem");

	ULimitItemsTypeChestComponent_C_OnBeforeGetRandomItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.ExecuteUbergraph_LimitItemsTypeChestComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeChestComponent_C::ExecuteUbergraph_LimitItemsTypeChestComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.ExecuteUbergraph_LimitItemsTypeChestComponent");

	ULimitItemsTypeChestComponent_C_ExecuteUbergraph_LimitItemsTypeChestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
