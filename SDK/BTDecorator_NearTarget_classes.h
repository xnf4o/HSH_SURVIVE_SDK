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

// BlueprintGeneratedClass BTDecorator_NearTarget.BTDecorator_NearTarget_C
// 0x002C (FullSize[0x00D4] - InheritedSize[0x00A8])
class UBTDecorator_NearTarget_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Distance;                                                  // 0x00A8(0x0028) (Edit, BlueprintVisible)
	float                                              Offset;                                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTDecorator_NearTarget.BTDecorator_NearTarget_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
