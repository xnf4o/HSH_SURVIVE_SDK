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

// BlueprintGeneratedClass ExecutionSpecterComponent.ExecutionSpecterComponent_C
// 0x0090 (FullSize[0x0190] - InheritedSize[0x0100])
class UExecutionSpecterComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AHunterBase_C*                               hunter;                                                    // 0x0110(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorBase_C*                             SurvivorTarget;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraBase_C*                               CacheCamera;                                               // 0x0120(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              GE_Weapon;                                                 // 0x0128(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              ATKDmg;                                                    // 0x0138(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAttach;                                                  // 0x013C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3UXE[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCameraSuccess;                                           // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                RandomSet;                                                 // 0x0150(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O1BN[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_ExecuionSet>                      MontageSets;                                               // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BlendInTime;                                               // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendOutTime;                                              // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ExecutionState_E_ExecutionState>     State;                                                     // 0x0170(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LV0S[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIngame_NotifyExecution_C*                   Widget;                                                    // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsDebug;                                                  // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T3QM[0x3];                                     // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DebugMontageIndex;                                         // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsChecking;                                               // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsHoldForwardBeforeCheck;                                 // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsHoldRightBeforeCheck;                                   // 0x018A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_090Z[0x1];                                     // 0x018B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CancelChecking;                                            // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ExecutionSpecterComponent.ExecutionSpecterComponent_C");
		return ptr;
	}



	struct FTransform GetExecutionCameraTransform();
	void ClearCheckMovement();
	void SetCheckMovement();
	void CheckExecutionCancel(float Value, bool IsForward);
	void GetState(TEnumAsByte<E_ExecutionState_E_ExecutionState>* State);
	void OnRep_bIsContinue();
	void GetHunterMontage(class UClass* CharacterClass, class UAnimMontage** HunterMontage);
	void RandomSetNumber();
	void CheckingExecution_New(class ASurvivorBase_C* survivor, const struct FGameplayTagContainer& GameplayTagContainer, bool* CanExercute_);
	void GetSurvivorMontage(class UClass* CharacterClass, class UAnimMontage** SurvivorMontage, float* Distance, float* BlendInTime, float* BlendOutTime, TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera>* SurvivorCamera);
	void IsCanExecute(const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, bool* CanExercute_, class AActor** HitActor);
	void ClientStartChecking();
	void ClientClearChecking();
	void PrepareCamera();
	void MoveCamera(class AActor* Actor, float BlendTime, TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void SetCameraLocation();
	void ReceiveTick(float DeltaSeconds);
	void Continue();
	void Cancel();
	void ClearValue();
	void ShowUI();
	void HideUI();
	void CheckingCancel();
	void UpdateCameraTransfrom();
	void EndMontage();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Initialize();
	void ExecuteUbergraph_ExecutionSpecterComponent(int EntryPoint);
	void OnCameraSuccess__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
