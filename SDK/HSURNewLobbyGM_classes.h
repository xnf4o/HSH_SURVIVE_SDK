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

// BlueprintGeneratedClass HSURNewLobbyGM.HSURNewLobbyGM_C
// 0x0189 (FullSize[0x05A9] - InheritedSize[0x0420])
class AHSURNewLobbyGM_C : public AGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0420(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerController*>                   AllPlayerController;                                       // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MaxPlayer;                                                 // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentPlayer;                                             // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanWeStart;                                                // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XV6S[0x3];                                     // 0x0451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentSurvivorA;                                          // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxSurvivorA;                                              // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentHunterA;                                            // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxHunterA;                                                // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LaunchDelay;                                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LaunchDelayQuickMatch;                                     // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MapRowName;                                                // 0x046C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JS9P[0x4];                                     // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MapName;                                                   // 0x0478(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       MapSubLevel;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  MapImage;                                                  // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllReady;                                                  // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S43I[0x7];                                     // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACharacter*>                          AllPlayerCharacter;                                        // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsGSTestSuccess;                                           // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y06X[0x3];                                     // 0x04B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentAutoEnd;                                            // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAutoEnd;                                                // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGSConnect;                                               // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EQDX[0x3];                                     // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHSHProcessParameter_C*                      ProcessParameter;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DebugText;                                                 // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bTryStartGame;                                             // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S1YX[0x3];                                     // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerCount;                                               // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AutoDestroy;                                               // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAutoPlay;                                                 // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_46ON[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AController*>                         AllController;                                             // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FAWSGameSessionServer                       GameSessionDetail;                                         // 0x0500(0x0090) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                MatchedHunter;                                             // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MatchedSurvivor;                                           // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        SurvivorRandom;                                            // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SendLog;                                                   // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURNewLobbyGM.HSURNewLobbyGM_C");
		return ptr;
	}



	void LogErrorMatch(TArray<class APlayerController*>* Array, const struct FString& Case);
	void FillAITest();
	void CountingNonPlayer(float DeltaSeconds);
	void SetCustomMatch(bool IsCustomMatch);
	void SetMaxPlayer(int MaxPlayers);
	void CountingCheckingPlayer(int PlayerIndex, float DeltaSeconds);
	bool IsAllPlayerReady();
	void GetLobbyPreview(class ALobbyPreviewCharacterManagerActor_C** Output);
	struct FMapStruct GetMapdata(const struct FName& RowName, struct FName* ReturnValueRow);
	bool IsGamelift();
	bool CheckIsSurvivorIsFull();
	void GetNewPlayerRole(TEnumAsByte<E_Role_E_Role>* Role);
	bool CheckIsHunterSelected();
	void ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void ReceiveNotifyPlayerSkins(TArray<struct FString> Skins);
	void ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles);
	void ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers);
	void ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters);
	void ReceiveNotifyPlayerHeads(TArray<struct FString> Head);
	void ReceiveNotifyPlayerBacks(TArray<struct FString>* Back);
	void RandomMap();
	void SetupMap(const struct FName& MapRowName, const struct FMapStruct& Map);
	void OnStartGameSession(const struct FAWSGameSessionServer& GameSession);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void EveryoneUpdate();
	void ServerEndMatch();
	void K2_OnLogout(class AController* ExitingController);
	void ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void startgame();
	void HandleStartingNewPlayer(class APlayerController* NewPlayer);
	void RefreshLobbyData();
	void CheckingPlayer();
	void CheckingNonPlayer();
	void MakePlayerLeave();
	void SpawnHunterAI(TEnumAsByte<E_CharacterHunter_E_CharacterHunter> hunter);
	void SpawnSurvivorAI(TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor);
	void ResponseLog(class UVaRestRequestJSON* Request);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_HSURNewLobbyGM(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
