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

// BlueprintGeneratedClass PerkHandleHunterComponent.PerkHandleHunterComponent_C
// 0x0110 (FullSize[0x02A8] - InheritedSize[0x0198])
class UPerkHandleHunterComponent_C : public UPerkHandleComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0198(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bInitiliaze;                                               // 0x01A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UYUR[0x7];                                     // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGA_PA_HunterWithCharge_C*>           RefGameplayAbilityWithCharge;                              // 0x01B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentCharge;                                             // 0x01C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCharge;                                                 // 0x01C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPrisonerChainEnd;                                        // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bPrisonerChainEnable;                                      // 0x01D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZJZO[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorBase_C*                             SurvivorChain;                                             // 0x01E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AChainSplineActor_C*                         ChainActor;                                                // 0x01E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DurationPrisoner;                                          // 0x01F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedPrisoner;                                             // 0x01F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimerPrisoner;                                             // 0x01F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayPrisoner;                                             // 0x01FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaitDurationPrisoner;                                      // 0x0200(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimerWaitPrisoner;                                         // 0x0204(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartLocation;                                             // 0x0208(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // 0x0214(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HookLocation;                                              // 0x0220(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraLocation;                                            // 0x022C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AHSHCharacterBase*>                   HitActors;                                                 // 0x0238(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<E_ChainState_E_ChainState>             ChainState;                                                // 0x0248(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SRS9[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_AnimationWithPair                        SurAnimHooked;                                             // 0x0250(0x0018) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                              TremorSmashDistance;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShowBody;                                               // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R21C[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     HookBound;                                                 // 0x0270(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsHookSuccess;                                            // 0x027C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XPBL[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SectionHookSuccess;                                        // 0x0280(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionHookFailure;                                        // 0x0288(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPrisonerHookSuccess;                                     // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                MoveSurvivorTimer;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PerkHandleHunterComponent.PerkHandleHunterComponent_C");
		return ptr;
	}



	bool FindSurvivorForStaminaDrain(class AHSHCharacterSurvivorBase** Character);
	void IsCanHookInFrontOf(const struct FVector& Location, bool* Return);
	void IsHookSuccess(bool* IsSuccess);
	void ChainTraceActor_Camera(class AActor* ChainActor, class AHSHCharacterBase* hshcharacter, const struct FVector& Start, const struct FVector& Target, class ASurvivorBase_C** HitActor, struct FVector* HitLocation);
	void UpdateShowSpecter();
	void DebugHitActors();
	void ChainTraceActor(const struct FVector& Start, const struct FVector& Target, class AActor** HitActor, struct FVector* HitLocation);
	void FilterHitActors(TArray<class AHSHCharacterBase*>* Array, TArray<class AHSHCharacterBase*>* Filter, TArray<class AHSHCharacterBase*>* FilterdArray);
	void GetGameplayAbilityCharge(int* CurrentCharge, int* MaxCharge);
	void EndPrisonerChain();
	void UpdatePrisonerChainShoot(float DeltaTime);
	void ClientEndAbility(bool bHookSuccess);
	void Draw(const struct FVector& Location);
	void MulticastTryRotate();
	void Rotate();
	void MulticastTryMoveSurvivor();
	void MoveSurvivor();
	void StartHookAnimation();
	void StartHookTarget(float StunSurvivorTime, float DelayAfterHookSuccess, float DurationPrisoner, const struct FVector& HookBound, const struct FVector& CameraLocation, const struct FVector& CameraForward, float Length, const struct FName& SectionHookSuccess, const struct FName& SectionHookFailure);
	void DebugDraw(const struct FVector& Location);
	void ClearPrisonerChainValue();
	void CheckApplyStatusWhenAttacked(const struct FPerkHandleData& PerkHandleData);
	void InitiliazeOnServer();
	void ReceiveTick(float DeltaSeconds);
	void CheckApplyStatusWhenEndAttack(const struct FPerkHandleData& PerkHandleData);
	void AddedHitActor(class AHSHCharacterBase* HitActor);
	void CheckonDamaged(const struct FPerkHandleData& PerkHandleData);
	void ShowSoundIcon(class AHSHCharacterBase* Character);
	void ExecuteUbergraph_PerkHandleHunterComponent(int EntryPoint);
	void OnPrisonerHookSuccess__DelegateSignature();
	void OnPrisonerChainEnd__DelegateSignature(bool bHookSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
