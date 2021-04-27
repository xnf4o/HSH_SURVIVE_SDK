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

// BlueprintGeneratedClass GA_Potion.GA_Potion_C
// 0x0038 (FullSize[0x0488] - InheritedSize[0x0450])
class UGA_Potion_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_AnimationGender                          Montage;                                                   // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Cost;                                                      // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_Potion.GA_Potion_C");
		return ptr;
	}



	void IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return);
	void GetFinishSection(struct FName* Return);
	void GetSkilcheckFailedSection(struct FName* Return);
	void GetSkilcheckGreatSection(struct FName* Return);
	void GetSkilcheckPerfectSection(struct FName* Return);
	void IsForceSkillCheck_(bool* bForceSkillCheck);
	void IsNotCancelProgressonMove(bool* IsNotCancel);
	void CanUseProgress(bool* UseProgress);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	void IsCanHelp_(bool* IsCan);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void IsResetResult_(bool* IsReset);
	void GetSpeedSkillCheck(float* Speed);
	void CalculateMagnitude(float Current, float Require, float Have, float Max, float* Magnitude);
	void CalculateUseDurability(float Current, float Max, float* DurabilityUse);
	void EventReceived_629D1652452EE973C9FBDE8A744F8D17(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_629D1652452EE973C9FBDE8A744F8D17(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_629D1652452EE973C9FBDE8A744F8D17(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_629D1652452EE973C9FBDE8A744F8D17(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_629D1652452EE973C9FBDE8A744F8D17(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void OnCannotProgress(class AHSHCharacterBase* hshcharacter);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void OnStartProgressAction(class AHSHCharacterBase* hshcharacter);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Potion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
