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

// BlueprintGeneratedClass BTDecorator_IfHaveObjectiveItemInScene.BTDecorator_IfHaveObjectiveItemInScene_C
// 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
class UBTDecorator_IfHaveObjectiveItemInScene_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00A8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTDecorator_IfHaveObjectiveItemInScene.BTDecorator_IfHaveObjectiveItemInScene_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
