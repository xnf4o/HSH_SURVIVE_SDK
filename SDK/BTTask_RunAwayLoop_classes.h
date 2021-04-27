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

// BlueprintGeneratedClass BTTask_RunAwayLoop.BTTask_RunAwayLoop_C
// 0x00A4 (FullSize[0x014C] - InheritedSize[0x00A8])
class UBTTask_RunAwayLoop_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AHSHCharacterHunterBase*>             HunterCache;                                               // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocationKey;                                         // 0x00F0(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                          // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0Z2X[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      RunAwayModeKey;                                            // 0x0120(0x0028) (Edit, BlueprintVisible)
	float                                              TickTimer;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_RunAwayLoop.BTTask_RunAwayLoop_C");
		return ptr;
	}



	void DebugPath_Actor(TArray<class AActor*>* Source);
	void TrimTarget(TArray<class AActor*>* Source, float Percent, TArray<class AActor*>* Return);
	void SortTargetPoint_WithScore(TMap<class AActor*, float> Source, TArray<class AActor*>* Actors);
	void DebugPath(TMap<class AActor*, float> Source);
	void GivePathScore(TArray<class AActor*>* Source, class APawn* Pawn, TMap<class AActor*, float>* TargetWithScore);
	void IsPlayerHigher(const struct FVector& StartLocation, TArray<class AActor*>* Targets, bool* IsHigher);
	void GetShouldWalkPath(const struct FVector& StartLocation, class AHunterBase_C* hunter, TArray<class AActor*>* Targets, class AActor** Target);
	void GetHunter(class AHunterBase_C** Output);
	void SortTargetPoint(TArray<class AActor*>* Source, TArray<class AActor*>* Actors);
	bool IsNearHunter(class APawn* OwnerPawn, float HeightOffset, float NearOffset);
	void SearchPath(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_RunAwayLoop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
