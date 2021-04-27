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

// BlueprintGeneratedClass LimitItemsBaseComponent.LimitItemsBaseComponent_C
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class ULimitItemsBaseComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LimitItemsBaseComponent.LimitItemsBaseComponent_C");
		return ptr;
	}



	void IsItemReachLimit_(bool* Reach);
	void GetRandomItem(struct FPrimaryAssetId* PrimaryAssetId, bool* bIsFixedItem);
	void Initialize();
	void IncreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId);
	void DecreaseCountItem(const struct FPrimaryAssetId& PrimaryAssetId);
	void ExecuteUbergraph_LimitItemsBaseComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
