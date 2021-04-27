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

// BlueprintGeneratedClass BTTask_PerformRitual.BTTask_PerformRitual_C
// 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
class UBTTask_PerformRitual_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00B8(0x0028) (Edit, BlueprintVisible)
	bool                                               bPerformSuccess;                                           // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QISV[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ARitualBase_C*                               Cache;                                                     // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_PerformRitual.BTTask_PerformRitual_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnperformSuccess();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTTask_PerformRitual(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
