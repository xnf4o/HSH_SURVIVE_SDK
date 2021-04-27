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

// BlueprintGeneratedClass GA_Cat.GA_Cat_C
// 0x0018 (FullSize[0x0468] - InheritedSize[0x0450])
class UGA_Cat_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_Cat.GA_Cat_C");
		return ptr;
	}



	struct FTransform GetSpawnTransfrom();
	void UpdateItem();
	void EventReceived_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_F0DCE78043A14E77EEF97BB37FB5325E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Cat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
