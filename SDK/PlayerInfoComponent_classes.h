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

// BlueprintGeneratedClass PlayerInfoComponent.PlayerInfoComponent_C
// 0x01C8 (FullSize[0x02C8] - InheritedSize[0x0100])
class UPlayerInfoComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TScriptInterface<class UIPlayerInfo_C>>     Subscribers;                                               // 0x0110(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x0120(0x0110) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               bIsInitialize;                                             // 0x0230(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5G2X[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Characters;                                                // 0x0238(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Items;                                                     // 0x0248(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Count;                                                     // 0x0258(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Skins;                                                     // 0x0268(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Perks;                                                     // 0x0278(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Profiles;                                                  // 0x0288(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Stickers;                                                  // 0x0298(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Heads;                                                     // 0x02A8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Backs;                                                     // 0x02B8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PlayerInfoComponent.PlayerInfoComponent_C");
		return ptr;
	}



	void GetPlayerBacks(TArray<struct FString>* Back);
	void SetPlayerBacks(TArray<struct FString>* Back);
	void GetPlayerHeads(TArray<struct FString>* Heads);
	void SetPlayerHeads(TArray<struct FString>* Head);
	void GetPlayerCharacters(TArray<struct FString>* Characters);
	void SetPlayerCharacters(TArray<struct FString>* Characters);
	void OnRep_PlayerInfo();
	void GetPlayerStickers(TArray<struct FString>* Stickers);
	void GetPlayerProfiles(TArray<struct FString>* Profiles);
	void SetPlayerStickers(TArray<struct FString>* Stickers);
	void SetPlayerProfiles(TArray<struct FString>* Profiles);
	void SetPlayerPerks(TArray<struct FString>* Perks);
	void GetPlayerPerks(TArray<struct FString>* Perks);
	void SetPlayerSkins(TArray<struct FString>* Skins);
	void GetPlayerSkins(TArray<struct FString>* Skins);
	void SetPlayerItems(TArray<struct FString>* Items, TArray<int>* Count);
	void GetPlayerItems(TArray<struct FString>* Items, TArray<int>* Count);
	void Debug();
	void GetPlayerInfo(struct FPlayerInfoStruct_G* PlayerInfo);
	void Register(const TScriptInterface<class UIPlayerInfo_C>& IPlayerInfo);
	void Deregister(const TScriptInterface<class UIPlayerInfo_C>& IPlayerInfo);
	void AssignPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void Initialize(const struct FPlayerInfoStruct_G& PlayerInfo);
	void AssignCharacter(TEnumAsByte<E_Role_E_Role> Role, class UHSHCharacterItem* characteritem);
	void SendNotify();
	void ServerAssignPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void AssignCurrency(TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency, int Amount);
	void AssignLootboxAmount(int Amount);
	void ExecuteUbergraph_PlayerInfoComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
