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

// BlueprintGeneratedClass GA_PA_HunterBase.GA_PA_HunterBase_C
// 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
class UGA_PA_HunterBase_C : public UHSHGameplayAbility
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_PA_HunterBase.GA_PA_HunterBase_C");
		return ptr;
	}



	void CustomCommitCooldown();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
