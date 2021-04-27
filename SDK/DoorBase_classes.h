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

// BlueprintGeneratedClass DoorBase.DoorBase_C
// 0x0197 (FullSize[0x0860] - InheritedSize[0x06C9])
class ADoorBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_SDXJ[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               BoxCheckOverlap;                                           // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ChildActorNavModify;                                       // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapInvertLocation;                                        // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LookAtLocation;                                            // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapLocation;                                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio;                                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Dooractor;                                                 // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SetterDoor;                                                // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_DoorState_E_DoorState>               State;                                                     // 0x0730(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CWU2[0x7];                                     // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CacheIndicatorCharacter;                                   // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           CacheCharacter;                                            // 0x0740(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // 0x0748(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationClose;                                             // 0x074C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotationOpen;                                              // 0x0758(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsReverse;                                                 // 0x0764(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RVJJ[0x3];                                     // 0x0765(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CacheAlpha;                                                // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CacheIndicatorLocation;                                    // 0x076C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DoorSpeed;                                                 // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOpen_;                                                   // 0x077C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsRevert_;                                                 // 0x077D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TJHG[0x2];                                     // 0x077E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  AudioOpening;                                              // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  AudioOpenSuccess;                                          // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  AudioClosing;                                              // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  AudioCloseSuccess;                                         // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Indicator_Open;                                            // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Indicator_Close;                                           // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestructibleMesh*                           DestruchMesh;                                              // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADestructHiddenPlaceActor_C*                 SpawnedDestruct;                                           // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDamageStrength;                                         // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDamageStrength;                                         // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanSuvivorInteract;                                       // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YVH4[0x3];                                     // 0x07CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASwitchActorBase_C*>                  Switch;                                                    // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FScriptMulticastDelegate                    OnDestroy;                                                 // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCloseDoor;                                               // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnOpenDoor;                                                // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bCanHunterInteract;                                        // 0x0810(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QYXO[0x7];                                     // 0x0811(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  AudioBreak;                                                // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_DestructAnimation>           DestructionAnimation;                                      // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsDoorCanAtk;                                             // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsCollisionEnable;                                        // 0x0831(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bIsHiddenState;                                            // 0x0832(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MUJG[0x5];                                     // 0x0833(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHunterDoorStun;                                          // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSurvivorDoorStun;                                        // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                TimerCollision;                                            // 0x0858(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass DoorBase.DoorBase_C");
		return ptr;
	}



	void GetDestructible(bool* Destructable);
	void SetDoorChannel(TArray<class USceneComponent*>* SceneComponent, TEnumAsByte<Engine_ECollisionChannel> Channel);
	void SetDoorCollision(TArray<class USceneComponent*>* SceneComponent, TEnumAsByte<Engine_ECollisionEnabled> NewType);
	void SetDither(TArray<class USceneComponent*>* SceneComponent, bool Active);
	void SetCollisionMesh(bool Enable);
	void OnRep_bIsCollisionEnable();
	void HunterCheckDoorAttack(class AActor* hunter);
	void SurvivorCheckDoorAttack(class AActor* survivor);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void CanInteraction_(bool* Can_);
	void OnCloseDoorSuccess();
	void OnOpenDoorSuccess();
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void OnRep_State();
	void UpdateDoorRotation(float Alpha);
	void InverseXAxis(const struct FVector& Location, struct FVector* Return);
	void IsObjectReverse(class AActor* Actor, bool* Return);
	void UpdateOpenDoor(float DeltaTime);
	void UpdateCloseDoor(float DeltaTime);
	void OnRep_Alpha();
	void UserConstructionScript();
	void SetDestructible(bool Destructible);
	void MulticastSpawnParticle(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, Engine_EPSCPoolMethod PoolingMethod);
	void BndEvt__Dooractor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHunterChangeHiddenState(bool InHiddenState);
	void ForceDisableUI(TEnumAsByte<E_Role_E_Role> Role);
	void ForceEnableUI(TEnumAsByte<E_Role_E_Role> Role);
	void PlayOnOpening();
	void PlayOnOpenSuccess();
	void PlayOnClosing();
	void PlayOnCloseSuccess();
	void PlayAudio(class USoundBase* NewSound);
	void Interaction(class AHSHCharacterBase* Character);
	void OnInteraction(class AHSHCharacterBase* Character);
	void DoorOpen(class AHSHCharacterBase* CacheCharacter);
	void DoorClose(class AHSHCharacterBase* CacheCharacter);
	void ReceiveTick(float DeltaSeconds);
	void EnableCollision();
	void DisableCollision();
	void ReceiveBeginPlay();
	void ShowOutline(class AActor* PlayerCharacter);
	void HideOutline(class AActor* PlayerCharacter);
	void DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy);
	void MulticastBreakDoorSound();
	void OnOpenSuccess();
	void OnCloseSuccess();
	void SpriteChangeOnShow(bool bIsHunter);
	void SpawnDestructMesh(class ACharacter* Causer);
	void ApplyDamageToDestructMesh(class ACharacter* Causer);
	void SpawnDestructAnimation(bool IsReverse);
	void DestroyDoor(class AHunterBase_C* hunter);
	void TryCheckEnableCollision();
	void ExecuteUbergraph_DoorBase(int EntryPoint);
	void OnSurvivorDoorStun__DelegateSignature();
	void OnHunterDoorStun__DelegateSignature();
	void OnOpenDoor__DelegateSignature();
	void OnCloseDoor__DelegateSignature();
	void OnDestroy__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
