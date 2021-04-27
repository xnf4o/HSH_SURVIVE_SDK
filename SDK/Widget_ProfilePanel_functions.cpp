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

// Function Widget_ProfilePanel.Widget_ProfilePanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ProfilePanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.EndMenuAnimation");

	UWidget_ProfilePanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ProfilePanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BeginMenuAnimation");

	UWidget_ProfilePanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.AnimationDistortion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
void UWidget_ProfilePanel_C::AnimationDistortion(const struct FScriptDelegate& Delegate)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.AnimationDistortion");

	UWidget_ProfilePanel_C_AnimationDistortion_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.SequenceEvent_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ProfilePanel_C::SequenceEvent_2(class UImage* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.SequenceEvent_2");

	UWidget_ProfilePanel_C_SequenceEvent_2_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.SequenceEvent_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URetainerBox*            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ProfilePanel_C::SequenceEvent_1(class URetainerBox* Target, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.SequenceEvent_1");

	UWidget_ProfilePanel_C_SequenceEvent_1_Params params;
	params.Target = Target;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ProfilePanel_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshLootbox");

	UWidget_ProfilePanel_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ProfilePanel_C::GetText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.GetText_1");

	UWidget_ProfilePanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.Initialize");

	UWidget_ProfilePanel_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ProfilePanel_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.AssignWidgetManager");

	UWidget_ProfilePanel_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ProfilePanel_C::BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_ProfilePanel_C_BndEvt__Widget_Button_Sound_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ProfilePanel_C::BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_ProfilePanel_C_BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Graphics_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ProfilePanel_C::BndEvt__Widget_Button_Graphics_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Graphics_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_ProfilePanel_C_BndEvt__Widget_Button_Graphics_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ProfilePanel_C::BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_ProfilePanel_C_BndEvt__Widget_Button_Display_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BackAction");

	UWidget_ProfilePanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature
// (BlueprintEvent)
void UWidget_ProfilePanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature");

	UWidget_ProfilePanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnLootbox__DelegateSignature
// (BlueprintEvent)
void UWidget_ProfilePanel_C::BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnLootbox__DelegateSignature");

	UWidget_ProfilePanel_C_BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_ProfilePanel_C::BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_ProfilePanel_C_BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.PlayAnimationDistort
// (BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::PlayAnimationDistort()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.PlayAnimationDistort");

	UWidget_ProfilePanel_C_PlayAnimationDistort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnWidgetActive
// (BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::OnWidgetActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnWidgetActive");

	UWidget_ProfilePanel_C_OnWidgetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshProfilePicture
// (BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::RefreshProfilePicture()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshProfilePicture");

	UWidget_ProfilePanel_C_RefreshProfilePicture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshSticker
// (BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::RefreshSticker()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshSticker");

	UWidget_ProfilePanel_C_RefreshSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshStatistic
// (BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::RefreshStatistic()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.RefreshStatistic");

	UWidget_ProfilePanel_C_RefreshStatistic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.ExecuteUbergraph_Widget_ProfilePanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ProfilePanel_C::ExecuteUbergraph_Widget_ProfilePanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.ExecuteUbergraph_Widget_ProfilePanel");

	UWidget_ProfilePanel_C_ExecuteUbergraph_Widget_ProfilePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnSetting__DelegateSignature");

	UWidget_ProfilePanel_C_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnLootbox__DelegateSignature");

	UWidget_ProfilePanel_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::OnStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnStore__DelegateSignature");

	UWidget_ProfilePanel_C_OnStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnFindMatch__DelegateSignature");

	UWidget_ProfilePanel_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_ProfilePanel_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ProfilePanel.Widget_ProfilePanel_C.OnExit__DelegateSignature");

	UWidget_ProfilePanel_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
