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

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.InitButton
struct UWidget_ButtonChoice_C_InitButton_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.InitContructor
struct UWidget_ButtonChoice_C_InitContructor_Params
{
	class UWidget_ButtonWithIndex_C*                   WidgetButtonIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.PreConstruct
struct UWidget_ButtonChoice_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.BndEvt__Button_This_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_ButtonChoice_C_BndEvt__Button_This_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.OnClickChioce
struct UWidget_ButtonChoice_C_OnClickChioce_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.SetActiveChoice
struct UWidget_ButtonChoice_C_SetActiveChoice_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.Construct
struct UWidget_ButtonChoice_C_Construct_Params
{
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.ExecuteUbergraph_Widget_ButtonChoice
struct UWidget_ButtonChoice_C_ExecuteUbergraph_Widget_ButtonChoice_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ButtonChoice.Widget_ButtonChoice_C.OnClicked__DelegateSignature
struct UWidget_ButtonChoice_C_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
