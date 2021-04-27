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

// Function Widget_ItemSlot.Widget_ItemSlot_C.SetPerkCapButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCanPurchase                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemSlot_C::SetPerkCapButton(bool bIsCanPurchase)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.SetPerkCapButton");

	UWidget_ItemSlot_C_SetPerkCapButton_Params params;
	params.bIsCanPurchase = bIsCanPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.GetDiscountPercent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_StorePrice>   BasePrice                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_StorePrice>   CurrentPrice                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Percent                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_ItemSlot_C::GetDiscountPercent(TArray<struct FS_StorePrice>* BasePrice, TArray<struct FS_StorePrice>* CurrentPrice, struct FString* Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.GetDiscountPercent");

	UWidget_ItemSlot_C_GetDiscountPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BasePrice != nullptr)
		*BasePrice = params.BasePrice;
	if (CurrentPrice != nullptr)
		*CurrentPrice = params.CurrentPrice;
	if (Percent != nullptr)
		*Percent = params.Percent;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.GetIsPassiveUnique
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHItem*                HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_ItemSlot_C::GetIsPassiveUnique(class UHSHItem* HSHItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.GetIsPassiveUnique");

	UWidget_ItemSlot_C_GetIsPassiveUnique_Params params;
	params.HSHItem = HSHItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemSlot.Widget_ItemSlot_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ItemSlot_C::GetText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.GetText_1");

	UWidget_ItemSlot_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemSlot.Widget_ItemSlot_C.SetFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEquipped                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemSlot_C::SetFrame(bool bIsEquipped)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.SetFrame");

	UWidget_ItemSlot_C_SetFrame_Params params;
	params.bIsEquipped = bIsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.SetBGRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUnique                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemSlot_C::SetBGRarity(int Rarity, bool IsUnique)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.SetBGRarity");

	UWidget_ItemSlot_C_SetBGRarity_Params params;
	params.Rarity = Rarity;
	params.IsUnique = IsUnique;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.SetBlankSlot
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemSlot_C::SetBlankSlot()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.SetBlankSlot");

	UWidget_ItemSlot_C_SetBlankSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.ParseIntToRarity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlot_C::ParseIntToRarity(int Rarity, struct FText* Text, struct FLinearColor* Color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.ParseIntToRarity");

	UWidget_ItemSlot_C_ParseIntToRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.Get_Owner_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_ItemSlot_C::Get_Owner_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.Get_Owner_Visibility_1");

	UWidget_ItemSlot_C_Get_Owner_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemSlot.Widget_ItemSlot_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_ItemSlot_C::GetVisibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.GetVisibility_1");

	UWidget_ItemSlot_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemSlot.Widget_ItemSlot_C.SetToolTipWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlot_C::SetToolTipWidget(class UWidget* Target, const struct FText& Header, const struct FText& Description, const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.SetToolTipWidget");

	UWidget_ItemSlot_C_SetToolTipWidget_Params params;
	params.Target = Target;
	params.Header = Header;
	params.Description = Description;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.SetBrushIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHItem*                HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlot_C::SetBrushIcon(class UHSHItem* HSHItem, class UImage* icon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.SetBrushIcon");

	UWidget_ItemSlot_C_SetBrushIcon_Params params;
	params.HSHItem = HSHItem;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWidget_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.RefreshData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemSlot_C::RefreshData(const struct FS_ItemInventory& ItemData, bool valid)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.RefreshData");

	UWidget_ItemSlot_C_RefreshData_Params params;
	params.ItemData = ItemData;
	params.valid = valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemSlot_C::Destruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.Destruct");

	UWidget_ItemSlot_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemSlot_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_ItemSlot_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemSlot_C::OnInitialized()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.OnInitialized");

	UWidget_ItemSlot_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.ExecuteUbergraph_Widget_ItemSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlot_C::ExecuteUbergraph_Widget_ItemSlot(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.ExecuteUbergraph_Widget_ItemSlot");

	UWidget_ItemSlot_C_ExecuteUbergraph_Widget_ItemSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.OnPreviewClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ItemSlot_C::OnPreviewClick__DelegateSignature(const struct FS_ItemInventory& SelectedItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.OnPreviewClick__DelegateSignature");

	UWidget_ItemSlot_C_OnPreviewClick__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.OnPerkSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PerkSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlot_C::OnPerkSelect__DelegateSignature(int PerkSlot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.OnPerkSelect__DelegateSignature");

	UWidget_ItemSlot_C_OnPerkSelect__DelegateSignature_Params params;
	params.PerkSlot = PerkSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlot.Widget_ItemSlot_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        SelectItem                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ItemSlot_C::OnClick__DelegateSignature(const struct FS_ItemInventory& SelectItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlot.Widget_ItemSlot_C.OnClick__DelegateSignature");

	UWidget_ItemSlot_C_OnClick__DelegateSignature_Params params;
	params.SelectItem = SelectItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
