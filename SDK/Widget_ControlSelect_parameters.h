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

// Function Widget_ControlSelect.Widget_ControlSelect_C.SetInputSelectValues
struct UWidget_ControlSelect_C_SetInputSelectValues_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MyActionDisplayName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FInputActionKeyMapping>              ActionKeyMap;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_ControlSelect.Widget_ControlSelect_C.BndEvt__InputKeySelector_410_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
struct UWidget_ControlSelect_C_BndEvt__InputKeySelector_410_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_ControlSelect.Widget_ControlSelect_C.BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
struct UWidget_ControlSelect_C_BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_ControlSelect.Widget_ControlSelect_C.PreConstruct
struct UWidget_ControlSelect_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ControlSelect.Widget_ControlSelect_C.ExecuteUbergraph_Widget_ControlSelect
struct UWidget_ControlSelect_C_ExecuteUbergraph_Widget_ControlSelect_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ControlSelect.Widget_ControlSelect_C.OnKeySelected_1__DelegateSignature
struct UWidget_ControlSelect_C_OnKeySelected_1__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 InputChord;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_ControlSelect.Widget_ControlSelect_C.OnKeySelected_0__DelegateSignature
struct UWidget_ControlSelect_C_OnKeySelected_0__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 InputChord;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
