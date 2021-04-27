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

// BlueprintGeneratedClass PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPrimaryAssetsFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C");
		return ptr;
	}



	void STATIC_GetStickerItem(const struct FPrimaryAssetId& PrimaryAssetId, class UObject* __WorldContext, class UTexture2D** StickerTexture);
	void STATIC_GetItemProfile(const struct FPrimaryAssetId& PrimaryAssetId, class UObject* __WorldContext, struct FSlateBrush* ItemImageProfile);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
