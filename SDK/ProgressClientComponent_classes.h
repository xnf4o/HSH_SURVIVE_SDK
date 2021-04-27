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

// BlueprintGeneratedClass ProgressClientComponent.ProgressClientComponent_C
// 0x0150 (FullSize[0x0250] - InheritedSize[0x0100])
class UProgressClientComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerController*                           PlayerController;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInitialize;                                               // 0x0118(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_76XA[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressManagerComponent_C*                 ProgressManager;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_ProgressComponent_C*                 ProgessWidget;                                             // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_SkillcheckProgressComponent_C*       SkillCheckWidget;                                          // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnFinishProgress;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCancelProgress;                                          // 0x0148(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUpdateProgress;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPerfectResult;                                           // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnGreatResult;                                             // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFailResult;                                              // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFinishOrCancelProgress;                                  // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bShowTutorialFailed;                                       // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9MPD[0x3];                                     // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastProgress;                                              // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSkillCheck;                                             // 0x01B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6BC8[0x7];                                     // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     CacheTarget;                                               // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnRequestProgress;                                         // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FS_IsProgress                               S_IsProgress;                                              // 0x01D0(0x0040) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCommitSkillCheck;                                        // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTriggerRitualActivity;                                   // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              progressTime;                                              // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O7NE[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ProgressActor;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnStopProgress;                                            // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ProgressClientComponent.ProgressClientComponent_C");
		return ptr;
	}



	float GetBonusDecreaseProgress(class AHSHCharacterBase* Character);
	void DebugRequestProgress(class APlayerController* PlayerController, class UObject* Target);
	void OnRep_S_IsProgress();
	void SetUnlockCamera();
	void SetLockCamera();
	void IsSkillCheck(bool* bIsSkillCheck);
	void GetProgressIncrement(const struct FSProgressInfo& ProgressInfo, float DeltaTime, float* progress);
	void IsCanProgress(class UObject* Interaction, bool* CanProgress);
	void IsProgress(bool* Return);
	void PlayGreatSound(const struct FVector& Location);
	void PlayFailedSound(const struct FVector& Location);
	void PlayFinishSound(const struct FVector& Location);
	void RequestProgress(class AActor* Target, float DefualtProgressTime, bool DefualtSkillCheck);
	void RequestProgressHandle(class UObject* Target, float progress);
	void PlayPerfectSound(const struct FVector& Location);
	void StopProgress(float WithDecreasePercent);
	void StopProgressHandle(bool IsFinish, float progress);
	void SkillCheckHandle(float Speed, class UObject* Target);
	void FinishProgressHandle(bool bIsLockCamera);
	void CommitResult(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result);
	void CommitResultHandle();
	void RemoveTargetProgress(TArray<class UObject*> Target);
	void ServerFinishProgress(bool bIsLockCamera);
	void ServerStopProgress(bool bIsFinish);
	void CannotProgressHandle();
	void ServerStopMontage(class ASurvivorBase_C* InputPin);
	void RequestProgressWithObject(class UObject* Target, float DefualtProgressTime, bool DefualtSkillCheck);
	void SkillCheckClient(float Speed);
	void RequestSkillCheck();
	void CheckonDamaged(class AHSHCharacterBase* Character);
	void RemoveProgressWidget(bool bIsFinish, float progress);
	void RemoveSkillCheck();
	void OnPlayerRequestProgress(class UObject* ProgressActor, float progress);
	void OnPlayerStopProgress(float progress);
	void ReceiveBeginPlay();
	void Initialize(class APlayerController* PlayerController);
	void ReceiveTick(float DeltaSeconds);
	void OnSnapSucesss();
	void ExecuteUbergraph_ProgressClientComponent(int EntryPoint);
	void OnStopProgress__DelegateSignature(float progress);
	void OnTriggerRitualActivity__DelegateSignature(float ContributePercent);
	void OnCommitSkillCheck__DelegateSignature(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result);
	void OnRequestProgress__DelegateSignature(class UObject* Target, float progress);
	void OnFinishOrCancelProgress__DelegateSignature();
	void OnFailResult__DelegateSignature();
	void OnGreatResult__DelegateSignature();
	void OnPerfectResult__DelegateSignature();
	void OnUpdateProgress__DelegateSignature();
	void OnCancelProgress__DelegateSignature();
	void OnFinishProgress__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
