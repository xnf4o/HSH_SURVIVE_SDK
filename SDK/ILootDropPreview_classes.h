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

// BlueprintGeneratedClass ILootDropPreview.ILootDropPreview_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UILootDropPreview_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ILootDropPreview.ILootDropPreview_C");
		return ptr;
	}



	void SetupLootGrantCurrency(int Currency);
	void SetupLootDropSkinPreview(class USkeletalMesh* PreviewSkeletalMesh, class UAnimSequence* previewAnimation, const struct FText& previewItemName, int Index, int Rarity);
	void SetupLootDropPreview(class UStaticMesh* PreviewMesh, const struct FText& previewItemName, const struct FText& previewItemAmount, int Index, int Rarity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
