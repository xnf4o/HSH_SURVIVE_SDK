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

// BlueprintGeneratedClass LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C
// 0x0020 (FullSize[0x01A0] - InheritedSize[0x0180])
class ULimitItemsTypeChestComponent_C : public ULimitItemsTypeComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0180(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsReach_;                                                  // 0x0190(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R5YM[0x7];                                     // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  DataDynamic;                                               // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LimitItemsTypeChestComponent.LimitItemsTypeChestComponent_C");
		return ptr;
	}



	void SetItemTypeLimit(TArray<struct FS_LimitItemType>* ArraySource, TArray<struct FS_LimitItemType>* ArrayChanged);
	void SetData(const struct FName& RowName);
	void FindIndex(const struct FS_LimitItemType& Source, TArray<struct FS_LimitItemType>* Array, int* Index);
	void GetRandomItem(struct FPrimaryAssetId* PrimaryAssetId, bool* bIsFixedItem);
	void GetSurvivorHPBelow50(int* Count);
	void IncreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId);
	void DecreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId);
	void OnBeforeGetRandomItem();
	void ExecuteUbergraph_LimitItemsTypeChestComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
