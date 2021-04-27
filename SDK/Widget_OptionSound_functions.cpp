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

// Function Widget_OptionSound.Widget_OptionSound_C.Default
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionSound_C::Default()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.Default");

	UWidget_OptionSound_C_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.Apply
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionSound_C::Apply()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.Apply");

	UWidget_OptionSound_C_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.RefreshValue
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionSound_C::RefreshValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.RefreshValue");

	UWidget_OptionSound_C_RefreshValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSound_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.AssignOptionManager");

	UWidget_OptionSound_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_102_K2Node_ComponentBoundEvent_2_OnSlideValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSound_C::BndEvt__Widget_ButtonSlider_102_K2Node_ComponentBoundEvent_2_OnSlideValue__DelegateSignature(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_102_K2Node_ComponentBoundEvent_2_OnSlideValue__DelegateSignature");

	UWidget_OptionSound_C_BndEvt__Widget_ButtonSlider_102_K2Node_ComponentBoundEvent_2_OnSlideValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonChoice_Subtitle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSound_C::BndEvt__Widget_ButtonChoice_Subtitle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonChoice_Subtitle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_OptionSound_C_BndEvt__Widget_ButtonChoice_Subtitle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionSound_C::BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_OptionSound_C_BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionSound_C::BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_OptionSound_C_BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_BGM_K2Node_ComponentBoundEvent_0_OnSlideValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSound_C::BndEvt__Widget_ButtonSlider_BGM_K2Node_ComponentBoundEvent_0_OnSlideValue__DelegateSignature(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_BGM_K2Node_ComponentBoundEvent_0_OnSlideValue__DelegateSignature");

	UWidget_OptionSound_C_BndEvt__Widget_ButtonSlider_BGM_K2Node_ComponentBoundEvent_0_OnSlideValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_SFX_K2Node_ComponentBoundEvent_5_OnSlideValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSound_C::BndEvt__Widget_ButtonSlider_SFX_K2Node_ComponentBoundEvent_5_OnSlideValue__DelegateSignature(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_SFX_K2Node_ComponentBoundEvent_5_OnSlideValue__DelegateSignature");

	UWidget_OptionSound_C_BndEvt__Widget_ButtonSlider_SFX_K2Node_ComponentBoundEvent_5_OnSlideValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_Voice_K2Node_ComponentBoundEvent_6_OnSlideValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSound_C::BndEvt__Widget_ButtonSlider_Voice_K2Node_ComponentBoundEvent_6_OnSlideValue__DelegateSignature(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.BndEvt__Widget_ButtonSlider_Voice_K2Node_ComponentBoundEvent_6_OnSlideValue__DelegateSignature");

	UWidget_OptionSound_C_BndEvt__Widget_ButtonSlider_Voice_K2Node_ComponentBoundEvent_6_OnSlideValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSound.Widget_OptionSound_C.ExecuteUbergraph_Widget_OptionSound
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSound_C::ExecuteUbergraph_Widget_OptionSound(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSound.Widget_OptionSound_C.ExecuteUbergraph_Widget_OptionSound");

	UWidget_OptionSound_C_ExecuteUbergraph_Widget_OptionSound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
