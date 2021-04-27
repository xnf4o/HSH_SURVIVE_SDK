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

// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.IsItemReachLimit?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Reach                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULimitItemsBaseComponent_C::IsItemReachLimit_(bool* Reach)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.IsItemReachLimit?");

	ULimitItemsBaseComponent_C_IsItemReachLimit__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reach != nullptr)
		*Reach = params.Reach;

}


// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.GetRandomItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           bIsFixedItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULimitItemsBaseComponent_C::GetRandomItem(struct FPrimaryAssetId* PrimaryAssetId, bool* bIsFixedItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.GetRandomItem");

	ULimitItemsBaseComponent_C_GetRandomItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrimaryAssetId != nullptr)
		*PrimaryAssetId = params.PrimaryAssetId;
	if (bIsFixedItem != nullptr)
		*bIsFixedItem = params.bIsFixedItem;

}


// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void ULimitItemsBaseComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.Initialize");

	ULimitItemsBaseComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.IncreaseCountItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULimitItemsBaseComponent_C::IncreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.IncreaseCountItem");

	ULimitItemsBaseComponent_C_IncreaseCountItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.DecreaseCountItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULimitItemsBaseComponent_C::DecreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.DecreaseCountItem");

	ULimitItemsBaseComponent_C_DecreaseCountItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.ExecuteUbergraph_LimitItemsBaseComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimitItemsBaseComponent_C::ExecuteUbergraph_LimitItemsBaseComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.ExecuteUbergraph_LimitItemsBaseComponent");

	ULimitItemsBaseComponent_C_ExecuteUbergraph_LimitItemsBaseComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
