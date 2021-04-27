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

// Function Widget_MatchFound.Widget_MatchFound_C.UnbindAllEventDispatcher
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MatchFound_C::UnbindAllEventDispatcher()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.UnbindAllEventDispatcher");

	UWidget_MatchFound_C_UnbindAllEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MatchFound.Widget_MatchFound_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MatchFound_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.Tick");

	UWidget_MatchFound_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MatchFound.Widget_MatchFound_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UWidget_MatchFound_C::Remove()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.Remove");

	UWidget_MatchFound_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MatchFound.Widget_MatchFound_C.OnMatchFound
// (BlueprintCallable, BlueprintEvent)
void UWidget_MatchFound_C::OnMatchFound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.OnMatchFound");

	UWidget_MatchFound_C_OnMatchFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MatchFound.Widget_MatchFound_C.BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MatchFound_C::BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_MatchFound_C_BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MatchFound.Widget_MatchFound_C.Add
// (BlueprintCallable, BlueprintEvent)
void UWidget_MatchFound_C::Add()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.Add");

	UWidget_MatchFound_C_Add_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MatchFound.Widget_MatchFound_C.ExecuteUbergraph_Widget_MatchFound
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MatchFound_C::ExecuteUbergraph_Widget_MatchFound(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.ExecuteUbergraph_Widget_MatchFound");

	UWidget_MatchFound_C_ExecuteUbergraph_Widget_MatchFound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MatchFound.Widget_MatchFound_C.ConfirmEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MatchFound_C::ConfirmEventDispatcher__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MatchFound.Widget_MatchFound_C.ConfirmEventDispatcher__DelegateSignature");

	UWidget_MatchFound_C_ConfirmEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
