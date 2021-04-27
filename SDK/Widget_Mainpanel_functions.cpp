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

// Function Widget_Mainpanel.Widget_Mainpanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Mainpanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.EndMenuAnimation");

	UWidget_Mainpanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Mainpanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.BeginMenuAnimation");

	UWidget_Mainpanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Mainpanel_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.RefreshLootbox");

	UWidget_Mainpanel_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_Mainpanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.OnFocusReceived");

	UWidget_Mainpanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Mainpanel_C::BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_Mainpanel_C_BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Mainpanel_C::BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_Mainpanel_C_BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.BackAction");

	UWidget_Mainpanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnFindMatch__DelegateSignature
// (BlueprintEvent)
void UWidget_Mainpanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnFindMatch__DelegateSignature");

	UWidget_Mainpanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_Mainpanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnLootbox__DelegateSignature");

	UWidget_Mainpanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnProfile__DelegateSignature
// (BlueprintEvent)
void UWidget_Mainpanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnProfile__DelegateSignature");

	UWidget_Mainpanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.LoopAnimation
// (BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::LoopAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.LoopAnimation");

	UWidget_Mainpanel_C_LoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Mainpanel_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.Construct");

	UWidget_Mainpanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.ExecuteUbergraph_Widget_Mainpanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Mainpanel_C::ExecuteUbergraph_Widget_Mainpanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.ExecuteUbergraph_Widget_Mainpanel");

	UWidget_Mainpanel_C_ExecuteUbergraph_Widget_Mainpanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.OnProfile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.OnProfile__DelegateSignature");

	UWidget_Mainpanel_C_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.OnExit__DelegateSignature");

	UWidget_Mainpanel_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.OnSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.OnSetting__DelegateSignature");

	UWidget_Mainpanel_C_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.OnItemStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::OnItemStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.OnItemStore__DelegateSignature");

	UWidget_Mainpanel_C_OnItemStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.OnLootbox__DelegateSignature");

	UWidget_Mainpanel_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Mainpanel.Widget_Mainpanel_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Mainpanel_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Mainpanel.Widget_Mainpanel_C.OnFindMatch__DelegateSignature");

	UWidget_Mainpanel_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
