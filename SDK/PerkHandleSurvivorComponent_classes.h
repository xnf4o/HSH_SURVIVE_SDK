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

// BlueprintGeneratedClass PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C
// 0x0058 (FullSize[0x01F0] - InheritedSize[0x0198])
class UPerkHandleSurvivorComponent_C : public UPerkHandleComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0198(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bIsCollect;                                                // 0x01A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SM9F[0x7];                                     // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_Pickable                                 CacheItem;                                                 // 0x01B0(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TimerHandEmpty;                                            // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NJKZ[0x4];                                     // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerLoopWeaknessPerk;                                     // 0x01E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimerLoopSixSensePerk;                                     // 0x01E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C");
		return ptr;
	}



	void RandomRitual(TArray<class ARitual_ReleaseGhost_C*>* Array, class ARitual_ReleaseGhost_C** Array_Element);
	void RandomObjectiveChest(TArray<class AItemChest_C*>* Array, class AItemChest_C** Array_Element);
	void GetObjectiveChest(TArray<class AItemChest_C*>* Chest);
	void SixSenseScan();
	float GetRespawnCooldown(const struct FGameplayTagContainer& Selection);
	void CheckSpawnBareHand(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn);
	void CheckSpawnCat(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn);
	void TimerHandEmptyReset();
	void TimerHandEmptyCheck(float DeltaTime, bool* Return);
	bool CheckIsPerkItem(const struct FPrimaryAssetId& ItemId);
	void CheckUsingItem(float Durability);
	bool CheckHaveItem();
	void GetSpawnData(const struct FGameplayTag& Tag, class UClass** Pickable, struct FPrimaryAssetId* ItemId, class UClass** GameplayEffect);
	void SpawnCollect(class UClass* PickableClass, const struct FPrimaryAssetId& ItemId, class UClass* GameplayEffect, float Durability);
	void CheckSpawnDrop(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, bool* bReturn);
	void CheckSpawnCamera(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn);
	void CheckSpawnDagger(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn);
	void CheckSpawnCollect(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn);
	bool IsCanSpawn(float* TimeRemaining, float* Duration);
	void IsCharacterCanMove(bool* CanMove_);
	void StartSixSenseCounting();
	void StopSixSenseCounting();
	void OnStartStartSixSenseCounting();
	void OnStopSixSenseCounting();
	void CallWeaknessDetector(float Time);
	void CloseWeaknessDetector();
	void StartWeaknessDetector();
	void StopWeaknessDetector();
	void ApplyWeaknessDetecorCooldown();
	void OnChestOpened(class AItemChest_C* Chest);
	void OnPlaceItem(class ARitualBase_C* Ritual);
	void RandomShowRitual();
	void RandomShowObjectiveChest();
	void OnShowSoundIcon(const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*>* Characters);
	void ServerHandle(const struct FGameplayTag& Selection, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters);
	void OnFindCharactersWithTag(const struct FGameplayTag& Tag, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters);
	void CheckonDamaged(const struct FPerkHandleData& Data, const struct FGameplayTagContainer& GE_TagContainer);
	void ShowHunterAura(class AHSHCharacterBase* Character);
	void MulticastShowHunterAura(class AHSHCharacterBase* Character);
	void FindAllCharacter();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_PerkHandleSurvivorComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
