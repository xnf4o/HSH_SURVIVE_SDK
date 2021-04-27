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

// Function IWidgetAnimation.IWidgetAnimation_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UIWidgetAnimation_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IWidgetAnimation.IWidgetAnimation_C.BackAction");

	UIWidgetAnimation_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IWidgetAnimation.IWidgetAnimation_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIWidgetAnimation_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IWidgetAnimation.IWidgetAnimation_C.EndMenuAnimation");

	UIWidgetAnimation_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function IWidgetAnimation.IWidgetAnimation_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIWidgetAnimation_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IWidgetAnimation.IWidgetAnimation_C.BeginMenuAnimation");

	UIWidgetAnimation_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
