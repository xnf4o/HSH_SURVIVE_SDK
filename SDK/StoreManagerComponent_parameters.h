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

// Function StoreManagerComponent.StoreManagerComponent_C.GetCurrentGachaPrice
struct UStoreManagerComponent_C_GetCurrentGachaPrice_Params
{
	float                                              Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.TagInclude
struct UStoreManagerComponent_C_TagInclude_Params
{
	struct FString                                     OwnerTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             IncludeTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Contain;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakeDirectStoreProduct
struct UStoreManagerComponent_C_MakeDirectStoreProduct_Params
{
	TArray<class UGameSparksScriptData*>               VirtualGoods;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             FilteredTags;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_StoreProduct>                     Products;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FDateTime>                           Date;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakeTokenStoreProduct
struct UStoreManagerComponent_C_MakeTokenStoreProduct_Params
{
	class UGameSparksScriptData*                       VirtualGoods;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             FilteredTags;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_StoreProduct>                     Products;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FDateTime>                           Date;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.FindProductByPrimaryAsset
struct UStoreManagerComponent_C_FindProductByPrimaryAsset_Params
{
	struct FPrimaryAssetId                             PrimaryAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_StoreProduct                             Product;                                                   // (Parm, OutParm, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.FindProductByShortCode
struct UStoreManagerComponent_C_FindProductByShortCode_Params
{
	struct FString                                     ShortCode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FS_StoreProduct                             Product;                                                   // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.TagExclude
struct UStoreManagerComponent_C_TagExclude_Params
{
	struct FString                                     OwnerTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ExcludeTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bHaveTag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.SortProductsLevelCap
struct UStoreManagerComponent_C_SortProductsLevelCap_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_StoreProduct>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakeLevelCap
struct UStoreManagerComponent_C_MakeLevelCap_Params
{
	struct FString                                     Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                LevelCap;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakePrices
struct UStoreManagerComponent_C_MakePrices_Params
{
	class UGameSparksScriptData*                       Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_StorePrice>                       Prices;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakePrice
struct UStoreManagerComponent_C_MakePrice_Params
{
	class UGameSparksScriptData*                       Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsHas;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakeProducts
struct UStoreManagerComponent_C_MakeProducts_Params
{
	struct FGSListVirtualGoodsResponse                 VirtualGoods;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ExcludeTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_StoreProduct>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakeTags
struct UStoreManagerComponent_C_MakeTags_Params
{
	TArray<struct FString>                             StringArray;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UGameSparksRequestArray*                     ReturnGSArray;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_85B0426A40FBF172D132F1AF38A1CC00
struct UStoreManagerComponent_C_OnResponse_85B0426A40FBF172D132F1AF38A1CC00_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_33FFF7614BEDF7CDC25E73B9B1B549E5
struct UStoreManagerComponent_C_OnResponse_33FFF7614BEDF7CDC25E73B9B1B549E5_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_8C0AA2F4470CAE160BB6D0B6C3DA1CE7
struct UStoreManagerComponent_C_OnResponse_8C0AA2F4470CAE160BB6D0B6C3DA1CE7_Params
{
	struct FGSBuyVirtualGoodResponse                   BuyVirtualGoodResponse;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_04F9D14D4276199A8A7B60864657E7F2
struct UStoreManagerComponent_C_OnResponse_04F9D14D4276199A8A7B60864657E7F2_Params
{
	struct FGSBuyVirtualGoodResponse                   BuyVirtualGoodResponse;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnResponse_18A01D324E747674D08256ADDCE67890
struct UStoreManagerComponent_C_OnResponse_18A01D324E747674D08256ADDCE67890_Params
{
	struct FGSListVirtualGoodsResponse                 ListVirtualGoodsResponse;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StoreManagerComponent.StoreManagerComponent_C.RequestTokenStore
struct UStoreManagerComponent_C_RequestTokenStore_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.RequestDirectStore
struct UStoreManagerComponent_C_RequestDirectStore_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.BuyVirualGoods
struct UStoreManagerComponent_C_BuyVirualGoods_Params
{
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         CurrencyShortCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_StoreProduct                             Product;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<E_StoreType_E_StoreType>               StoreType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Price;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.PurchaseSuccess
struct UStoreManagerComponent_C_PurchaseSuccess_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.PurchaseFailed
struct UStoreManagerComponent_C_PurchaseFailed_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.SteamStartPurchase
struct UStoreManagerComponent_C_SteamStartPurchase_Params
{
	struct FString                                     OrderId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TransactionId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.GameCurrencyStartPurchase
struct UStoreManagerComponent_C_GameCurrencyStartPurchase_Params
{
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         CurrencyShortCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ShortCode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnSteamPurchaseSuccess
struct UStoreManagerComponent_C_OnSteamPurchaseSuccess_Params
{
	struct FString                                     m_ulOrderID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.GoogleStartPurchase
struct UStoreManagerComponent_C_GoogleStartPurchase_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.AppleStartPurchase
struct UStoreManagerComponent_C_AppleStartPurchase_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.Initialize
struct UStoreManagerComponent_C_Initialize_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.MakePurchase
struct UStoreManagerComponent_C_MakePurchase_Params
{
	struct FS_StoreProduct                             Product;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.Buy
struct UStoreManagerComponent_C_Buy_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.Cancel
struct UStoreManagerComponent_C_Cancel_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.WaitRefreshItem
struct UStoreManagerComponent_C_WaitRefreshItem_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.RequestVirualGoods
struct UStoreManagerComponent_C_RequestVirualGoods_Params
{
	TArray<struct FString>                             Tags;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StoreManagerComponent.StoreManagerComponent_C.ExecuteUbergraph_StoreManagerComponent
struct UStoreManagerComponent_C_ExecuteUbergraph_StoreManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnTokenStoreRefresh__DelegateSignature
struct UStoreManagerComponent_C_OnTokenStoreRefresh__DelegateSignature_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameSparksScriptData*                       StoreProduct;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnDirectStoreRefresh__DelegateSignature
struct UStoreManagerComponent_C_OnDirectStoreRefresh__DelegateSignature_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UGameSparksScriptData*>               StoreProduct;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnPurchaseFinish__DelegateSignature
struct UStoreManagerComponent_C_OnPurchaseFinish__DelegateSignature_Params
{
};

// Function StoreManagerComponent.StoreManagerComponent_C.OnVirualGoodsResponse__DelegateSignature
struct UStoreManagerComponent_C_OnVirualGoodsResponse__DelegateSignature_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
