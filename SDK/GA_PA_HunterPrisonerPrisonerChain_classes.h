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

// BlueprintGeneratedClass GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C
// 0x0060 (FullSize[0x04B0] - InheritedSize[0x0450])
class UGA_PA_HunterPrisonerPrisonerChain_C : public UGA_PA_HunterBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorBase_C*                             RefSurvivor;                                               // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hook_Duration;                                             // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hook_Speed;                                                // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hook_WaitDuration;                                         // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hook_DelaySurvivorAfterHook;                               // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceLength;                                               // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CooldownHookMiss;                                          // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHookSuccess;                                              // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GHBX[0x3];                                     // 0x0489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     HookBound;                                                 // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraLocation;                                            // 0x0498(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraForward;                                             // 0x04A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C");
		return ptr;
	}



	void StartHookTarget();
	void FindSurvivor(float TraceLength, const struct FVector& HalfSize, class ASurvivorBase_C** survivor, bool* IsHit);
	void EventReceived_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_34CEA72B4AD100A32916948C478401D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnEndDelegate(bool bHookSuccess);
	void CommitPrisonerCooldown(bool bHookSuccess);
	void ExecuteUbergraph_GA_PA_HunterPrisonerPrisonerChain(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
