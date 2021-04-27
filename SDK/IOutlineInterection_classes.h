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

// BlueprintGeneratedClass IOutlineInterection.IOutlineInterection_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIOutlineInterection_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IOutlineInterection.IOutlineInterection_C");
		return ptr;
	}



	void RefreshUI();
	void HideIndicator(class AActor* PlayerCharacter);
	void ShowIndicator(class AActor* PlayerCharacter);
	void DisableUI(class AActor* PlayerCharacter);
	void EnableUI(class AActor* PlayerCharacter);
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void HideOutline(class AActor* PlayerCharacter);
	void ShowOutline(class AActor* PlayerCharacter);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
