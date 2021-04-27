﻿#pragma once

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

// BlueprintGeneratedClass BTTask_SurvivorTraped.BTTask_SurvivorTraped_C
// 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
class UBTTask_SurvivorTraped_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              AcceptanceRadius;                                          // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsMelee;                                                  // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3IXH[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATrapTargetActor_C*                          CacheTrapTarget;                                           // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_SurvivorTraped.BTTask_SurvivorTraped_C");
		return ptr;
	}



	TArray<class ATrapTargetActor_C*> SortTrapTarget(TArray<class ATrapTargetActor_C*>* Source, class APawn* Pawn);
	class ATrapTargetActor_C* GetTrapTarget(class APawn* Pawn);
	void GetHunter(class AHunterBase_C** Output);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void Reset();
	void ExecuteUbergraph_BTTask_SurvivorTraped(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
