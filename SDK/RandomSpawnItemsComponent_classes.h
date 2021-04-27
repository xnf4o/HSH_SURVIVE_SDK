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

// BlueprintGeneratedClass RandomSpawnItemsComponent.RandomSpawnItemsComponent_C
// 0x005C (FullSize[0x015C] - InheritedSize[0x0100])
class URandomSpawnItemsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class ULimitItemsBaseComponent_C*                  LimitItemComponent;                                        // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LimitSpawnPoint;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AWVJ[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASpawnItemActor_C*>                   Items;                                                     // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ASpawnItemActor_C*>                   ItemsUnique;                                               // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FPrimaryAssetId                             CacheID;                                                   // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                Counting;                                                  // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountingFixed;                                             // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountingDefault;                                           // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass RandomSpawnItemsComponent.RandomSpawnItemsComponent_C");
		return ptr;
	}



	void SpawnItem(class UClass* Class, class ASpawnItemActor_C* SpawnActor);
	void FilterType(TArray<class ASpawnItemActor_C*>* Items, TArray<class ASpawnItemActor_C*>* ReturnDefualt, TArray<class ASpawnItemActor_C*>* ReturnFixed);
	void InitializeSpawnItemsNew();
	void RandomSpawnItems(TArray<class ASpawnItemActor_C*>* spawnitems, TArray<class ASpawnItemActor_C*>* ReturnItems);
	void Initialize(class ULimitItemsBaseComponent_C* LimitItemBase);
	void InitializeSpawnItemsLatent();
	void ExecuteUbergraph_RandomSpawnItemsComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
