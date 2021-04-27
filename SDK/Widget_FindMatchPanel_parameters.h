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

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BeginMenuAnimation
struct UWidget_FindMatchPanel_C_BeginMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.EndMenuAnimation
struct UWidget_FindMatchPanel_C_EndMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnWidgetActive
struct UWidget_FindMatchPanel_C_OnWidgetActive_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshCharacterList
struct UWidget_FindMatchPanel_C_RefreshCharacterList_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshContent
struct UWidget_FindMatchPanel_C_RefreshContent_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshHeaderWithRole
struct UWidget_FindMatchPanel_C_RefreshHeaderWithRole_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshLootbox
struct UWidget_FindMatchPanel_C_RefreshLootbox_Params
{
	int                                                Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnFocusReceived
struct UWidget_FindMatchPanel_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshValue
struct UWidget_FindMatchPanel_C_RefreshValue_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshItems
struct UWidget_FindMatchPanel_C_RefreshItems_Params
{
	TArray<struct FString>                             Items;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Number;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWidget_FindMatchPanel_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshPerks
struct UWidget_FindMatchPanel_C_RefreshPerks_Params
{
	TArray<struct FString>                             PlayerPerks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshSkins
struct UWidget_FindMatchPanel_C_RefreshSkins_Params
{
	TArray<struct FString>                             PlayerSkins;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BackAction
struct UWidget_FindMatchPanel_C_BackAction_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshHeads
struct UWidget_FindMatchPanel_C_RefreshHeads_Params
{
	TArray<struct FString>                             PlayerHeads;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshBacks
struct UWidget_FindMatchPanel_C_RefreshBacks_Params
{
	TArray<struct FString>                             PlayerBacks;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.ExecuteUbergraph_Widget_FindMatchPanel
struct UWidget_FindMatchPanel_C_ExecuteUbergraph_Widget_FindMatchPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnProfile__DelegateSignature
struct UWidget_FindMatchPanel_C_OnProfile__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnStore__DelegateSignature
struct UWidget_FindMatchPanel_C_OnStore__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnShowTutorial__DelegateSignature
struct UWidget_FindMatchPanel_C_OnShowTutorial__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnLootbox__DelegateSignature
struct UWidget_FindMatchPanel_C_OnLootbox__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnPlayNow__DelegateSignature
struct UWidget_FindMatchPanel_C_OnPlayNow__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnSwitchRole__DelegateSignature
struct UWidget_FindMatchPanel_C_OnSwitchRole__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnSetting__DelegateSignature
struct UWidget_FindMatchPanel_C_OnSetting__DelegateSignature_Params
{
};

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnBack__DelegateSignature
struct UWidget_FindMatchPanel_C_OnBack__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
