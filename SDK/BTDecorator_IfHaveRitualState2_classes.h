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

// BlueprintGeneratedClass BTDecorator_IfHaveRitualState2.BTDecorator_IfHaveRitualState2_C
// 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
class UBTDecorator_IfHaveRitualState2_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocationKey;                                         // 0x00D0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTDecorator_IfHaveRitualState2.BTDecorator_IfHaveRitualState2_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
