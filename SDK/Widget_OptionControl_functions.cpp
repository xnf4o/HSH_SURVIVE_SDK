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

// Function Widget_OptionControl.Widget_OptionControl_C.SetSkillcheckControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_OptionControl_C::SetSkillcheckControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.SetSkillcheckControl");

	UWidget_OptionControl_C_SetSkillcheckControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.Get_Hunter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_OptionControl_C::Get_Hunter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.Get_Hunter");

	UWidget_OptionControl_C_Get_Hunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_OptionControl.Widget_OptionControl_C.Get_Survivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_OptionControl_C::Get_Survivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.Get_Survivor");

	UWidget_OptionControl_C_Get_Survivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_OptionControl.Widget_OptionControl_C.ChangeStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_OptionControl_C::ChangeStyle(class UButton* Button, bool bActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.ChangeStyle");

	UWidget_OptionControl_C_ChangeStyle_Params params;
	params.Button = Button;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.FindMapIndexByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSurvivor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionControl_C::FindMapIndexByName(const struct FName& Name, bool IsSurvivor, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.FindMapIndexByName");

	UWidget_OptionControl_C_FindMapIndexByName_Params params;
	params.Name = Name;
	params.IsSurvivor = IsSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function Widget_OptionControl.Widget_OptionControl_C.UpdateValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_OptionControl_C::UpdateValues()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.UpdateValues");

	UWidget_OptionControl_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.ResetToDeafaultSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionControl_C::ResetToDeafaultSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.ResetToDeafaultSetting");

	UWidget_OptionControl_C_ResetToDeafaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.ApplySetting
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_OptionControl_C::ApplySetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.ApplySetting");

	UWidget_OptionControl_C_ApplySetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.AssignOptionManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionManagerComponent_C* OptionManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionControl_C::AssignOptionManager(class UOptionManagerComponent_C* OptionManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.AssignOptionManager");

	UWidget_OptionControl_C_AssignOptionManager_Params params;
	params.OptionManager = OptionManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionControl_C::BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_OptionControl_C_BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_OptionControl_C::BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_OptionControl_C_BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UWidget_OptionControl_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.Initialize");

	UWidget_OptionControl_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.OnSurvivorKeySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             InputChord                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_OptionControl_C::OnSurvivorKeySelected(int Index, const struct FName& Name, const struct FInputChord& InputChord)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.OnSurvivorKeySelected");

	UWidget_OptionControl_C_OnSurvivorKeySelected_Params params;
	params.Index = Index;
	params.Name = Name;
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.OnHunterKeySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             InputChord                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_OptionControl_C::OnHunterKeySelected(int Index, const struct FName& Name, const struct FInputChord& InputChord)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.OnHunterKeySelected");

	UWidget_OptionControl_C_OnHunterKeySelected_Params params;
	params.Index = Index;
	params.Name = Name;
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_ButtonSlider_ResScale_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionControl_C::BndEvt__Widget_ButtonSlider_ResScale_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_ButtonSlider_ResScale_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature");

	UWidget_OptionControl_C_BndEvt__Widget_ButtonSlider_ResScale_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<SlateCore_ESelectInfo> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionControl_C::BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ESelectInfo> Selection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_OptionControl_C_BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;
	params.Text = Text;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__ToggleCounch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<SlateCore_ESelectInfo> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionControl_C::BndEvt__ToggleCounch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ESelectInfo> Selection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__ToggleCounch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWidget_OptionControl_C_BndEvt__ToggleCounch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;
	params.Text = Text;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_ChoiceControl_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionControl_C::BndEvt__Widget_Button_ChoiceControl_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_ChoiceControl_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_OptionControl_C_BndEvt__Widget_Button_ChoiceControl_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_SkillcheckType_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OptionControl_C::BndEvt__Widget_SkillcheckType_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_SkillcheckType_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_OptionControl_C_BndEvt__Widget_SkillcheckType_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OptionControl.Widget_OptionControl_C.ExecuteUbergraph_Widget_OptionControl
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OptionControl_C::ExecuteUbergraph_Widget_OptionControl(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_OptionControl.Widget_OptionControl_C.ExecuteUbergraph_Widget_OptionControl");

	UWidget_OptionControl_C_ExecuteUbergraph_Widget_OptionControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
