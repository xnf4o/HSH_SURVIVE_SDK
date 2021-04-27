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

// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Get_Widget_Button_JoinByID_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenu_CustomMatch_C::Get_Widget_Button_JoinByID_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Get_Widget_Button_JoinByID_bIsEnabled_1");

	UWidget_MainMenu_CustomMatch_C_Get_Widget_Button_JoinByID_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Get_Widget_Button_CreateRoom_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_MainMenu_CustomMatch_C::Get_Widget_Button_CreateRoom_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Get_Widget_Button_CreateRoom_bIsEnabled_1");

	UWidget_MainMenu_CustomMatch_C_Get_Widget_Button_CreateRoom_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.GetRegionBySessionID
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 SessionId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 RegionCode                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_MainMenu_CustomMatch_C::GetRegionBySessionID(const struct FString& SessionId, struct FString* RegionCode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.GetRegionBySessionID");

	UWidget_MainMenu_CustomMatch_C_GetRegionBySessionID_Params params;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionCode != nullptr)
		*RegionCode = params.RegionCode;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.GetPlayerID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_MainMenu_CustomMatch_C::GetPlayerID(struct FString* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.GetPlayerID");

	UWidget_MainMenu_CustomMatch_C_GetPlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.RefreshGameliftObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::RefreshGameliftObject()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.RefreshGameliftObject");

	UWidget_MainMenu_CustomMatch_C_RefreshGameliftObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenu_CustomMatch_C::BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWidget_MainMenu_CustomMatch_C_BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_MainMenu_CustomMatch_C_BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_MainMenu_CustomMatch_C_BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.JoinCustomMatch
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::JoinCustomMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.JoinCustomMatch");

	UWidget_MainMenu_CustomMatch_C_JoinCustomMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.CreateCustommatchGS
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::CreateCustommatchGS()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.CreateCustommatchGS");

	UWidget_MainMenu_CustomMatch_C_CreateCustommatchGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.CreateCustomMatch
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::CreateCustomMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.CreateCustomMatch");

	UWidget_MainMenu_CustomMatch_C_CreateCustomMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenu_CustomMatch_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Tick");

	UWidget_MainMenu_CustomMatch_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_MainMenu_CustomMatch_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_ButtonImage_52_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::BndEvt__Widget_ButtonImage_52_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.BndEvt__Widget_ButtonImage_52_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_MainMenu_CustomMatch_C_BndEvt__Widget_ButtonImage_52_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.Construct");

	UWidget_MainMenu_CustomMatch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.DescribeCustomMatch
// (BlueprintCallable, BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::DescribeCustomMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.DescribeCustomMatch");

	UWidget_MainMenu_CustomMatch_C_DescribeCustomMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.ExecuteUbergraph_Widget_MainMenu_CustomMatch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MainMenu_CustomMatch_C::ExecuteUbergraph_Widget_MainMenu_CustomMatch(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.ExecuteUbergraph_Widget_MainMenu_CustomMatch");

	UWidget_MainMenu_CustomMatch_C_ExecuteUbergraph_Widget_MainMenu_CustomMatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MainMenu_CustomMatch_C::OnCancel__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C.OnCancel__DelegateSignature");

	UWidget_MainMenu_CustomMatch_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
