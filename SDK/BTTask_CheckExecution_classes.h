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

// BlueprintGeneratedClass BTTask_CheckExecution.BTTask_CheckExecution_C
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UBTTask_CheckExecution_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_CheckExecution.BTTask_CheckExecution_C");
		return ptr;
	}



	void GetCompleteRitual(int* Completed);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_CheckExecution(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
