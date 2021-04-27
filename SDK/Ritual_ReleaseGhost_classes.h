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

// BlueprintGeneratedClass Ritual_ReleaseGhost.Ritual_ReleaseGhost_C
// 0x0168 (FullSize[0x0BB8] - InheritedSize[0x0A50])
class ARitual_ReleaseGhost_C : public ARitualBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A50(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    NailEffect;                                                // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Incense;                                                   // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             IKIncensePointer;                                          // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Nail;                                                      // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal1;                                                    // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             IKSkullNailPointer;                                        // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_MERGED_RitualStand;                                     // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ParticlePoint;                                             // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             BarrierAudio;                                              // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             PrayingAudio;                                              // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Particle;                                                  // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        NailOnHead;                                                // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             IKHeadGhostPointer;                                        // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Tutorial;                                                  // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene1;                                                    // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FallenGhost_RopeAlpha_7889F4A940C21DE35114FD906E5E6A51;    // 0x0AE8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FallenGhost_Alpha_7889F4A940C21DE35114FD906E5E6A51;        // 0x0AEC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FallenGhost__Direction_7889F4A940C21DE35114FD906E5E6A51;   // 0x0AF0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6XV3[0x7];                                     // 0x0AF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FallenGhost;                                               // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_3_Alpha_E1F07F114A07D5FBBE66C3B08D20113F;         // 0x0B00(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_3__Direction_E1F07F114A07D5FBBE66C3B08D20113F;    // 0x0B04(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OHWU[0x3];                                     // 0x0B05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_4;                                                // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_2_GhostDissolve_5D44D4E04E0A6385EB8CB89BFE914805; // 0x0B10(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_5D44D4E04E0A6385EB8CB89BFE914805;    // 0x0B14(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KQ0H[0x3];                                     // 0x0B15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_GhostAlpha_5F26118E4C222F14BD8B40ADE7893C52;    // 0x0B20(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_RopeAlpha_5F26118E4C222F14BD8B40ADE7893C52;     // 0x0B24(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_5F26118E4C222F14BD8B40ADE7893C52;    // 0x0B28(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5OGJ[0x7];                                     // 0x0B29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexPlace;                                                // 0x0B38(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2T3X[0x4];                                     // 0x0B3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ARitualRope_C*>                       Redrope;                                                   // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FS_AnimationGender>                  PlaceStart;                                                // 0x0B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ProgressPlaceTimeSecond;                                   // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     IKLocation;                                                // 0x0B64(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               FallenPose;                                                // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               StabPose;                                                  // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Sound;                                                     // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairSound>                        PairSounds;                                                // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_PairSound>                        HunterPairSounds;                                          // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  HunterScreamSound;                                         // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsPrayingSoundActive;                                     // 0x0BB0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_L9TT[0x3];                                     // 0x0BB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                State;                                                     // 0x0BB4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass Ritual_ReleaseGhost.Ritual_ReleaseGhost_C");
		return ptr;
	}



	void OnRep_State();
	void OnRep_bIsPrayingSoundActive();
	bool IsCenterCharacter(class AHSHCharacterBase* hshcharacter);
	void GetPlaceIndex(const struct FPrimaryAssetId& Item, int* Index);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return);
	void GetPingText(struct FText* PingText);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void GetSnapIKLocation(bool* bIsSnap, TEnumAsByte<Enum_IKHand_Enum_IKHand>* IKTarget, struct FVector* IKRight, struct FVector* IKLeft);
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void PlaceItem(class AHSHCharacterBase* Character, bool* Return);
	void CheckPlaceItem(class AHSHCharacterBase* Character, bool* Return, int* Array_Index);
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void FallenGhost__FinishedFunc();
	void FallenGhost__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Hunter_Play_UISound(class USoundBase* Sound);
	void MultiCastAllPlayerUISound(class USoundBase* Sound);
	void MulticastLoopSound(bool Play, class UAudioComponent* Audio, float Volume, float FadeInDuration, float FadeOutDuration);
	void LoopSound(bool Play, class UAudioComponent* Audio, float Volume, float FadeInDuration, float FadeOutDuration);
	void OnFinishEvent(class AHSHCharacterBase* Character);
	void ReceiveBeginPlay();
	void OnPlaceEachItem(const struct FPrimaryAssetId& AssetID, class AHSHCharacterBase* Character);
	void SetOutlineVisible(bool bValue);
	void SpawnRitualEffect();
	void ApplyEffectToActor();
	void OnOverlapHunter(class AActor* OverlappedActor, class AActor* OtherActor);
	void SetOutlineCustomSencilValue(int NewValue);
	void MultiCastChangePlaceItemState(int State);
	void BndEvt__Tutorial_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void PlaySoundEffect();
	void MulticastToggleVisibilityOnFinished();
	void ReceiveDestroyed();
	void DisableRitual();
	void FallingGhost();
	void PlaySoundDone(int Index);
	void MulticastPlaceNail();
	void OnStartProgressAction(class AHSHCharacterBase* hshcharacter);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void UpdateIndicator(class AActor* Character);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void MulticastFilterSurvivorPraying(class AHSHCharacterBase* hshcharacter);
	void ChangePlaceItemState(int State);
	void ExecuteUbergraph_Ritual_ReleaseGhost(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
