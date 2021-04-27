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

// Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.Get_Text_number_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ButtonTextNumberInput_C::Get_Text_number_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.Get_Text_number_Text_1");

	UWidget_ButtonTextNumberInput_C_Get_Text_number_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ButtonTextNumberInput_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.PreConstruct");

	UWidget_ButtonTextNumberInput_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ButtonTextNumberInput_C::BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_ButtonTextNumberInput_C_BndEvt__Widget_Button_Decrease_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.BndEvt__Widget_Button_Increase_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ButtonTextNumberInput_C::BndEvt__Widget_Button_Increase_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.BndEvt__Widget_Button_Increase_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_ButtonTextNumberInput_C_BndEvt__Widget_Button_Increase_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.ExecuteUbergraph_Widget_ButtonTextNumberInput
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ButtonTextNumberInput_C::ExecuteUbergraph_Widget_ButtonTextNumberInput(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.ExecuteUbergraph_Widget_ButtonTextNumberInput");

	UWidget_ButtonTextNumberInput_C_ExecuteUbergraph_Widget_ButtonTextNumberInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_ButtonTextNumberInput_C::OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ButtonTextNumberInput.Widget_ButtonTextNumberInput_C.OnClicked__DelegateSignature");

	UWidget_ButtonTextNumberInput_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
