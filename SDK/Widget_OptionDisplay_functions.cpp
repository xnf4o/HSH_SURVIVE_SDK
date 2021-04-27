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

// Function Widget_OptionDisplay.Widget_OptionDisplay_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionDisplay_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.AssignOptionManager");

	UWidget_OptionDisplay_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.ResetToDefualtSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionDisplay_C::ResetToDefualtSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.ResetToDefualtSetting");

	UWidget_OptionDisplay_C_ResetToDefualtSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.ApplySetting
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionDisplay_C::ApplySetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.ApplySetting");

	UWidget_OptionDisplay_C_ApplySetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.RefreshResolution
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionDisplay_C::RefreshResolution()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.RefreshResolution");

	UWidget_OptionDisplay_C_RefreshResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.UpdateValue
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionDisplay_C::UpdateValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.UpdateValue");

	UWidget_OptionDisplay_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_ButtonChoiceArrow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionDisplay_C::BndEvt__Widget_ButtonChoiceArrow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_ButtonChoiceArrow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_ButtonChoiceArrow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_ButtonSlider_Gamma_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionDisplay_C::BndEvt__Widget_ButtonSlider_Gamma_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_ButtonSlider_Gamma_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_ButtonSlider_Gamma_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_ButtonSlider_K2Node_ComponentBoundEvent_7_OnSlideValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionDisplay_C::BndEvt__Widget_ButtonSlider_K2Node_ComponentBoundEvent_7_OnSlideValue__DelegateSignature(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_ButtonSlider_K2Node_ComponentBoundEvent_7_OnSlideValue__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_ButtonSlider_K2Node_ComponentBoundEvent_7_OnSlideValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionDisplay_C::BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionDisplay_C::BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_FPSLImit_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionDisplay_C::BndEvt__Widget_FPSLImit_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_FPSLImit_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_FPSLImit_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_VSync_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionDisplay_C::BndEvt__Widget_VSync_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_VSync_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_VSync_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_DynamicScale_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionDisplay_C::BndEvt__Widget_DynamicScale_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_DynamicScale_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_DynamicScale_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_DisplayMode_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionDisplay_C::BndEvt__Widget_DisplayMode_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.BndEvt__Widget_DisplayMode_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UWidget_OptionDisplay_C_BndEvt__Widget_DisplayMode_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionDisplay.Widget_OptionDisplay_C.ExecuteUbergraph_Widget_OptionDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionDisplay_C::ExecuteUbergraph_Widget_OptionDisplay(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionDisplay.Widget_OptionDisplay_C.ExecuteUbergraph_Widget_OptionDisplay");

	UWidget_OptionDisplay_C_ExecuteUbergraph_Widget_OptionDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
