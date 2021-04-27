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

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.IsOwnerData
struct ALobbyPreviewCharacterManagerActor_C_IsOwnerData_Params
{
	struct FS_PlayerLobby                              S_PlayerLobby;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.PrintListLobbyInfo
struct ALobbyPreviewCharacterManagerActor_C_PrintListLobbyInfo_Params
{
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.UpdatePlayerState
struct ALobbyPreviewCharacterManagerActor_C_UpdatePlayerState_Params
{
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.SortDataOwnerFirst
struct ALobbyPreviewCharacterManagerActor_C_SortDataOwnerFirst_Params
{
	TArray<struct FS_PlayerLobby>                      LobbyData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_PlayerLobby>                      Return;                                                    // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ClearUpAllPreview
struct ALobbyPreviewCharacterManagerActor_C_ClearUpAllPreview_Params
{
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ClearUpUnUsePreview
struct ALobbyPreviewCharacterManagerActor_C_ClearUpUnUsePreview_Params
{
	int                                                SurvivorCounting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterCounting;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.UpdatePreview
struct ALobbyPreviewCharacterManagerActor_C_UpdatePreview_Params
{
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.OnRep_LobbyInfo
struct ALobbyPreviewCharacterManagerActor_C_OnRep_LobbyInfo_Params
{
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerSkins
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerPerks
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerProfiles
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerStickers
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerCharacters
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerHeads
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerBacks
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.Refresh
struct ALobbyPreviewCharacterManagerActor_C_Refresh_Params
{
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerInfo
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ReceiveNotifyPlayerItems
struct ALobbyPreviewCharacterManagerActor_C_ReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.ExecuteUbergraph_LobbyPreviewCharacterManagerActor
struct ALobbyPreviewCharacterManagerActor_C_ExecuteUbergraph_LobbyPreviewCharacterManagerActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPreviewCharacterManagerActor.LobbyPreviewCharacterManagerActor_C.OnInitializePreviewCamera__DelegateSignature
struct ALobbyPreviewCharacterManagerActor_C_OnInitializePreviewCamera__DelegateSignature_Params
{
	struct FPlayerInfoStruct_G                         Player_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
