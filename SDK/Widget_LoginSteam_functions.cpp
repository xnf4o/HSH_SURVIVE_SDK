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

// Function Widget_LoginSteam.Widget_LoginSteam_C.ShouldCheckVersion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_LoginSteam_C::ShouldCheckVersion()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.ShouldCheckVersion");

	UWidget_LoginSteam_C_ShouldCheckVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_LoginSteam.Widget_LoginSteam_C.OnResponse_8E90C40F4C5961FA26C4188F05159A0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSAuthenticationResponse AuthenticationResponse         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_LoginSteam_C::OnResponse_8E90C40F4C5961FA26C4188F05159A0C(const struct FGSAuthenticationResponse& AuthenticationResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.OnResponse_8E90C40F4C5961FA26C4188F05159A0C");

	UWidget_LoginSteam_C_OnResponse_8E90C40F4C5961FA26C4188F05159A0C_Params params;
	params.AuthenticationResponse = AuthenticationResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.OnResponse_26AFAFD14B880C0E83DDAB8171C82F7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_LoginSteam_C::OnResponse_26AFAFD14B880C0E83DDAB8171C82F7A(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.OnResponse_26AFAFD14B880C0E83DDAB8171C82F7A");

	UWidget_LoginSteam_C_OnResponse_26AFAFD14B880C0E83DDAB8171C82F7A_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.ShowTryAgain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Status                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_LoginSteam_C::ShowTryAgain(const struct FText& Status)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.ShowTryAgain");

	UWidget_LoginSteam_C_ShowTryAgain_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LoginSteam_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LoginSteam_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.AutoLogin
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::AutoLogin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.AutoLogin");

	UWidget_LoginSteam_C_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.AssignLoginObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoginBase_C*            LoginObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LoginSteam_C::AssignLoginObject(class ULoginBase_C* LoginObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.AssignLoginObject");

	UWidget_LoginSteam_C_AssignLoginObject_Params params;
	params.LoginObject = LoginObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.CheckVersion
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::CheckVersion()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.CheckVersion");

	UWidget_LoginSteam_C_CheckVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.CheckNetwork
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::CheckNetwork()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.CheckNetwork");

	UWidget_LoginSteam_C_CheckNetwork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.CheckSteam
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::CheckSteam()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.CheckSteam");

	UWidget_LoginSteam_C_CheckSteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.BeginFocus
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::BeginFocus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.BeginFocus");

	UWidget_LoginSteam_C_BeginFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.Login
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::Login()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.Login");

	UWidget_LoginSteam_C_Login_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmServerOffline
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::OnConfirmServerOffline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmServerOffline");

	UWidget_LoginSteam_C_OnConfirmServerOffline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmServerOnline
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::OnConfirmServerOnline()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmServerOnline");

	UWidget_LoginSteam_C_OnConfirmServerOnline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmVersion
// (BlueprintCallable, BlueprintEvent)
void UWidget_LoginSteam_C::OnConfirmVersion()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmVersion");

	UWidget_LoginSteam_C_OnConfirmVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LoginSteam.Widget_LoginSteam_C.ExecuteUbergraph_Widget_LoginSteam
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LoginSteam_C::ExecuteUbergraph_Widget_LoginSteam(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LoginSteam.Widget_LoginSteam_C.ExecuteUbergraph_Widget_LoginSteam");

	UWidget_LoginSteam_C_ExecuteUbergraph_Widget_LoginSteam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
