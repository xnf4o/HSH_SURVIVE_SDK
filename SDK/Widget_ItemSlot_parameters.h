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

// Function Widget_ItemSlot.Widget_ItemSlot_C.SetPerkCapButton
struct UWidget_ItemSlot_C_SetPerkCapButton_Params
{
	bool                                               bIsCanPurchase;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.GetDiscountPercent
struct UWidget_ItemSlot_C_GetDiscountPercent_Params
{
	TArray<struct FS_StorePrice>                       BasePrice;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_StorePrice>                       CurrentPrice;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Percent;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.GetIsPassiveUnique
struct UWidget_ItemSlot_C_GetIsPassiveUnique_Params
{
	class UHSHItem*                                    HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.GetText_1
struct UWidget_ItemSlot_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.SetFrame
struct UWidget_ItemSlot_C_SetFrame_Params
{
	bool                                               bIsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.SetBGRarity
struct UWidget_ItemSlot_C_SetBGRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUnique;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.SetBlankSlot
struct UWidget_ItemSlot_C_SetBlankSlot_Params
{
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.ParseIntToRarity
struct UWidget_ItemSlot_C_ParseIntToRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.Get_Owner_Visibility_1
struct UWidget_ItemSlot_C_Get_Owner_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.GetVisibility_1
struct UWidget_ItemSlot_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.SetToolTipWidget
struct UWidget_ItemSlot_C_SetToolTipWidget_Params
{
	class UWidget*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.SetBrushIcon
struct UWidget_ItemSlot_C_SetBrushIcon_Params
{
	class UHSHItem*                                    HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWidget_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWidget_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.RefreshData
struct UWidget_ItemSlot_C_RefreshData_Params
{
	struct FS_ItemInventory                            ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               valid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.Destruct
struct UWidget_ItemSlot_C_Destruct_Params
{
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_ItemSlot_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.OnInitialized
struct UWidget_ItemSlot_C_OnInitialized_Params
{
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.ExecuteUbergraph_Widget_ItemSlot
struct UWidget_ItemSlot_C_ExecuteUbergraph_Widget_ItemSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.OnPreviewClick__DelegateSignature
struct UWidget_ItemSlot_C_OnPreviewClick__DelegateSignature_Params
{
	struct FS_ItemInventory                            SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.OnPerkSelect__DelegateSignature
struct UWidget_ItemSlot_C_OnPerkSelect__DelegateSignature_Params
{
	int                                                PerkSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlot.Widget_ItemSlot_C.OnClick__DelegateSignature
struct UWidget_ItemSlot_C_OnClick__DelegateSignature_Params
{
	struct FS_ItemInventory                            SelectItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
