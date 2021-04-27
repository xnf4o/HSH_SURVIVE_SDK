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

// Function IWidgetLogin.IWidgetLogin_C.BeginFocus
// (Public, BlueprintCallable, BlueprintEvent)
void UIWidgetLogin_C::BeginFocus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IWidgetLogin.IWidgetLogin_C.BeginFocus");

	UIWidgetLogin_C_BeginFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IWidgetLogin.IWidgetLogin_C.AssignLoginObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoginBase_C*            LoginObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIWidgetLogin_C::AssignLoginObject(class ULoginBase_C* LoginObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IWidgetLogin.IWidgetLogin_C.AssignLoginObject");

	UIWidgetLogin_C_AssignLoginObject_Params params;
	params.LoginObject = LoginObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
