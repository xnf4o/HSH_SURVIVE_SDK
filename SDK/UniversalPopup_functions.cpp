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

// Function UniversalPopup.UniversalPopup_C.Get_HorizontalBox_Time_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UUniversalPopup_C::Get_HorizontalBox_Time_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.Get_HorizontalBox_Time_Visibility_1");

	UUniversalPopup_C_Get_HorizontalBox_Time_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UniversalPopup.UniversalPopup_C.UpdateTimeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUniversalPopup_C::UpdateTimeText()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.UpdateTimeText");

	UUniversalPopup_C_UpdateTimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.Get_CancelBtn_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UUniversalPopup_C::Get_CancelBtn_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.Get_CancelBtn_Visibility_1");

	UUniversalPopup_C_Get_CancelBtn_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UniversalPopup.UniversalPopup_C.UnbindAllEventDispatcher
// (Public, BlueprintCallable, BlueprintEvent)
void UUniversalPopup_C::UnbindAllEventDispatcher()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.UnbindAllEventDispatcher");

	UUniversalPopup_C_UnbindAllEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.SetupUniversalPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 confirmText                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 cancelText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniversalPopup_C::SetupUniversalPopup(const struct FString& Title, const struct FString& Message, const struct FString& confirmText, const struct FString& cancelText, TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType, float Timer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.SetupUniversalPopup");

	UUniversalPopup_C_SetupUniversalPopup_Params params;
	params.Title = Title;
	params.Message = Message;
	params.confirmText = confirmText;
	params.cancelText = cancelText;
	params.popupType = popupType;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UUniversalPopup_C::BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UUniversalPopup_C_BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UUniversalPopup_C::BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UUniversalPopup_C_BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UUniversalPopup_C::BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUniversalPopup_C_BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.SendConfirm
// (BlueprintCallable, BlueprintEvent)
void UUniversalPopup_C::SendConfirm()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.SendConfirm");

	UUniversalPopup_C_SendConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.SendCancel
// (BlueprintCallable, BlueprintEvent)
void UUniversalPopup_C::SendCancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.SendCancel");

	UUniversalPopup_C_SendCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniversalPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.Tick");

	UUniversalPopup_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.ExecuteUbergraph_UniversalPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUniversalPopup_C::ExecuteUbergraph_UniversalPopup(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.ExecuteUbergraph_UniversalPopup");

	UUniversalPopup_C_ExecuteUbergraph_UniversalPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.CancelEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUniversalPopup_C::CancelEventDispatcher__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.CancelEventDispatcher__DelegateSignature");

	UUniversalPopup_C_CancelEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UniversalPopup.UniversalPopup_C.ConfirmEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUniversalPopup_C::ConfirmEventDispatcher__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UniversalPopup.UniversalPopup_C.ConfirmEventDispatcher__DelegateSignature");

	UUniversalPopup_C_ConfirmEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
