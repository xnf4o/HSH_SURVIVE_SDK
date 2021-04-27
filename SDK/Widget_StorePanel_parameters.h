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

// Function Widget_StorePanel.Widget_StorePanel_C.EndMenuAnimation
struct UWidget_StorePanel_C_EndMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.BeginMenuAnimation
struct UWidget_StorePanel_C_BeginMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.UpdatePreviewCharacterRole
struct UWidget_StorePanel_C_UpdatePreviewCharacterRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.GetColorAndOpacity_2
struct UWidget_StorePanel_C_GetColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.GetColorAndOpacity_1
struct UWidget_StorePanel_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.GetWidthAmethystStore
struct UWidget_StorePanel_C_GetWidthAmethystStore_Params
{
	float                                              Width;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.NavigatePanel
struct UWidget_StorePanel_C_NavigatePanel_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.GetPreferDirectStoreIndex
struct UWidget_StorePanel_C_GetPreferDirectStoreIndex_Params
{
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAcc;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AccIndex;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.Get_Hours_remains
struct UWidget_StorePanel_C_Get_Hours_remains_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.Get_Days_remains
struct UWidget_StorePanel_C_Get_Days_remains_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnWidgetActive
struct UWidget_StorePanel_C_OnWidgetActive_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnWidgetDisplayed
struct UWidget_StorePanel_C_OnWidgetDisplayed_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.GetWidth
struct UWidget_StorePanel_C_GetWidth_Params
{
	float                                              Width;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.Debug_Grid
struct UWidget_StorePanel_C_Debug_Grid_Params
{
	class UWidget_StoreGrid_C*                         Store;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.IsSameCurrentPanel
struct UWidget_StorePanel_C_IsSameCurrentPanel_Params
{
	class UObject*                                     Panel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_StorePanel.Widget_StorePanel_C.AssignWidgetManager
struct UWidget_StorePanel_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.MakeTag
struct UWidget_StorePanel_C_MakeTag_Params
{
	TArray<struct FString>                             Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UGameSparksRequestArray*                     ReturnGSArray;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnFocusReceived
struct UWidget_StorePanel_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_0_OnClickToken__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_0_OnClickToken__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowLoading
struct UWidget_StorePanel_C_ShowLoading_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowMagicBoxStore
struct UWidget_StorePanel_C_ShowMagicBoxStore_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.HideContent
struct UWidget_StorePanel_C_HideContent_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowGemStore
struct UWidget_StorePanel_C_ShowGemStore_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.RefreshStore
struct UWidget_StorePanel_C_RefreshStore_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.TryShowCurrentActive
struct UWidget_StorePanel_C_TryShowCurrentActive_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowPerksHunterShop
struct UWidget_StorePanel_C_ShowPerksHunterShop_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowPerksSurvivorShop
struct UWidget_StorePanel_C_ShowPerksSurvivorShop_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowItemsPanel
struct UWidget_StorePanel_C_ShowItemsPanel_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowProfilesPanel
struct UWidget_StorePanel_C_ShowProfilesPanel_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowStickersPanel
struct UWidget_StorePanel_C_ShowStickersPanel_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterStore
struct UWidget_StorePanel_C_ShowCharacterStore_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterHunterShop
struct UWidget_StorePanel_C_ShowCharacterHunterShop_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterSurvivorShop
struct UWidget_StorePanel_C_ShowCharacterSurvivorShop_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowSkinSurvivorShop
struct UWidget_StorePanel_C_ShowSkinSurvivorShop_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.ShowBundleShop
struct UWidget_StorePanel_C_ShowBundleShop_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSListVirtualGoodsResponse                 Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorPerk
struct UWidget_StorePanel_C_Direct_SurvivorPerk_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterPerk
struct UWidget_StorePanel_C_Direct_HunterPerk_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.EnableStore
struct UWidget_StorePanel_C_EnableStore_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StorePanel.Widget_StorePanel_C.TryIntializeStore
struct UWidget_StorePanel_C_TryIntializeStore_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnDiscount
struct UWidget_StorePanel_C_OnDiscount_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnCrystalStore
struct UWidget_StorePanel_C_OnCrystalStore_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnDirectStore
struct UWidget_StorePanel_C_OnDirectStore_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.LoopAnimation
struct UWidget_StorePanel_C_LoopAnimation_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Construct
struct UWidget_StorePanel_C_Construct_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_6_OnClickDiscount__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_6_OnClickDiscount__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickDirectStore__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickDirectStore__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.PreConstruct
struct UWidget_StorePanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_ButtonChoiceTab_DirectStore_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_ButtonChoiceTab_DirectStore_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChioce__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChioce__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorCharacter
struct UWidget_StorePanel_C_Direct_SurvivorCharacter_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterCharacter
struct UWidget_StorePanel_C_Direct_HunterCharacter_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnFeatures
struct UWidget_StorePanel_C_OnFeatures_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorSkin
struct UWidget_StorePanel_C_Direct_SurvivorSkin_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterSkin
struct UWidget_StorePanel_C_Direct_HunterSkin_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorAcc_Head
struct UWidget_StorePanel_C_Direct_SurvivorAcc_Head_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickFeatures__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickFeatures__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.BackAction
struct UWidget_StorePanel_C_BackAction_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorSkin
struct UWidget_StorePanel_C_Token_SurvivorSkin_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterSkin
struct UWidget_StorePanel_C_Token_HunterSkin_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorAcc_Head
struct UWidget_StorePanel_C_Token_SurvivorAcc_Head_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterAcc_Head
struct UWidget_StorePanel_C_Direct_HunterAcc_Head_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterAcc_Head
struct UWidget_StorePanel_C_Token_HunterAcc_Head_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnTokenStore
struct UWidget_StorePanel_C_OnTokenStore_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_ButtonChoiceTab_TokenStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_ButtonChoiceTab_TokenStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_10_OnChioce__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_10_OnChioce__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_0_OnChoice2__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_0_OnChoice2__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnTokenRefresh
struct UWidget_StorePanel_C_OnTokenRefresh_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameSparksScriptData*                       Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorAcc_Back
struct UWidget_StorePanel_C_Token_SurvivorAcc_Back_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterAcc_Back
struct UWidget_StorePanel_C_Token_HunterAcc_Back_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorAcc_Back
struct UWidget_StorePanel_C_Direct_SurvivorAcc_Back_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterAcc_Back
struct UWidget_StorePanel_C_Direct_HunterAcc_Back_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnDirectRefresh
struct UWidget_StorePanel_C_OnDirectRefresh_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UGameSparksScriptData*>               Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChoice2__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChoice2__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.DIrect_Bundle
struct UWidget_StorePanel_C_DIrect_Bundle_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_1_OnClickCrystal__DelegateSignature
struct UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_1_OnClickCrystal__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.ExecuteUbergraph_Widget_StorePanel
struct UWidget_StorePanel_C_ExecuteUbergraph_Widget_StorePanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnLootbox__DelegateSignature
struct UWidget_StorePanel_C_OnLootbox__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnFindMatch__DelegateSignature
struct UWidget_StorePanel_C_OnFindMatch__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnExit__DelegateSignature
struct UWidget_StorePanel_C_OnExit__DelegateSignature_Params
{
};

// Function Widget_StorePanel.Widget_StorePanel_C.OnSetting__DelegateSignature
struct UWidget_StorePanel_C_OnSetting__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
