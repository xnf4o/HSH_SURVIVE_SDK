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

// BlueprintGeneratedClass IDestructible.IDestructible_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIDestructible_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IDestructible.IDestructible_C");
		return ptr;
	}



	void OnHunterChangeHiddenState(bool InHiddenState);
	void DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy);
	void SetDestructible(bool Destructible);
	void GetDestructible(bool* Destructable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
