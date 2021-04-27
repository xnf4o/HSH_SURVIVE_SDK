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

// Function StorePopupWithNumber.StorePopupWithNumber_C.GetCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UStorePopupWithNumber_C::GetCount()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.GetCount");

	UStorePopupWithNumber_C_GetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StorePopupWithNumber.StorePopupWithNumber_C.GetPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UStorePopupWithNumber_C::GetPrice()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.GetPrice");

	UStorePopupWithNumber_C_GetPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StorePopupWithNumber.StorePopupWithNumber_C.Get_CancelBtn_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UStorePopupWithNumber_C::Get_CancelBtn_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.Get_CancelBtn_Visibility_1");

	UStorePopupWithNumber_C_Get_CancelBtn_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StorePopupWithNumber.StorePopupWithNumber_C.UnbindAllEventDispatcher
// (Public, BlueprintCallable, BlueprintEvent)
void UStorePopupWithNumber_C::UnbindAllEventDispatcher()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.UnbindAllEventDispatcher");

	UStorePopupWithNumber_C_UnbindAllEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.SetupStorePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSlateBrush             icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStorePopupWithNumber_C::SetupStorePopup(const struct FString& Title, const struct FSlateBrush& icon, int Price)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.SetupStorePopup");

	UStorePopupWithNumber_C_SetupStorePopup_Params params;
	params.Title = Title;
	params.icon = icon;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UStorePopupWithNumber_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.Construct");

	UStorePopupWithNumber_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UStorePopupWithNumber_C::BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UStorePopupWithNumber_C_BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UStorePopupWithNumber_C::BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UStorePopupWithNumber_C_BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UStorePopupWithNumber_C::BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UStorePopupWithNumber_C_BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UStorePopupWithNumber_C::BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UStorePopupWithNumber_C_BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UStorePopupWithNumber_C::BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UStorePopupWithNumber_C_BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.ExecuteUbergraph_StorePopupWithNumber
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStorePopupWithNumber_C::ExecuteUbergraph_StorePopupWithNumber(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.ExecuteUbergraph_StorePopupWithNumber");

	UStorePopupWithNumber_C_ExecuteUbergraph_StorePopupWithNumber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.CancelEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UStorePopupWithNumber_C::CancelEventDispatcher__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.CancelEventDispatcher__DelegateSignature");

	UStorePopupWithNumber_C_CancelEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StorePopupWithNumber.StorePopupWithNumber_C.ConfirmEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStorePopupWithNumber_C::ConfirmEventDispatcher__DelegateSignature(int Count)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StorePopupWithNumber.StorePopupWithNumber_C.ConfirmEventDispatcher__DelegateSignature");

	UStorePopupWithNumber_C_ConfirmEventDispatcher__DelegateSignature_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
