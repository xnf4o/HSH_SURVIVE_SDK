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

// Function Widget_OptionSystem.Widget_OptionSystem_C.Default
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionSystem_C::Default()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.Default");

	UWidget_OptionSystem_C_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.Apply
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionSystem_C::Apply()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.Apply");

	UWidget_OptionSystem_C_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.RefreshValue
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionSystem_C::RefreshValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.RefreshValue");

	UWidget_OptionSystem_C_RefreshValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSystem_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.AssignOptionManager");

	UWidget_OptionSystem_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionSystem_C::BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_OptionSystem_C_BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionSystem_C::BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_OptionSystem_C_BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_ButtonChoiceArrow_culture_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionSystem_C::BndEvt__Widget_ButtonChoiceArrow_culture_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_ButtonChoiceArrow_culture_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_OptionSystem_C_BndEvt__Widget_ButtonChoiceArrow_culture_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_ButtonChoiceArrow_Region_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionSystem_C::BndEvt__Widget_ButtonChoiceArrow_Region_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_ButtonChoiceArrow_Region_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_OptionSystem_C_BndEvt__Widget_ButtonChoiceArrow_Region_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_ButtonChoiceArrow_Chatbox_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionSystem_C::BndEvt__Widget_ButtonChoiceArrow_Chatbox_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.BndEvt__Widget_ButtonChoiceArrow_Chatbox_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_OptionSystem_C_BndEvt__Widget_ButtonChoiceArrow_Chatbox_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionSystem.Widget_OptionSystem_C.ExecuteUbergraph_Widget_OptionSystem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionSystem_C::ExecuteUbergraph_Widget_OptionSystem(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionSystem.Widget_OptionSystem_C.ExecuteUbergraph_Widget_OptionSystem");

	UWidget_OptionSystem_C_ExecuteUbergraph_Widget_OptionSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
