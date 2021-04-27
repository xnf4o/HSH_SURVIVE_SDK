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

// BlueprintGeneratedClass LootDropPreviewItem.LootDropPreviewItem_C
// 0x0061 (FullSize[0x0399] - InheritedSize[0x0338])
class ALootDropPreviewItem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        CurrencyText;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        ItemAmountText;                                            // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        ItemNameText;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                RarityColor;                                               // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEnabled;                                                // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LootDropPreviewItem.LootDropPreviewItem_C");
		return ptr;
	}



	void SpawnLootdropEffect(int Rarity, const struct FVector& Scale);
	void SetupLootDropSkinPreview(class USkeletalMesh* PreviewSkeletalMesh, class UAnimSequence* previewAnimation, const struct FText& previewItemName, int Index, int Rarity);
	void ReceiveTick(float DeltaSeconds);
	void SetupLootDropPreview(class UStaticMesh* PreviewMesh, const struct FText& previewItemName, const struct FText& previewItemAmount, int Index, int Rarity);
	void ReceiveBeginPlay();
	void SetupLootGrantCurrency(int Currency);
	void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void SetTextVisibility(bool Visibility);
	void ExecuteUbergraph_LootDropPreviewItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
