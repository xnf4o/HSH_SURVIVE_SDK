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

// BlueprintGeneratedClass GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C
// 0x0058 (FullSize[0x04A8] - InheritedSize[0x0450])
class UGA_PA_HunterBellePortalNew_C : public UGA_PA_HunterBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                MontageStart;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageEnd;                                                // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               hunter;                                                    // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      BloodPortal;                                               // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PerkDistance;                                              // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U9KF[0x4];                                     // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             DirectionCheck;                                            // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_PA_HunterBellePortalNew.GA_PA_HunterBellePortalNew_C");
		return ptr;
	}



	void FilterSurvivorActive(TArray<class ASurvivorBase_C*>* Survivors, TArray<class ASurvivorBase_C*>* Return);
	void FindSelection_New(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, struct FHitResult* OutHit, bool* IsFound);
	void FindSelectionInCamera_New(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, bool* IsFound);
	struct FVector ConvertAxisToDirection(const struct FVector& Axis, const struct FRotator& ActorRotation);
	bool TraceBox_WithDirection(class ASurvivorBase_C* survivor, float Distance, float Radius, float HalfHeight, const struct FVector& Direction, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
	void CheckLocation(class ASurvivorBase_C* survivor, bool* bIsCanTeleport, struct FHitResult* OutHit, bool* IsHit);
	struct FRotator FindLookAtWithExcludeHight(class AActor* Origin, class AActor* Target);
	bool IsBehideWall(const struct FVector& StartLocation, const struct FVector& EndLocation, struct FHitResult* OutHit);
	void CanTeleportTo(class ASurvivorBase_C* survivor, class ASurvivorBase_C** Reutrn, struct FHitResult* OutHit, bool* IsFound);
	void FindSelectionInCamera(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, bool* IsFound);
	void FillterDistance(TArray<class ASurvivorBase_C*>* Survivors, float Distance, TArray<class ASurvivorBase_C*>* Output_Get);
	void IsInRange(TArray<class ASurvivorBase_C*>* Survivors, class AHunterBase_C* hunter, float Distance, bool* Return);
	class AActor* SpawnBloodPortal(class AHunterBase_C* hunter);
	void FindFloor(const struct FHitResult& OutHit, bool IsHit, struct FVector* FloorLocation, bool* IsHitFloor, bool* IsHidePlace);
	void FindLocationTeleport(const struct FHitResult& OutHit, bool IsHit, struct FTransform* Transform);
	bool TraceBox(class ASurvivorBase_C* survivor, float Distance, TEnumAsByte<E_TraceDirection_E_TraceDirection> Direction, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, struct FHitResult* OutHit);
	void GetSurvivor(class AHunterBase_C* hunter, TArray<class ASurvivorBase_C*>* Return);
	void ClearRef();
	void FindSelection(TArray<class ASurvivorBase_C*>* Survivors, class ASurvivorBase_C** Reutrn, struct FHitResult* OutHit, bool* IsFound);
	void EventReceived_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_936E2D2A43728D3908C4F2ABF06446FE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_7410C53B4FA8A847895F2CA35C07136D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void FIndFloorAndTeleport(const struct FHitResult& OutHit, bool IsHit);
	void K2_ActivateAbility();
	void Teleport();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_PA_HunterBellePortalNew(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
