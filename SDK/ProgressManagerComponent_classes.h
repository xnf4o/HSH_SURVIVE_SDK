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

// BlueprintGeneratedClass ProgressManagerComponent.ProgressManagerComponent_C
// 0x0019 (FullSize[0x0129] - InheritedSize[0x0110])
class UProgressManagerComponent_C : public UProgressManagerComponentNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0110(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bInitiailize;                                              // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H4YC[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EveryTimeCheck;                                            // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCacheSkillCheck;                                          // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ProgressManagerComponent.ProgressManagerComponent_C");
		return ptr;
	}



	bool GetHalfSpell(const struct FSProgressInfo& ProgressInfo);
	void RemoveAIController(TArray<class AController*>* Array, class AController* Element, TArray<class AController*>* Output);
	void AddedAIController(TArray<class AController*>* Array, class AController* Element, TArray<class AController*>* Output);
	void DebugRequestProgressAI(class AController* Controller, class UObject* Target);
	void DebugRequestProgress(class APlayerController* PlayerController, class UObject* Target);
	void GetProgressRate(int PlayerNumber, float* Rate);
	void DebugProgressTime(const struct FSProgressInfo& ProgressInfo);
	void DebugProgressList();
	void CommitFailedOnCancel(bool IsSkillCheck, class APlayerController* PlayerController);
	float GetProgressTime(class UObject* Target, float Defualt);
	void GetIsSkillCheck(class UObject* Target, bool Defualt, bool* Return);
	void GetProgressInfoWithTarget(class AActor* Target, bool* bIsContain, struct FSProgressInfo* Output);
	void IsContainTarget(class UObject* Target, bool* Return, int* PlayerInteract);
	void IsCanProgress(class APlayerController* PlayerController, class UObject* Interaction, bool* CanProgress);
	void GetPlayerExpertise(const struct FSProgressInfo& ProgressInfo, float* Percent);
	void GetProgressLeft(const struct FSProgressInfo& ProgressInfo, float* ProgressLeft);
	void GetResultValue(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AController* Controller, float* Value);
	void ChangeBoolean(TArray<bool>* Array, int Index, bool Value, TArray<bool>* Output);
	void GetPlayerProgressInfo(class APlayerController* PlayerController, bool* bIsContain, struct FSProgressInfo* ProgressInfo, int* Index);
	void RemoveBoolean(TArray<bool>* Array, int Index, TArray<bool>* Output);
	void AddedBoolean(TArray<bool>* Array, bool Element, TArray<bool>* Output);
	void AddedPlayerController(TArray<class AController*>* Array, class AController* Element, TArray<class AController*>* Output);
	void CountPlayerNotSkillCheck(const struct FSProgressInfo& ProgressInfo, int* PlayerNotSkillCheck);
	void RemovePlayerController(TArray<class AController*>* Array, class AController* Element, TArray<class AController*>* Output);
	void DebugSkillCheck(const struct FSProgressInfo& ProgressInfo, float Duration);
	void SkillCheckChance(float ProgressPercent, float ProgressFinishTime, int progressProbability, float BanSkillCheck, bool* bIsSkillCheckChance);
	void DebugProgress(const struct FSProgressInfo& ProgressInfo, float Duration);
	void Initialize();
	void ReceiveTick(float DeltaSeconds);
	void RequestProgress(class AController* Controller, class UObject* Target, float DefualtProgressTime, bool DefualtSkillCheck);
	void CancelProgress(class AController* Controller, float WithDecreasePercent);
	void UpdateProgress(float DeltaTime);
	void FinishProgress(const struct FSProgressInfo& ProgressInfo);
	void SkillCheckCommit(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AController* Controller);
	void RemoveTargetProgress(TArray<class UObject*> Target);
	void CheckPlayerMovement(TArray<class AController*> Controller, TArray<bool> IsSkillCheck);
	void MultiCastPlayPerfectSound(const struct FVector& Location);
	void MultiCastPlayGreatSound(const struct FVector& Location);
	void MultiCastPlayFailedSound(const struct FVector& Location);
	void CannotProgress(class AController* Controller, class UObject* Interaction);
	void ForceSkillCheckIfProgress(class AHSURPlayerController_C* PlayerController);
	void RequestProgressAI(class AAIController* AIController, class UObject* Target);
	void ResetDataValue();
	void ExecuteUbergraph_ProgressManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
