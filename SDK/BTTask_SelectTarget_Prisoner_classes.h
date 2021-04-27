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

// BlueprintGeneratedClass BTTask_SelectTarget_Prisoner.BTTask_SelectTarget_Prisoner_C
// 0x0138 (FullSize[0x01E0] - InheritedSize[0x00A8])
class UBTTask_SelectTarget_Prisoner_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      SelfActor;                                                 // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentTarget;                                             // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PreviousTarget;                                            // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Distance;                                                  // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      IsTargetSurvivor;                                          // 0x0180(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ChaseTime;                                                 // 0x01A8(0x0028) (Edit, BlueprintVisible)
	float                                              DistanceToChaseSurvivor;                                   // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondToDropChase;                                         // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToChasePreviousSurvivor;                           // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToDetectHiding;                                    // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_SelectTarget_Prisoner.BTTask_SelectTarget_Prisoner_C");
		return ptr;
	}



	void OnSurvivorMakeSoundIcon(class AActor* Actor);
	void GetBestChoiceSoundIcon(class APawn* ControlledPawn, class AActor** BestChoiceSoundIcon);
	void CanChasePreviousTarget(class APawn* ControlledPawn, bool* CanChasePreviousTarget);
	void OnSurvivorVent();
	void ShouldTargetSurvivor(class APawn* ControlledPawn, bool Survivors);
	void IsTargettingSurvivor(bool* IsTargettingSurvivor);
	void ExecuteFailed();
	void GetCanActivePerk(class APawn* ControlledPawn, bool* CanActivePerk);
	void GetCanSpecter(class APawn* ControlledPawn, bool* CanSpecter);
	void GetBestChoiceRitual(class APawn* ControlledPawn, class AActor** BestChoiceRitual);
	void GetBestChoiceSurvivor(class APawn* ControlledPawn, class APawn** BestChoiceSurvivor);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SelectTarget_Prisoner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
