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

// BlueprintGeneratedClass BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C
// 0x0061 (FullSize[0x0109] - InheritedSize[0x00A8])
class UBTTask_FindRespawnPlace_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetPointKey;                                            // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocationKey;                                         // 0x00E0(0x0028) (Edit, BlueprintVisible)
	bool                                               FindSuccess;                                               // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C");
		return ptr;
	}



	void SortByDistance(TArray<class ATeleportBase_C*>* Source, class APawn* Pawn, TArray<class ATeleportBase_C*>* Teleport);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FindRespawnPlace(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
