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

// BlueprintGeneratedClass ItemChest.ItemChest_C
// 0x00EF (FullSize[0x07B8] - InheritedSize[0x06C9])
class AItemChest_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_CBP6[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             SetterDropPoint;                                           // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ParticlPoint;                                              // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio;                                                     // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LookAt;                                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SetterSpawnPoint;                                          // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Hover;                                                     // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              SearchItemTime;                                            // 0x0728(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6TBE[0x4];                                     // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ChestName;                                                 // 0x0730(0x0018) (Edit, BlueprintVisible)
	float                                              MaxSearchItemTime;                                         // 0x0748(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bChestOpen;                                                // 0x074C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_S36L[0x3];                                     // 0x074D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          ChestOpenMaterial;                                         // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 ChestOpenMesh;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ItemDrop;                                                  // 0x0760(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                              MinRespawnTime;                                            // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRespawnTime;                                            // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockChest;                                                // 0x0770(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsHavePeakTreasureHunter;                                  // 0x0771(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCanRespawn;                                               // 0x0772(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRandomSpawn;                                              // 0x0773(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsCanSkillCheck;                                          // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q7P3[0x3];                                     // 0x0775(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrimaryAssetId                             FixedSpawnItem;                                            // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PlayerTeam_E_PlayerTeam>             TestTeam;                                                  // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QJ7R[0x7];                                     // 0x0789(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ARitualRope_C*>                       Redrope;                                                   // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FScriptMulticastDelegate                    OnChestOpen;                                               // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsProgressSoundPlayed;                                    // 0x07B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_NO4F[0x3];                                     // 0x07B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoDropTimer;                                             // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ItemChest.ItemChest_C");
		return ptr;
	}



	void ThisIsTeam(TEnumAsByte<E_PlayerTeam_E_PlayerTeam>* IsTeam);
	void IsActivate_(bool* IsActivate_);
	void OnRep_bIsProgressSoundPlayed();
	void DestroyRedrope();
	void IsChestOpen_(bool* Return);
	void OnRep_bLockChest();
	void OnRep_bChestOpen();
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void CanUseProgress(bool* UseProgress);
	void GetSpeedSkillCheck(float* Speed);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void IsCanHelp_(bool* IsCan);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	void OnRep_ItemDrop();
	void SpawnItem(const struct FPrimaryAssetId& ItemInfo, class AActor** SpawnedItem);
	void RandomItemFromChest(struct FPrimaryAssetId* ItemInfo);
	void UserConstructionScript();
	void Activate();
	void Deactivate();
	void ServerSetProgressChestSound(bool Play);
	void MultiCastOpenChestSound();
	void ProgressChestSound(bool Play);
	void ServerCloseChest();
	void MulticastCloseChest();
	void ReceiveBeginPlay();
	void ServerOpenChest();
	void MulticastOpenChest();
	void RespawnChest();
	void OnDestroy(class AActor* DestroyedActor);
	void BindDestroyEvent();
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void ServerLockChest();
	void ServerUnlockChest();
	void Interaction(class AHSHCharacterBase* Character);
	void OnInteraction(class AHSHCharacterBase* Character);
	void OnCannotProgress(class AHSHCharacterBase* hshcharacter);
	void OnStopSearchChest(class ASurvivorBase_C* SurvivorBase);
	void OnFinishSearchChestWithSurvivor(class ASurvivorBase_C* SurvivorBase);
	void OpenChestNotRespawn();
	void CloseChest();
	void OpenChest();
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void MulticastSpawnParticle(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, Engine_EPSCPoolMethod PoolingMethod);
	void ReceiveDestroyed();
	void SetOutlineCustomSencilValue(int NewValue);
	void SetOutlineVisible(bool bValue);
	void CheckDropPoint();
	void ExecuteUbergraph_ItemChest(int EntryPoint);
	void OnChestOpen__DelegateSignature(class AItemChest_C* Chest);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
