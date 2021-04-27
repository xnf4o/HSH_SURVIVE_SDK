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

// Function Widget_Hunter_Tutorial.Widget_Hunter_Tutorial_C.PlayBeginAnimate
// (BlueprintCallable, BlueprintEvent)
void UWidget_Hunter_Tutorial_C::PlayBeginAnimate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Hunter_Tutorial.Widget_Hunter_Tutorial_C.PlayBeginAnimate");

	UWidget_Hunter_Tutorial_C_PlayBeginAnimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Hunter_Tutorial.Widget_Hunter_Tutorial_C.ExecuteUbergraph_Widget_Hunter_Tutorial
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Hunter_Tutorial_C::ExecuteUbergraph_Widget_Hunter_Tutorial(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Hunter_Tutorial.Widget_Hunter_Tutorial_C.ExecuteUbergraph_Widget_Hunter_Tutorial");

	UWidget_Hunter_Tutorial_C_ExecuteUbergraph_Widget_Hunter_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
