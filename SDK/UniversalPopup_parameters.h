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

// Function UniversalPopup.UniversalPopup_C.Get_HorizontalBox_Time_Visibility_1
struct UUniversalPopup_C_Get_HorizontalBox_Time_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UniversalPopup.UniversalPopup_C.UpdateTimeText
struct UUniversalPopup_C_UpdateTimeText_Params
{
};

// Function UniversalPopup.UniversalPopup_C.Get_CancelBtn_Visibility_1
struct UUniversalPopup_C_Get_CancelBtn_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UniversalPopup.UniversalPopup_C.UnbindAllEventDispatcher
struct UUniversalPopup_C_UnbindAllEventDispatcher_Params
{
};

// Function UniversalPopup.UniversalPopup_C.SetupUniversalPopup
struct UUniversalPopup_C_SetupUniversalPopup_Params
{
	struct FString                                     Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     confirmText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     cancelText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<UniversalPopupType_Enum_EUniversalPopupType_Enum> popupType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UUniversalPopup_C_BndEvt__Widget_Button_Confirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UUniversalPopup_C_BndEvt__Widget_Button_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function UniversalPopup.UniversalPopup_C.BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UUniversalPopup_C_BndEvt__Widget_Button_ConfirmOnly_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function UniversalPopup.UniversalPopup_C.SendConfirm
struct UUniversalPopup_C_SendConfirm_Params
{
};

// Function UniversalPopup.UniversalPopup_C.SendCancel
struct UUniversalPopup_C_SendCancel_Params
{
};

// Function UniversalPopup.UniversalPopup_C.Tick
struct UUniversalPopup_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UniversalPopup.UniversalPopup_C.ExecuteUbergraph_UniversalPopup
struct UUniversalPopup_C_ExecuteUbergraph_UniversalPopup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UniversalPopup.UniversalPopup_C.CancelEventDispatcher__DelegateSignature
struct UUniversalPopup_C_CancelEventDispatcher__DelegateSignature_Params
{
};

// Function UniversalPopup.UniversalPopup_C.ConfirmEventDispatcher__DelegateSignature
struct UUniversalPopup_C_ConfirmEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
