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

// BlueprintGeneratedClass BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C
// 0x0038 (FullSize[0x00D8] - InheritedSize[0x00A0])
class UBTService_CheckingShouldCrouch_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      RunAwayKey;                                                // 0x00B0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C");
		return ptr;
	}



	void CheckCouch(class APawn* Owner);
	bool IsNearHunter(class AActor* OwnerPawn, float HeightOffset, float NearOffset);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_CheckingShouldCrouch(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
