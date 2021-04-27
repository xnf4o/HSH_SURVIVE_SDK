// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Widget_StoreProduct.Widget_StoreProduct_C.GetIsAvailableEndDate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_StoreProduct_C::GetIsAvailableEndDate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.GetIsAvailableEndDate");

	UWidget_StoreProduct_C_GetIsAvailableEndDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StoreProduct.Widget_StoreProduct_C.GetCharacterItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHCharacterItem*       hshcharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreProduct_C::GetCharacterItem(class UHSHCharacterItem** hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.GetCharacterItem");

	UWidget_StoreProduct_C_GetCharacterItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (hshcharacter != nullptr)
		*hshcharacter = params.hshcharacter;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.GetCharacterPreview
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_CharacterSetting_C*  CharacterPreview               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreProduct_C::GetCharacterPreview(class ABP_CharacterSetting_C** CharacterPreview)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.GetCharacterPreview");

	UWidget_StoreProduct_C_GetCharacterPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterPreview != nullptr)
		*CharacterPreview = params.CharacterPreview;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.IsPreviewing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           PreviewAble                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreProduct_C::IsPreviewing(bool* PreviewAble)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.IsPreviewing");

	UWidget_StoreProduct_C_IsPreviewing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PreviewAble != nullptr)
		*PreviewAble = params.PreviewAble;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.IsItemPreviewable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           PreviewAble                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreProduct_C::IsItemPreviewable(bool* PreviewAble)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.IsItemPreviewable");

	UWidget_StoreProduct_C_IsItemPreviewable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PreviewAble != nullptr)
		*PreviewAble = params.PreviewAble;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.SetBlankSlot
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_StoreProduct_C::SetBlankSlot()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.SetBlankSlot");

	UWidget_StoreProduct_C_SetBlankSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.ParseIntToRarity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreProduct_C::ParseIntToRarity(int Rarity, struct FText* Text, struct FLinearColor* Color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.ParseIntToRarity");

	UWidget_StoreProduct_C_ParseIntToRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.SetBGRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreProduct_C::SetBGRarity(int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.SetBGRarity");

	UWidget_StoreProduct_C_SetBGRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.Get_Redrope_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_StoreProduct_C::Get_Redrope_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.Get_Redrope_Visibility_1");

	UWidget_StoreProduct_C_Get_Redrope_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StoreProduct.Widget_StoreProduct_C.IsOutOfDate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOutOfDate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreProduct_C::IsOutOfDate(bool* IsOutOfDate)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.IsOutOfDate");

	UWidget_StoreProduct_C_IsOutOfDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOutOfDate != nullptr)
		*IsOutOfDate = params.IsOutOfDate;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.Get_Text_EndDate_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_StoreProduct_C::Get_Text_EndDate_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.Get_Text_EndDate_Text_1");

	UWidget_StoreProduct_C_Get_Text_EndDate_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StoreProduct.Widget_StoreProduct_C.GetToolTipWidget_Product
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget_StoreProduct_C::GetToolTipWidget_Product()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.GetToolTipWidget_Product");

	UWidget_StoreProduct_C_GetToolTipWidget_Product_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StoreProduct.Widget_StoreProduct_C.RefreshProduct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_StoreProduct         Product                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FSlateBrush             ImageBG                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               ImageSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ImagePosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShowTooltip                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime               EndDate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_StoreType_E_StoreType> StoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreProduct_C::RefreshProduct(const struct FS_StoreProduct& Product, const struct FSlateBrush& ImageBG, const struct FVector2D& ImageSize, const struct FVector2D& ImagePosition, bool bShowTooltip, const struct FDateTime& EndDate, TEnumAsByte<E_GameCurrency_E_GameCurrency> Currency, TEnumAsByte<E_StoreType_E_StoreType> StoreType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.RefreshProduct");

	UWidget_StoreProduct_C_RefreshProduct_Params params;
	params.Product = Product;
	params.ImageBG = ImageBG;
	params.ImageSize = ImageSize;
	params.ImagePosition = ImagePosition;
	params.bShowTooltip = bShowTooltip;
	params.EndDate = EndDate;
	params.Currency = Currency;
	params.StoreType = StoreType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreProduct_C::OnClicked(TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.OnClicked");

	UWidget_StoreProduct_C_OnClicked_Params params;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.ShowSoldOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StoreProduct_C::ShowSoldOut(bool bIsShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.ShowSoldOut");

	UWidget_StoreProduct_C_ShowSoldOut_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.Buy
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreProduct_C::Buy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.Buy");

	UWidget_StoreProduct_C_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreProduct_C::Cancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.Cancel");

	UWidget_StoreProduct_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_StoreProduct_C::OnInitialized()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.OnInitialized");

	UWidget_StoreProduct_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_StoreProduct_C::BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_StoreProduct_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.OnSkinPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_StoreProduct         Item                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_StoreProduct_C::OnSkinPreview(const struct FS_StoreProduct& Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.OnSkinPreview");

	UWidget_StoreProduct_C_OnSkinPreview_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_StoreProduct_C::BndEvt__PreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_StoreProduct_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_StoreProduct_C::BndEvt__PreviewButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_StoreProduct_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.ExecuteUbergraph_Widget_StoreProduct
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreProduct_C::ExecuteUbergraph_Widget_StoreProduct(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.ExecuteUbergraph_Widget_StoreProduct");

	UWidget_StoreProduct_C_ExecuteUbergraph_Widget_StoreProduct_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.OnPreviewClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_StoreProduct_C::OnPreviewClick__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.OnPreviewClick__DelegateSignature");

	UWidget_StoreProduct_C_OnPreviewClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreProduct.Widget_StoreProduct_C.OnPurchaseClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_StoreProduct_C::OnPurchaseClick__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreProduct.Widget_StoreProduct_C.OnPurchaseClick__DelegateSignature");

	UWidget_StoreProduct_C_OnPurchaseClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
