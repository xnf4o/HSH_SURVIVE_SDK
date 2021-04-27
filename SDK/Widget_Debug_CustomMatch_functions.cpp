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

// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Debug_CustomMatch_C::GetText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.GetText_1");

	UWidget_Debug_CustomMatch_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.GetPlayerID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_Debug_CustomMatch_C::GetPlayerID(struct FString* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.GetPlayerID");

	UWidget_Debug_CustomMatch_C_GetPlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.RefreshGameliftObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_Debug_CustomMatch_C::RefreshGameliftObject()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.RefreshGameliftObject");

	UWidget_Debug_CustomMatch_C_RefreshGameliftObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Debug_CustomMatch_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.Construct");

	UWidget_Debug_CustomMatch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Debug_CustomMatch_C::BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWidget_Debug_CustomMatch_C_BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Debug_CustomMatch_C::BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_Debug_CustomMatch_C_BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Debug_CustomMatch_C::BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_Debug_CustomMatch_C_BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.JoinCustomMatch
// (BlueprintCallable, BlueprintEvent)
void UWidget_Debug_CustomMatch_C::JoinCustomMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.JoinCustomMatch");

	UWidget_Debug_CustomMatch_C_JoinCustomMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.CreateCustommatchGS
// (BlueprintCallable, BlueprintEvent)
void UWidget_Debug_CustomMatch_C::CreateCustommatchGS()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.CreateCustommatchGS");

	UWidget_Debug_CustomMatch_C_CreateCustommatchGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.CreateCustomMatch
// (BlueprintCallable, BlueprintEvent)
void UWidget_Debug_CustomMatch_C::CreateCustomMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.CreateCustomMatch");

	UWidget_Debug_CustomMatch_C_CreateCustomMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Debug_CustomMatch_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.Tick");

	UWidget_Debug_CustomMatch_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__EditableText_134_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Debug_CustomMatch_C::BndEvt__EditableText_134_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__EditableText_134_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_Debug_CustomMatch_C_BndEvt__EditableText_134_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__CheckBox_296_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Debug_CustomMatch_C::BndEvt__CheckBox_296_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__CheckBox_296_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWidget_Debug_CustomMatch_C_BndEvt__CheckBox_296_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Debug_CustomMatch_C::BndEvt__EditableText_0_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_Debug_CustomMatch_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Debug_CustomMatch_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_Debug_CustomMatch_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.ExecuteUbergraph_Widget_Debug_CustomMatch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Debug_CustomMatch_C::ExecuteUbergraph_Widget_Debug_CustomMatch(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Debug_CustomMatch.Widget_Debug_CustomMatch_C.ExecuteUbergraph_Widget_Debug_CustomMatch");

	UWidget_Debug_CustomMatch_C_ExecuteUbergraph_Widget_Debug_CustomMatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
