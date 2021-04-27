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

// BlueprintGeneratedClass GA_ProjectileBase.GA_ProjectileBase_C
// 0x0081 (FullSize[0x04D1] - InheritedSize[0x0450])
class UGA_ProjectileBase_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_AnimationGender                          Montage;                                                   // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsRandom;                                                 // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EHCB[0x7];                                     // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_AnimationGender>                  RandomMontage;                                             // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_WeaponAnimation>                  RandomAnimation;                                           // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsConfirmOneSpawn;                                        // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MY1E[0x7];                                     // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cost;                                                      // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // 0x04BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seed;                                                      // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlagIsSpawn;                                               // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZBMI[0x3];                                     // 0x04C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AssistBound;                                               // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlagIsLockLuckyShot;                                       // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_ProjectileBase.GA_ProjectileBase_C");
		return ptr;
	}



	void OnEventPlayMontage();
	void Debug(class AActor* Actor);
	struct FVector TraceTarget(const struct FVector& Start, const struct FVector& Forward, float DefualtDistance);
	void GetAnimationMontage(class UAnimMontage** Return);
	void GetSpawnLocation(class AActor* Actor, const struct FName& InSocketName, struct FVector* Location, struct FRotator* Rotation);
	bool Change(float Percent);
	void UpdateItem();
	void OnEventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	struct FRotator GetRotation(class AActor* Actor);
	struct FVector GetLocation(class AActor* Actor);
	void EventReceived_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_5011CA2745EDF3960A85889E69BE0041(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_ProjectileBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
