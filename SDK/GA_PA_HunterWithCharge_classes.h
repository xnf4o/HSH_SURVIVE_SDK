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

// BlueprintGeneratedClass GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C
// 0x002C (FullSize[0x047C] - InheritedSize[0x0450])
class UGA_PA_HunterWithCharge_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCharge;                                                 // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Charge;                                                    // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInitialize;                                               // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UBUJ[0x3];                                     // 0x0471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurruntTime;                                               // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C");
		return ptr;
	}



	void GetGameplayAbilityCharge(int* CurrentCharge, int* MaxCharge);
	void EventReceived_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_8B73BACE47A0D82EB26F258F5A811729(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void Update(float DeltaSeconds);
	void OnEventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void Initialize();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_PA_HunterWithCharge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
