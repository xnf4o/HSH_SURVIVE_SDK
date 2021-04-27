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

// BlueprintGeneratedClass PickableConditionAlwayTrue.PickableConditionAlwayTrue_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPickableConditionAlwayTrue_C : public UPickableConditionBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PickableConditionAlwayTrue.PickableConditionAlwayTrue_C");
		return ptr;
	}



	void CanUseItem(class AHSHCharacterBase* hshcharacter, bool* CanUse, struct FText* NotifyText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
