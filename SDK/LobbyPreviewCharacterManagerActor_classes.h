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

// BlueprintGeneratedClass LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C
// 0x0071 (FullSize[0x03A9] - InheritedSize[0x0338])
class ALobbyPreviewCharacterManagerActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UHSURLobbyCameraManagerComponent_C*          HSURLobbyCameraManagerComponent;                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnInitializePreviewCamera;                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_PlayerLobby>                      LobbyInfo;                                                 // 0x0368(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	TArray<class AHSURLobbyActor_C*>                   LobbyActorHunterList;                                      // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, ExposeOnSpawn)
	TArray<class AHSURLobbyActor_C*>                   LobbyActorSurvivorList;                                    // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, ExposeOnSpawn)
	TArray<class AHSURLobbyPS_C*>                      PlayerStateList;                                           // 0x0398(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<S_ShowPreview_ES_ShowPreview>          ShowPreview;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C");
		return ptr;
	}



	bool IsOwnerData(const struct FS_PlayerLobby& S_PlayerLobby);
	void PrintListLobbyInfo();
	void UpdatePlayerState();
	void SortDataOwnerFirst(TArray<struct FS_PlayerLobby>* LobbyData, TArray<struct FS_PlayerLobby>* Return);
	void ClearUpAllPreview();
	void ClearUpUnUsePreview(int SurvivorCounting, int HunterCounting);
	void UpdatePreview();
	void OnRep_LobbyInfo();
	void ReceiveNotifyPlayerSkins(TArray<struct FString> Skins);
	void ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles);
	void ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers);
	void ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters);
	void ReceiveNotifyPlayerHeads(TArray<struct FString> Head);
	void ReceiveNotifyPlayerBacks(TArray<struct FString>* Back);
	void Refresh();
	void ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void ExecuteUbergraph_LobbyPreviewCharacterManagerActor(int EntryPoint);
	void OnInitializePreviewCamera__DelegateSignature(const struct FPlayerInfoStruct_G& Player_Info);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
