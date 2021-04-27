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

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DebugArrayTypes
struct ULimitItemsTypeComponent_C_DebugArrayTypes_Params
{
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DebugArrayItemType
struct ULimitItemsTypeComponent_C_DebugArrayItemType_Params
{
	TArray<struct FS_LimitItemType>                    Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IsHaveFixedItems
struct ULimitItemsTypeComponent_C_IsHaveFixedItems_Params
{
	bool                                               IsHaveSpawn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPrimaryAssetId                             Item;                                                      // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IsItemReachLimit?
struct ULimitItemsTypeComponent_C_IsItemReachLimit__Params
{
	bool                                               Reach;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomItem
struct ULimitItemsTypeComponent_C_GetRandomItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFixedItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetNotReachItem
struct ULimitItemsTypeComponent_C_GetNotReachItem_Params
{
	TEnumAsByte<HSHSurvivor_EPickableType>             Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NotReach;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomItemType
struct ULimitItemsTypeComponent_C_GetRandomItemType_Params
{
	TArray<struct FS_LimitItemType>                    Types;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPrimaryAssetId                             Item;                                                      // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IncreaseArrayType
struct ULimitItemsTypeComponent_C_IncreaseArrayType_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.GetRandomType
struct ULimitItemsTypeComponent_C_GetRandomType_Params
{
	TArray<struct FS_LimitType>                        Types;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<HSHSurvivor_EPickableType>             Type;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.Initialize
struct ULimitItemsTypeComponent_C_Initialize_Params
{
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.DecreaseCountItem
struct ULimitItemsTypeComponent_C_DecreaseCountItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.IncreaseCountItem
struct ULimitItemsTypeComponent_C_IncreaseCountItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeComponent.LimitItemsTypeComponent_C.ExecuteUbergraph_LimitItemsTypeComponent
struct ULimitItemsTypeComponent_C_ExecuteUbergraph_LimitItemsTypeComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
