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

// Function GameSparksLogin.GameSparksLogin_C.OnMouseMove
struct UGameSparksLogin_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function GameSparksLogin.GameSparksLogin_C.OnKeyDown
struct UGameSparksLogin_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function GameSparksLogin.GameSparksLogin_C.OnFocusReceived
struct UGameSparksLogin_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function GameSparksLogin.GameSparksLogin_C.OnLoginResponse
struct UGameSparksLogin_C_OnLoginResponse_Params
{
	struct FGSAuthenticationResponse                   GSAuthenticationResponse;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               HasError;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewMethod;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameSparksLogin.GameSparksLogin_C.AreAllFieldsFilled?
struct UGameSparksLogin_C_AreAllFieldsFilled__Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameSparksLogin.GameSparksLogin_C.OnResponse_11C71A064B89D9F8F730E78FD49BC1AE
struct UGameSparksLogin_C_OnResponse_11C71A064B89D9F8F730E78FD49BC1AE_Params
{
	struct FGSAuthenticationResponse                   AuthenticationResponse;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameSparksLogin.GameSparksLogin_C.OnResponse_C79378B846C1B02445729598AD7A02B8
struct UGameSparksLogin_C_OnResponse_C79378B846C1B02445729598AD7A02B8_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameSparksLogin.GameSparksLogin_C.CheckMouse
struct UGameSparksLogin_C_CheckMouse_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameSparksLogin.GameSparksLogin_C.Login
struct UGameSparksLogin_C_Login_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.BndEvt__PasswordSlot_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UGameSparksLogin_C_BndEvt__PasswordSlot_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksLogin.GameSparksLogin_C.CheckKey
struct UGameSparksLogin_C_CheckKey_Params
{
	struct FKeyEvent                                   Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameSparksLogin.GameSparksLogin_C.LoginFB
struct UGameSparksLogin_C_LoginFB_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.BndEvt__UsernameSlot_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UGameSparksLogin_C_BndEvt__UsernameSlot_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_FBLogin_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UGameSparksLogin_C_BndEvt__Widget_Button_FBLogin_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_Login_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UGameSparksLogin_C_BndEvt__Widget_Button_Login_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_Register_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UGameSparksLogin_C_BndEvt__Widget_Button_Register_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.Register
struct UGameSparksLogin_C_Register_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.ResendComfirmEmail
struct UGameSparksLogin_C_ResendComfirmEmail_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.PressAnyKeys
struct UGameSparksLogin_C_PressAnyKeys_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.BndEvt__Widget_Button_ForgetPW_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UGameSparksLogin_C_BndEvt__Widget_Button_ForgetPW_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.Construct
struct UGameSparksLogin_C_Construct_Params
{
};

// Function GameSparksLogin.GameSparksLogin_C.OnLoginResponseWidget
struct UGameSparksLogin_C_OnLoginResponseWidget_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSAuthenticationResponse                   GSAuthenticationResponse;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameSparksLogin.GameSparksLogin_C.ExecuteUbergraph_GameSparksLogin
struct UGameSparksLogin_C_ExecuteUbergraph_GameSparksLogin_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
