#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.IsItemReachLimit?
struct ULimitItemsBaseComponent_C_IsItemReachLimit__Params
{
	bool                                               Reach;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.GetRandomItem
struct ULimitItemsBaseComponent_C_GetRandomItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFixedItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.Initialize
struct ULimitItemsBaseComponent_C_Initialize_Params
{
};

// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.IncreaseCountItem
struct ULimitItemsBaseComponent_C_IncreaseCountItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.DecreaseCountItem
struct ULimitItemsBaseComponent_C_DecreaseCountItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsBaseComponent.LimitItemsBaseComponent_C.ExecuteUbergraph_LimitItemsBaseComponent
struct ULimitItemsBaseComponent_C_ExecuteUbergraph_LimitItemsBaseComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
