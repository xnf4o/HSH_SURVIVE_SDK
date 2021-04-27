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

// BlueprintGeneratedClass AIController_Survivor.AIController_Survivor_C
// 0x0148 (FullSize[0x0588] - InheritedSize[0x0440])
class AAIController_Survivor_C : public ADetourCrowdAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASurvivorBase_C*                             survivor;                                                  // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnFinishDuty;                                              // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x0470(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class AHSHSpectator_C*                             Spectator;                                                 // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass AIController_Survivor.AIController_Survivor_C");
		return ptr;
	}



	void StopLogic(const struct FString& ReasonString);
	void RestartLogic();
	void FinishDuty();
	void ReceivePossess(class APawn* PossessedPawn);
	void PassCharacterInfoToServer(const struct FPlayerInfoStruct_G& PlayerInfo);
	void OnTakeDamage();
	void ExecuteUbergraph_AIController_Survivor(int EntryPoint);
	void OnFinishDuty__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
