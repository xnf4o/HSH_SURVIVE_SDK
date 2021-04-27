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

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerBacks
struct UPlayerInfoComponent_C_GetPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerBacks
struct UPlayerInfoComponent_C_SetPlayerBacks_Params
{
	TArray<struct FString>                             Back;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerHeads
struct UPlayerInfoComponent_C_GetPlayerHeads_Params
{
	TArray<struct FString>                             Heads;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerHeads
struct UPlayerInfoComponent_C_SetPlayerHeads_Params
{
	TArray<struct FString>                             Head;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerCharacters
struct UPlayerInfoComponent_C_GetPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerCharacters
struct UPlayerInfoComponent_C_SetPlayerCharacters_Params
{
	TArray<struct FString>                             Characters;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.OnRep_PlayerInfo
struct UPlayerInfoComponent_C_OnRep_PlayerInfo_Params
{
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerStickers
struct UPlayerInfoComponent_C_GetPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerProfiles
struct UPlayerInfoComponent_C_GetPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerStickers
struct UPlayerInfoComponent_C_SetPlayerStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerProfiles
struct UPlayerInfoComponent_C_SetPlayerProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerPerks
struct UPlayerInfoComponent_C_SetPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerPerks
struct UPlayerInfoComponent_C_GetPlayerPerks_Params
{
	TArray<struct FString>                             Perks;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerSkins
struct UPlayerInfoComponent_C_SetPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerSkins
struct UPlayerInfoComponent_C_GetPlayerSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SetPlayerItems
struct UPlayerInfoComponent_C_SetPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerItems
struct UPlayerInfoComponent_C_GetPlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Count;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.Debug
struct UPlayerInfoComponent_C_Debug_Params
{
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.GetPlayerInfo
struct UPlayerInfoComponent_C_GetPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.Register
struct UPlayerInfoComponent_C_Register_Params
{
	TScriptInterface<class UIPlayerInfo_C>             IPlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.Deregister
struct UPlayerInfoComponent_C_Deregister_Params
{
	TScriptInterface<class UIPlayerInfo_C>             IPlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignPlayerInfo
struct UPlayerInfoComponent_C_AssignPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.Initialize
struct UPlayerInfoComponent_C_Initialize_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignCharacter
struct UPlayerInfoComponent_C_AssignCharacter_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHSHCharacterItem*                           characteritem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.SendNotify
struct UPlayerInfoComponent_C_SendNotify_Params
{
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.ServerAssignPlayerInfo
struct UPlayerInfoComponent_C_ServerAssignPlayerInfo_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignCurrency
struct UPlayerInfoComponent_C_AssignCurrency_Params
{
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         Currency;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.AssignLootboxAmount
struct UPlayerInfoComponent_C_AssignLootboxAmount_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerInfoComponent.PlayerInfoComponent_C.ExecuteUbergraph_PlayerInfoComponent
struct UPlayerInfoComponent_C_ExecuteUbergraph_PlayerInfoComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
