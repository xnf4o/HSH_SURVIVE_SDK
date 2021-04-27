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

// BlueprintGeneratedClass BTDecorator_HavePortalInScene.BTDecorator_HavePortalInScene_C
// 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
class UBTDecorator_HavePortalInScene_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               NewVar_1;                                                  // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TTSC[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00B0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTDecorator_HavePortalInScene.BTDecorator_HavePortalInScene_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
