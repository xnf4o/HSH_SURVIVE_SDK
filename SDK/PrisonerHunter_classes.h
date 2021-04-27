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

// BlueprintGeneratedClass PrisonerHunter.PrisonerHunter_C
// 0x0088 (FullSize[0x0EA4] - InheritedSize[0x0E1C])
class APrisonerHunter_C : public AHunterBase_C
{
public:
	unsigned char                                      UnknownData_0OT0[0x4];                                     // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E20(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             A_BelleIdle01_EN_Cue;                                      // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             A_Belle_Cutter_SlidingLoop_Cue;                            // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSurviveTimeline_Curve_3DC717A94AE7BDCDEAE3C1902D6A3CC6; // 0x0E48(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSurviveTimeline_Alpha_3DC717A94AE7BDCDEAE3C1902D6A3CC6; // 0x0E4C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             MoveSurviveTimeline__Direction_3DC717A94AE7BDCDEAE3C1902D6A3CC6; // 0x0E50(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1YPS[0x7];                                     // 0x0E51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          MoveSurviveTimeline;                                       // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Attacking;                                                 // 0x0E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              CrossHairLenght;                                           // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZWMS[0x4];                                     // 0x0E74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorBase_C*                             CacheSurvive;                                              // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CacheStartHook;                                            // 0x0E80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CacheEndHook;                                              // 0x0E8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HookTargetLocation;                                        // 0x0E98(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PrisonerHunter.PrisonerHunter_C");
		return ptr;
	}



	bool NearCamera(class AActor* Actor, float Offset);
	void GetHeavyAtkGE(class UClass** GameplayEffect);
	void MoveSurviveTimeline__FinishedFunc();
	void MoveSurviveTimeline__UpdateFunc();
	void TraceFloor();
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void PlayDestroyItemMontage();
	void OnDisableAttackCollision();
	void ReceiveTick(float DeltaSeconds);
	void OnEnableAttackCollision();
	void SendMeleeDistance(float Distance, float Width);
	void TryToMoveSurvive(class ASurvivorBase_C* SurvivorChain);
	void ExecuteUbergraph_PrisonerHunter(int EntryPoint);
	void Attacking__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
