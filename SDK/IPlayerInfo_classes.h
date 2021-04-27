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

// BlueprintGeneratedClass IPlayerInfo.IPlayerInfo_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIPlayerInfo_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IPlayerInfo.IPlayerInfo_C");
		return ptr;
	}



	void ReceiveNotifyPlayerBacks(TArray<struct FString>* Back);
	void ReceiveNotifyPlayerHeads(TArray<struct FString> Head);
	void ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters);
	void ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers);
	void ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles);
	void ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void ReceiveNotifyPlayerSkins(TArray<struct FString> Skins);
	void ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
