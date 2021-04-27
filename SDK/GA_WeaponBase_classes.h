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

// BlueprintGeneratedClass GA_WeaponBase.GA_WeaponBase_C
// 0x006C (FullSize[0x04BC] - InheritedSize[0x0450])
class UGA_WeaponBase_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_AnimationGender                          Montage;                                                   // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cost;                                                      // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsRandom;                                                 // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KAOO[0x3];                                     // 0x0475(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_AnimationGender>                  RandomMontage;                                             // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_WeaponAnimation>                  RandomAnimation;                                           // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  LightATKSound;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HeavyATKSound;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seed;                                                      // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_WeaponBase.GA_WeaponBase_C");
		return ptr;
	}



	void UnlockCameraToFront();
	void LockCameraToFront();
	class UAnimMontage* GetAnimationMontage();
	void OnPlayMontage();
	void UpdateItem();
	void SendMeleeDistance();
	void EventReceived_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_41C7215442396D32690029AD68DF406C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void PlayHeavySound(class AActor* Target);
	void PlayLightSound(class AActor* Target);
	void ExecuteUbergraph_GA_WeaponBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
