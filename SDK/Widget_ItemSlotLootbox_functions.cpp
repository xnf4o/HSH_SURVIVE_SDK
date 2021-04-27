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

// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.GetDiscountPercent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_StorePrice>   BasePrice                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_StorePrice>   CurrentPrice                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Percent                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_ItemSlotLootbox_C::GetDiscountPercent(TArray<struct FS_StorePrice>* BasePrice, TArray<struct FS_StorePrice>* CurrentPrice, struct FString* Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.GetDiscountPercent");

	UWidget_ItemSlotLootbox_C_GetDiscountPercent_Params params;

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


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.GetIsPassiveUnique
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHItem*                HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_ItemSlotLootbox_C::GetIsPassiveUnique(class UHSHItem* HSHItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.GetIsPassiveUnique");

	UWidget_ItemSlotLootbox_C_GetIsPassiveUnique_Params params;
	params.HSHItem = HSHItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetBGRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUnique                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemSlotLootbox_C::SetBGRarity(int Rarity, bool IsUnique)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetBGRarity");

	UWidget_ItemSlotLootbox_C_SetBGRarity_Params params;
	params.Rarity = Rarity;
	params.IsUnique = IsUnique;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.ParseIntToRarity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlotLootbox_C::ParseIntToRarity(int Rarity, struct FText* Text, struct FLinearColor* Color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.ParseIntToRarity");

	UWidget_ItemSlotLootbox_C_ParseIntToRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetToolTipWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlotLootbox_C::SetToolTipWidget(class UWidget* Target, const struct FText& Header, const struct FText& Description, const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetToolTipWidget");

	UWidget_ItemSlotLootbox_C_SetToolTipWidget_Params params;
	params.Target = Target;
	params.Header = Header;
	params.Description = Description;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetBrushIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHItem*                HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlotLootbox_C::SetBrushIcon(class UHSHItem* HSHItem, class UImage* icon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.SetBrushIcon");

	UWidget_ItemSlotLootbox_C_SetBrushIcon_Params params;
	params.HSHItem = HSHItem;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.RefreshData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LootboxProduct       ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_ItemSlotLootbox_C::RefreshData(const struct FS_LootboxProduct& ItemData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.RefreshData");

	UWidget_ItemSlotLootbox_C_RefreshData_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemSlotLootbox_C::Destruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.Destruct");

	UWidget_ItemSlotLootbox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.BndEvt__Button_Profile_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemSlotLootbox_C::BndEvt__Button_Profile_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.BndEvt__Button_Profile_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_ItemSlotLootbox_C_BndEvt__Button_Profile_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemSlotLootbox_C::OnInitialized()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.OnInitialized");

	UWidget_ItemSlotLootbox_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.ExecuteUbergraph_Widget_ItemSlotLootbox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemSlotLootbox_C::ExecuteUbergraph_Widget_ItemSlotLootbox(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.ExecuteUbergraph_Widget_ItemSlotLootbox");

	UWidget_ItemSlotLootbox_C_ExecuteUbergraph_Widget_ItemSlotLootbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LootboxProduct       LootboxProduct                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_ItemSlotLootbox_C::OnClick__DelegateSignature(const struct FS_LootboxProduct& LootboxProduct)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemSlotLootbox.Widget_ItemSlotLootbox_C.OnClick__DelegateSignature");

	UWidget_ItemSlotLootbox_C_OnClick__DelegateSignature_Params params;
	params.LootboxProduct = LootboxProduct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
