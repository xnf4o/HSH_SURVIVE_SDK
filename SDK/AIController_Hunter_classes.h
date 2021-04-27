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

// BlueprintGeneratedClass AIController_Hunter.AIController_Hunter_C
// 0x0141 (FullSize[0x0581] - InheritedSize[0x0440])
class AAIController_Hunter_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnFinishDuty;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AHSHCharacterBase*                           hunter;                                                    // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x0470(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               bBlockAction;                                              // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass AIController_Hunter.AIController_Hunter_C");
		return ptr;
	}



	void GetIsEnableBlockAction(bool* Return);
	void GetIsEnableBlockCamera(bool* Return);
	void EnableMouseCameraClient();
	void DisableMouseCameraClient();
	void EnableBlockInputKeys();
	void DisableBlockInputKeys(TArray<struct FKey> Keys);
	void DisableMovementClient();
	void EnableMovementClient();
	void EnableActionClient();
	void DisableActionClient();
	void DisableInputClient();
	void EnableInputClient();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void StopLogic(const struct FString& ReasonString);
	void RestartLogic();
	void FinishDuty();
	void ReceivePossess(class APawn* PossessedPawn);
	void PassCharacterInfoToServer(const struct FPlayerInfoStruct_G& PlayerInfo);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_AIController_Hunter(int EntryPoint);
	void OnFinishDuty__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
