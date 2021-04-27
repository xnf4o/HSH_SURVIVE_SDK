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

// BlueprintGeneratedClass GA_Water.GA_Water_C
// 0x0034 (FullSize[0x0484] - InheritedSize[0x0450])
class UGA_Water_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                MaleMontage;                                               // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                FemaleMontage;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Cost;                                                      // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_Water.GA_Water_C");
		return ptr;
	}



	void CalculateMagnitude(float Durability, float Max, float* Magnitude);
	void EventReceived_D7EB39DF43AE8D26BFF2908AB5C5E736(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_D7EB39DF43AE8D26BFF2908AB5C5E736(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_D7EB39DF43AE8D26BFF2908AB5C5E736(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_D7EB39DF43AE8D26BFF2908AB5C5E736(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_D7EB39DF43AE8D26BFF2908AB5C5E736(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Water(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
