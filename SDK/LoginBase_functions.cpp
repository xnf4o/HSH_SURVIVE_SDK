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

// Function LoginBase.LoginBase_C.GetWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  WidgetClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginBase_C::GetWidgetClass(class UClass** WidgetClass)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LoginBase.LoginBase_C.GetWidgetClass");

	ULoginBase_C_GetWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WidgetClass != nullptr)
		*WidgetClass = params.WidgetClass;

}


// Function LoginBase.LoginBase_C.OnLoginResponse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSAuthenticationResponse GSAuthenticationResponse       (BlueprintVisible, BlueprintReadOnly, Parm)
void ULoginBase_C::OnLoginResponse__DelegateSignature(bool IsError, const struct FGSAuthenticationResponse& GSAuthenticationResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LoginBase.LoginBase_C.OnLoginResponse__DelegateSignature");

	ULoginBase_C_OnLoginResponse__DelegateSignature_Params params;
	params.IsError = IsError;
	params.GSAuthenticationResponse = GSAuthenticationResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
