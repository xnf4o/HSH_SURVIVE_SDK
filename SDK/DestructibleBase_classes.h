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

// BlueprintGeneratedClass DestructibleBase.DestructibleBase_C
// 0x0098 (FullSize[0x0761] - InheritedSize[0x06C9])
class ADestructibleBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_1CQM[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LookAtLocation;                                            // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapInvertLocation;                                        // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapLocation;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleComponent*                      DestructableMesh;                                          // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteractBox;                                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Destructible;                                              // 0x0708(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_57HQ[0x7];                                     // 0x0709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TransInteracterBox;                                        // 0x0710(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                              HalfHeight;                                                // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  BreakSound;                                                // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnDestruct;                                                // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsHiddenState;                                            // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass DestructibleBase.DestructibleBase_C");
		return ptr;
	}



	void GetDestructible(bool* Destructable);
	void OnRep_Destructible();
	void IsObjectReverse(class AActor* Actor, bool* Return);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void UserConstructionScript();
	void SetDestructible(bool Destructible);
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHunterChangeHiddenState(bool InHiddenState);
	void SetOutlineVisible(bool bValue);
	void DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy);
	void MulticastHunterDisableUIAndCollision(class AHunterBase_C* hunter);
	void DestructMesh(class AHunterBase_C* Causer);
	void ReceiveBeginPlay();
	void PlayBreakSound();
	void ExecuteUbergraph_DestructibleBase(int EntryPoint);
	void OnDestruct__DelegateSignature(class AHSHCharacterBase* hshcharacter);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
