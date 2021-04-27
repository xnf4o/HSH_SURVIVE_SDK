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

// BlueprintGeneratedClass AbilityTrapComponent.AbilityTrapComponent_C
// 0x01C5 (FullSize[0x0305] - InheritedSize[0x0140])
class UAbilityTrapComponent_C : public UAbilityBaseComponentNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0140(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MaxTime;                                                   // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCount;                                                  // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentCount;                                              // 0x0158(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KYAU[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 PreviewMesh;                                               // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionStep1;                                              // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionStep2;                                              // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceFirst;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceSecond;                                            // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CancelDistance;                                            // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffsetForward;                                             // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      TagetClass;                                                // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             CameraCache;                                               // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Owner;                                                     // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              PreviewSelectTargetPlace;                                  // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FHitResult                                  TraceHit;                                                  // 0x01B0(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit;                                                     // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QLZL[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APreviewMeshActor_C*                         PreviewMeshActorCache;                                     // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPlacing;                                                 // 0x0248(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OV18[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CachePlaceLocation;                                        // 0x024C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCasting;                                                 // 0x0258(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XCAL[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnProgressFinish;                                          // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UStaticMesh*                                 PreviewCompleteMesh;                                       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APreviewMeshActor_C*                         PreviewCompleteMeshActorCache;                             // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PreviewMeshActorOffset;                                    // 0x0280(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PreviewMeshCompleteActorOffset;                            // 0x028C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFinish;                                                  // 0x0298(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T087[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerController*                           PlayerController;                                          // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressManagerComponent_C*                 ProgressManagerCache;                                      // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATrapTargetActor_C*>                  CacheTargetActor;                                          // 0x02B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ATrapTargetActor_C*                          TraceTargetActor;                                          // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTwoStep;                                                  // 0x02C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bOneStepWithProgress;                                      // 0x02C9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsSnapHeightScale;                                        // 0x02CA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bHideOtherTargetTrap;                                      // 0x02CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KQMP[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ATrapTargetActor_C*>                  CacheAllTrapTarget;                                        // 0x02D0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnTrapTargetUpdateList;                                    // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsCanSkillCheck;                                           // 0x02F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> CacheResult;                                               // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TXNZ[0x2];                                     // 0x02F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       OnMontageSkillFailed;                                      // 0x02F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       OnMontageSkillPerfect;                                     // 0x02FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActivate;                                               // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass AbilityTrapComponent.AbilityTrapComponent_C");
		return ptr;
	}



	void IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return);
	void GetFinishSection(struct FName* Return);
	void GetSkilcheckFailedSection(struct FName* Return);
	void GetSkilcheckGreatSection(struct FName* Return);
	void GetSkilcheckPerfectSection(struct FName* Return);
	void IsForceSkillCheck_(bool* bForceSkillCheck);
	void IsNotCancelProgressonMove(bool* IsNotCancel);
	void CanUseProgress(bool* UseProgress);
	void GetSpeedSkillCheck(float* Speed);
	void IsResetResult_(bool* IsReset);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	void IsCanHelp_(bool* IsCan);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void IsPlayerProgress(bool* Return);
	void AddedFirstTrapTarget();
	void TryGetOwner(class AHSHCharacterBase** Owner);
	void DrawUpdateOneStep(class ATrapTargetActor_C* TrapTarget);
	void IsShouldHide(class ATrapTargetActor_C* TrapTargetActor, bool* bIsShouldHide);
	void ResetTrapTargetMaterial(class ATrapTargetActor_C* TrapTarget);
	void GetSectionStep(int Step, struct FName* Section);
	float FindHightValue(const struct FVector& InVec, const struct FVector& InVec2);
	void DrawTargetMeshViewWithDistance(class ATrapTargetActor_C* TrapTarget);
	void DrawTargetMeshViewWithTrace(const struct FHitResult& Hit, bool Condition);
	void HidePreviewCompleteMeshView();
	void DrawPreviewCompleteMeshView(class ATrapTargetActor_C* TargetActor);
	void IsOutOfRange_(class ATrapTargetActor_C* TargetActor, bool* OutOfRange_, class AActor** PairTargetActor);
	void CanPlaceTrapWithNearTarget_(class ATrapTargetActor_C* TargetActor, bool* Can_, class ATrapTargetActor_C** PairTargetActor);
	void IsOwnerMoving(bool* IsMoving_);
	void HidePreviewMeshView();
	void SpawnPreviewMesh(const struct FTransform& SpawnTransform, class AActor* Owner, class UStaticMesh* NewMesh, class APreviewMeshActor_C** Actor);
	void PlaceTrapToTarget();
	void CanPlaceTrapWithLineTrace_(const struct FHitResult& TraceHit, bool IsHit, class UClass* TargetClass, bool* Can_, class AActor** TargetActor);
	bool UpdateLineTraceInfomation(struct FHitResult* OutHit);
	struct FVector GetPlayerLocation();
	void GetFloorLocation(const struct FHitResult& Hit, bool Condition, struct FVector* FloorVector, struct FRotator* Rotator);
	void DrawPreviewMeshView(const struct FHitResult& Hit, bool Condition);
	void UpdateComponent(float DeltaTime);
	void DeactivateAbilityComponent();
	void ActivateAbilityComponent(int Count, class UStaticMesh* PreviewMesh, class UStaticMesh* PreviewCompleteMesh, class AActor* Owner, float MaxCasting, bool bTwoStep, bool bOneStepWithProgress, bool bSnapHeight, bool bIsCanSkillCheck);
	void OnCannotProgress(class AHSHCharacterBase* hshcharacter);
	void OnStartProgressAction(class AHSHCharacterBase* hshcharacter);
	void EnableTargetOutline();
	void ClientDisableTargetOutline();
	void ClientUpdateTargetOutline();
	void ClientEnableTargetOutline();
	void DisableTargetOutline();
	void SpawnActor(class AActor* Owner, class UStaticMesh* NewMesh);
	void ServerJumpToMontage(const struct FName& SectionName);
	void MulticastJumpToMontage(const struct FName& SectionName);
	void ServerCount();
	void CancelProgress();
	void ServerStopMovement();
	void MulticastStopMovement();
	void ReceiveTick(float DeltaSeconds);
	void UseAbilityComponent();
	void EndAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags);
	void BeginAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags);
	void OnProgressFinish_Event();
	void ClientDestroyPreview();
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void ClearTraceTargetActor();
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void ClientStopMovement(class ACharacter* Character);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void ForcePlaceTrap(class ATrapTargetActor_C* TrapActor);
	void ExecuteUbergraph_AbilityTrapComponent(int EntryPoint);
	void OnTrapTargetUpdateList__DelegateSignature();
	void OnProgressFinish__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
