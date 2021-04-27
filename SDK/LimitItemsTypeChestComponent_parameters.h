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

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.SetItemTypeLimit
struct ULimitItemsTypeChestComponent_C_SetItemTypeLimit_Params
{
	TArray<struct FS_LimitItemType>                    ArraySource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_LimitItemType>                    ArrayChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.SetData
struct ULimitItemsTypeChestComponent_C_SetData_Params
{
	struct FName                                       RowName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.FindIndex
struct ULimitItemsTypeChestComponent_C_FindIndex_Params
{
	struct FS_LimitItemType                            Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_LimitItemType>                    Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.GetRandomItem
struct ULimitItemsTypeChestComponent_C_GetRandomItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFixedItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.GetSurvivorHPBelow50
struct ULimitItemsTypeChestComponent_C_GetSurvivorHPBelow50_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.IncreaseCountItem
struct ULimitItemsTypeChestComponent_C_IncreaseCountItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.DecreaseCountItem
struct ULimitItemsTypeChestComponent_C_DecreaseCountItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.OnBeforeGetRandomItem
struct ULimitItemsTypeChestComponent_C_OnBeforeGetRandomItem_Params
{
};

// Function LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C.ExecuteUbergraph_LimitItemsTypeChestComponent
struct ULimitItemsTypeChestComponent_C_ExecuteUbergraph_LimitItemsTypeChestComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
