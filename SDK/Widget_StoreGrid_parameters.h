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

// Function Widget_StoreGrid.Widget_StoreGrid_C.IsOutDate
struct UWidget_StoreGrid_C_IsOutDate_Params
{
	struct FDateTime                                   EndDate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOutOfDate;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.RefreshProductsWithEndDate
struct UWidget_StoreGrid_C_RefreshProductsWithEndDate_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FDateTime>                           EndDate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Debug;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProductsWithEndDate
struct UWidget_StoreGrid_C_AddedProductsWithEndDate_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FDateTime>                           EndDate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.ClearProducts
struct UWidget_StoreGrid_C_ClearProducts_Params
{
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProducts
struct UWidget_StoreGrid_C_AddedProducts_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.GetPlayerItemsContain
struct UWidget_StoreGrid_C_GetPlayerItemsContain_Params
{
	struct FPrimaryAssetType                           Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             PlayerContain;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.CalculateGrid
struct UWidget_StoreGrid_C_CalculateGrid_Params
{
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProduct
struct UWidget_StoreGrid_C_AddedProduct_Params
{
	struct FS_StoreProduct                             Product;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FSlateBrush                                 ImageBG;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                                   EndDate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Widget;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.RefreshProducts
struct UWidget_StoreGrid_C_RefreshProducts_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Debug;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.PreConstruct
struct UWidget_StoreGrid_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.Construct
struct UWidget_StoreGrid_C_Construct_Params
{
};

// Function Widget_StoreGrid.Widget_StoreGrid_C.ExecuteUbergraph_Widget_StoreGrid
struct UWidget_StoreGrid_C_ExecuteUbergraph_Widget_StoreGrid_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
