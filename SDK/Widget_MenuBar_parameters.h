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

// Function Widget_MenuBar.Widget_MenuBar_C.EnableSelectMenuActive
struct UWidget_MenuBar_C_EnableSelectMenuActive_Params
{
	TEnumAsByte<E_Menubarlist_E_Menubarlist>           MenuList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.DisableSelectMenuActive
struct UWidget_MenuBar_C_DisableSelectMenuActive_Params
{
	TEnumAsByte<E_Menubarlist_E_Menubarlist>           MenuList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.ShowSelectMenuList
struct UWidget_MenuBar_C_ShowSelectMenuList_Params
{
	TEnumAsByte<E_Menubarlist_E_Menubarlist>           MenuList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.HideSelectMenuList
struct UWidget_MenuBar_C_HideSelectMenuList_Params
{
	TEnumAsByte<E_Menubarlist_E_Menubarlist>           MenuList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.InitializeButton
struct UWidget_MenuBar_C_InitializeButton_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.RefreshRole
struct UWidget_MenuBar_C_RefreshRole_Params
{
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.RefreshLootbox
struct UWidget_MenuBar_C_RefreshLootbox_Params
{
	int                                                Number;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.GetSlash
struct UWidget_MenuBar_C_GetSlash_Params
{
	class UWidget*                                     ItemToFind;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.SetWidget
struct UWidget_MenuBar_C_SetWidget_Params
{
	class UWidget*                                     WidgetObject;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Findmatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_MenuBar_C_BndEvt__Widget_Button_Findmatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWidget_MenuBar_C_BndEvt__Widget_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Profile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_MenuBar_C_BndEvt__Widget_Button_Profile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWidget_MenuBar_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Store_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_MenuBar_C_BndEvt__Widget_Button_Store_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.PreConstruct
struct UWidget_MenuBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MenuBar.Widget_MenuBar_C.ExecuteUbergraph_Widget_MenuBar
struct UWidget_MenuBar_C_ExecuteUbergraph_Widget_MenuBar_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MenuBar.Widget_MenuBar_C.OnStore__DelegateSignature
struct UWidget_MenuBar_C_OnStore__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.OnProfile__DelegateSignature
struct UWidget_MenuBar_C_OnProfile__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.OnLootbox__DelegateSignature
struct UWidget_MenuBar_C_OnLootbox__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.OnSwitchRole__DelegateSignature
struct UWidget_MenuBar_C_OnSwitchRole__DelegateSignature_Params
{
};

// Function Widget_MenuBar.Widget_MenuBar_C.OnCustomize__DelegateSignature
struct UWidget_MenuBar_C_OnCustomize__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
