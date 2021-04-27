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

// Function Widget_StoreGrid.Widget_StoreGrid_C.IsOutDate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime               EndDate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           IsOutOfDate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreGrid_C::IsOutDate(const struct FDateTime& EndDate, bool* IsOutOfDate)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.IsOutDate");

	UWidget_StoreGrid_C_IsOutDate_Params params;
	params.EndDate = EndDate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOutOfDate != nullptr)
		*IsOutOfDate = params.IsOutOfDate;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.RefreshProductsWithEndDate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FDateTime>       EndDate                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreGrid_C::RefreshProductsWithEndDate(TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* EndDate, bool Debug)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.RefreshProductsWithEndDate");

	UWidget_StoreGrid_C_RefreshProductsWithEndDate_Params params;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;
	if (EndDate != nullptr)
		*EndDate = params.EndDate;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProductsWithEndDate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FDateTime>       EndDate                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreGrid_C::AddedProductsWithEndDate(TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* EndDate, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProductsWithEndDate");

	UWidget_StoreGrid_C_AddedProductsWithEndDate_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;
	if (EndDate != nullptr)
		*EndDate = params.EndDate;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.ClearProducts
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_StoreGrid_C::ClearProducts()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.ClearProducts");

	UWidget_StoreGrid_C_ClearProducts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProducts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreGrid_C::AddedProducts(TArray<struct FS_StoreProduct>* Products, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProducts");

	UWidget_StoreGrid_C_AddedProducts_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.GetPlayerItemsContain
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetType       Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         PlayerContain                  (Parm, OutParm, ZeroConstructor)
void UWidget_StoreGrid_C::GetPlayerItemsContain(const struct FPrimaryAssetType& Type, TArray<struct FString>* PlayerContain)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.GetPlayerItemsContain");

	UWidget_StoreGrid_C_GetPlayerItemsContain_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerContain != nullptr)
		*PlayerContain = params.PlayerContain;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.CalculateGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreGrid_C::CalculateGrid(float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.CalculateGrid");

	UWidget_StoreGrid_C_CalculateGrid_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProduct
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_StoreProduct         Product                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FSlateBrush             ImageBG                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDateTime               EndDate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreGrid_C::AddedProduct(const struct FS_StoreProduct& Product, const struct FSlateBrush& ImageBG, const struct FDateTime& EndDate, class UUserWidget** Widget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.AddedProduct");

	UWidget_StoreGrid_C_AddedProduct_Params params;
	params.Product = Product;
	params.ImageBG = ImageBG;
	params.EndDate = EndDate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.RefreshProducts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreGrid_C::RefreshProducts(TArray<struct FS_StoreProduct>* Products, bool Debug)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.RefreshProducts");

	UWidget_StoreGrid_C_RefreshProducts_Params params;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreGrid_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.PreConstruct");

	UWidget_StoreGrid_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_StoreGrid_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.Construct");

	UWidget_StoreGrid_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreGrid.Widget_StoreGrid_C.ExecuteUbergraph_Widget_StoreGrid
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreGrid_C::ExecuteUbergraph_Widget_StoreGrid(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreGrid.Widget_StoreGrid_C.ExecuteUbergraph_Widget_StoreGrid");

	UWidget_StoreGrid_C_ExecuteUbergraph_Widget_StoreGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
