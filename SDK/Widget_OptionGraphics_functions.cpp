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

// Function Widget_OptionGraphics.Widget_OptionGraphics_C.IsCustomQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Input1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Input2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionGraphics_C::IsCustomQuality(int Input1, int Input2)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.IsCustomQuality");

	UWidget_OptionGraphics_C_IsCustomQuality_Params params;
	params.Input1 = Input1;
	params.Input2 = Input2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.SetQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Quality_E_Quality> Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionGraphics_C::SetQuality(TEnumAsByte<E_Quality_E_Quality> Quality)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.SetQuality");

	UWidget_OptionGraphics_C_SetQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.ApplySetting
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionGraphics_C::ApplySetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.ApplySetting");

	UWidget_OptionGraphics_C_ApplySetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.ResetToDeafaultSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionGraphics_C::ResetToDeafaultSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.ResetToDeafaultSetting");

	UWidget_OptionGraphics_C_ResetToDeafaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.UpdateValue
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionGraphics_C::UpdateValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.UpdateValue");

	UWidget_OptionGraphics_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionGraphics_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.AssignOptionManager");

	UWidget_OptionGraphics_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionGraphics_C::BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionGraphics_C::BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Quality_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionGraphics_C::BndEvt__Widget_ButtonChoiceArrow_Quality_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Quality_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_ButtonChoiceArrow_Quality_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Shadow_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionGraphics_C::BndEvt__Widget_ButtonChoiceArrow_Shadow_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Shadow_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_ButtonChoiceArrow_Shadow_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Texture_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionGraphics_C::BndEvt__Widget_ButtonChoiceArrow_Texture_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Texture_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_ButtonChoiceArrow_Texture_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Postprocess_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionGraphics_C::BndEvt__Widget_ButtonChoiceArrow_Postprocess_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Postprocess_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_ButtonChoiceArrow_Postprocess_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_AA_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionGraphics_C::BndEvt__Widget_ButtonChoiceArrow_AA_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_AA_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_ButtonChoiceArrow_AA_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Effect_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionGraphics_C::BndEvt__Widget_ButtonChoiceArrow_Effect_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.BndEvt__Widget_ButtonChoiceArrow_Effect_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UWidget_OptionGraphics_C_BndEvt__Widget_ButtonChoiceArrow_Effect_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionGraphics.Widget_OptionGraphics_C.ExecuteUbergraph_Widget_OptionGraphics
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionGraphics_C::ExecuteUbergraph_Widget_OptionGraphics(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionGraphics.Widget_OptionGraphics_C.ExecuteUbergraph_Widget_OptionGraphics");

	UWidget_OptionGraphics_C_ExecuteUbergraph_Widget_OptionGraphics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
