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

// Function Widget_LoginSteam.Widget_LoginSteam_C.ShouldCheckVersion
struct UWidget_LoginSteam_C_ShouldCheckVersion_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.OnResponse_8E90C40F4C5961FA26C4188F05159A0C
struct UWidget_LoginSteam_C_OnResponse_8E90C40F4C5961FA26C4188F05159A0C_Params
{
	struct FGSAuthenticationResponse                   AuthenticationResponse;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.OnResponse_26AFAFD14B880C0E83DDAB8171C82F7A
struct UWidget_LoginSteam_C_OnResponse_26AFAFD14B880C0E83DDAB8171C82F7A_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.ShowTryAgain
struct UWidget_LoginSteam_C_ShowTryAgain_Params
{
	struct FText                                       Status;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_LoginSteam_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.AutoLogin
struct UWidget_LoginSteam_C_AutoLogin_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.AssignLoginObject
struct UWidget_LoginSteam_C_AssignLoginObject_Params
{
	class ULoginBase_C*                                LoginObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.CheckVersion
struct UWidget_LoginSteam_C_CheckVersion_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.CheckNetwork
struct UWidget_LoginSteam_C_CheckNetwork_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.CheckSteam
struct UWidget_LoginSteam_C_CheckSteam_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.BeginFocus
struct UWidget_LoginSteam_C_BeginFocus_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.Login
struct UWidget_LoginSteam_C_Login_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmServerOffline
struct UWidget_LoginSteam_C_OnConfirmServerOffline_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmServerOnline
struct UWidget_LoginSteam_C_OnConfirmServerOnline_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.OnConfirmVersion
struct UWidget_LoginSteam_C_OnConfirmVersion_Params
{
};

// Function Widget_LoginSteam.Widget_LoginSteam_C.ExecuteUbergraph_Widget_LoginSteam
struct UWidget_LoginSteam_C_ExecuteUbergraph_Widget_LoginSteam_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
