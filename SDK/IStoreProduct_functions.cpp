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

// Function IStoreProduct.IStoreProduct_C.ShowSoldOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIStoreProduct_C::ShowSoldOut(bool bIsShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IStoreProduct.IStoreProduct_C.ShowSoldOut");

	UIStoreProduct_C_ShowSoldOut_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IStoreProduct.IStoreProduct_C.RefreshProduct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_StoreProduct         Product                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FSlateBrush             ImageBG                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               ImageSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ImagePosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShowTooltip                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime               EndDate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_StoreType_E_StoreType> StoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIStoreProduct_C::RefreshProduct(const struct FS_StoreProduct& Product, const struct FSlateBrush& ImageBG, const struct FVector2D& ImageSize, const struct FVector2D& ImagePosition, bool bShowTooltip, const struct FDateTime& EndDate, TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency, TEnumAsByte<E_StoreType_E_StoreType> StoreType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IStoreProduct.IStoreProduct_C.RefreshProduct");

	UIStoreProduct_C_RefreshProduct_Params params;
	params.Product = Product;
	params.ImageBG = ImageBG;
	params.ImageSize = ImageSize;
	params.ImagePosition = ImagePosition;
	params.bShowTooltip = bShowTooltip;
	params.EndDate = EndDate;
	params.Currency = Currency;
	params.StoreType = StoreType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
