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

// Function StoreManagerComponent.StoreManagerComponent_C.GetCurrentGachaPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::GetCurrentGachaPrice(float* Price)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.GetCurrentGachaPrice");

	UStoreManagerComponent_C_GetCurrentGachaPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function StoreManagerComponent.StoreManagerComponent_C.TagInclude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 OwnerTag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FString>         IncludeTag                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Contain                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::TagInclude(const struct FString& OwnerTag, TArray<struct FString>* IncludeTag, bool* Contain)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.TagInclude");

	UStoreManagerComponent_C_TagInclude_Params params;
	params.OwnerTag = OwnerTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IncludeTag != nullptr)
		*IncludeTag = params.IncludeTag;
	if (Contain != nullptr)
		*Contain = params.Contain;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakeDirectStoreProduct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGameSparksScriptData*> VirtualGoods                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         FilteredTags                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_StoreProduct> Products                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FDateTime>       Date                           (Parm, OutParm, ZeroConstructor)
void UStoreManagerComponent_C::MakeDirectStoreProduct(TArray<class UGameSparksScriptData*>* VirtualGoods, TArray<struct FString>* FilteredTags, TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* Date)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakeDirectStoreProduct");

	UStoreManagerComponent_C_MakeDirectStoreProduct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VirtualGoods != nullptr)
		*VirtualGoods = params.VirtualGoods;
	if (FilteredTags != nullptr)
		*FilteredTags = params.FilteredTags;
	if (Products != nullptr)
		*Products = params.Products;
	if (Date != nullptr)
		*Date = params.Date;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakeTokenStoreProduct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameSparksScriptData*   VirtualGoods                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         FilteredTags                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_StoreProduct> Products                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FDateTime>       Date                           (Parm, OutParm, ZeroConstructor)
void UStoreManagerComponent_C::MakeTokenStoreProduct(class UGameSparksScriptData* VirtualGoods, TArray<struct FString>* FilteredTags, TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* Date)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakeTokenStoreProduct");

	UStoreManagerComponent_C_MakeTokenStoreProduct_Params params;
	params.VirtualGoods = VirtualGoods;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FilteredTags != nullptr)
		*FilteredTags = params.FilteredTags;
	if (Products != nullptr)
		*Products = params.Products;
	if (Date != nullptr)
		*Date = params.Date;

}


// Function StoreManagerComponent.StoreManagerComponent_C.FindProductByPrimaryAsset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAsset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_StoreProduct         Product                        (Parm, OutParm, HasGetValueTypeHash)
void UStoreManagerComponent_C::FindProductByPrimaryAsset(const struct FPrimaryAssetId& PrimaryAsset, struct FS_StoreProduct* Product)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.FindProductByPrimaryAsset");

	UStoreManagerComponent_C_FindProductByPrimaryAsset_Params params;
	params.PrimaryAsset = PrimaryAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Product != nullptr)
		*Product = params.Product;

}


// Function StoreManagerComponent.StoreManagerComponent_C.FindProductByShortCode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ShortCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FS_StoreProduct         Product                        (Parm, OutParm, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::FindProductByShortCode(const struct FString& ShortCode, struct FS_StoreProduct* Product, bool* Found)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.FindProductByShortCode");

	UStoreManagerComponent_C_FindProductByShortCode_Params params;
	params.ShortCode = ShortCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Product != nullptr)
		*Product = params.Product;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function StoreManagerComponent.StoreManagerComponent_C.TagExclude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 OwnerTag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ExcludeTag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bHaveTag                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::TagExclude(const struct FString& OwnerTag, const struct FString& ExcludeTag, bool* bHaveTag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.TagExclude");

	UStoreManagerComponent_C_TagExclude_Params params;
	params.OwnerTag = OwnerTag;
	params.ExcludeTag = ExcludeTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHaveTag != nullptr)
		*bHaveTag = params.bHaveTag;

}


