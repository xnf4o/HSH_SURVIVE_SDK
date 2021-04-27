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

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DebugArrayTypes
// (Public, BlueprintCallable, BlueprintEvent)
void ULimitItemsTypeComponent_C::DebugArrayTypes()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DebugArrayTypes");

	ULimitItemsTypeComponent_C_DebugArrayTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DebugArrayItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_LimitItemType> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULimitItemsTypeComponent_C::DebugArrayItemType(TArray<struct FS_LimitItemType>* Array)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DebugArrayItemType");

	ULimitItemsTypeComponent_C_DebugArrayItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IsHaveFixedItems
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsHaveSpawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeComponent_C::IsHaveFixedItems(bool* IsHaveSpawn, struct FPrimaryAssetId* Item, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IsHaveFixedItems");

	ULimitItemsTypeComponent_C_IsHaveFixedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHaveSpawn != nullptr)
		*IsHaveSpawn = params.IsHaveSpawn;
	if (Item != nullptr)
		*Item = params.Item;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IsItemReachLimit?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Reach                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULimitItemsTypeComponent_C::IsItemReachLimit_(bool* Reach)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IsItemReachLimit?");

	ULimitItemsTypeComponent_C_IsItemReachLimit__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reach != nullptr)
		*Reach = params.Reach;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           bIsFixedItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULimitItemsTypeComponent_C::GetRandomItem(struct FPrimaryAssetId* PrimaryAssetId, bool* bIsFixedItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomItem");

	ULimitItemsTypeComponent_C_GetRandomItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrimaryAssetId != nullptr)
		*PrimaryAssetId = params.PrimaryAssetId;
	if (bIsFixedItem != nullptr)
		*bIsFixedItem = params.bIsFixedItem;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetNotReachItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<HSHSurvivor_EPickableType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NotReach                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULimitItemsTypeComponent_C::GetNotReachItem(TEnumAsByte<HSHSurvivor_EPickableType> Type, bool* NotReach)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetNotReachItem");

	ULimitItemsTypeComponent_C_GetNotReachItem_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NotReach != nullptr)
		*NotReach = params.NotReach;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_LimitItemType> Types                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeComponent_C::GetRandomItemType(TArray<struct FS_LimitItemType>* Types, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomItemType");

	ULimitItemsTypeComponent_C_GetRandomItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Types != nullptr)
		*Types = params.Types;
	if (Item != nullptr)
		*Item = params.Item;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IncreaseArrayType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeComponent_C::IncreaseArrayType(const struct FPrimaryAssetId& PrimaryAssetId, int Type, int Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IncreaseArrayType");

	ULimitItemsTypeComponent_C_IncreaseArrayType_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_LimitType>    Types                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<HSHSurvivor_EPickableType> Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeComponent_C::GetRandomType(TArray<struct FS_LimitType>* Types, TEnumAsByte<HSHSurvivor_EPickableType>* Type)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomType");

	ULimitItemsTypeComponent_C_GetRandomType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Types != nullptr)
		*Types = params.Types;
	if (Type != nullptr)
		*Type = params.Type;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void ULimitItemsTypeComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.Initialize");

	ULimitItemsTypeComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DecreaseCountItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeComponent_C::DecreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DecreaseCountItem");

	ULimitItemsTypeComponent_C_DecreaseCountItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IncreaseCountItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeComponent_C::IncreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IncreaseCountItem");

	ULimitItemsTypeComponent_C_IncreaseCountItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.ExecuteUbergraph_LimitItemsTypeComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsTypeComponent_C::ExecuteUbergraph_LimitItemsTypeComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.ExecuteUbergraph_LimitItemsTypeComponent");

	ULimitItemsTypeComponent_C_ExecuteUbergraph_LimitItemsTypeComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
