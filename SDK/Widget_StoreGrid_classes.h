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

// WidgetBlueprintGeneratedClass Widget_StoreGrid.Widget_StoreGrid_C
// 0x01B1 (FullSize[0x03F1] - InheritedSize[0x0240])
class UWidget_StoreGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_310;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           UniformGridPanel_Product;                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FS_StoreProduct>                     DebugProduct;                                              // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FillBlankSlot;                                             // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                grid;                                                      // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      WidgetProduct;                                             // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         PreferCurrency;                                            // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowPlayerHave;                                           // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowTooltip;                                              // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N58O[0x5];                                     // 0x0283(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_StoreProduct>                     Cache;                                                     // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsLatest;                                                 // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MSRQ[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 ProductBG;                                                 // 0x02A0(0x0088) (Edit, BlueprintVisible)
	struct FVector2D                                   ImageSize;                                                 // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImagePosition;                                             // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NCAE[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDateTime>                           CacheEndDate;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FS_StoreProduct                             PreviewProduct;                                            // 0x0350(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<E_StoreType_E_StoreType>               StoreType;                                                 // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StoreGrid.Widget_StoreGrid_C");
		return ptr;
	}



	void IsOutDate(const struct FDateTime& EndDate, bool* IsOutOfDate);
	void RefreshProductsWithEndDate(TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* EndDate, bool Debug);
	void AddedProductsWithEndDate(TArray<struct FS_StoreProduct>* Products, TArray<struct FDateTime>* EndDate, float Width);
	void ClearProducts();
	void AddedProducts(TArray<struct FS_StoreProduct>* Products, float Width);
	void GetPlayerItemsContain(const struct FPrimaryAssetType& Type, TArray<struct FString>* PlayerContain);
	void CalculateGrid(float Width);
	void AddedProduct(const struct FS_StoreProduct& Product, const struct FSlateBrush& ImageBG, const struct FDateTime& EndDate, class UUserWidget** Widget);
	void RefreshProducts(TArray<struct FS_StoreProduct>* Products, bool Debug);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_Widget_StoreGrid(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
