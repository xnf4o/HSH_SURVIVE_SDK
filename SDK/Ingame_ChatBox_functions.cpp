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

// Function Ingame_ChatBox.Ingame_ChatBox_C.FilterWord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatData             Chat                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_ChatData             ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
struct FS_ChatData UIngame_ChatBox_C::FilterWord(const struct FS_ChatData& Chat)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.FilterWord");

	UIngame_ChatBox_C_FilterWord_Params params;
	params.Chat = Chat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_ChatBox.Ingame_ChatBox_C.ResetSpamtime
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::ResetSpamtime()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.ResetSpamtime");

	UIngame_ChatBox_C_ResetSpamtime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.UnlockBan
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::UnlockBan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.UnlockBan");

	UIngame_ChatBox_C_UnlockBan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.CheckSpamCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::CheckSpamCount()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.CheckSpamCount");

	UIngame_ChatBox_C_CheckSpamCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.SendSpamAlert
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::SendSpamAlert()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.SendSpamAlert");

	UIngame_ChatBox_C_SendSpamAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.GetPlayerRole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatBox_C::GetPlayerRole(TEnumAsByte<E_Role_E_Role>* Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.GetPlayerRole");

	UIngame_ChatBox_C_GetPlayerRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role != nullptr)
		*Role = params.Role;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.ToggleVisibleChatText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_ChatBox_C::ToggleVisibleChatText(bool bIsVisible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.ToggleVisibleChatText");

	UIngame_ChatBox_C_ToggleVisibleChatText_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UIngame_ChatBox_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.OnFocusReceived");

	UIngame_ChatBox_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_ChatBox.Ingame_ChatBox_C.RefreshChatType
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::RefreshChatType()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.RefreshChatType");

	UIngame_ChatBox_C_RefreshChatType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.GetText_ChatType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UIngame_ChatBox_C::GetText_ChatType()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.GetText_ChatType");

	UIngame_ChatBox_C_GetText_ChatType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_ChatBox.Ingame_ChatBox_C.DeactiveChatBox
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::DeactiveChatBox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.DeactiveChatBox");

	UIngame_ChatBox_C_DeactiveChatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.ActiveChatBox
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::ActiveChatBox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.ActiveChatBox");

	UIngame_ChatBox_C_ActiveChatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::UpdateText()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.UpdateText");

	UIngame_ChatBox_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.Tick");

	UIngame_ChatBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_ChatBox_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.Construct");

	UIngame_ChatBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatBox_C::BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UIngame_ChatBox_C_BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UIngame_ChatBox_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.OnFocusLost");

	UIngame_ChatBox_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UIngame_ChatBox_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.OnAddedToFocusPath");

	UIngame_ChatBox_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UIngame_ChatBox_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.OnRemovedFromFocusPath");

	UIngame_ChatBox_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.BndEvt__Widget_Button_Channel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UIngame_ChatBox_C::BndEvt__Widget_Button_Channel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.BndEvt__Widget_Button_Channel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UIngame_ChatBox_C_BndEvt__Widget_Button_Channel_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.ToggleChannel
// (BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::ToggleChannel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.ToggleChannel");

	UIngame_ChatBox_C_ToggleChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.SetSpecificChannel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ChatType_E_ChatType> ChatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatBox_C::SetSpecificChannel(TEnumAsByte<E_ChatType_E_ChatType> ChatType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.SetSpecificChannel");

	UIngame_ChatBox_C_SetSpecificChannel_Params params;
	params.ChatType = ChatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.CheckTextSpam
// (BlueprintCallable, BlueprintEvent)
void UIngame_ChatBox_C::CheckTextSpam()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.CheckTextSpam");

	UIngame_ChatBox_C_CheckTextSpam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatBox.Ingame_ChatBox_C.ExecuteUbergraph_Ingame_ChatBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatBox_C::ExecuteUbergraph_Ingame_ChatBox(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatBox.Ingame_ChatBox_C.ExecuteUbergraph_Ingame_ChatBox");

	UIngame_ChatBox_C_ExecuteUbergraph_Ingame_ChatBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
