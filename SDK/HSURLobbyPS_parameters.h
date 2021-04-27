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

// Function HSURLobbyPS.HSURLobbyPS_C.LogPlayerinfo
struct AHSURLobbyPS_C_LogPlayerinfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.IsPlayerReady
struct AHSURLobbyPS_C_IsPlayerReady_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyPS.HSURLobbyPS_C.OnRep_bIsReady
struct AHSURLobbyPS_C_OnRep_bIsReady_Params
{
};

// Function HSURLobbyPS.HSURLobbyPS_C.CanRefreshNotify
struct AHSURLobbyPS_C_CanRefreshNotify_Params
{
};

// Function HSURLobbyPS.HSURLobbyPS_C.TryGetLobbyPreview
struct AHSURLobbyPS_C_TryGetLobbyPreview_Params
{
	class ALobbyPreviewCharacterManagerActor_C*        Output_Get;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.CheckIsRoleAvailable_ReturnRole
struct AHSURLobbyPS_C_CheckIsRoleAvailable_ReturnRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         ShouldBe;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.MakeCharacterList
struct AHSURLobbyPS_C_MakeCharacterList_Params
{
	TArray<struct FString>                             CharacterList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function HSURLobbyPS.HSURLobbyPS_C.MakePlayerInfo
struct AHSURLobbyPS_C_MakePlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         LocalPlayerInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.GetCharacterItemFromList
struct AHSURLobbyPS_C_GetCharacterItemFromList_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             CharaterList;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     DefaultCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UHSHCharacterItem*                           characteritem;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Character;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.OnRep_PlayerInfo
struct AHSURLobbyPS_C_OnRep_PlayerInfo_Params
{
};

// Function HSURLobbyPS.HSURLobbyPS_C.SetupPlayerInfo
struct AHSURLobbyPS_C_SetupPlayerInfo_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PlayerTeam_E_PlayerTeam>             Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ServerUpdatePlayerInfo
struct AHSURLobbyPS_C_ServerUpdatePlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.AssignCharacter
struct AHSURLobbyPS_C_AssignCharacter_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHSHCharacterItem*                           characteritem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.SetupRole
struct AHSURLobbyPS_C_SetupRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ApplyPlayerInfo
struct AHSURLobbyPS_C_ApplyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.AssignSetupPlayerInfo
struct AHSURLobbyPS_C_AssignSetupPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.CommitPlayerInfo
struct AHSURLobbyPS_C_CommitPlayerInfo_Params
{
	TEnumAsByte<E_PlayerTeam_E_PlayerTeam>             Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FString>                             Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Skins;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Heads;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Backs;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ticketId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveBeginPlay
struct AHSURLobbyPS_C_ReceiveBeginPlay_Params
{
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerInfo
struct AHSURLobbyPS_C_ReceiveNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerItems
struct AHSURLobbyPS_C_ReceiveNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.SendNotifyPlayerInfo
struct AHSURLobbyPS_C_SendNotifyPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.SendNotifyPlayerItems
struct AHSURLobbyPS_C_SendNotifyPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ServerAcceptPlayerSession
struct AHSURLobbyPS_C_ServerAcceptPlayerSession_Params
{
	struct FString                                     playerSessionId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerBacks
struct AHSURLobbyPS_C_ReceiveNotifyPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.OnInitializePreviewCamera
struct AHSURLobbyPS_C_OnInitializePreviewCamera_Params
{
	TEnumAsByte<E_Role_E_Role>                         Move_to_Camera_Role;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerHeads
struct AHSURLobbyPS_C_ReceiveNotifyPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerCharacters
struct AHSURLobbyPS_C_ReceiveNotifyPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.SetupStatusState
struct AHSURLobbyPS_C_SetupStatusState_Params
{
	TEnumAsByte<E_LobbyStatus_E_LobbyStatus>           LobbyStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerStickers
struct AHSURLobbyPS_C_ReceiveNotifyPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerProfiles
struct AHSURLobbyPS_C_ReceiveNotifyPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerPerks
struct AHSURLobbyPS_C_ReceiveNotifyPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ReceiveNotifyPlayerSkins
struct AHSURLobbyPS_C_ReceiveNotifyPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ServerSetupRole
struct AHSURLobbyPS_C_ServerSetupRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.ServerAssignCharacter
struct AHSURLobbyPS_C_ServerAssignCharacter_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHSHCharacterItem*                           characteritem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.InitializeSpecterCamera
struct AHSURLobbyPS_C_InitializeSpecterCamera_Params
{
};

// Function HSURLobbyPS.HSURLobbyPS_C.InitializeSurvivorCamera
struct AHSURLobbyPS_C_InitializeSurvivorCamera_Params
{
};

// Function HSURLobbyPS.HSURLobbyPS_C.InitializeSpectatorCamera
struct AHSURLobbyPS_C_InitializeSpectatorCamera_Params
{
};

// Function HSURLobbyPS.HSURLobbyPS_C.ExecuteUbergraph_HSURLobbyPS
struct AHSURLobbyPS_C_ExecuteUbergraph_HSURLobbyPS_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyPS.HSURLobbyPS_C.OnReceiveNotifyPlayerItems__DelegateSignature
struct AHSURLobbyPS_C_OnReceiveNotifyPlayerItems__DelegateSignature_Params
{
	TArray<struct FString>                             Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HSURLobbyPS.HSURLobbyPS_C.OnReceiveNotifyPlayerInfo__DelegateSignature
struct AHSURLobbyPS_C_OnReceiveNotifyPlayerInfo__DelegateSignature_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
