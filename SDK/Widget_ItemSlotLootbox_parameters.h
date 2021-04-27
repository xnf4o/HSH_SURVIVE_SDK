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

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.GetDiscountPercent
struct UWidget_ItemSlotLootbox_C_GetDiscountPercent_Params
{
	TArray<struct FS_StorePrice>                       BasePrice;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_StorePrice>                       CurrentPrice;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Percent;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.GetIsPassiveUnique
struct UWidget_ItemSlotLootbox_C_GetIsPassiveUnique_Params
{
	class UHSHItem*                                    HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetBGRarity
struct UWidget_ItemSlotLootbox_C_SetBGRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUnique;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.ParseIntToRarity
struct UWidget_ItemSlotLootbox_C_ParseIntToRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetToolTipWidget
struct UWidget_ItemSlotLootbox_C_SetToolTipWidget_Params
{
	class UWidget*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetBrushIcon
struct UWidget_ItemSlotLootbox_C_SetBrushIcon_Params
{
	class UHSHItem*                                    HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.RefreshData
struct UWidget_ItemSlotLootbox_C_RefreshData_Params
{
	struct FS_LootboxProduct                           ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.Destruct
struct UWidget_ItemSlotLootbox_C_Destruct_Params
{
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.BndEvt__Button_Profile_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_ItemSlotLootbox_C_BndEvt__Button_Profile_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.OnInitialized
struct UWidget_ItemSlotLootbox_C_OnInitialized_Params
{
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.ExecuteUbergraph_Widget_ItemSlotLootbox
struct UWidget_ItemSlotLootbox_C_ExecuteUbergraph_Widget_ItemSlotLootbox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.OnClick__DelegateSignature
struct UWidget_ItemSlotLootbox_C_OnClick__DelegateSignature_Params
{
	struct FS_LootboxProduct                           LootboxProduct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
