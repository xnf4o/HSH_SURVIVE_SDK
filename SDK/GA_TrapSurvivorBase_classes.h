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

// BlueprintGeneratedClass GA_TrapSurvivorBase.GA_TrapSurvivorBase_C
// 0x0070 (FullSize[0x04C0] - InheritedSize[0x0450])
class UGA_TrapSurvivorBase_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_AnimationGender                          Montage;                                                   // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCount;                                                  // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxCasting;                                                // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeDuration;                                              // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KUPV[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 PreviewMesh;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 PreviewCompleteMesh;                                       // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      TrapActorClass;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CacheCount;                                                // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cost;                                                      // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTwoStep;                                                  // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOneStepWithProgress;                                      // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsSnapHeight;                                             // 0x04B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsCanSkillCheck;                                          // 0x04B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P1VK[0x4];                                     // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATrapActorBase_C*                            TrapRef;                                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_TrapSurvivorBase.GA_TrapSurvivorBase_C");
		return ptr;
	}



	void GetPairTrapTarget(TArray<class ATrapTargetActor_C*>* Array, TArray<class ATrapTargetActor_C*>* MakeArray);
	void ChangeInteractMode(class AActor* Owner, TEnumAsByte<E_InteractState_E_InteractState> State);
	void GetHangPoint(TArray<class ATrapTargetActor_C*>* TargetActor, TArray<struct FTransform>* HangPoint);
	void GoToSection(const struct FName& SectionName);
	struct FRotator GetRotation(class AActor* Actor);
	struct FVector GetLocation(class AActor* Actor);
	void EventReceived_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_B119D4DF4AF0D70862CF2BBCF702EDC4(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_TrapSurvivorBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
