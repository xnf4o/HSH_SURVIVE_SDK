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

// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WeeklyQuestPanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.BeginMenuAnimation");

	UWidget_WeeklyQuestPanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WeeklyQuestPanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.EndMenuAnimation");

	UWidget_WeeklyQuestPanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.GetTimeRemains
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   Script_Data                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan               Timespan                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UWidget_WeeklyQuestPanel_C::GetTimeRemains(class UGameSparksScriptData* Script_Data, struct FTimespan* Timespan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.GetTimeRemains");

	UWidget_WeeklyQuestPanel_C_GetTimeRemains_Params params;
	params.Script_Data = Script_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timespan != nullptr)
		*Timespan = params.Timespan;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.OnResponse_CFE8C6144D584B11201B978E7023E905
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_WeeklyQuestPanel_C::OnResponse_CFE8C6144D584B11201B978E7023E905(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.OnResponse_CFE8C6144D584B11201B978E7023E905");

	UWidget_WeeklyQuestPanel_C_OnResponse_CFE8C6144D584B11201B978E7023E905_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WeeklyQuestPanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.BackAction");

	UWidget_WeeklyQuestPanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_WeeklyQuestPanel_C::BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_WeeklyQuestPanel_C_BndEvt__Widget_Button_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UWidget_WeeklyQuestPanel_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.Initialize");

	UWidget_WeeklyQuestPanel_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.ExecuteUbergraph_Widget_WeeklyQuestPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WeeklyQuestPanel_C::ExecuteUbergraph_Widget_WeeklyQuestPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.ExecuteUbergraph_Widget_WeeklyQuestPanel");

	UWidget_WeeklyQuestPanel_C_ExecuteUbergraph_Widget_WeeklyQuestPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_WeeklyQuestPanel_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuestPanel.Widget_WeeklyQuestPanel_C.OnExit__DelegateSignature");

	UWidget_WeeklyQuestPanel_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
