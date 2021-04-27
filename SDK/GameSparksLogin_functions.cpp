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

// Function GameSparksLogin.GameSparksLogin_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UGameSparksLogin_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.OnMouseMove");

	UGameSparksLogin_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksLogin.GameSparksLogin_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UGameSparksLogin_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.OnKeyDown");

	UGameSparksLogin_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksLogin.GameSparksLogin_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UGameSparksLogin_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.OnFocusReceived");

	UGameSparksLogin_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksLogin.GameSparksLogin_C.OnLoginResponse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSAuthenticationResponse GSAuthenticationResponse       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           HasError                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewMethod                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameSparksLogin_C::OnLoginResponse(const struct FGSAuthenticationResponse& GSAuthenticationResponse, bool HasError, bool NewMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.OnLoginResponse");

	UGameSparksLogin_C_OnLoginResponse_Params params;
	params.GSAuthenticationResponse = GSAuthenticationResponse;
	params.HasError = HasError;
	params.NewMethod = NewMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.AreAllFieldsFilled?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameSparksLogin_C::AreAllFieldsFilled_()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.AreAllFieldsFilled?");

	UGameSparksLogin_C_AreAllFieldsFilled__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparksLogin.GameSparksLogin_C.OnResponse_11C71A064B89D9F8F730E78FD49BC1AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSAuthenticationResponse AuthenticationResponse         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameSparksLogin_C::OnResponse_11C71A064B89D9F8F730E78FD49BC1AE(const struct FGSAuthenticationResponse& AuthenticationResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.OnResponse_11C71A064B89D9F8F730E78FD49BC1AE");

	UGameSparksLogin_C_OnResponse_11C71A064B89D9F8F730E78FD49BC1AE_Params params;
	params.AuthenticationResponse = AuthenticationResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.OnResponse_C79378B846C1B02445729598AD7A02B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameSparksLogin_C::OnResponse_C79378B846C1B02445729598AD7A02B8(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.OnResponse_C79378B846C1B02445729598AD7A02B8");

	UGameSparksLogin_C_OnResponse_C79378B846C1B02445729598AD7A02B8_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.CheckMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UGameSparksLogin_C::CheckMouse(const struct FPointerEvent& PointerEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.CheckMouse");

	UGameSparksLogin_C_CheckMouse_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.Login
// (BlueprintCallable, BlueprintEvent)
void UGameSparksLogin_C::Login()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.Login");

	UGameSparksLogin_C_Login_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.BndEvt__PasswordSlot_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksLogin_C::BndEvt__PasswordSlot_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.BndEvt__PasswordSlot_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UGameSparksLogin_C_BndEvt__PasswordSlot_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.CheckKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent               Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UGameSparksLogin_C::CheckKey(const struct FKeyEvent& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.CheckKey");

	UGameSparksLogin_C_CheckKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.LoginFB
// (BlueprintCallable, BlueprintEvent)
void UGameSparksLogin_C::LoginFB()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.LoginFB");

	UGameSparksLogin_C_LoginFB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.BndEvt__UsernameSlot_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksLogin_C::BndEvt__UsernameSlot_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.BndEvt__UsernameSlot_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UGameSparksLogin_C_BndEvt__UsernameSlot_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_FBLogin_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UGameSparksLogin_C::BndEvt__Widget_Button_FBLogin_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_FBLogin_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UGameSparksLogin_C_BndEvt__Widget_Button_FBLogin_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_Login_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UGameSparksLogin_C::BndEvt__Widget_Button_Login_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_Login_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UGameSparksLogin_C_BndEvt__Widget_Button_Login_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_Register_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UGameSparksLogin_C::BndEvt__Widget_Button_Register_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_Register_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UGameSparksLogin_C_BndEvt__Widget_Button_Register_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.Register
// (BlueprintCallable, BlueprintEvent)
void UGameSparksLogin_C::Register()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.Register");

	UGameSparksLogin_C_Register_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.ResendComfirmEmail
// (BlueprintCallable, BlueprintEvent)
void UGameSparksLogin_C::ResendComfirmEmail()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.ResendComfirmEmail");

	UGameSparksLogin_C_ResendComfirmEmail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.PressAnyKeys
// (BlueprintCallable, BlueprintEvent)
void UGameSparksLogin_C::PressAnyKeys()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.PressAnyKeys");

	UGameSparksLogin_C_PressAnyKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_ForgetPW_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UGameSparksLogin_C::BndEvt__Widget_Button_ForgetPW_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_ForgetPW_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UGameSparksLogin_C_BndEvt__Widget_Button_ForgetPW_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGameSparksLogin_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.Construct");

	UGameSparksLogin_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.OnLoginResponseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSAuthenticationResponse GSAuthenticationResponse       (BlueprintVisible, BlueprintReadOnly, Parm)
void UGameSparksLogin_C::OnLoginResponseWidget(bool IsError, const struct FGSAuthenticationResponse& GSAuthenticationResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.OnLoginResponseWidget");

	UGameSparksLogin_C_OnLoginResponseWidget_Params params;
	params.IsError = IsError;
	params.GSAuthenticationResponse = GSAuthenticationResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparksLogin.GameSparksLogin_C.ExecuteUbergraph_GameSparksLogin
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameSparksLogin_C::ExecuteUbergraph_GameSparksLogin(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparksLogin.GameSparksLogin_C.ExecuteUbergraph_GameSparksLogin");

	UGameSparksLogin_C_ExecuteUbergraph_GameSparksLogin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
