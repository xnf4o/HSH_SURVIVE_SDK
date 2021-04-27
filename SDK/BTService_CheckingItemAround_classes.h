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

// BlueprintGeneratedClass BTService_CheckingItemAround.BTService_CheckingItemAround_C
// 0x0068 (FullSize[0x0108] - InheritedSize[0x00A0])
class UBTService_CheckingItemAround_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PickItemOnCarry;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RestartOnPick;                                             // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QQ7G[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Radius;                                                    // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FPrimaryAssetId, class UClass*>        PriorityItems;                                             // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTService_CheckingItemAround.BTService_CheckingItemAround_C");
		return ptr;
	}



	void GetPriority(const struct FPrimaryAssetId& ID, int* Index);
	void GetItem(bool Condition, TArray<class AActor*>* Array, class AHSHCharacterBase* Character, int* Index, class AActor** Output);
	void CheckCouch(class APawn* Owner);
	bool IsNearHunter(class AActor* OwnerPawn, float HeightOffset, float NearOffset);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_CheckingItemAround(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
