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

// BlueprintGeneratedClass BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C
// 0x00B4 (FullSize[0x015C] - InheritedSize[0x00A8])
class UBTTask_Prisoner_ActivePerk_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      CurrentTarget;                                             // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      SelfActor;                                                 // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CanSeeSurvivor;                                            // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Distance;                                                  // 0x0130(0x0028) (Edit, BlueprintVisible)
	float                                              DistanceToUse;                                             // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C");
		return ptr;
	}



	void IsCanActivePerk(bool* CanActivePerk);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_Prisoner_ActivePerk(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
