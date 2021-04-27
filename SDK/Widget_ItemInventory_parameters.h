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

// Function Widget_ItemInventory.Widget_ItemInventory_C.SortRarityAndOwnedArrayNew
struct UWidget_ItemInventory_C_SortRarityAndOwnedArrayNew_Params
{
	TArray<class UWidget_ItemSlot_C*>                  Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UWidget_ItemSlot_C*>                  Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByOwnedAndRarity
struct UWidget_ItemInventory_C_SortItemByOwnedAndRarity_Params
{
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.SortRarityAndOwnedArray
struct UWidget_ItemInventory_C_SortRarityAndOwnedArray_Params
{
	TArray<class UWidget_ItemSlot_C*>                  Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UWidget_ItemSlot_C*>                  Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.GetVisibility_1
struct UWidget_ItemInventory_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByPrice
struct UWidget_ItemInventory_C_SortItemByPrice_Params
{
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByOwned
struct UWidget_ItemInventory_C_SortItemByOwned_Params
{
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.PriceToIntArray
struct UWidget_ItemInventory_C_PriceToIntArray_Params
{
	TArray<int>                                        IntArray;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.GetOwnedItemsLength
struct UWidget_ItemInventory_C_GetOwnedItemsLength_Params
{
	int                                                Ret;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByName
struct UWidget_ItemInventory_C_SortItemByName_Params
{
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.GetDataNotValid
struct UWidget_ItemInventory_C_GetDataNotValid_Params
{
	TArray<struct FS_ItemInventory>                    Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexToTest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemInventory                            Output;                                                    // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.RefreshData
struct UWidget_ItemInventory_C_RefreshData_Params
{
	TArray<struct FS_ItemInventory>                    InventoryData;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.RefreshText
struct UWidget_ItemInventory_C_RefreshText_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSlateColor                                 InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.OnButtonClick
struct UWidget_ItemInventory_C_OnButtonClick_Params
{
	struct FS_ItemInventory                            SelectItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.BndEvt__ComboBoxString_148_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UWidget_ItemInventory_C_BndEvt__ComboBoxString_148_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.UpdateSorting
struct UWidget_ItemInventory_C_UpdateSorting_Params
{
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.OnPreviewClick
struct UWidget_ItemInventory_C_OnPreviewClick_Params
{
	struct FS_ItemInventory                            SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.ExecuteUbergraph_Widget_ItemInventory
struct UWidget_ItemInventory_C_ExecuteUbergraph_Widget_ItemInventory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.OnPreview__DelegateSignature
struct UWidget_ItemInventory_C_OnPreview__DelegateSignature_Params
{
	struct FS_ItemInventory                            SelectSkin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_ItemInventory.Widget_ItemInventory_C.OnSummit__DelegateSignature
struct UWidget_ItemInventory_C_OnSummit__DelegateSignature_Params
{
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_ItemInventory                            SelectItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               SelectNull;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
