#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Widget_OptionControl.Widget_OptionControl_C.SetSkillcheckControl
struct UWidget_OptionControl_C_SetSkillcheckControl_Params
{
};

// Function Widget_OptionControl.Widget_OptionControl_C.Get_Hunter
struct UWidget_OptionControl_C_Get_Hunter_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_OptionControl.Widget_OptionControl_C.Get_Survivor
struct UWidget_OptionControl_C_Get_Survivor_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_OptionControl.Widget_OptionControl_C.ChangeStyle
struct UWidget_OptionControl_C_ChangeStyle_Params
{
	class UButton*                                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bActive;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionControl.Widget_OptionControl_C.FindMapIndexByName
struct UWidget_OptionControl_C_FindMapIndexByName_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSurvivor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.UpdateValues
struct UWidget_OptionControl_C_UpdateValues_Params
{
};

// Function Widget_OptionControl.Widget_OptionControl_C.ResetToDeafaultSetting
struct UWidget_OptionControl_C_ResetToDeafaultSetting_Params
{
};

// Function Widget_OptionControl.Widget_OptionControl_C.ApplySetting
struct UWidget_OptionControl_C_ApplySetting_Params
{
};

// Function Widget_OptionControl.Widget_OptionControl_C.AssignOptionManager
struct UWidget_OptionControl_C_AssignOptionManager_Params
{
	class UOptionManagerComponent_C*                   OptionManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_OptionControl_C_BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWidget_OptionControl_C_BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function Widget_OptionControl.Widget_OptionControl_C.Initialize
struct UWidget_OptionControl_C_Initialize_Params
{
};

// Function Widget_OptionControl.Widget_OptionControl_C.OnSurvivorKeySelected
struct UWidget_OptionControl_C_OnSurvivorKeySelected_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 InputChord;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.OnHunterKeySelected
struct UWidget_OptionControl_C_OnHunterKeySelected_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 InputChord;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_ButtonSlider_ResScale_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature
struct UWidget_OptionControl_C_BndEvt__Widget_ButtonSlider_ResScale_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWidget_OptionControl_C_BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__ToggleCounch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWidget_OptionControl_C_BndEvt__ToggleCounch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_Button_ChoiceControl_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWidget_OptionControl_C_BndEvt__Widget_Button_ChoiceControl_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionControl.Widget_OptionControl_C.BndEvt__Widget_SkillcheckType_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_OptionControl_C_BndEvt__Widget_SkillcheckType_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_OptionControl.Widget_OptionControl_C.ExecuteUbergraph_Widget_OptionControl
struct UWidget_OptionControl_C_ExecuteUbergraph_Widget_OptionControl_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