// Function StoreManagerComponent.StoreManagerComponent_C.SortProductsLevelCap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_StoreProduct> Return                         (Parm, OutParm, ZeroConstructor)
void UStoreManagerComponent_C::SortProductsLevelCap(TArray<struct FS_StoreProduct>* Products, TArray<struct FS_StoreProduct>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.SortProductsLevelCap");

	UStoreManagerComponent_C_SortProductsLevelCap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakeLevelCap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            LevelCap                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::MakeLevelCap(const struct FString& Tags, int* LevelCap)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakeLevelCap");

	UStoreManagerComponent_C_MakeLevelCap_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LevelCap != nullptr)
		*LevelCap = params.LevelCap;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakePrices
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_StorePrice>   Prices                         (Parm, OutParm, ZeroConstructor)
void UStoreManagerComponent_C::MakePrices(class UGameSparksScriptData* Target, TArray<struct FS_StorePrice>* Prices)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakePrices");

	UStoreManagerComponent_C_MakePrices_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Prices != nullptr)
		*Prices = params.Prices;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakePrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IsHas                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::MakePrice(class UGameSparksScriptData* Target, const struct FString& Name, bool* IsHas, int* Price)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakePrice");

	UStoreManagerComponent_C_MakePrice_Params params;
	params.Target = Target;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHas != nullptr)
		*IsHas = params.IsHas;
	if (Price != nullptr)
		*Price = params.Price;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakeProducts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSListVirtualGoodsResponse VirtualGoods                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ExcludeTag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_StoreProduct> Return                         (Parm, OutParm, ZeroConstructor)
