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

// BlueprintGeneratedClass PerkHandleComponent.PerkHandleComponent_C
// 0x0088 (FullSize[0x0198] - InheritedSize[0x0110])
class UPerkHandleComponent_C : public UPerkHandleComponentNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0110(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              SpawnCollectTime;                                          // 0x0120(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7YU8[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AHSHCharacterBase*>                   AllCharacter;                                              // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FS_AuraData>                         AuraData;                                                  // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FGameplayTag, int>                     CountCacheTags;                                            // 0x0148(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PerkHandleComponent.PerkHandleComponent_C");
		return ptr;
	}



	void ResetCountTag(const struct FGameplayTag& Key);
	void AddedCountTag(const struct FGameplayTag& Key);
	bool GetCountTag(const struct FGameplayTag& Key, int* Value);
	void TryApplyAura(class AHSHCharacterBase* Owner, class AHSHCharacterBase* Target, const struct FS_AuraData& S_AuraData);
	void IsCharacterHasTagContainer(class AHSHCharacterBase* hshcharacter, const struct FGameplayTagContainer& Owning_Tag_Container, bool* Has);
	void IsCharacterInDistance(class AHSHCharacterBase* Owner, class AHSHCharacterBase* Target, float Distance, bool* Return);
	TArray<struct FActiveGameplayEffectHandle> IsCharacterHasTagQuery(class AHSHCharacterBase* hshcharacter, const struct FGameplayTagQuery& Owning_Tag_Query, bool* Has);
	void GetCharactersWithTag(const struct FGameplayTag& Tag, TArray<class AHSHCharacterBase*>* CharactersWithTag);
	void CheckPerkAura();
	void CheckPerkHandleTag(const struct FGameplayTag& Tag, const struct FPerkHandleData& Data);
	void OnFindCharactersWithTag(const struct FGameplayTag& Tag, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void FindAllCharacter();
	void ExecuteUbergraph_PerkHandleComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
