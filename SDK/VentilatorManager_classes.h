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

// BlueprintGeneratedClass VentilatorManager.VentilatorManager_C
// 0x0050 (FullSize[0x03A8] - InheritedSize[0x0358])
class AVentilatorManager_C : public AVentilatorManagerNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0358(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Ventilator>                       Ventilator;                                                // 0x0378(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        CacheIndexLifting;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ASurvivorBase_C*>                     Survivors;                                                 // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass VentilatorManager.VentilatorManager_C");
		return ptr;
	}



	void CheckVentilatorCameFrom(class AVentilator_C* Ventilator, const struct FS_Ventilator& VentilatorData, TArray<struct FS_Ventilator>* VentilatorDatas, struct FS_Ventilator* StructOut);
	bool GetIsLift(class AVentilator_C* FromVentilator, const struct FS_Ventilator& Data);
	void GetDestinationVentilator(class AVentilator_C* InteractedVentilator, class AVentilator_C** DestinationVentilator, struct FS_Ventilator* S_VentilatorList, int* Index);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SurvivorTeleportToAnotherVentilator(class ASurvivorBase_C* survivor, class AVentilator_C* InteractedVentilator);
	void OnLiftSuccess();
	void OnVenCDFinish(int Index);
	void ExecuteUbergraph_VentilatorManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
