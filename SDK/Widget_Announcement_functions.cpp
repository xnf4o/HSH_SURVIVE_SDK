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

// Function Widget_Announcement.Widget_Announcement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Announcement_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Announcement.Widget_Announcement_C.Construct");

	UWidget_Announcement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Announcement.Widget_Announcement_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Announcement_C::BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Announcement.Widget_Announcement_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_Announcement_C_BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Announcement.Widget_Announcement_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Announcement_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Announcement.Widget_Announcement_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_Announcement_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Announcement.Widget_Announcement_C.ExecuteUbergraph_Widget_Announcement
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Announcement_C::ExecuteUbergraph_Widget_Announcement(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Announcement.Widget_Announcement_C.ExecuteUbergraph_Widget_Announcement");

	UWidget_Announcement_C_ExecuteUbergraph_Widget_Announcement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Announcement.Widget_Announcement_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Announcement_C::OnConfirm__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Announcement.Widget_Announcement_C.OnConfirm__DelegateSignature");

	UWidget_Announcement_C_OnConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
