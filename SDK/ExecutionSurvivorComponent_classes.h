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

// BlueprintGeneratedClass ExecutionSurvivorComponent.ExecutionSurvivorComponent_C
// 0x005A (FullSize[0x015A] - InheritedSize[0x0100])
class UExecutionSurvivorComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class ASurvivorBase_C*                             survivor;                                                  // 0x0110(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraBase_C*                               CacheCamera;                                               // 0x0118(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAttach;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isExecution;                                               // 0x0121(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OSEX[0x6];                                     // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCameraSuccess;                                           // 0x0128(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AHunterBase_C*                               HunterTarget;                                              // 0x0138(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SurvivorMontage;                                           // 0x0140(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldMoveToTarget;                                       // 0x0148(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WA3G[0x3];                                     // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance;                                                  // 0x014C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendInTime;                                               // 0x0150(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendOutTime;                                              // 0x0154(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ExecutionState_E_ExecutionState>     State;                                                     // 0x0158(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera>   CameraMode;                                                // 0x0159(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ExecutionSurvivorComponent.ExecutionSurvivorComponent_C");
		return ptr;
	}



	struct FTransform GetExecutionCameraTransform();
	void SetUpMontageData(class UAnimMontage* SurvivorMontage, float Distance, float BlendInTime, float BlendOutTime, TEnumAsByte<E_ExecutionCamera_E_ExecutionCamera> ExecutionMode);
	void OnRep_State();
	void GetState(TEnumAsByte<E_ExecutionState_E_ExecutionState>* State);
	void UpdateCameraTransfrom();
	void TryCloseProgress();
	void IsCanExecution(bool* Return);
	void CheckingExecution(class AHunterBase_C* hunter, const struct FGameplayTagContainer& GameplayTagContainer);
	void MoveCamera(class AActor* Actor, float BlendTime, TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void SetCameraLocation();
	void ReceiveTick(float DeltaSeconds);
	void PrepareCamera();
	void CameraFade(float Duration);
	void ToggleShowHUD(bool Show);
	void Continue();
	void ClearValue();
	void Cancel();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Initialize();
	void ExecuteUbergraph_ExecutionSurvivorComponent(int EntryPoint);
	void OnCameraSuccess__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