void UStoreManagerComponent_C::MakeProducts(const struct FGSListVirtualGoodsResponse& VirtualGoods, const struct FString& ExcludeTag, TArray<struct FS_StoreProduct>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakeProducts");

	UStoreManagerComponent_C_MakeProducts_Params params;
	params.VirtualGoods = VirtualGoods;
	params.ExcludeTag = ExcludeTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakeTags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         StringArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UGameSparksRequestArray* ReturnGSArray                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::MakeTags(TArray<struct FString>* StringArray, class UGameSparksRequestArray** ReturnGSArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakeTags");

	UStoreManagerComponent_C_MakeTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;
	if (ReturnGSArray != nullptr)
		*ReturnGSArray = params.ReturnGSArray;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_85B0426A40FBF172D132F1AF38A1CC00
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::OnResponse_85B0426A40FBF172D132F1AF38A1CC00(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_85B0426A40FBF172D132F1AF38A1CC00");

	UStoreManagerComponent_C_OnResponse_85B0426A40FBF172D132F1AF38A1CC00_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_33FFF7614BEDF7CDC25E73B9B1B549E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::OnResponse_33FFF7614BEDF7CDC25E73B9B1B549E5(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_33FFF7614BEDF7CDC25E73B9B1B549E5");

	UStoreManagerComponent_C_OnResponse_33FFF7614BEDF7CDC25E73B9B1B549E5_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_8C0AA2F4470CAE160BB6D0B6C3DA1CE7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSBuyVirtualGoodResponse BuyVirtualGoodResponse         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::OnResponse_8C0AA2F4470CAE160BB6D0B6C3DA1CE7(const struct FGSBuyVirtualGoodResponse& BuyVirtualGoodResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_8C0AA2F4470CAE160BB6D0B6C3DA1CE7");

	UStoreManagerComponent_C_OnResponse_8C0AA2F4470CAE160BB6D0B6C3DA1CE7_Params params;
	params.BuyVirtualGoodResponse = BuyVirtualGoodResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_04F9D14D4276199A8A7B60864657E7F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSBuyVirtualGoodResponse BuyVirtualGoodResponse         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::OnResponse_04F9D14D4276199A8A7B60864657E7F2(const struct FGSBuyVirtualGoodResponse& BuyVirtualGoodResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_04F9D14D4276199A8A7B60864657E7F2");

	UStoreManagerComponent_C_OnResponse_04F9D14D4276199A8A7B60864657E7F2_Params params;
	params.BuyVirtualGoodResponse = BuyVirtualGoodResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_18A01D324E747674D08256ADDCE67890
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSListVirtualGoodsResponse ListVirtualGoodsResponse       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStoreManagerComponent_C::OnResponse_18A01D324E747674D08256ADDCE67890(const struct FGSListVirtualGoodsResponse& ListVirtualGoodsResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_18A01D324E747674D08256ADDCE67890");

	UStoreManagerComponent_C_OnResponse_18A01D324E747674D08256ADDCE67890_Params params;
	params.ListVirtualGoodsResponse = ListVirtualGoodsResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.RequestTokenStore
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::RequestTokenStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.RequestTokenStore");

	UStoreManagerComponent_C_RequestTokenStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.RequestDirectStore
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::RequestDirectStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.RequestDirectStore");

	UStoreManagerComponent_C_RequestDirectStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.BuyVirualGoods
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyShortCode              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StoreProduct         Product                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TEnumAsByte<E_StoreType_E_StoreType> StoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::BuyVirualGoods(TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyShortCode, int Quantity, const struct FS_StoreProduct& Product, TEnumAsByte<E_StoreType_E_StoreType> StoreType, float Price)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.BuyVirualGoods");

	UStoreManagerComponent_C_BuyVirualGoods_Params params;
	params.CurrencyShortCode = CurrencyShortCode;
	params.Quantity = Quantity;
	params.Product = Product;
	params.StoreType = StoreType;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.PurchaseSuccess
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::PurchaseSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.PurchaseSuccess");

	UStoreManagerComponent_C_PurchaseSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.PurchaseFailed
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::PurchaseFailed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.PurchaseFailed");

	UStoreManagerComponent_C_PurchaseFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.SteamStartPurchase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OrderId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 TransactionId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::SteamStartPurchase(const struct FString& OrderId, const struct FString& TransactionId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.SteamStartPurchase");

	UStoreManagerComponent_C_SteamStartPurchase_Params params;
	params.OrderId = OrderId;
	params.TransactionId = TransactionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.GameCurrencyStartPurchase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyShortCode              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ShortCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::GameCurrencyStartPurchase(TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyShortCode, const struct FString& ShortCode, int Quantity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.GameCurrencyStartPurchase");

	UStoreManagerComponent_C_GameCurrencyStartPurchase_Params params;
	params.CurrencyShortCode = CurrencyShortCode;
	params.ShortCode = ShortCode;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnSteamPurchaseSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 m_ulOrderID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::OnSteamPurchaseSuccess(const struct FString& m_ulOrderID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnSteamPurchaseSuccess");

	UStoreManagerComponent_C_OnSteamPurchaseSuccess_Params params;
	params.m_ulOrderID = m_ulOrderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.GoogleStartPurchase
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::GoogleStartPurchase()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.GoogleStartPurchase");

	UStoreManagerComponent_C_GoogleStartPurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.AppleStartPurchase
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::AppleStartPurchase()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.AppleStartPurchase");

	UStoreManagerComponent_C_AppleStartPurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.Initialize");

	UStoreManagerComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.MakePurchase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_StoreProduct         Product                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UStoreManagerComponent_C::MakePurchase(const struct FS_StoreProduct& Product)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.MakePurchase");

	UStoreManagerComponent_C_MakePurchase_Params params;
	params.Product = Product;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.Buy
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::Buy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.Buy");

	UStoreManagerComponent_C_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::Cancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.Cancel");

	UStoreManagerComponent_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.WaitRefreshItem
// (BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::WaitRefreshItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.WaitRefreshItem");

	UStoreManagerComponent_C_WaitRefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.RequestVirualGoods
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Tags                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UStoreManagerComponent_C::RequestVirualGoods(TArray<struct FString> Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.RequestVirualGoods");

	UStoreManagerComponent_C_RequestVirualGoods_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.ExecuteUbergraph_StoreManagerComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::ExecuteUbergraph_StoreManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.ExecuteUbergraph_StoreManagerComponent");

	UStoreManagerComponent_C_ExecuteUbergraph_StoreManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnTokenStoreRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameSparksScriptData*   StoreProduct                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoreManagerComponent_C::OnTokenStoreRefresh__DelegateSignature(bool IsError, class UGameSparksScriptData* StoreProduct)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnTokenStoreRefresh__DelegateSignature");

	UStoreManagerComponent_C_OnTokenStoreRefresh__DelegateSignature_Params params;
	params.IsError = IsError;
	params.StoreProduct = StoreProduct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnDirectStoreRefresh__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UGameSparksScriptData*> StoreProduct                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UStoreManagerComponent_C::OnDirectStoreRefresh__DelegateSignature(bool IsError, TArray<class UGameSparksScriptData*>* StoreProduct)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnDirectStoreRefresh__DelegateSignature");

	UStoreManagerComponent_C_OnDirectStoreRefresh__DelegateSignature_Params params;
	params.IsError = IsError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreProduct != nullptr)
		*StoreProduct = params.StoreProduct;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnPurchaseFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UStoreManagerComponent_C::OnPurchaseFinish__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnPurchaseFinish__DelegateSignature");

	UStoreManagerComponent_C_OnPurchaseFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreManagerComponent.StoreManagerComponent_C.OnVirualGoodsResponse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Products                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UStoreManagerComponent_C::OnVirualGoodsResponse__DelegateSignature(bool IsError, const struct FGSListVirtualGoodsResponse& Products)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StoreManagerComponent.StoreManagerComponent_C.OnVirualGoodsResponse__DelegateSignature");

	UStoreManagerComponent_C_OnVirualGoodsResponse__DelegateSignature_Params params;
	params.IsError = IsError;
	params.Products = Products;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
