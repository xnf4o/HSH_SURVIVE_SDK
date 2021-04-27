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

// Function Widget_ItemInventory.Widget_ItemInventory_C.SortRarityAndOwnedArrayNew
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget_ItemSlot_C*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UWidget_ItemSlot_C*> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_ItemInventory_C::SortRarityAndOwnedArrayNew(TArray<class UWidget_ItemSlot_C*>* Array, TArray<class UWidget_ItemSlot_C*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.SortRarityAndOwnedArrayNew");

	UWidget_ItemInventory_C_SortRarityAndOwnedArrayNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByOwnedAndRarity
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInventory_C::SortItemByOwnedAndRarity()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByOwnedAndRarity");

	UWidget_ItemInventory_C_SortItemByOwnedAndRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.SortRarityAndOwnedArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget_ItemSlot_C*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UWidget_ItemSlot_C*> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_ItemInventory_C::SortRarityAndOwnedArray(TArray<class UWidget_ItemSlot_C*>* Array, TArray<class UWidget_ItemSlot_C*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.SortRarityAndOwnedArray");

	UWidget_ItemInventory_C_SortRarityAndOwnedArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_ItemInventory_C::GetVisibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.GetVisibility_1");

	UWidget_ItemInventory_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByPrice
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInventory_C::SortItemByPrice()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByPrice");

	UWidget_ItemInventory_C_SortItemByPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByOwned
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInventory_C::SortItemByOwned()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByOwned");

	UWidget_ItemInventory_C_SortItemByOwned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.PriceToIntArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    IntArray                       (Parm, OutParm, ZeroConstructor)
void UWidget_ItemInventory_C::PriceToIntArray(TArray<int>* IntArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.PriceToIntArray");

	UWidget_ItemInventory_C_PriceToIntArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntArray != nullptr)
		*IntArray = params.IntArray;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.GetOwnedItemsLength
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInventory_C::GetOwnedItemsLength(int* Ret)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.GetOwnedItemsLength");

	UWidget_ItemInventory_C_GetOwnedItemsLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByName
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInventory_C::SortItemByName()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.SortItemByName");

	UWidget_ItemInventory_C_SortItemByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.GetDataNotValid
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_ItemInventory> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            IndexToTest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemInventory        Output                         (Parm, OutParm, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_ItemInventory_C::GetDataNotValid(TArray<struct FS_ItemInventory>* Array, int IndexToTest, struct FS_ItemInventory* Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.GetDataNotValid");

	UWidget_ItemInventory_C_GetDataNotValid_Params params;
	params.IndexToTest = IndexToTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;


	return params.ReturnValue;
}


// Function Widget_ItemInventory.Widget_ItemInventory_C.RefreshData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_ItemInventory> InventoryData                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_ItemInventory_C::RefreshData(TArray<struct FS_ItemInventory> InventoryData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.RefreshData");

	UWidget_ItemInventory_C_RefreshData_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.RefreshText
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSlateColor             InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemInventory_C::RefreshText(const struct FText& Text, const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.RefreshText");

	UWidget_ItemInventory_C_RefreshText_Params params;
	params.Text = Text;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.OnButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        SelectItem                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ItemInventory_C::OnButtonClick(const struct FS_ItemInventory& SelectItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.OnButtonClick");

	UWidget_ItemInventory_C_OnButtonClick_Params params;
	params.SelectItem = SelectItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.BndEvt__ComboBoxString_148_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInventory_C::BndEvt__ComboBoxString_148_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.BndEvt__ComboBoxString_148_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UWidget_ItemInventory_C_BndEvt__ComboBoxString_148_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.UpdateSorting
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemInventory_C::UpdateSorting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.UpdateSorting");

	UWidget_ItemInventory_C_UpdateSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.OnPreviewClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ItemInventory_C::OnPreviewClick(const struct FS_ItemInventory& SelectedItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.OnPreviewClick");

	UWidget_ItemInventory_C_OnPreviewClick_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.ExecuteUbergraph_Widget_ItemInventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInventory_C::ExecuteUbergraph_Widget_ItemInventory(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.ExecuteUbergraph_Widget_ItemInventory");

	UWidget_ItemInventory_C_ExecuteUbergraph_Widget_ItemInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.OnPreview__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        SelectSkin                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ItemInventory_C::OnPreview__DelegateSignature(const struct FS_ItemInventory& SelectSkin)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.OnPreview__DelegateSignature");

	UWidget_ItemInventory_C_OnPreview__DelegateSignature_Params params;
	params.SelectSkin = SelectSkin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInventory.Widget_ItemInventory_C.OnSummit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_ItemInventory        SelectItem                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           SelectNull                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemInventory_C::OnSummit__DelegateSignature(const struct FText& Header, const struct FS_ItemInventory& SelectItem, bool SelectNull)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemInventory.Widget_ItemInventory_C.OnSummit__DelegateSignature");

	UWidget_ItemInventory_C_OnSummit__DelegateSignature_Params params;
	params.Header = Header;
	params.SelectItem = SelectItem;
	params.SelectNull = SelectNull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
