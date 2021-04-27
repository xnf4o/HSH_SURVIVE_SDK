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

// BlueprintGeneratedClass HSURLobbyPC.HSURLobbyPC_C
// 0x015B (FullSize[0x07EB] - InheritedSize[0x0690])
class AHSURLobbyPC_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x06A0(0x0110) (Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	float                                              Countdown;                                                 // 0x07B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AVM9[0x4];                                     // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUMG_Debug_LobbyMap_C*                       DebugUI;                                                   // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MapName;                                                   // 0x07C0(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UWidget_Lobby_C*                             Lobby;                                                     // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyPreviewCharacterManagerActor_C*        LobbyPreviewManager;                                       // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAllPlayerReady;                                         // 0x07E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bIsTravelToGameplay;                                       // 0x07E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsPlayerInfoChange;                                       // 0x07EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURLobbyPC.HSURLobbyPC_C");
		return ptr;
	}



	void OnRep_bIsAllPlayerReady();
	void ServerAddHunterAI(TEnumAsByte<E_CharacterHunter_E_CharacterHunter> hunter);
	void ServerAddSurvivorAI(TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> survivor);
	void OnClick();
	void ServerRefreshMapName();
	void RefreshMapName();
	void ChangeMap(const struct FText& MapName);
	void ServerRefresh();
	void ServerTestRest();
	void Response(class UVaRestRequestJSON* Request);
	void ClientGetDebug(int code, const struct FString& Content);
	void ServerChangeMap(const struct FText& MapName);
	void Kicked();
	void SetupLobbyMenu(const struct FText& ServerName, class UTexture2D* MapImage, const struct FText& MapName, const struct FText& MatchId);
	void ReceiveNotifyPlayerBacks(TArray<struct FString>* Back);
	void ShowLoadingScreen();
	void ReceiveNotifyPlayerHeads(TArray<struct FString> Head);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters);
	void ReceiveBeginPlay();
	void ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers);
	void AllPlayerReady(bool bIsAllPlayerReady);
	void ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles);
	void ServerRefreshPreview();
	void AllPlayerCountdown(float Countdown);
	void ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void ReceiveNotifyPlayerSkins(TArray<struct FString> Skins);
	void ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void UpdateValueFromPlayerState();
	void SetUpCheckingPlayer();
	void LeaveGameWithMessage(const struct FString& Message);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_HSURLobbyPC(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
