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

// BlueprintGeneratedClass InteractFunctionLibrary.InteractFunctionLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass InteractFunctionLibrary.InteractFunctionLibrary_C");
		return ptr;
	}



	void STATIC_FormatDescriptionWeapon(const struct FText& InText, class UObject* __WorldContext, struct FText* Return);
	void STATIC_FormatDescriptionWeaponState(const struct FText& InText, int State, class UObject* __WorldContext, struct FText* Return);
	void STATIC_IsCanUseItem(class UClass* Condition, class AHSHCharacterBase* hshcharacter, class UObject* __WorldContext, bool* CanUse, struct FText* NotifyText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
