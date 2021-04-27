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

// Function Ingame_ChatBox.Ingame_ChatBox_C.FilterWord
struct UIngame_ChatBox_C_FilterWord_Params
{
	struct FS_ChatData                                 Chat;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ChatData                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.ResetSpamtime
struct UIngame_ChatBox_C_ResetSpamtime_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.UnlockBan
struct UIngame_ChatBox_C_UnlockBan_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.CheckSpamCount
struct UIngame_ChatBox_C_CheckSpamCount_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.SendSpamAlert
struct UIngame_ChatBox_C_SendSpamAlert_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.GetPlayerRole
struct UIngame_ChatBox_C_GetPlayerRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.ToggleVisibleChatText
struct UIngame_ChatBox_C_ToggleVisibleChatText_Params
{
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.OnFocusReceived
struct UIngame_ChatBox_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.RefreshChatType
struct UIngame_ChatBox_C_RefreshChatType_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.GetText_ChatType
struct UIngame_ChatBox_C_GetText_ChatType_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.DeactiveChatBox
struct UIngame_ChatBox_C_DeactiveChatBox_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.ActiveChatBox
struct UIngame_ChatBox_C_ActiveChatBox_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.UpdateText
struct UIngame_ChatBox_C_UpdateText_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.Tick
struct UIngame_ChatBox_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.Construct
struct UIngame_ChatBox_C_Construct_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UIngame_ChatBox_C_BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.OnFocusLost
struct UIngame_ChatBox_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.OnAddedToFocusPath
struct UIngame_ChatBox_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.OnRemovedFromFocusPath
struct UIngame_ChatBox_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.BndEvt__Widget_Button_Channel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UIngame_ChatBox_C_BndEvt__Widget_Button_Channel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.ToggleChannel
struct UIngame_ChatBox_C_ToggleChannel_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.SetSpecificChannel
struct UIngame_ChatBox_C_SetSpecificChannel_Params
{
	TEnumAsByte<E_ChatType_E_ChatType>                 ChatType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.CheckTextSpam
struct UIngame_ChatBox_C_CheckTextSpam_Params
{
};

// Function Ingame_ChatBox.Ingame_ChatBox_C.ExecuteUbergraph_Ingame_ChatBox
struct UIngame_ChatBox_C_ExecuteUbergraph_Ingame_ChatBox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
