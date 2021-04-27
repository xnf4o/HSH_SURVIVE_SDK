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

// BlueprintGeneratedClass LimitItemsTypeComponent.LimitItemsTypeComponent_C
// 0x0070 (FullSize[0x0180] - InheritedSize[0x0110])
class ULimitItemsTypeComponent_C : public ULimitItemsBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0110(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FS_LimitType>                        Types;                                                     // 0x0120(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    GeneralType;                                               // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    MeleeType;                                                 // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    RangeType;                                                 // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    TrapType;                                                  // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_LimitItemType>                    Fixed_Spawn;                                               // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LimitItemsTypeComponent.LimitItemsTypeComponent_C");
		return ptr;
	}



	void DebugArrayTypes();
	void DebugArrayItemType(TArray<struct FS_LimitItemType>* Array);
	void IsHaveFixedItems(bool* IsHaveSpawn, struct FPrimaryAssetId* Item, int* Array_Index);
	void IsItemReachLimit_(bool* Reach);
	void GetRandomItem(struct FPrimaryAssetId* PrimaryAssetId, bool* bIsFixedItem);
	void GetNotReachItem(TEnumAsByte<HSHSurvivor_EPickableType> Type, bool* NotReach);
	void GetRandomItemType(TArray<struct FS_LimitItemType>* Types, struct FPrimaryAssetId* Item);
	void IncreaseArrayType(const struct FPrimaryAssetId& PrimaryAssetId, int Type, int Value);
	void GetRandomType(TArray<struct FS_LimitType>* Types, TEnumAsByte<HSHSurvivor_EPickableType>* Type);
	void Initialize();
	void DecreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId);
	void IncreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId);
	void ExecuteUbergraph_LimitItemsTypeComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
