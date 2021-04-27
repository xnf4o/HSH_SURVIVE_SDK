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

// BlueprintGeneratedClass BTTask_Interact.BTTask_Interact_C
// 0x0029 (FullSize[0x00D1] - InheritedSize[0x00A8])
class UBTTask_Interact_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      InteractClass;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteractRadius;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckHavePlayerInteract;                                   // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RestartIfCantInteract;                                     // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_51CZ[0x2];                                     // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AInteractionBase_C*                          CacheInteraction;                                          // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CacheUseProgress;                                          // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BTTask_Interact.BTTask_Interact_C");
		return ptr;
	}



	bool Interact(class AActor* Owner, class AInteractionBase_C** Interaction);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnStopInteraction(class ASurvivorBase_C* survivor);
	void OnFinishInteraction(class ASurvivorBase_C* survivor);
	void ExecuteUbergraph_BTTask_Interact(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
