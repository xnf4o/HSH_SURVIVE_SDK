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

// BlueprintGeneratedClass BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C
// 0x0090 (FullSize[0x0138] - InheritedSize[0x00A8])
class UBTTask_ChaseSurvivor_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      survivor;                                                  // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Distance;                                                  // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CanSeeSurvivor;                                            // 0x0108(0x0028) (Edit, BlueprintVisible)
	float                                              DistanceToSpecter;                                         // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToTeleport;                                        // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_ChaseSurvivor.BTTask_ChaseSurvivor_C");
		return ptr;
	}



	void GetCanSpecter(class APawn* ControlledPawn, bool* CanSpecter);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_ChaseSurvivor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
