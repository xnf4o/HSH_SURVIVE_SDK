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

// Function LoginBase.LoginBase_C.GetWidgetClass
struct ULoginBase_C_GetWidgetClass_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginBase.LoginBase_C.OnLoginResponse__DelegateSignature
struct ULoginBase_C_OnLoginResponse__DelegateSignature_Params
{
	bool                                               IsError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGSAuthenticationResponse                   GSAuthenticationResponse;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
