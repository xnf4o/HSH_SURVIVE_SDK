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

// BlueprintGeneratedClass CatSurvivorMinion.CatSurvivorMinion_C
// 0x00D0 (FullSize[0x0B30] - InheritedSize[0x0A60])
class ACatSurvivorMinion_C : public ASurvivorMinionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A60(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPingSurvivorComponent_C*                    PingSurvivorComponent;                                     // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProgressClientComponent_C*                  ProgressClientComponent;                                   // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            OutlineRadius;                                             // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOutlineComponent_C*                         OutlineComponent;                                          // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractComponent_C*                        InteractComponent;                                         // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh4;                                               // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh3;                                               // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh2;                                               // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh5;                                               // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           CharacterOwner;                                            // 0x0AD0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bFlagPendingDestroy;                                       // 0x0AD8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_4ISZ[0x7];                                     // 0x0AD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_Pickable                                 CurrentItem;                                               // 0x0AE0(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    PPI_Blur;                                                  // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LifeTime;                                                  // 0x0B10(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F0R6[0x4];                                     // 0x0B14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIngame_CatLifeTime_C*                       WidgetCatLifeTime;                                         // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bMovingHoldForward;                                        // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bMovingHoldRight;                                          // 0x0B21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5U85[0x6];                                     // 0x0B22(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerFootStep;                                             // 0x0B28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass CatSurvivorMinion.CatSurvivorMinion_C");
		return ptr;
	}



	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void StopMovement();
	void CheckMovingHold();
	void GetCurrentPickable(struct FS_Pickable* CurrentPickable);
	void InitializeCameraPostProcess();
	void GetOverlapingCharacter(TArray<class AActor*>* OutActors);
	void OnDropItemEvent();
	void OnCollectItemEvent();
	void GetCurrentItemID(struct FPrimaryAssetId* AssetID);
	void OnRep_bFlagPendingDestroy();
	void InpActEvt_Survivor_Interact_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_General_Ping_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_1(const struct FKey& Key);
	void CollectItem(class APickableItemBase_C* Item, const struct FPrimaryAssetId& ItemId);
	void DropItem(bool DropItemOnly);
	void RemoveItem();
	void ShowRespawnLocation(bool bIsShow);
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void OwingInitInteract();
	void TryDestroySelf();
	void OnTakeDamaged();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Action_DropItem();
	void Action_Interact();
	void Action_CancelBody();
	void ServerDestroyBody();
	void Action_Ping();
	void Action_PingEnemy();
	void Action_SkillCheck();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
	void OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser);
	void BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Interact(class AInteractionBase_C* Interact);
	void ClientRotationToLocation(class APlayerController* PlayerController, const struct FVector& BaseRelativeLocation, const struct FVector& TargetRelativeLocation, bool bEaseOut, bool bEaseIn, float OverTime);
	void ClientMoveTo(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime);
	void SnapToInteraction(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, const struct FVector& TargetLookAtLocation, bool bEaseOut, bool bEaseIn, float OverTime);
	void MulticastCloseBodyBlock(float Duration);
	void SetMesh(bool bCustomDepth, int Index);
	void ReceiveTick(float DeltaSeconds);
	void ClientInteract(class AInteractionBase_C* Interact);
	void SimulateNotifyFootStep();
	void ExecuteUbergraph_CatSurvivorMinion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
