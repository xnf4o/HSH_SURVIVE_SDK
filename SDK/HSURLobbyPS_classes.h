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

// BlueprintGeneratedClass HSURLobbyPS.HSURLobbyPS_C
// 0x0089 (FullSize[0x04E9] - InheritedSize[0x0460])
class AHSURLobbyPS_C : public AHSHPlayerStateNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerInfoComponent_C*                      PlayerInfoComponent;                                       // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerInfoStruct_G>                 DebugPlayerInfo;                                           // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               IsBusy;                                                    // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RUQP[0x7];                                     // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerInfo;                                 // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnReceiveNotifyPlayerItems;                                // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ALobbyPreviewCharacterManagerActor_C*        LobbyPreviewManager;                                       // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCanRefresh;                                             // 0x04C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsReady;                                                  // 0x04C1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7M92[0x6];                                     // 0x04C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Player_Session_ID;                                         // 0x04C8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ticketId;                                                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               PlayerSessionFound;                                        // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURLobbyPS.HSURLobbyPS_C");
		return ptr;
	}



	void LogPlayerinfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void IsPlayerReady(bool* Return);
	void OnRep_bIsReady();
	void CanRefreshNotify();
	void TryGetLobbyPreview(class ALobbyPreviewCharacterManagerActor_C** Output_Get);
	void CheckIsRoleAvailable_ReturnRole(TEnumAsByte<E_Role_E_Role> Role, TEnumAsByte<E_Role_E_Role>* ShouldBe);
	void MakeCharacterList(TArray<struct FString>* CharacterList);
	void MakePlayerInfo(const struct FPlayerInfoStruct_G& LocalPlayerInfo, int Index, struct FPlayerInfoStruct_G* PlayerInfo);
	void GetCharacterItemFromList(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FString>* CharaterList, const struct FString& DefaultCharacter, class UHSHCharacterItem** characteritem, struct FString* Character);
	void OnRep_PlayerInfo();
	void SetupPlayerInfo(TEnumAsByte<E_Role_E_Role> Role, TEnumAsByte<E_PlayerTeam_E_PlayerTeam> Team, int Index);
	void ServerUpdatePlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void AssignCharacter(TEnumAsByte<E_Role_E_Role> Role, class UHSHCharacterItem* characteritem);
	void SetupRole(TEnumAsByte<E_Role_E_Role> Role);
	void ApplyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void AssignSetupPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void CommitPlayerInfo(TEnumAsByte<E_PlayerTeam_E_PlayerTeam> Team, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FString>* Items, TArray<int>* Count, TArray<struct FString>* Perks, TArray<struct FString>* Skins, TArray<struct FString> Heads, TArray<struct FString> Backs, const struct FString& ticketId);
	void ReceiveBeginPlay();
	void ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void SendNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void SendNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void ServerAcceptPlayerSession(const struct FString& playerSessionId);
	void ReceiveNotifyPlayerBacks(TArray<struct FString>* Back);
	void OnInitializePreviewCamera(TEnumAsByte<E_Role_E_Role> Move_to_Camera_Role);
	void ReceiveNotifyPlayerHeads(TArray<struct FString> Head);
	void ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters);
	void SetupStatusState(TEnumAsByte<E_LobbyStatus_E_LobbyStatus> LobbyStatus);
	void ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers);
	void ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles);
	void ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void ReceiveNotifyPlayerSkins(TArray<struct FString> Skins);
	void ServerSetupRole(TEnumAsByte<E_Role_E_Role> Role);
	void ServerAssignCharacter(TEnumAsByte<E_Role_E_Role> Role, class UHSHCharacterItem* characteritem);
	void InitializeSpecterCamera();
	void InitializeSurvivorCamera();
	void InitializeSpectatorCamera();
	void ExecuteUbergraph_HSURLobbyPS(int EntryPoint);
	void OnReceiveNotifyPlayerItems__DelegateSignature(TArray<struct FString>* Items, TArray<int>* Number);
	void OnReceiveNotifyPlayerInfo__DelegateSignature(const struct FPlayerInfoStruct_G& PlayerInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
