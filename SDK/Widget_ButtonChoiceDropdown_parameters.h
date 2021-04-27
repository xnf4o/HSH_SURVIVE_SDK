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

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.InitButton
struct UWidget_ButtonChoiceDropdown_C_InitButton_Params
{
	int                                                Active_Choice;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.InitContructor
struct UWidget_ButtonChoiceDropdown_C_InitContructor_Params
{
	class UWidget_ButtonWithIndex_C*                   WidgetButtonIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.PreConstruct
struct UWidget_ButtonChoiceDropdown_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.Construct
struct UWidget_ButtonChoiceDropdown_C_Construct_Params
{
};

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.BndEvt__ComboBoxString_248_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UWidget_ButtonChoiceDropdown_C_BndEvt__ComboBoxString_248_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.ExecuteUbergraph_Widget_ButtonChoiceDropdown
struct UWidget_ButtonChoiceDropdown_C_ExecuteUbergraph_Widget_ButtonChoiceDropdown_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoiceDropdown.Widget_ButtonChoiceDropdown_C.OnClicked__DelegateSignature
struct UWidget_ButtonChoiceDropdown_C_OnClicked__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
