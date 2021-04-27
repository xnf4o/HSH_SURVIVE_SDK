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

// BlueprintGeneratedClass BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C
// 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
class UBTDecorator_IfHaveChest_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocationKey;                                         // 0x00D0(0x0028) (Edit, BlueprintVisible)
	float                                              ObjectiveChance;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlyRedChest;                                              // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YT38[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AItemChest_C*>                        Cache;                                                     // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C");
		return ptr;
	}



	TArray<class AItemChest_C*> GetChestItems();
	TArray<class AItemChest_C*> GetChestObjective();
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
