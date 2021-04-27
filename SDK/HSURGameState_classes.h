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

// BlueprintGeneratedClass HSURGameState.HSURGameState_C
// 0x01F8 (FullSize[0x0590] - InheritedSize[0x0398])
class AHSURGameState_C : public AGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UChatComponent_C*                            ChatComponent;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDetectValueComponent_C*                     DetectValueComponent;                                      // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActivityManagerComponent_C*                 ActivityManagerComponent;                                  // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URandomObjectiveComponent_C*                 RandomObjectiveComponent;                                  // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULogsComponent_C*                            LogsComponent;                                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOutlineManagerComponent_C*                  OutlineManagerComponent;                                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USD_ManagerComponent_C*                      SD_ManagerComponent;                                       // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULimitItemsTypeChestComponent_C*             LimitItemsTypeChestComponent;                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULimitItemsTypeComponent_C*                  LimitItemsTypeComponent;                                   // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URandomSpawnItemsComponent_C*                RandomSpawnItemsComponent;                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProgressManagerComponent_C*                 ProgressManagerComponent;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBGMManagerComponent_C*                      BGMManagerComponent;                                       // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameStatisticComponent_C*                   GameStatisticComponent;                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestManagerComponent_C*                    QuestManagerComponent;                                     // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPingManagerComponent_C*                     PingManagerComponent;                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPickableItemComponent_C*                    PickableItemComponent;                                     // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerInfoStruct_G>                 AllPlayerInfo;                                             // 0x0430(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AHSURPlayerState_C*>                  SurvivorArray;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AHSURPlayerState_C*>                  HunterArray;                                               // 0x0450(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ATrapTargetActor_C*>                  TrapTargetUsed;                                            // 0x0460(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify)
	struct FTimerHandle                                TimeCountingHandle;                                        // 0x0470(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimer;                                                  // 0x0478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GL1R[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AHSURPlayerState_C*>                  SurvivorExitPortalArray;                                   // 0x0480(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AHSURPlayerState_C*>                  SurvivorStateStatus;                                       // 0x0490(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int>                                        SoulArray;                                                 // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SoulDisappearArray;                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Timer;                                                     // 0x04C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvivorDeathCount;                                        // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalTime;                                                 // 0x04C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllSurvivorDead;                                          // 0x04CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCustomMatch;                                             // 0x04CD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7IHD[0x2];                                     // 0x04CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCharacterCountChange;                                    // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bEndByPortal;                                              // 0x04E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bHunterDead;                                               // 0x04E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L8BN[0x6];                                     // 0x04E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHunterDie;                                               // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSurvivorDie;                                             // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUpdateTrapTargetList;                                    // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_SpawnPlayer>                      SpawnPlayerList;                                           // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsTutorial;                                               // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V4WR[0x7];                                     // 0x0529(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LastedPlayerKilled_ID;                                     // 0x0530(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     LastedPlayerExitPortal_ID;                                 // 0x0540(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FString>                             PlayerExitPortals;                                         // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       bIsContinues;                                              // 0x0560(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                PlayerCount;                                               // 0x0570(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VoteCounting;                                              // 0x0574(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsVoting;                                                 // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HDS3[0x7];                                     // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerInfoStruct_G>                 AllPlayerInfo_New;                                         // 0x0580(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURGameState.HSURGameState_C");
		return ptr;
	}



	void OnRep_AllPlayerInfo_New();
	void OnRep_SurvivorStateStatus_New();
	void GetTotalTimer(float* TotalTimer);
	struct FTransform GetSurvivorSpawnSoulLocation(class AActor* Character, class AActor* KilledBy);
	void OnDebugingRespawn(const struct FTransform& SpawnTransform);
	void GetSoulDisappear(TArray<int>* SoulDisappearArray);
	void RemoveSoulDisappear(int NewItem);
	void AddedSoulDisappear(int NewItem);
	void GetHunterPlayerInfo(struct FPlayerInfoStruct_G* Return);
	void GetLastSurvivorExitPortal(struct FPlayerInfoStruct_G* Return);
	void GetLastSurvivorDeath(struct FPlayerInfoStruct_G* Return);
	void GetPlayerInfoFromPlayerID(const struct FString& PlayerId, struct FPlayerInfoStruct_G* Return);
	void PlayerSurvivorExitPortal(const struct FPlayerInfoStruct_G& PlayerInfo);
	void PlayerSurvivorDeath(const struct FPlayerInfoStruct_G& PlayerInfo);
	void GetAllPlayerInfo(TArray<struct FPlayerInfoStruct_G>* AllPlayerInfo);
	void AssignSpawningPlayer(const struct FPlayerInfoStruct_G& PlayerInfo);
	void IsTutorial_(bool* Return);
	void IsEndWithPortal(bool* bEndByPortal);
	void GetMatchResult(class AHSURPlayerState_C* PlayerState, struct FS_EndGameResult* EndGameResult);
	void GetIsOverlapLocation(const struct FVector& Location, bool* NotBlockByAnyone);
	void UpdateSpawnPlayer(float DeltaTime);
	void OnRep_TrapTargetUsed();
	class AHSHCharacterBase* SpawnPlayer(class APlayerState* PlayerState, const struct FTransform& Transfrom);
	void GetSoul(TArray<int>* SoulArray);
	void RemoveSoul(int NewItem);
	void AddedSoul(int NewItem);
	void IsHunterDead(bool* HunterDead);
	void GetHunter(TArray<class AHSURPlayerState_C*>* HunterArray);
	void GetSurvivor(TArray<class AHSURPlayerState_C*>* SurvivorArray);
	void GetTimer(float* Timer);
	void RemoveHunter(class AHSURPlayerState_C* Item);
	void AddedHunter(class AHSURPlayerState_C* NewItem);
	void RemoveSurvivor(class AHSURPlayerState_C* Item);
	void AddedSurvivor(class AHSURPlayerState_C* NewItem);
	void IsTimeOut(bool* IsTimeOut_);
	void TimeCounting();
	void GetLimitSpawnComponent(class ULimitItemsTypeComponent_C** LimitItemsTypeComponent);
	void GetLimitChestComponent(class ULimitItemsBaseComponent_C** LimitItemsTypeComponent);
	void GetAllSurvivorKnockDown(bool* IsAllKnockdown);
	void CheckSurvivorMovement(class ASurvivorBase_C* NewParam, bool* StopAction);
	void SurvivorDeath(class AController* Controller, class AHSHCharacterBase* Character, class AHSHCharacterBase* KilledBy, float Duration);
	void RespawnSurvivor(int PlayerId, const struct FTransform& SpawnTransform, bool SelfRespawn);
	void AddTrapTarget(class ATrapTargetActor_C* NewItem);
	void RemoveTrapTarget(class ATrapTargetActor_C* Item);
	void DecreaseSurvivor(class AHSURPlayerState_C* survivor);
	void Initialize();
	void ExitSecretPortal(class AHSURPlayerState_C* survivor);
	void IncreaseSuvivor(class AHSURPlayerState_C* survivor);
	void HunterDeath();
	void OnPlayerDisconnected(class AController* Controller);
	void ReceiveTick(float DeltaSeconds);
	void AddedTimeAfterCompleteAllRitual();
	void SetActiveComponent(bool bActive);
	void AddedTimeAfterCompleteOneRitual();
	void AddSurvivorStatus(class AHSURPlayerState_C* PlayerState);
	void AssignSpawningPlayerInfoo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void ExecuteUbergraph_HSURGameState(int EntryPoint);
	void OnUpdateTrapTargetList__DelegateSignature();
	void OnSurvivorDie__DelegateSignature();
	void OnHunterDie__DelegateSignature();
	void OnCharacterCountChange__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
