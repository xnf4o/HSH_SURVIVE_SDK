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

// BlueprintGeneratedClass HSURGameMode.HSURGameMode_C
// 0x0258 (FullSize[0x0680] - InheritedSize[0x0428])
class AHSURGameMode_C : public AHSHGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentSurvivor;                                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentHunter;                                             // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerController*>                   AllPlayableController;                                     // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      StartPoint;                                                // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerController*>                   AllSpectatorController;                                    // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FS_SummaryResult>                    SummaryResultList;                                         // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bStartGame;                                                // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SFQ7[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlayerDisconnected;                                      // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsGetPlayerStart;                                         // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0MWP[0x3];                                     // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpawnCounting;                                             // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AHSHPlayerStart_C*>                   SurvivorPlayerStarts;                                      // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AHSHPlayerStart_C*>                   HunterPlayerStarts;                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AHSHPlayerStart_C*>                   SpectatorPlayerStarts;                                     // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTransform                                  StartPointsTransform;                                      // 0x04D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsHunterLeave;                                            // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LJVG[0x3];                                     // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CheckingPlayerTimer;                                       // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             LeavePlayers;                                              // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SurvivorLeave;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayerInGame;                                           // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanCloseServerAfterSave;                                  // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R89V[0x7];                                     // 0x0521(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             SafeLeaves;                                                // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDontSaveGame;                                             // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_US24[0x7];                                     // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerInfoStruct_G                         BelleInfo;                                                 // 0x0540(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class AController*>                         AllController;                                             // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FString                                     LeaveGameCacheID;                                          // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AHSURPlayerController_C*>             SafeLeavesPC;                                              // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURGameMode.HSURGameMode_C");
		return ptr;
	}



	void CheckPlayerPenaltyOnlyID(const struct FString& playerIds);
	void CheckPlayerPenalty();
	void SaveRoyalPass(class APlayerController* PlayerController);
	void SaveWeeklyQuest(class APlayerController* PlayerController);
	void GetAIControllerByCharacter(class UHSHCharacterItem* Character);
	void AddedController(class AController* NewItem);
	void SaveEndgameResultOnlyID(const struct FString& PlayerId);
	void GetPlayableController(TArray<class APlayerController*>* AllPlayableController);
	void RemovePlayableController(class APlayerController* Item);
	void AddedPlayablePlayerController(class APlayerController* NewItem);
	void GetMaxPlayer(int* MaxPlayer);
	void AssignMaxPlayer(int Numbers);
	void SaveEndgameResult();
	bool ShouldContinue(TArray<bool>* bIsContinue, int Lenght);
	void CheckingStartGame();
	class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
	class AActor* ChoosePlayerStart(class AController* Player);
	void GetPlayerInfo(class APlayerController* PlayerController, struct FPlayerInfoStruct_G* Return);
	void FindEndReason(TEnumAsByte<E_EndGameReason_E_EndGameReason>* Reason);
	void CanSendGameSpark(bool* IsCanSend);
	void GetSummaryResultEndGame_AllPlayer(TArray<struct FS_SummaryResult>* Return_LocalPlayer);
	bool ReadyToStartMatch();
	void GetPlayerDataList_Custom(TArray<class UGameSparksScriptData*>* playerDataList);
	void GetSummaryResultList_Test(TArray<struct FS_SummaryResult>* Return_LocalPlayer);
	void IsPlayerNotEndGame(class AController* HSURPlayerController, bool* IsNotEndGame);
	void GetPlayerData(class AController* Controller, class UGameSparksScriptData** playerData);
	void GetPlayerDataList(TArray<class UGameSparksScriptData*>* playerDataList);
	void GetRoleByPlayerId(const struct FString& PlayerId, TEnumAsByte<E_Role_E_Role>* Role);
	void GetActivities(class UGameSparksScriptData* Target, TArray<struct FS_Activity>* Activities);
	void MakeSummaryResultListByGameSparksLog(const struct FGSLogEventResponse& SummaryResultLog, TArray<struct FS_SummaryResult>* SummaryResultList);
	void ChooseStart(TEnumAsByte<E_Role_E_Role> Role);
	bool ReadyToEndMatch();
	void GetPlayerStartPoints();
	void EnterSendContinue(bool bIsContinue);
	void RespawnPlayer(class AController* Controller, class UClass* PlayerCharacter, TEnumAsByte<E_Role_E_Role> PlayerRole, const struct FPlayerInfoStruct_G& PlayerInfo);
	void K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);
	void K2_OnLogout(class AController* ExitingController);
	void K2_OnSetMatchState(const struct FName& NewState);
	void ReceiveBeginPlay();
	void ServerBackToLobby();
	void ServerEndMatch();
	void SetupSummaryResultToPlayer();
	void ApplyPlayerRespawnInfo(class AController* Controller, class UClass* PlayerCharacter, TEnumAsByte<E_Role_E_Role> PlayerRole, const struct FPlayerInfoStruct_G& PlayerInfo);
	void QuitToResult(class APlayerController* PlayerController, TEnumAsByte<E_EndGameReason_E_EndGameReason> Endgame);
	void OnEndMatch();
	void HandleStartingNewPlayer(class APlayerController* NewPlayer);
	void ReceiveTick(float DeltaSeconds);
	void LeaveWithNoResult(const struct FString& Message);
	void SaveResultRequested(class UVaRestRequestJSON* Request);
	void SafeLeaveGame(class AHSURPlayerController_C* PlayerController);
	void OnLeaveGame(class UVaRestRequestJSON* Request);
	void SaveResultOnlyIDRequested(class UVaRestRequestJSON* Request);
	void SpawnAI();
	void SpawnSurvivorAI();
	void SpawnHunterAI();
	void SaveWeeklyquestRequested(class UVaRestRequestJSON* Request);
	void SaveRoyalpassRequested(class UVaRestRequestJSON* Request);
	void CheckPenaltyResponse(class UVaRestRequestJSON* Request);
	void CheckPenaltyOnlyIDResponse(class UVaRestRequestJSON* Request);
	void ExecuteUbergraph_HSURGameMode(int EntryPoint);
	void OnPlayerDisconnected__DelegateSignature(class AController* ExitingController);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
