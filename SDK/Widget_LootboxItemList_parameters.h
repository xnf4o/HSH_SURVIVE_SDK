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

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.TryGetLootDropTarget
struct UWidget_LootboxItemList_C_TryGetLootDropTarget_Params
{
	class ALootDropTarget_C*                           Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnPreviewItem
struct UWidget_LootboxItemList_C_OnPreviewItem_Params
{
	bool                                               bIsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.TypeToInt
struct UWidget_LootboxItemList_C_TypeToInt_Params
{
	struct FText                                       InText;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.Sort
struct UWidget_LootboxItemList_C_Sort_Params
{
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.GetProductFromShortcode
struct UWidget_LootboxItemList_C_GetProductFromShortcode_Params
{
	struct FString                                     ShortCode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnResponse_74C2FF2F4EDA19C91455D8890B278309
struct UWidget_LootboxItemList_C_OnResponse_74C2FF2F4EDA19C91455D8890B278309_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_LootboxItemList_C_BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.Initialize
struct UWidget_LootboxItemList_C_Initialize_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.RefreshData
struct UWidget_LootboxItemList_C_RefreshData_Params
{
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.MakeLootboxList
struct UWidget_LootboxItemList_C_MakeLootboxList_Params
{
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.Construct
struct UWidget_LootboxItemList_C_Construct_Params
{
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.ClearLootDrop
struct UWidget_LootboxItemList_C_ClearLootDrop_Params
{
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.SpawnLootDropPreview
struct UWidget_LootboxItemList_C_SpawnLootDropPreview_Params
{
	struct FS_LootboxProduct                           LootDropData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.ExecuteUbergraph_Widget_LootboxItemList
struct UWidget_LootboxItemList_C_ExecuteUbergraph_Widget_LootboxItemList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnBack__DelegateSignature
struct UWidget_LootboxItemList_C_OnBack__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
