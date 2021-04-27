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

// BlueprintGeneratedClass BTTask_PlaceItem.BTTask_PlaceItem_C
// 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
class UBTTask_PlaceItem_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00B8(0x0028) (Edit, BlueprintVisible)
	class ARitualBase_C*                               Cache;                                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_PlaceItem.BTTask_PlaceItem_C");
		return ptr;
	}



	bool IsHavePlayerProgress(class AActor* Target);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnPlaceItem(const struct FPrimaryAssetId& AssetID, class AHSHCharacterBase* Character);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTTask_PlaceItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
