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

// BlueprintGeneratedClass BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C
// 0x0011 (FullSize[0x00B9] - InheritedSize[0x00A8])
class UBTTask_SurvivorGeneral_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               WaitProgress;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_SurvivorGeneral.BTTask_SurvivorGeneral_C");
		return ptr;
	}



	TArray<class ATrapTargetActor_C*> SortTrapTarget(TArray<class ATrapTargetActor_C*>* Source, class APawn* Pawn);
	class ATrapTargetActor_C* GetTrapTarget(class APawn* Pawn);
	void GetHunter(class AHunterBase_C** Output);
	void OnFinishOrCancelProgress_Event_1();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SurvivorGeneral(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
