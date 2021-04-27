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

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginMenuAnimation
struct UWidget_CharacterSettingNewV2_C_BeginMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.EndMenuAnimation
struct UWidget_CharacterSettingNewV2_C_EndMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugMakeInventory
struct UWidget_CharacterSettingNewV2_C_DebugMakeInventory_Params
{
	TArray<struct FString>                             OwnedItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPrimaryAssetId>                     Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_ItemInventory>                    Items;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugFindProduct
struct UWidget_CharacterSettingNewV2_C_DebugFindProduct_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FS_StoreProduct                             Product;                                                   // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugMakeOwnedItems
struct UWidget_CharacterSettingNewV2_C_DebugMakeOwnedItems_Params
{
	TArray<struct FPrimaryAssetId>                     Asset_IDs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             OwnedItem;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsInMainMenu
struct UWidget_CharacterSettingNewV2_C_IsInMainMenu_Params
{
	bool                                               IsInMainMenu;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterPreviewLobby
struct UWidget_CharacterSettingNewV2_C_GetCharacterPreviewLobby_Params
{
	class AHSURLobbyActor_C*                           LobbyPreview;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerOwnerId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterPreview
struct UWidget_CharacterSettingNewV2_C_GetCharacterPreview_Params
{
	class ABP_CharacterSetting_C*                      CharacterPreview;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterBack
struct UWidget_CharacterSettingNewV2_C_FilterBack_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     AssetIDs;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     OutputPin;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeDebugInventory
struct UWidget_CharacterSettingNewV2_C_MakeDebugInventory_Params
{
	TArray<struct FString>                             OwnedItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPrimaryAssetId>                     Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_ItemInventory>                    Items;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterHead
struct UWidget_CharacterSettingNewV2_C_FilterHead_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     AssetIDs;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     OutputPin;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeAccBackAssetID
struct UWidget_CharacterSettingNewV2_C_MakeAccBackAssetID_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPrimaryAssetId>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeAccHeadAssetID
struct UWidget_CharacterSettingNewV2_C_MakeAccHeadAssetID_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPrimaryAssetId>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeSkinAssetID_New
struct UWidget_CharacterSettingNewV2_C_MakeSkinAssetID_New_Params
{
	TArray<struct FS_StoreProduct>                     Products;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPrimaryAssetId>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_PassiveUniquePanel_Visibility_1
struct UWidget_CharacterSettingNewV2_C_Get_PassiveUniquePanel_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetColorIsPassiveUnique
struct UWidget_CharacterSettingNewV2_C_GetColorIsPassiveUnique_Params
{
	class UHSHPassivePerkItem*                         Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginShowPerkContent
struct UWidget_CharacterSettingNewV2_C_BeginShowPerkContent_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginShowContent
struct UWidget_CharacterSettingNewV2_C_BeginShowContent_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshStatusInfo
struct UWidget_CharacterSettingNewV2_C_RefreshStatusInfo_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_Widget_Button_StatusInfo_Visibility_1
struct UWidget_CharacterSettingNewV2_C_Get_Widget_Button_StatusInfo_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsWidgetActive
struct UWidget_CharacterSettingNewV2_C_IsWidgetActive_Params
{
	bool                                               IsActive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshContent
struct UWidget_CharacterSettingNewV2_C_RefreshContent_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshHeaderEmoteVO
struct UWidget_CharacterSettingNewV2_C_RefreshHeaderEmoteVO_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshCharacterList
struct UWidget_CharacterSettingNewV2_C_RefreshCharacterList_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeCharacterAssetID
struct UWidget_CharacterSettingNewV2_C_MakeCharacterAssetID_Params
{
	TArray<struct FPrimaryAssetId>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_PerkPanel_Visibility_1
struct UWidget_CharacterSettingNewV2_C_Get_PerkPanel_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetSpecterSkinText
struct UWidget_CharacterSettingNewV2_C_GetSpecterSkinText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetSpecterActivePerkText
struct UWidget_CharacterSettingNewV2_C_GetSpecterActivePerkText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetText_1
struct UWidget_CharacterSettingNewV2_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeSkinAssetID
struct UWidget_CharacterSettingNewV2_C_MakeSkinAssetID_Params
{
	TArray<struct FPrimaryAssetId>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakePerkAssetID
struct UWidget_CharacterSettingNewV2_C_MakePerkAssetID_Params
{
	TArray<struct FPrimaryAssetId>                     Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetImageBrush
struct UWidget_CharacterSettingNewV2_C_SetImageBrush_Params
{
	class UHSHItem*                                    HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetToolTipWidget
struct UWidget_CharacterSettingNewV2_C_SetToolTipWidget_Params
{
	class UWidget*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TooltipTxtHeader;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TooltipTxtDesc;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterItems
struct UWidget_CharacterSettingNewV2_C_FilterItems_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     AssetIDs;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FS_ItemInventory>                    Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.CheckChangeTime
struct UWidget_CharacterSettingNewV2_C_CheckChangeTime_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.StartTrackChangeTime
struct UWidget_CharacterSettingNewV2_C_StartTrackChangeTime_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterCosmetic
struct UWidget_CharacterSettingNewV2_C_FilterCosmetic_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     AssetIDs;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     OutputPin;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterPassivePerk
struct UWidget_CharacterSettingNewV2_C_FilterPassivePerk_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     AssetIDs;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     OutputPin;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugPrint
struct UWidget_CharacterSettingNewV2_C_DebugPrint_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsCharacterHunterEqual
struct UWidget_CharacterSettingNewV2_C_IsCharacterHunterEqual_Params
{
	class UHSHCharacterItem*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_HunterSlot>                       Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsEqual;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_HunterSlot                               Array_Element;                                             // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsCharacterSurvivorEqual
struct UWidget_CharacterSettingNewV2_C_IsCharacterSurvivorEqual_Params
{
	class UHSHCharacterItem*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_SurvivorSlot>                     Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsEqual;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_SurvivorSlot                             Array_Element;                                             // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetItemAsSurvivor
struct UWidget_CharacterSettingNewV2_C_SetItemAsSurvivor_Params
{
	struct FString                                     Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             AssetsID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetItemAsHunter
struct UWidget_CharacterSettingNewV2_C_SetItemAsHunter_Params
{
	struct FString                                     Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             AssetsID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfoStruct_G;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIconAsHunter
struct UWidget_CharacterSettingNewV2_C_RefreshIconAsHunter_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIconAsSurvivor
struct UWidget_CharacterSettingNewV2_C_RefreshIconAsSurvivor_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIcon
struct UWidget_CharacterSettingNewV2_C_RefreshIcon_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetSwitcherContent
struct UWidget_CharacterSettingNewV2_C_SetSwitcherContent_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeInventory
struct UWidget_CharacterSettingNewV2_C_MakeInventory_Params
{
	TArray<struct FString>                             OwnedItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPrimaryAssetId>                     Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_ItemInventory>                    Items;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterName
struct UWidget_CharacterSettingNewV2_C_GetCharacterName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_B6890D1941820439D13FCF831FBDCBFC
struct UWidget_CharacterSettingNewV2_C_OnResponse_B6890D1941820439D13FCF831FBDCBFC_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_1E31C845450C26A20A60E1B57FAA7519
struct UWidget_CharacterSettingNewV2_C_OnResponse_1E31C845450C26A20A60E1B57FAA7519_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_966DF74D4879098923528F81108F8B58
struct UWidget_CharacterSettingNewV2_C_OnResponse_966DF74D4879098923528F81108F8B58_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnSkin
struct UWidget_CharacterSettingNewV2_C_OnSkin_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk2
struct UWidget_CharacterSettingNewV2_C_OnPerk2_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk1
struct UWidget_CharacterSettingNewV2_C_OnPerk1_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk
struct UWidget_CharacterSettingNewV2_C_OnPerk_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnEmoteVO
struct UWidget_CharacterSettingNewV2_C_OnEmoteVO_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccessories
struct UWidget_CharacterSettingNewV2_C_OnAccessories_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccHead
struct UWidget_CharacterSettingNewV2_C_OnAccHead_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccBack
struct UWidget_CharacterSettingNewV2_C_OnAccBack_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnClick
struct UWidget_CharacterSettingNewV2_C_OnClick_Params
{
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_ItemInventory                            SelectItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               SelectNull;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Perk1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Perk1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Perk2_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Perk2_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_3_OnClickCharacters__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_3_OnClickCharacters__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_4_OnClickPerk__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_4_OnClickPerk__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_6_OnClickSkin__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_6_OnClickSkin__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_31_OnClickEmoteVO__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_31_OnClickEmoteVO__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params
{
	class UHSHCharacterItem*                           HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_12_OnUnHover__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_12_OnUnHover__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPreview
struct UWidget_CharacterSettingNewV2_C_OnPreview_Params
{
	struct FS_ItemInventory                            Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_0_OnClickAcces__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_0_OnClickAcces__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Head_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Head_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Construct
struct UWidget_CharacterSettingNewV2_C_Construct_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerCharacter
struct UWidget_CharacterSettingNewV2_C_UpdatePlayerCharacter_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnCharacters
struct UWidget_CharacterSettingNewV2_C_OnCharacters_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnChangeCharacter
struct UWidget_CharacterSettingNewV2_C_OnChangeCharacter_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SaveChangeSetting
struct UWidget_CharacterSettingNewV2_C_SaveChangeSetting_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerItems
struct UWidget_CharacterSettingNewV2_C_UpdatePlayerItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BackAction
struct UWidget_CharacterSettingNewV2_C_BackAction_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerPerks
struct UWidget_CharacterSettingNewV2_C_UpdatePlayerPerks_Params
{
	TArray<struct FString>                             PlayerPerks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerSkins
struct UWidget_CharacterSettingNewV2_C_UpdatePlayerSkins_Params
{
	TArray<struct FString>                             PlayerSkins;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnInitialized
struct UWidget_CharacterSettingNewV2_C_OnInitialized_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.LoopAnimation
struct UWidget_CharacterSettingNewV2_C_LoopAnimation_Params
{
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerHeads
struct UWidget_CharacterSettingNewV2_C_UpdatePlayerHeads_Params
{
	TArray<struct FString>                             PlayerHeads;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerBacks
struct UWidget_CharacterSettingNewV2_C_UpdatePlayerBacks_Params
{
	TArray<struct FString>                             PlayerBacks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.ExecuteUbergraph_Widget_CharacterSettingNewV2
struct UWidget_CharacterSettingNewV2_C_ExecuteUbergraph_Widget_CharacterSettingNewV2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnClickSuccess__DelegateSignature
struct UWidget_CharacterSettingNewV2_C_OnClickSuccess__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
