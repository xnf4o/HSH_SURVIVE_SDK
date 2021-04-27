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

// Function Widget_LoadingPopup.Widget_LoadingPopup_C.Get_TitleTextBox_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_LoadingPopup_C::Get_TitleTextBox_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoadingPopup.Widget_LoadingPopup_C.Get_TitleTextBox_Text_1");

	UWidget_LoadingPopup_C_Get_TitleTextBox_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_LoadingPopup.Widget_LoadingPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_LoadingPopup_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoadingPopup.Widget_LoadingPopup_C.Construct");

	UWidget_LoadingPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoadingPopup.Widget_LoadingPopup_C.ExecuteUbergraph_Widget_LoadingPopup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LoadingPopup_C::ExecuteUbergraph_Widget_LoadingPopup(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoadingPopup.Widget_LoadingPopup_C.ExecuteUbergraph_Widget_LoadingPopup");

	UWidget_LoadingPopup_C_ExecuteUbergraph_Widget_LoadingPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoadingPopup.Widget_LoadingPopup_C.CancelEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LoadingPopup_C::CancelEventDispatcher__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoadingPopup.Widget_LoadingPopup_C.CancelEventDispatcher__DelegateSignature");

	UWidget_LoadingPopup_C_CancelEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoadingPopup.Widget_LoadingPopup_C.ConfirmEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LoadingPopup_C::ConfirmEventDispatcher__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoadingPopup.Widget_LoadingPopup_C.ConfirmEventDispatcher__DelegateSignature");

	UWidget_LoadingPopup_C_ConfirmEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
