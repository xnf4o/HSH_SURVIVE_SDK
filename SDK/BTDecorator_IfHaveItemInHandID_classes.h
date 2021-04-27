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

// BlueprintGeneratedClass BTDecorator_IfHaveItemInHandID.BTDecorator_IfHaveItemInHandID_C
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UBTDecorator_IfHaveItemInHandID_C : public UBTDecorator_BlueprintBase
{
public:
	TArray<struct FPrimaryAssetId>                     CompareIDs;                                                // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTDecorator_IfHaveItemInHandID.BTDecorator_IfHaveItemInHandID_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
