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

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.RefreshChoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ButtonChoiceArrow_C::RefreshChoice()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.RefreshChoice");

	UWidget_ButtonChoiceArrow_C_RefreshChoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.GetActiveSelection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
void UWidget_ButtonChoiceArrow_C::GetActiveSelection(int* Index, struct FText* Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.GetActiveSelection");

	UWidget_ButtonChoiceArrow_C_GetActiveSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Text != nullptr)
		*Text = params.Text;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.InitButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Active_Choice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ButtonChoiceArrow_C::InitButton(int Active_Choice)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.InitButton");

	UWidget_ButtonChoiceArrow_C_InitButton_Params params;
	params.Active_Choice = Active_Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.InitContructor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ButtonWithIndex_C* WidgetButtonIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ButtonChoiceArrow_C::InitContructor(class UWidget_ButtonWithIndex_C* WidgetButtonIndex, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.InitContructor");

	UWidget_ButtonChoiceArrow_C_InitContructor_Params params;
	params.WidgetButtonIndex = WidgetButtonIndex;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ButtonChoiceArrow_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.Construct");

	UWidget_ButtonChoiceArrow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ButtonChoiceArrow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.PreConstruct");

	UWidget_ButtonChoiceArrow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.BndEvt__Button_Backward_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ButtonChoiceArrow_C::BndEvt__Button_Backward_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.BndEvt__Button_Backward_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWidget_ButtonChoiceArrow_C_BndEvt__Button_Backward_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.BndEvt__Button_Forward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ButtonChoiceArrow_C::BndEvt__Button_Forward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.BndEvt__Button_Forward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWidget_ButtonChoiceArrow_C_BndEvt__Button_Forward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.ExecuteUbergraph_Widget_ButtonChoiceArrow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ButtonChoiceArrow_C::ExecuteUbergraph_Widget_ButtonChoiceArrow(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.ExecuteUbergraph_Widget_ButtonChoiceArrow");

	UWidget_ButtonChoiceArrow_C_ExecuteUbergraph_Widget_ButtonChoiceArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ButtonChoiceArrow_C::OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.OnClicked__DelegateSignature");

	UWidget_ButtonChoiceArrow_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
