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

// BlueprintGeneratedClass GameLibrary.GameLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GameLibrary.GameLibrary_C");
		return ptr;
	}



	void STATIC_AddErrorLogAnalyticEvent(const struct FString& ErrorMessage, const struct FString& State, class UObject* __WorldContext);
	void STATIC_AddStoreLogAnalyticEvent(const struct FString& Currency, int Price, const struct FString& ItemId, int Quantity, const struct FString& StoreType, class UObject* __WorldContext);
	void STATIC_AddGachaAnalyticEvent(const struct FString& GachaItemID, int SpendAmount, const struct FString& TakeItemID, int ReturnToken, int Quantity, class UObject* __WorldContext);
	void STATIC_GetAnalyticPlayerData(class UObject* __WorldContext, class UVaRestJsonObject** Player1, class UVaRestJsonObject** PlayerBalance1, class UVaRestJsonObject** LootBoxBalance1);
	void STATIC_GetAnalyticDateTimeFormat(class UObject* __WorldContext, struct FString* DateTime);
	void STATIC_AddAPIAnalyticEvent(const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId, class UObject* __WorldContext);
	void STATIC_AddTransactionAnalyticEvent(const struct FString& TransactionId, const struct FString& OrderId, const struct FString& PackageID, int Quantity, bool Success, class UObject* __WorldContext);
	void STATIC_AddInGameAnalyticEventWithValue(const struct FString& Event, float Value, class UObject* __WorldContext);
	void STATIC_AddInGameAnalyticEvent(const struct FString& Event, class UObject* __WorldContext);
	void STATIC_FilterGenderAnimation(class UClass* CharacterClass, class UAnimMontage* Male_Montage, class UAnimMontage* Female_Montage, class UObject* __WorldContext, class UAnimMontage** AnimMontage);
	void STATIC_GetBack(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item);
	void STATIC_GetHead(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item);
	void STATIC_GetHunterBack(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item);
	void STATIC_GetHunterHead(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item);
	void STATIC_GetSurvivorBack(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item);
	void STATIC_GetSurvivorHead(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item);
	void STATIC_GetPlayerSkillSurvivor(const struct FS_PlayerRecordSurvivor& SurvivorRecord, class UObject* __WorldContext, float* Skill);
	void STATIC_GetPlayerSkillHunter(const struct FS_PlayerRecordHunter& HunterRecord, class UObject* __WorldContext, float* Skill);
	bool STATIC_IsInQuickMatch(class UObject* __WorldContext);
	void STATIC_EndGameResultToResultSurvivor(const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext, int* eliminate, int* Escape);
	void STATIC_EndGameResultToResultHunter(const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext, int* eliminate, int* Souls);
	void STATIC_GetPlayerRecordSurvivor(class UGameSparksScriptData* GameSparksScriptData, class UObject* __WorldContext, int* matchplayed, int* Score, int* eliminate, int* Escape);
	void STATIC_GetPlayerRecordHunter(class UGameSparksScriptData* GameSparksScriptData, class UObject* __WorldContext, int* matchplayed, int* Score, int* eliminate, int* Souls);
	void STATIC_GetRitualMultipleInState(int State, class UObject* __WorldContext, float* Multiple);
	void STATIC_GetRitualGEInState(int State, class UObject* __WorldContext, class UClass** GameplayEffect);
	void STATIC_GetRItualState(class UObject* __WorldContext, int* State);
	void STATIC_IsOtherInFrontOfActor(class AActor* Actor, class AActor* Other, class UObject* __WorldContext, bool* IsOtherAtFront);
	void STATIC_GetPlayerSkillByRole(TEnumAsByte<E_Role_E_Role> Role, class UObject* __WorldContext, float* Skill);
	void STATIC_GetAttack4Direction(class AActor* Owner, class AActor* Target, class UObject* __WorldContext, TEnumAsByte<E_DmgDirection_E_DmgDirection>* DmgDirection);
	void STATIC_GetAttack2Direction(class AActor* Owner, class AActor* Target, class UObject* __WorldContext, TEnumAsByte<E_DmgDirection_E_DmgDirection>* DmgDirection);
	void STATIC_GetPlayerRecord(class UGameSparksScriptData* GameSparksScriptData, class UObject* __WorldContext, int* matchplayed, int* Score, int* win);
	void STATIC_EndGameResultToResult(TEnumAsByte<E_Role_E_Role> Role, const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext, bool* bIsWin_, struct FString* Reason);
	class UGameSparksScriptData* STATIC_CreateLogEventEndGameSavePersonal(const struct FS_SummaryResult& SummaryResult, const struct FS_EndGameResult& EndGameResult, const struct FPrimaryAssetId& UsedItem, class UObject* __WorldContext);
	void STATIC_CreateLogEventEndGameSave(TArray<struct FS_SummaryResult>* SummaryResult, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* GSDataArray);
	void STATIC_MakeEndGameSummaryActivity(const struct FGSLogEventResponse& GSLogEventResponse, class UObject* __WorldContext);
	void STATIC_CreateLogEventEndGameSummaryActivity(TArray<struct FS_SummaryResult>* SummaryResult, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* GSDataArray);
	void STATIC_GetSurvivorItem(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item);
	void STATIC_GetLogsComponent(class UObject* __WorldContext, class ULogsComponent_C** LogsComponent);
	void STATIC_GetPlayerInfoComponent(class APlayerController* PlayerController, class UObject* __WorldContext, class UPlayerInfoComponent_C** PlayerInfoComponent, bool* IsValid);
	void STATIC_GetHunterPerk(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, TArray<class UClass*>* Return_Effects);
	void STATIC_GetSurvivorPerk(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, TArray<class UClass*>* Return_Effects);
	class UHSHItem* STATIC_TryLoadPrimaryIDFromStr(const struct FPrimaryAssetType& Type, const struct FString& StrID, class UObject* __WorldContext, bool* bLoadSuccess);
	void STATIC_BreakeHunterSlots(TArray<class UGameSparksScriptData*>* GSArraySlots, class UObject* __WorldContext, TArray<struct FS_HunterSlot>* HunterSlots);
	void STATIC_BreakeSurvivorSlots(TArray<class UGameSparksScriptData*>* GSArraySlots, class UObject* __WorldContext, TArray<struct FS_SurvivorSlot>* SurvivorSlots);
	void STATIC_CreateHunterSlots(TArray<struct FS_HunterSlot>* HunterSlots, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* Return_GSArray);
	void STATIC_CreateSurvivorSlots(TArray<struct FS_SurvivorSlot>* SurvivorSlots, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* Return_GSArray);
	void STATIC_GetSkinMesh(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, class USkeletalMesh** NewMesh);
	void STATIC_FindHunterSlot(class UHSHCharacterItem* characteritem, TArray<struct FS_HunterSlot>* HunterSlots, class UObject* __WorldContext, struct FS_HunterSlot* Slot, bool* bFound);
	void STATIC_FindSurvivorSlot(class UHSHCharacterItem* characteritem, TArray<struct FS_SurvivorSlot>* SurvivorSlots, class UObject* __WorldContext, struct FS_SurvivorSlot* Slot, bool* Found, int* Array_Index);
	void STATIC_GetSetupTrapCompletedCount(TArray<struct FS_PrimaryAssetsIDCount>* PrimaryAssetsArray, class UObject* __WorldContext, int* SetupTrapCompletedCount);
	void STATIC_IsYouWin_(TEnumAsByte<E_Role_E_Role> PlayerRole, class AHSURPlayerState_C* HSURPlayerState, class AHSURGameState_C* HSURGameState, class UObject* __WorldContext, bool* YouWin_);
	void STATIC_CreatePlayerData(const struct FS_GameStatistic& PlayerStatistic, float totalSurvivorHp, class UObject* __WorldContext, class UGameSparksScriptData** playerData);
	void STATIC_CreateEndGameSummaryLogEventData(TArray<class UGameSparksScriptData*>* playerDataList, bool IsPortalExit, class UObject* __WorldContext, class UGameSparksLogEventData** EndGameSummaryLogEventData);
	class UGameSparksScriptData* STATIC_CreateHunterEndGameSummaryData(class UGameSparksScriptData** Target, bool isWin, float totalSurvivorHp, bool isLeaveGame, bool isGotTerminated, class UObject* __WorldContext);
	class UGameSparksScriptData* STATIC_CreateHunterInGamePlayerData(const struct FString& PlayerId, const struct FString& Role, float attackDamaged, int attackedCount, int attackedHiddenCount, int destroyedObjectCount, int killCount, bool isGotTerminatedIn3Mins, bool isGotTerminatedIn5Mins, class UObject* __WorldContext);
	class UGameSparksScriptData* STATIC_CreateSurvivorEndGameSummaryData(class UGameSparksScriptData** Target, bool isWin, bool isHunterTerminated, float hpRemainPercentage, int revivedCount, int helpRevivedCount, bool isLeaveGame, bool isGotTerminated, class UObject* __WorldContext);
	class UGameSparksScriptData* STATIC_CreateSurvivorInGamePlayerData(const struct FString& PlayerId, const struct FString& Role, int giveItemToPlayerCount, int SetupTrapCompletedCount, float trapDamaged, int trappedCount, float attackDamaged, int attackedCount, int perfectSkillCheckCount, float timeToUseSupportPerk, bool isGotTerminatedIn3Mins, bool isGotTerminatedIn5Mins, class UObject* __WorldContext);
	void STATIC_GetScriptMessageType(const struct FString& ExtCode, class UObject* __WorldContext, TEnumAsByte<E_ScriptMessageType_E_ScriptMessageType>* ScriptMessageType);
	void STATIC_GetHSURMenuCameraManager(class UObject* __WorldContext, class UHSURMenuCameraManagerComponent_C** HSURMenuCameraManagerComponent);
	void STATIC_FilterAudio(class UClass* CharacterClass, TArray<struct FS_PairSound> S_PairSound, class USoundBase* DefaultSound, class UObject* __WorldContext, bool* FindSuccess, class USoundBase** Sound);
	void STATIC_GetHSURLobbyHUD(class APlayerController* PlayerController, class UObject* __WorldContext, class AHSURLobbyHUD_C** HSURLobby_HUD);
	void STATIC_GetHSURLobbyPS(class APlayerController* PlayerController, class UObject* __WorldContext, class AHSURLobbyPS_C** HSURLobby_PS);
	void STATIC_GetHSURLobbyPC(class UObject* __WorldContext, class AHSURLobbyPC_C** HSURLobby_PC);
	void STATIC_GetHSURLobbyGS(class UObject* __WorldContext, class AHSURLobbyGS_C** HSURLobby_GS);
	void STATIC_GetHSURLobbyGM(class UObject* __WorldContext, class AHSURNewLobbyGM_C** HSURNewLobby_GM);
	void STATIC_GetMatchInfo(class UObject* __WorldContext, struct FString* MatchId, struct FString* MatchShortCode, struct FString* MatchGroup);
	void STATIC_FilterAnimation(class UClass* CharacterClass, TArray<struct FS_PairAnimation> S_PairAnimation, class UAnimMontage* DefaultAnimMontage, class UObject* __WorldContext, bool* FindSuccess, class UAnimMontage** AnimMontage);
	void STATIC_GetHSURGameInstance(class UObject* __WorldContext, class UHSURGameInstance_C** AsHSURGame_Instance);
	void STATIC_GetHSURPlayerHUD(class APawn* Pawn, class UObject* __WorldContext, class AHSURHUD_C** HSURHUD);
	void STATIC_GetHSURPlayerState(class APawn* Pawn, class UObject* __WorldContext, class AHSURPlayerState_C** HSURPlayer_State);
	void STATIC_GetHSURPlayerController(class APawn* Pawn, class UObject* __WorldContext, class AHSURPlayerController_C** HSURPlayer_Controller);
	void STATIC_GetHSURGameState(class UObject* __WorldContext, class AHSURGameState_C** HSURGameState);
	void STATIC_IsRunningOnMobile(class UObject* __WorldContext, bool* IsMobile, struct FString* PlatformName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
