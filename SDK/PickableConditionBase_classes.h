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

// BlueprintGeneratedClass PickableConditionBase.PickableConditionBase_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPickableConditionBase_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PickableConditionBase.PickableConditionBase_C");
		return ptr;
	}



	void CanUseItem(class AHSHCharacterBase* hshcharacter, bool* CanUse, struct FText* NotifyText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
