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

// BlueprintGeneratedClass LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C
// 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
class ULootBoxPreviewManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              lootDropList;                                              // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      ClassToSpawn;                                              // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C");
		return ptr;
	}



	void NewTryGetLootDropTarget(int Amount, int Index, class ALootDropTarget_C** Output_Get);
	void TryGetLootDropTarget(int Amount, TArray<class ALootDropTarget_C*>* Output_Get);
	void DestroyLootDropActor();
	void SpawnLootDrop(const struct FString& Type, class UObject* Object, int Index, const struct FString& Name, int Amount, int Currency, int Rarity);
	void SpawnLootDropNew(const struct FS_LootDrop& LootDropData, int Amount);
	void ExecuteUbergraph_LootBoxPreviewManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
