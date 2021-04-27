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

// BlueprintGeneratedClass TrapTargetActor.TrapTargetActor_C
// 0x0040 (FullSize[0x0378] - InheritedSize[0x0338])
class ATrapTargetActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ChildActor;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Placeable;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ATrapTargetActor_C*                          PairTarget;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass TrapTargetActor.TrapTargetActor_C");
		return ptr;
	}



	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void SetInteractColor(const struct FLinearColor& Color);
	void OnClearUpdate();
	void GetWidth(float* Return_Height);
	void GetHeight(float* Return_Height);
	void DrawLine();
	void UserConstructionScript();
	void EnableUI(class AActor* PlayerCharacter);
	void DisableUI(class AActor* PlayerCharacter);
	void ShowIndicator(class AActor* PlayerCharacter);
	void HideIndicator(class AActor* PlayerCharacter);
	void RefreshUI();
	void ShowOutline(class AActor* PlayerCharacter);
	void HideOutline(class AActor* PlayerCharacter);
	void ReceiveBeginPlay();
	void UpdateOneStep();
	void ExecuteUbergraph_TrapTargetActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
