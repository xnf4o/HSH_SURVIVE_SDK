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

// BlueprintGeneratedClass RitualBase.RitualBase_C
// 0x0387 (FullSize[0x0A50] - InheritedSize[0x06C9])
class ARitualBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_ZE79[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             SnapLocation2;                                             // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             SnapLocation1;                                             // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteractBox;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LookAtLocation;                                            // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             SnapLocation;                                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCeremonyComplete_;                                       // 0x0710(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CRUG[0x3];                                     // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProgressPlaceTime;                                         // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProgressRitualTime;                                        // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProgressSpeed;                                             // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOnAutoCeremony;                                           // 0x0720(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V83F[0x7];                                     // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSHCharacterBase*                           FinishCharacter;                                           // 0x0728(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PlaceItemSuccess>                 PrimaryItemID;                                             // 0x0730(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify)
	struct FSlateBrush                                 SlateBrushNormalCantPlace;                                 // 0x0740(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 SlateBrushHoverCantPlace;                                  // 0x07C8(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 SlateBrushNormalCeremony;                                  // 0x0850(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 SlateBrushHoverCeremony;                                   // 0x08D8(0x0088) (Edit, BlueprintVisible)
	class AHSURGameState_C*                            GameState;                                                 // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  INDCantPlace;                                              // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  INDCanPlace;                                               // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  INDCeremony;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Character;                                                 // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlaceItem;                                               // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsShouldSnap;                                             // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bAutoCeremonyAfterPlace;                                   // 0x0999(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RRKU[0x6];                                     // 0x099A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AHSHCharacterBase*>                   InteractCharacter;                                         // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bUseParentStopFinishProgress;                              // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2UG6[0x3];                                     // 0x09B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AutoCeremonySection;                                       // 0x09B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPlayerInteract;                                           // 0x09BC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_OLSS[0x3];                                     // 0x09BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPerfromSuccess;                                          // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsCanCeremony;                                            // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3DRB[0x7];                                     // 0x09D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, int>                                     LocationSlotPlayerID;                                      // 0x09D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnInteract;                                                // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsEnable;                                                  // 0x0A38(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_CY84[0x7];                                     // 0x0A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRepItemID;                                               // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass RitualBase.RitualBase_C");
		return ptr;
	}



	void OnRep_PrimaryItemID();
	bool IsHaveAnyItemsPlace();
	void OnRep_IsEnable();
	void AssignID(int PlayerId, class AActor* Character, bool* bAssignSuccess, int* Output);
	void FindEmptySlot(TArray<int>* Result);
	void RemoveID(int Key);
	void NearestLocation(TArray<int>* Slot, class AActor* Character, int* EmptyIndex);
	void LocationList(int Index, class USceneComponent** SnapLocation);
	void OnRep_bPlayerInteract();
	void RemovePing();
	void GetPingText(struct FText* PingText);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void CanUseProgress(bool* UseProgress);
	void GetNextPlaceitem(bool* bIsComplete, struct FPrimaryAssetId* AssetID, int* Array_Index);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void UpdateIndicator(class AActor* Character);
	void TryGetGameState(class AHSURGameState_C** GameState);
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void IsResetResult_(bool* IsReset);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void GetSpeedSkillCheck(float* Speed);
	void IsCanHelp_(bool* IsCan);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	void PlaceItem(class AHSHCharacterBase* Character, bool* Return);
	void IsCanCeremony(bool* Return);
	void CheckPlaceItem(class AHSHCharacterBase* Character, bool* Return, int* Array_Index);
	void UserConstructionScript();
	void ShowOutline(class AActor* PlayerCharacter);
	void HideOutline(class AActor* PlayerCharacter);
	void ShowIndicator(class AActor* PlayerCharacter);
	void HideIndicator(class AActor* PlayerCharacter);
	void Interaction(class AHSHCharacterBase* Character);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void OnFinishEvent(class AHSHCharacterBase* Character);
	void MulticastDisableRitual(class AActor* PlayerCharacter, int State);
	void OnInteraction(class AHSHCharacterBase* Character);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void DisableRitual();
	void OnRitualCompleteAchievement(class AHSURPlayerController_C* PlayerController);
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void MulticastSpawnParticle(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, Engine_EPSCPoolMethod PoolingMethod);
	void OnOtherFinishEvent(class AHSHCharacterBase* Character);
	void ExecuteUbergraph_RitualBase(int EntryPoint);
	void OnRepItemID__DelegateSignature(class ARitualBase_C* Ritual);
	void OnInteract__DelegateSignature(class AHSHCharacterBase* Character);
	void OnPerfromSuccess__DelegateSignature();
	void OnPlaceItem__DelegateSignature(const struct FPrimaryAssetId& AssetID, class AHSHCharacterBase* Character);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
