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

// BlueprintGeneratedClass AchievementComponent.AchievementComponent_C
// 0x0021 (FullSize[0x0121] - InheritedSize[0x0100])
class UAchievementComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSTR_Achievement>                    DT_Achievement;                                            // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInitialize;                                              // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass AchievementComponent.AchievementComponent_C");
		return ptr;
	}



	void UnlockAchievement(TEnumAsByte<E_Achievement_E_Achievement> Achievment, int Value);
	void InitAchievement();
	void EndGameAchievementUnlock();
	void CheckRitualCompleteCount(int* RitualCount);
	void SetStats(const struct FName& StatName, int ProgressToIncrease);
	void SetAchievement(const struct FName& Achievement);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AchievementComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
