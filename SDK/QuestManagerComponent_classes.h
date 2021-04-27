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

// BlueprintGeneratedClass QuestManagerComponent.QuestManagerComponent_C
// 0x0135 (FullSize[0x0235] - InheritedSize[0x0100])
class UQuestManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MaxQuestNumber;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInitialize;                                               // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8YCB[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameStatisticComponent_C*                   GameStatisticComponent;                                    // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AHSURPlayerController_C*>             PlayerController;                                          // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UObject*>                             QuestAssetList;                                            // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ASecretPortalBase_C*>                 Portal;                                                    // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FPrimaryAssetId>                     QuestList;                                                 // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FS_PlayerQuest>                   PlayersQuests;                                             // 0x0160(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CacheSendQuestNumber;                                      // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HE6H[0x4];                                     // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        IsPlayersOpenPortal;                                       // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              questsuccess;                                              // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ASecretPortalTeamBase_C*>             PortalTeam;                                                // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ASecretPortalTeamBase_C*>             PortalTeam_Opened;                                         // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                TimerQuestOpenPortal;                                      // 0x01F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      CacheQuestClass;                                           // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayOpenPortal;                                           // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8SCU[0x4];                                     // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnQuestSuccess;                                            // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                MaxDoorOpen;                                               // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PortalDetail                             PortalDetail;                                              // 0x0224(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAutoCountingDoor;                                       // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass QuestManagerComponent.QuestManagerComponent_C");
		return ptr;
	}



	void StartCountingOpenDoor();
	void UpdatePortalDetail();
	void GetPortalDetail(struct FS_PortalDetail* PortalDetail);
	void QuestOpenPortalOneDoor();
	void CheckQuestDetailsNew(TArray<class UQuestObjective_C*>* QuestObjectives, class AController* Controller, TArray<struct FS_QuestDetail>* QuestDetailsList);
	void OpenPortalFromQuest(class UClass* QuestClass);
	void QuestOpenPortal();
	void OpenPortal(bool AutoActive);
	void CheckQuest(class AController* Controller);
	void CheckOneQuestSuccess(class UQuestObjective_C** QuestObjective, class AController* Controller, bool* IsSuccess);
	void RequestQuest_TeamQuest(int PlayerId, TArray<struct FPrimaryAssetId>* Quests);
	void RequestQuest_New(int PlayerId, TArray<struct FPrimaryAssetId>* Quests);
	void RandomQuest(TArray<struct FPrimaryAssetId>* Quests);
	void RequestQuest(TArray<struct FPrimaryAssetId>* Quests);
	void DebugQuest(TArray<struct FPrimaryAssetId>* QuestDummy);
	void CheckQuestSuccess(TArray<class UQuestObjective_C*>* QuestObjectives, class AHSURPlayerController_C* PlayerController, bool* QuestComplete);
	void CheckQuestDetails(TArray<class UQuestObjective_C*>* QuestObjectives, class AHSURPlayerController_C* PlayerController, TArray<struct FString>* QuestDetailsList);
	void TryGetPlayerController(TArray<class AHSURPlayerController_C*>* PlayerController);
	void RandomQuestWithMaxQuest(TArray<struct FPrimaryAssetId>* Quests);
	void TryCheckQuest(class AController* Controller);
	void ForceOpenPortal(class ASurvivorBase_C* survivor);
	void ForceOpenTeamPortal(bool AutoActive);
	void DisableRitual();
	void RemoveKeyItems();
	void TryRefreshAllPlayerCheckQuest();
	void Initialize(class UGameStatisticComponent_C* GameStatisticComponent);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_QuestManagerComponent(int EntryPoint);
	void OnQuestSuccess__DelegateSignature(class UClass* QuestObjective);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
