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

// BlueprintGeneratedClass IStoreProduct.IStoreProduct_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIStoreProduct_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IStoreProduct.IStoreProduct_C");
		return ptr;
	}



	void ShowSoldOut(bool bIsShow);
	void RefreshProduct(const struct FS_StoreProduct& Product, const struct FSlateBrush& ImageBG, const struct FVector2D& ImageSize, const struct FVector2D& ImagePosition, bool bShowTooltip, const struct FDateTime& EndDate, TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency, TEnumAsByte<E_StoreType_E_StoreType> StoreType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
