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

// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemPreviewPanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.BeginMenuAnimation");

	UWidget_ItemPreviewPanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemPreviewPanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.EndMenuAnimation");

	UWidget_ItemPreviewPanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemPreviewPanel_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_ItemPreviewPanel_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.BndEvt__Widget_Button_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemPreviewPanel_C::BndEvt__Widget_Button_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.BndEvt__Widget_Button_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_ItemPreviewPanel_C_BndEvt__Widget_Button_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemPreviewPanel_C::Initialize(const struct FText& Header, const struct FText& ItemName, class UObject* Image)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.Initialize");

	UWidget_ItemPreviewPanel_C_Initialize_Params params;
	params.Header = Header;
	params.ItemName = ItemName;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemPreviewPanel_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.Construct");

	UWidget_ItemPreviewPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.ExecuteUbergraph_Widget_ItemPreviewPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemPreviewPanel_C::ExecuteUbergraph_Widget_ItemPreviewPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.ExecuteUbergraph_Widget_ItemPreviewPanel");

	UWidget_ItemPreviewPanel_C_ExecuteUbergraph_Widget_ItemPreviewPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_ItemPreviewPanel_C::OnClick__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ItemPreviewPanel.Widget_ItemPreviewPanel_C.OnClick__DelegateSignature");

	UWidget_ItemPreviewPanel_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
