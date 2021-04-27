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

// Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionStickerMobile_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.AssignOptionManager");

	UWidget_OptionStickerMobile_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionStickerMobile_C::BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_OptionStickerMobile_C_BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionStickerMobile_C::BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_OptionStickerMobile_C_BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.ExecuteUbergraph_Widget_OptionStickerMobile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionStickerMobile_C::ExecuteUbergraph_Widget_OptionStickerMobile(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionStickerMobile.Widget_OptionStickerMobile_C.ExecuteUbergraph_Widget_OptionStickerMobile");

	UWidget_OptionStickerMobile_C_ExecuteUbergraph_Widget_OptionStickerMobile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
