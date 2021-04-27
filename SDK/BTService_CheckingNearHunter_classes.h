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

// BlueprintGeneratedClass BTService_CheckingNearHunter.BTService_CheckingNearHunter_C
// 0x004C (FullSize[0x00EC] - InheritedSize[0x00A0])
class UBTService_CheckingNearHunter_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      RunModeKey;                                                // 0x00B0(0x0028) (Edit, BlueprintVisible)
	float                                              SeenAlpha;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecreaseAlphaRate;                                         // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeightOffset;                                              // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearOffsetEnter;                                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearOffsetExit;                                            // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTService_CheckingNearHunter.BTService_CheckingNearHunter_C");
		return ptr;
	}



	void IsHunterSeen(class AActor* Pawn, bool* Return);
	bool IsNearHunter(class AActor* OwnerPawn, float HeightOffset, float NearOffset);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_CheckingNearHunter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
