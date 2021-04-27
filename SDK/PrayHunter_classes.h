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

// BlueprintGeneratedClass PrayHunter.PrayHunter_C
// 0x0094 (FullSize[0x0EB0] - InheritedSize[0x0E1C])
class APrayHunter_C : public AHunterBase_C
{
public:
	unsigned char                                      UnknownData_2BJ9[0x4];                                     // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E20(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_WaterVomit;                                              // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_WaterBall;                                               // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_PA;                                                      // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             WaterVomit;                                                // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             ActivePerkLoop;                                            // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             A_BelleIdle01_EN_Cue;                                      // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              BlendCamera_Alpha2_0DDA543B4318B41B28192D985B9D52A4;       // 0x0E68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendCamera_Alpha_0DDA543B4318B41B28192D985B9D52A4;        // 0x0E6C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BlendCamera__Direction_0DDA543B4318B41B28192D985B9D52A4;   // 0x0E70(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3CNO[0x7];                                     // 0x0E71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BlendCamera;                                               // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOnStateChanged;                                           // 0x0E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TP0P[0x7];                                     // 0x0E81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               BondName;                                                  // 0x0E88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                ActivePerkAtkHitMontage;                                   // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsTransform;                                              // 0x0EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OBNO[0x7];                                     // 0x0EA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                ActivePerkHitReactAnimMontage;                             // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PrayHunter.PrayHunter_C");
		return ptr;
	}



	bool GetIsOnPhaseShift();
	void SetVisibilityWaterball(bool Visibility);
	float PlayAttackHitAnimation(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void GetHeavyAtkGE(class UClass** GameplayEffect);
	void UserConstructionScript();
	void BlendCamera__FinishedFunc();
	void BlendCamera__UpdateFunc();
	void OnStateChanged(bool bIsTransfrom);
	void ProjectileAttackSuccess();
	void ReceiveBeginPlay();
	void PlayDestroyItemMontage();
	void OnDisableAttackCollision();
	void ReceiveTick(float DeltaSeconds);
	void OnEnableAttackCollision();
	void MulticastPrayActivePerkLoopSound(bool Play);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SendMeleeDistance(float Distance, float Width);
	void MulticastEnterHiddenEffect();
	void MulticastExitHiddenEffect();
	void OnHitReaction(class UAnimMontage* AnimMontage, TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction);
	void OnEndSpecter();
	void ExecuteUbergraph_PrayHunter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
