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

// BlueprintGeneratedClass LootDropSkinPreviewItem.LootDropSkinPreviewItem_C
// 0x001F (FullSize[0x03B8] - InheritedSize[0x0399])
class ALootDropSkinPreviewItem_C : public ALootDropPreviewItem_C
{
public:
	unsigned char                                      UnknownData_G51O[0x7];                                     // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LootDropSkinPreviewItem.LootDropSkinPreviewItem_C");
		return ptr;
	}



	void SetupLootDropSkinPreview(class USkeletalMesh* PreviewSkeletalMesh, class UAnimSequence* previewAnimation, const struct FText& previewItemName, int Index, int Rarity);
	void ReceiveTick(float DeltaSeconds);
	void SetupLootGrantCurrency(int Currency);
	void ReceiveBeginPlay();
	void SpawnLootdropEffect(int Rarity, const struct FVector& Scale);
	void ExecuteUbergraph_LootDropSkinPreviewItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
