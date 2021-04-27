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

// Function UMG_IngameDebugMode.UMG_IngameDebugMode_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UUMG_IngameDebugMode_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngameDebugMode.UMG_IngameDebugMode_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUMG_IngameDebugMode_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IngameDebugMode.UMG_IngameDebugMode_C.ExecuteUbergraph_UMG_IngameDebugMode
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_IngameDebugMode_C::ExecuteUbergraph_UMG_IngameDebugMode(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngameDebugMode.UMG_IngameDebugMode_C.ExecuteUbergraph_UMG_IngameDebugMode");

	UUMG_IngameDebugMode_C_ExecuteUbergraph_UMG_IngameDebugMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
