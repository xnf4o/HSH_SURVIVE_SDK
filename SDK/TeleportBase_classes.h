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

// BlueprintGeneratedClass TeleportBase.TeleportBase_C
// 0x01E7 (FullSize[0x08B0] - InheritedSize[0x06C9])
class ATeleportBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_49Q0[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             SnapLookAt;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapLocation;                                              // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh2;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_FireCandle021;                                           // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_FireCandle02;                                            // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             TargetPoint;                                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_B4F9094D4F8AB86A078DBEB616D1C306;         // 0x0728(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_B4F9094D4F8AB86A078DBEB616D1C306;    // 0x072C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NYUP[0x3];                                     // 0x072D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SearchTeleport;                                            // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsInitialize;                                              // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XHY9[0x3];                                     // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              progressTime;                                              // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormalCantPlace;                                 // 0x0750(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 SlateBrushHoverCantPlace;                                  // 0x07D8(0x0088) (Edit, BlueprintVisible)
	bool                                               IsSpawned;                                                 // 0x0860(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_7BIL[0x7];                                     // 0x0861(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Character;                                                 // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  IndicatorPlace;                                            // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  IndicatorCantPlace;                                        // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASpawnTargetActor_C*>                 SpawnTargetActors;                                         // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ALight*>                              Lights;                                                    // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FScriptMulticastDelegate                    OnRespawn;                                                 // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass TeleportBase.TeleportBase_C");
		return ptr;
	}



	void OnRep_IsSpawned();
	void CanUseProgress(bool* UseProgress);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	bool IsPlayerHaveSoul(class AHSHCharacterBase* Character);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void GetSpawnTransform(TArray<class ASpawnTargetActor_C*>* SpawnTargetActors, struct FTransform* Transform);
	void UpdateIndicator();
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void IsResetResult_(bool* IsReset);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void GetSpeedSkillCheck(float* Speed);
	void IsCanHelp_(bool* IsCan);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	struct FTransform GetTargetTransform();
	void GetNearCenterOfCamera(class UCameraComponent* Camera, float* NearValue);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void MultiCastResurrectSound();
	void Interaction(class AHSHCharacterBase* Character);
	void OnInteraction(class AHSHCharacterBase* Character);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void MulticastDisable(class AActor* PlayerCharacter);
	void OnFinish(class AHSHCharacterBase* hshcharacter);
	void ShowIndicator(class AActor* PlayerCharacter);
	void HideIndicator(class AActor* PlayerCharacter);
	void SpriteChangeOnShow(bool bIsHunter);
	void DissolveAndDestroy();
	void DisableLight(float DeltaTime);
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void ReceiveBeginPlay();
	void ShowOutlineOnPickSoul(bool bIsShow);
	void ExecuteUbergraph_TeleportBase(int EntryPoint);
	void OnRespawn__DelegateSignature();
	void SearchTeleport__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
