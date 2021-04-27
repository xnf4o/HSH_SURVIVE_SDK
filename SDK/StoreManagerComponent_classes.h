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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoreManagerComponent.StoreManagerComponent_C
// 0x0124 (FullSize[0x0224] - InheritedSize[0x0100])
class UStoreManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnVirualGoodsResponse;                                     // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_StoreProduct                             CacheProduct;                                              // 0x0128(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPurchaseFinish;                                          // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDirectStoreRefresh;                                      // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTokenStoreRefresh;                                       // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                CacheQuantity;                                             // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         CacheCurrency;                                             // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_StoreType_E_StoreType>               CacheStoreType;                                            // 0x01FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FX3I[0x2];                                     // 0x01FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CacheOrderID;                                              // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CacheTransactionID;                                        // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              CachePrice;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass StoreManagerComponent.StoreManagerComponent_C");
		return ptr;
	}



	void GetCurrentGachaPrice(float* Price);
	void TagInclude(const struct FString& OwnerTag, TArray<struct FString>* IncludeTag, bool* Contain);
	void MakeDirectStoreProduct(TArray<class UGameSparksScriptData*>* VirtualGoods, TArray<struct FString>* FilteredTags, TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* Date);
	void MakeTokenStoreProduct(class UGameSparksScriptData* VirtualGoods, TArray<struct FString>* FilteredTags, TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* Date);
	void FindProductByPrimaryAsset(const struct FPrimaryAssetId& PrimaryAsset, struct FS_StoreProduct* Product);
	void FindProductByShortCode(const struct FString& ShortCode, struct FS_StoreProduct* Product, bool* Found);
	void TagExclude(const struct FString& OwnerTag, const struct FString& ExcludeTag, bool* bHaveTag);
	void SortProductsLevelCap(TArray<struct FS_StoreProduct>* Products, TArray<struct FS_StoreProduct>* Return);
	void MakeLevelCap(const struct FString& Tags, int* LevelCap);
	void MakePrices(class UGameSparksScriptData* Target, TArray<struct FS_StorePrice>* Prices);
	void MakePrice(class UGameSparksScriptData* Target, const struct FString& Name, bool* IsHas, int* Price);
	void MakeProducts(const struct FGSListVirtualGoodsResponse& VirtualGoods, const struct FString& ExcludeTag, TArray<struct FS_StoreProduct>* Return);
	void MakeTags(TArray<struct FString>* StringArray, class UGameSparksRequestArray** ReturnGSArray);
	void OnResponse_85B0426A40FBF172D132F1AF38A1CC00(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_33FFF7614BEDF7CDC25E73B9B1B549E5(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_8C0AA2F4470CAE160BB6D0B6C3DA1CE7(const struct FGSBuyVirtualGoodResponse& BuyVirtualGoodResponse, bool hasErrors);
	void OnResponse_04F9D14D4276199A8A7B60864657E7F2(const struct FGSBuyVirtualGoodResponse& BuyVirtualGoodResponse, bool hasErrors);
	void OnResponse_18A01D324E747674D08256ADDCE67890(const struct FGSListVirtualGoodsResponse& ListVirtualGoodsResponse, bool hasErrors);
	void RequestTokenStore();
	void RequestDirectStore();
	void BuyVirualGoods(TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyShortCode, int Quantity, const struct FS_StoreProduct& Product, TEnumAsByte<E_StoreType_E_StoreType> StoreType, float Price);
	void PurchaseSuccess();
	void PurchaseFailed();
	void SteamStartPurchase(const struct FString& OrderId, const struct FString& TransactionId);
	void GameCurrencyStartPurchase(TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyShortCode, const struct FString& ShortCode, int Quantity);
	void OnSteamPurchaseSuccess(const struct FString& m_ulOrderID);
	void GoogleStartPurchase();
	void AppleStartPurchase();
	void Initialize();
	void MakePurchase(const struct FS_StoreProduct& Product);
	void Buy();
	void Cancel();
	void WaitRefreshItem();
	void RequestVirualGoods(TArray<struct FString> Tags);
	void ExecuteUbergraph_StoreManagerComponent(int EntryPoint);
	void OnTokenStoreRefresh__DelegateSignature(bool IsError, class UGameSparksScriptData* StoreProduct);
	void OnDirectStoreRefresh__DelegateSignature(bool IsError, TArray<class UGameSparksScriptData*>* StoreProduct);
	void OnPurchaseFinish__DelegateSignature();
	void OnVirualGoodsResponse__DelegateSignature(bool IsError, const struct FGSListVirtualGoodsResponse& Products);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
