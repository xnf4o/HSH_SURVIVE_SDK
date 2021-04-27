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

// BlueprintGeneratedClass LootDropPreviewActor.LootDropPreviewActor_C
// 0x0082 (FullSize[0x03BA] - InheritedSize[0x0338])
class ALootDropPreviewActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        DebugTextRender;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FS_LootDrop                                 LootDropData;                                              // 0x0368(0x0048) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                      CachePreview;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoActivate;                                              // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               SpawnSkip;                                                 // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LootDropPreviewActor.LootDropPreviewActor_C");
		return ptr;
	}



	void FocusOnPreviewItem(class AActor* LD_Base);
	void CheckIsOnFocus(bool* bIsOnLootdropFocus);
	void SetVisibleLabel(bool bNewVisibility);
	void PreviewSkin();
	void PreviewSticker();
	void PreviewProfile();
	void PreviewHead();
	void PreviewBack();
	void SpawnSoundLootdrop();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void SetupAmulet(bool bIsNewItem);
	void SetUpSkin();
	void SetupSticker();
	void SetUpProfile();
	void SetupAccHead();
	void SetupAccBack();
	void ReceiveBeginPlay();
	void Initialize();
	void ExecuteUbergraph_LootDropPreviewActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
