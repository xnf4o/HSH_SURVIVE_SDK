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

// BlueprintGeneratedClass BTDecorator_IfHaveSurvivorLessThenEqual.BTDecorator_IfHaveSurvivorLessThenEqual_C
// 0x0004 (FullSize[0x00AC] - InheritedSize[0x00A8])
class UBTDecorator_IfHaveSurvivorLessThenEqual_C : public UBTDecorator_BlueprintBase
{
public:
	int                                                Count;                                                     // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTDecorator_IfHaveSurvivorLessThenEqual.BTDecorator_IfHaveSurvivorLessThenEqual_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
