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

// BlueprintGeneratedClass GE_ApplicationRequirement_TremorSmash.GE_ApplicationRequirement_TremorSmash_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGE_ApplicationRequirement_TremorSmash_C : public UGameplayEffectCustomApplicationRequirement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GE_ApplicationRequirement_TremorSmash.GE_ApplicationRequirement_TremorSmash_C");
		return ptr;
	}



	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
