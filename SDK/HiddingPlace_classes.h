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

// BlueprintGeneratedClass HiddingPlace.HiddingPlace_C
// 0x0187 (FullSize[0x0850] - InheritedSize[0x06C9])
class AHiddingPlace_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_M5KC[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ChildActor;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LookAtLocationSur;                                         // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapLocationSur;                                           // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LookAtLocation;                                            // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapLocation;                                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LocationCamera;                                            // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               BoxTutorial;                                               // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioSurvivor;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             OutLocation;                                               // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         Outer;                                                     // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             InLocation;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         Inner;                                                     // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_AudioVolume_Volume_5CADEE744FC57E3F761066A537FEEFB7; // 0x0750(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_AudioVolume__Direction_5CADEE744FC57E3F761066A537FEEFB7; // 0x0754(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7VW2[0x3];                                     // 0x0755(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_AudioVolume;                                      // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Destructible;                                              // 0x0760(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsHaveSkillCheck;                                         // 0x0761(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_HiddingPlaceType_E_HiddingPlaceType> HiddingType;                                               // 0x0762(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_27ID[0x5];                                     // 0x0763(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorBase_C*                             HiddenSurvivor;                                            // 0x0768(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnInnerAnimationFinish;                                    // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnOuterAnimationFinish;                                    // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                                  BreakSound;                                                // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Sound;                                                     // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairSound>                        PairSounds;                                                // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AHSHCharacterBase*>                   ShowTutorialList;                                          // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                TimerTutorial;                                             // 0x07C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsDestroyPending;                                         // 0x07C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5G22[0x7];                                     // 0x07C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDestructibleMesh*                           DestruchMesh;                                              // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADestructHiddenPlaceActor_C*                 SpawnedDestruct;                                           // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDamageStrength;                                         // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDamageStrength;                                         // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinSkillCheckTime;                                         // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSkillCheckTime;                                         // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSkillCheckTime;                                     // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomSkillCheckTime;                                      // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8YNK[0x4];                                     // 0x07FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStruct_DestructAnimation>           DestructionAnimation;                                      // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CooldownTimer;                                             // 0x0810(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CooldownMax;                                               // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCooldown;                                               // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A2IA[0x7];                                     // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_AnimationWithPair                        MontageExit;                                               // 0x0820(0x0018) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsDestroy;                                                // 0x0838(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_8B7P[0x7];                                     // 0x0839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                MaleMontageExit;                                           // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                FemaleMontageExit;                                         // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HiddingPlace.HiddingPlace_C");
		return ptr;
	}



	void GetDestructible(bool* Destructable);
	void OnRep_bIsDestroy();
	void OnRep_HiddenSurvivor();
	bool GetSpriteIndicator(bool bIsHunter, class UTexture2D** Sprite);
	void GetControlCameraActor(class APawn** Pawn);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void UpdateAutoSkillCheck(float DeltaTime);
	void IsCanExitHidden(bool* bIsCanInteract);
	struct FTransform GetCameraTransfrom();
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void PlayInnerAnimation(float* Lenght);
	void PlayOuterAnimation(float* Lenght);
	void Timeline_AudioVolume__FinishedFunc();
	void Timeline_AudioVolume__UpdateFunc();
	void OnHunterChangeHiddenState(bool InHiddenState);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void MulticastStartNewAudio();
	void DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy);
	void SetDestructible(bool Destructible);
	void ServerPlayInnnerAnimation();
	void MulticastPlayInnerAnimation();
	void ServerPlayOuterAnimation();
	void MulticastPlayOuterAnimation();
	void ServerDisableHideable();
	void MulticastDisableHideable();
	void SetHiddenSurvivor(class ASurvivorBase_C* HiddenSurvivor);
	void ShowTutorial();
	void BndEvt__BoxTutorial_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Interaction(class AHSHCharacterBase* Character);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SpawnDestructAnimation();
	void CommitCooldown();
	void DestroyThis();
	void ExecuteUbergraph_HiddingPlace(int EntryPoint);
	void OnOuterAnimationFinish__DelegateSignature();
	void OnInnerAnimationFinish__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
