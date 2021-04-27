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

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.InitButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Active_Choice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ButtonChoiceDropdown_C::InitButton(int Active_Choice)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.InitButton");

	UWidget_ButtonChoiceDropdown_C_InitButton_Params params;
	params.Active_Choice = Active_Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.InitContructor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ButtonWithIndex_C* WidgetButtonIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ButtonChoiceDropdown_C::InitContructor(class UWidget_ButtonWithIndex_C* WidgetButtonIndex, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.InitContructor");

	UWidget_ButtonChoiceDropdown_C_InitContructor_Params params;
	params.WidgetButtonIndex = WidgetButtonIndex;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ButtonChoiceDropdown_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.PreConstruct");

	UWidget_ButtonChoiceDropdown_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ButtonChoiceDropdown_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.Construct");

	UWidget_ButtonChoiceDropdown_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.BndEvt__ComboBoxString_248_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ButtonChoiceDropdown_C::BndEvt__ComboBoxString_248_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.BndEvt__ComboBoxString_248_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UWidget_ButtonChoiceDropdown_C_BndEvt__ComboBoxString_248_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.ExecuteUbergraph_Widget_ButtonChoiceDropdown
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ButtonChoiceDropdown_C::ExecuteUbergraph_Widget_ButtonChoiceDropdown(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.ExecuteUbergraph_Widget_ButtonChoiceDropdown");

	UWidget_ButtonChoiceDropdown_C_ExecuteUbergraph_Widget_ButtonChoiceDropdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<SlateCore_ESelectInfo> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ButtonChoiceDropdown_C::OnClicked__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ESelectInfo> Selection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.OnClicked__DelegateSignature");

	UWidget_ButtonChoiceDropdown_C_OnClicked__DelegateSignature_Params params;
	params.Text = Text;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
