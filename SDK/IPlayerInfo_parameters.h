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
// Parameters
//---------------------------------------------------------------------------

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerBacks
struct UIPlayerInfo_C_ReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerHeads
struct UIPlayerInfo_C_ReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerCharacters
struct UIPlayerInfo_C_ReceiveNotifyPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerStickers
struct UIPlayerInfo_C_ReceiveNotifyPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerProfiles
struct UIPlayerInfo_C_ReceiveNotifyPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerPerks
struct UIPlayerInfo_C_ReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerSkins
struct UIPlayerInfo_C_ReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerItems
struct UIPlayerInfo_C_ReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IPlayerInfo.IPlayerInfo_C.ReceiveNotifyPlayerInfo
struct UIPlayerInfo_C_ReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
