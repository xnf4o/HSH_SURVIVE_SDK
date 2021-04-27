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

// BlueprintGeneratedClass BTService_CheckingCompleteRitual.BTService_CheckingCompleteRitual_C
// 0x0011 (FullSize[0x00B1] - InheritedSize[0x00A0])
class UBTService_CheckingCompleteRitual_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bAllRitualComplete;                                        // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTService_CheckingCompleteRitual.BTService_CheckingCompleteRitual_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_CheckingCompleteRitual(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
