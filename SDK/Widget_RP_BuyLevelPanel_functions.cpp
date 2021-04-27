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

// Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RP_BuyLevelPanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.BeginMenuAnimation");

	UWidget_RP_BuyLevelPanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RP_BuyLevelPanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.EndMenuAnimation");

	UWidget_RP_BuyLevelPanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_RP_BuyLevelPanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.BackAction");

	UWidget_RP_BuyLevelPanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RP_BuyLevelPanel_C::BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_RP_BuyLevelPanel_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.ExecuteUbergraph_Widget_RP_BuyLevelPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RP_BuyLevelPanel_C::ExecuteUbergraph_Widget_RP_BuyLevelPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_BuyLevelPanel.Widget_RP_BuyLevelPanel_C.ExecuteUbergraph_Widget_RP_BuyLevelPanel");

	UWidget_RP_BuyLevelPanel_C_ExecuteUbergraph_Widget_RP_BuyLevelPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
