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

// BlueprintGeneratedClass GameplayAbilityLibrary.GameplayAbilityLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameplayAbilityLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GameplayAbilityLibrary.GameplayAbilityLibrary_C");
		return ptr;
	}



	void STATIC_HavePunkPerk(class AHSHCharacterBase* Character, class UObject* __WorldContext, bool* bHave);
	bool STATIC_IsHaveTagQuery(class AActor* Actor, const struct FGameplayTagQuery& Owning_Tag_Query, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
