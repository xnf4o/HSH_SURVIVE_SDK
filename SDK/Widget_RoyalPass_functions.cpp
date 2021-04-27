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

// Function Widget_RoyalPass.Widget_RoyalPass_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BeginMenuAnimation");

	UWidget_RoyalPass_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.EndMenuAnimation");

	UWidget_RoyalPass_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.AssignWidgetManager");

	UWidget_RoyalPass_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.GetTimeRemains
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   SeasonEndDate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan               Timespan                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_C::GetTimeRemains(class UGameSparksScriptData* SeasonEndDate, struct FTimespan* Timespan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.GetTimeRemains");

	UWidget_RoyalPass_C_GetTimeRemains_Params params;
	params.SeasonEndDate = SeasonEndDate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timespan != nullptr)
		*Timespan = params.Timespan;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.OnResponse_725D2EC049C9530176572A976AD475C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RoyalPass_C::OnResponse_725D2EC049C9530176572A976AD475C1(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.OnResponse_725D2EC049C9530176572A976AD475C1");

	UWidget_RoyalPass_C_OnResponse_725D2EC049C9530176572A976AD475C1_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.OnResponse_B3EC2165445A6E8A6CD26B9435D77A6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RoyalPass_C::OnResponse_B3EC2165445A6E8A6CD26B9435D77A6E(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.OnResponse_B3EC2165445A6E8A6CD26B9435D77A6E");

	UWidget_RoyalPass_C_OnResponse_B3EC2165445A6E8A6CD26B9435D77A6E_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.OnResponse_CC84F38F4E365964E32B4E83242FBDAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RoyalPass_C::OnResponse_CC84F38F4E365964E32B4E83242FBDAC(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.OnResponse_CC84F38F4E365964E32B4E83242FBDAC");

	UWidget_RoyalPass_C_OnResponse_CC84F38F4E365964E32B4E83242FBDAC_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_RoyalPass_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BackAction");

	UWidget_RoyalPass_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__PurchasePremium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_C::BndEvt__PurchasePremium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__PurchasePremium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_RoyalPass_C_BndEvt__PurchasePremium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_C::BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_RoyalPass_C_BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_C::BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_RoyalPass_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.OnCancel_2
// (BlueprintCallable, BlueprintEvent)
void UWidget_RoyalPass_C::OnCancel_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.OnCancel_2");

	UWidget_RoyalPass_C_OnCancel_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__ResetLevel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_C::BndEvt__ResetLevel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__ResetLevel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_RoyalPass_C_BndEvt__ResetLevel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__GAINEXP_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_C::BndEvt__GAINEXP_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__GAINEXP_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_RoyalPass_C_BndEvt__GAINEXP_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__REVOKEPREMIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_C::BndEvt__REVOKEPREMIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__REVOKEPREMIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_RoyalPass_C_BndEvt__REVOKEPREMIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__RESET_SEASON_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_C::BndEvt__RESET_SEASON_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.BndEvt__RESET_SEASON_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_RoyalPass_C_BndEvt__RESET_SEASON_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UWidget_RoyalPass_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.Initialize");

	UWidget_RoyalPass_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.ShowPurchaseLevelPanel
// (BlueprintCallable, BlueprintEvent)
void UWidget_RoyalPass_C::ShowPurchaseLevelPanel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.ShowPurchaseLevelPanel");

	UWidget_RoyalPass_C_ShowPurchaseLevelPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.PurchasePremium
// (BlueprintCallable, BlueprintEvent)
void UWidget_RoyalPass_C::PurchasePremium()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.PurchasePremium");

	UWidget_RoyalPass_C_PurchasePremium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.RoyalPassTest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_C::RoyalPassTest(int Command)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.RoyalPassTest");

	UWidget_RoyalPass_C_RoyalPassTest_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.ExecuteUbergraph_Widget_RoyalPass
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_C::ExecuteUbergraph_Widget_RoyalPass(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.ExecuteUbergraph_Widget_RoyalPass");

	UWidget_RoyalPass_C_ExecuteUbergraph_Widget_RoyalPass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass.Widget_RoyalPass_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_RoyalPass_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass.Widget_RoyalPass_C.OnExit__DelegateSignature");

	UWidget_RoyalPass_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
