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

// Function Widget_StoreProduct.Widget_StoreProduct_C.GetIsAvailableEndDate
struct UWidget_StoreProduct_C_GetIsAvailableEndDate_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.GetCharacterItem
struct UWidget_StoreProduct_C_GetCharacterItem_Params
{
	class UHSHCharacterItem*                           hshcharacter;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.GetCharacterPreview
struct UWidget_StoreProduct_C_GetCharacterPreview_Params
{
	class ABP_CharacterSetting_C*                      CharacterPreview;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.IsPreviewing
struct UWidget_StoreProduct_C_IsPreviewing_Params
{
	bool                                               PreviewAble;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.IsItemPreviewable
struct UWidget_StoreProduct_C_IsItemPreviewable_Params
{
	bool                                               PreviewAble;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.SetBlankSlot
struct UWidget_StoreProduct_C_SetBlankSlot_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.ParseIntToRarity
struct UWidget_StoreProduct_C_ParseIntToRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.SetBGRarity
struct UWidget_StoreProduct_C_SetBGRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.Get_Redrope_Visibility_1
struct UWidget_StoreProduct_C_Get_Redrope_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.IsOutOfDate
struct UWidget_StoreProduct_C_IsOutOfDate_Params
{
	bool                                               IsOutOfDate;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.Get_Text_EndDate_Text_1
struct UWidget_StoreProduct_C_Get_Text_EndDate_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.GetToolTipWidget_Product
struct UWidget_StoreProduct_C_GetToolTipWidget_Product_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.RefreshProduct
struct UWidget_StoreProduct_C_RefreshProduct_Params
{
	struct FS_StoreProduct                             Product;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FSlateBrush                                 ImageBG;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   ImageSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImagePosition;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowTooltip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDateTime                                   EndDate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         Currency;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_StoreType_E_StoreType>               StoreType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.OnClicked
struct UWidget_StoreProduct_C_OnClicked_Params
{
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         CurrencyType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.ShowSoldOut
struct UWidget_StoreProduct_C_ShowSoldOut_Params
{
	bool                                               bIsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.Buy
struct UWidget_StoreProduct_C_Buy_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.Cancel
struct UWidget_StoreProduct_C_Cancel_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.OnInitialized
struct UWidget_StoreProduct_C_OnInitialized_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_StoreProduct_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.OnSkinPreview
struct UWidget_StoreProduct_C_OnSkinPreview_Params
{
	struct FS_StoreProduct                             Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWidget_StoreProduct_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWidget_StoreProduct_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.ExecuteUbergraph_Widget_StoreProduct
struct UWidget_StoreProduct_C_ExecuteUbergraph_Widget_StoreProduct_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.OnPreviewClick__DelegateSignature
struct UWidget_StoreProduct_C_OnPreviewClick__DelegateSignature_Params
{
};

// Function Widget_StoreProduct.Widget_StoreProduct_C.OnPurchaseClick__DelegateSignature
struct UWidget_StoreProduct_C_OnPurchaseClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
