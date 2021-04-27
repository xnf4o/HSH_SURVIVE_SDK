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

// BlueprintGeneratedClass HrkHunter.HrkHunter_C
// 0x008C (FullSize[0x0EA8] - InheritedSize[0x0E1C])
class AHrkHunter_C : public AHunterBase_C
{
public:
	unsigned char                                      UnknownData_L3M1[0x4];                                     // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E20(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             WaterVomit;                                                // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             ActivePerkLoop;                                            // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             A_BelleIdle01_EN_Cue;                                      // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_WaterVomit;                                              // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_WaterBall;                                               // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_PA;                                                      // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_Alpha_83A642FA409C7AA0170C1FB439A55FD7;         // 0x0E68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_83A642FA409C7AA0170C1FB439A55FD7;    // 0x0E6C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7VZN[0x3];                                     // 0x0E6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOnStateChanged;                                           // 0x0E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X6AJ[0x7];                                     // 0x0E79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                ActivePerkAtkHitMontage;                                   // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ActivePerkHitReactAnimMontage;                             // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsTransform;                                              // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RZS1[0x7];                                     // 0x0E91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               BondName;                                                  // 0x0E98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HrkHunter.HrkHunter_C");
		return ptr;
	}



	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void SetVisibilityWaterball(bool bNewVisibility);
	bool GetIsOnPhaseShift();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ProjectileAttackSuccess();
	void ReceiveBeginPlay();
	void PlayDestroyItemMontage();
	void OnDisableAttackCollision();
	void ReceiveTick(float DeltaSeconds);
	void MulticastPrayActivePerkLoopSound(bool Play);
	void OnEnableAttackCollision();
	void OnStateChanged(bool bIsTransfrom);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SendMeleeDistance(float Distance, float Width);
	void MulticastEnterHiddenEffect();
	void MulticastExitHiddenEffect();
	void OnHitReaction(class UAnimMontage* AnimMontage, TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction);
	void ExecuteUbergraph_HrkHunter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
