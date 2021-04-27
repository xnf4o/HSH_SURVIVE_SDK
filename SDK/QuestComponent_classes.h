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

// BlueprintGeneratedClass QuestComponent.QuestComponent_C
// 0x0058 (FullSize[0x0158] - InheritedSize[0x0100])
class UQuestComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FPrimaryAssetId>                     QuestID;                                                   // 0x0110(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	bool                                               bInitialize;                                               // 0x0120(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsQuestComplete;                                          // 0x0121(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YL1P[0x6];                                     // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASecretPortalBase_C*                         Portal;                                                    // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQuestObjective_C*>                   QuestObjective;                                            // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AController*                                 Controller;                                                // 0x0140(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_QuestDetail>                      QuestDetailsNew;                                           // 0x0148(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass QuestComponent.QuestComponent_C");
		return ptr;
	}



	void UpdateQuestDetailsNew();
	void OnRep_QuestDetailsNew();
	void OpenPortal(class ASecretPortalBase_C* Portal);
	void TryGetController(class AController** Controller);
	void OnRep_QuestID();
	void RequestQuest();
	void Initialize(class AHSURPlayerController_C* PlayerController);
	void ServerOpenPortal(class ASecretPortalBase_C* Portal);
	void ClientOpenPortal(class ASecretPortalBase_C* Portal);
	void HandleSecrectPortal();
	void ForcePingPortalSuddenDeath();
	void ForcePingPortal(class ASecretPortalTeamBase_C* Target);
	void AchievementCheck(class APawn* survivor);
	void TryGetRequestQuest();
	void ExecuteUbergraph_QuestComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
