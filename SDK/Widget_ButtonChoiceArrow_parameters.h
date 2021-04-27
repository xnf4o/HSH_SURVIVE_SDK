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

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.RefreshChoice
struct UWidget_ButtonChoiceArrow_C_RefreshChoice_Params
{
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.GetActiveSelection
struct UWidget_ButtonChoiceArrow_C_GetActiveSelection_Params
{
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.InitButton
struct UWidget_ButtonChoiceArrow_C_InitButton_Params
{
	int                                                Active_Choice;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.InitContructor
struct UWidget_ButtonChoiceArrow_C_InitContructor_Params
{
	class UWidget_ButtonWithIndex_C*                   WidgetButtonIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.Construct
struct UWidget_ButtonChoiceArrow_C_Construct_Params
{
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.PreConstruct
struct UWidget_ButtonChoiceArrow_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.BndEvt__Button_Backward_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWidget_ButtonChoiceArrow_C_BndEvt__Button_Backward_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.BndEvt__Button_Forward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWidget_ButtonChoiceArrow_C_BndEvt__Button_Forward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.ExecuteUbergraph_Widget_ButtonChoiceArrow
struct UWidget_ButtonChoiceArrow_C_ExecuteUbergraph_Widget_ButtonChoiceArrow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoiceArrow.Widget_ButtonChoiceArrow_C.OnClicked__DelegateSignature
struct UWidget_ButtonChoiceArrow_C_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
