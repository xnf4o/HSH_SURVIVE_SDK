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

// Function Widget_SettingGame.Widget_SettingGame_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_SettingGame_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingGame.Widget_SettingGame_C.OnKeyDown");

	UWidget_SettingGame_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingGame.Widget_SettingGame_C.BndEvt__Widget_SettingPanelInGame_K2Node_ComponentBoundEvent_1_OnExit__DelegateSignature
// (BlueprintEvent)
void UWidget_SettingGame_C::BndEvt__Widget_SettingPanelInGame_K2Node_ComponentBoundEvent_1_OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingGame.Widget_SettingGame_C.BndEvt__Widget_SettingPanelInGame_K2Node_ComponentBoundEvent_1_OnExit__DelegateSignature");

	UWidget_SettingGame_C_BndEvt__Widget_SettingPanelInGame_K2Node_ComponentBoundEvent_1_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingGame.Widget_SettingGame_C.ExecuteUbergraph_Widget_SettingGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingGame_C::ExecuteUbergraph_Widget_SettingGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingGame.Widget_SettingGame_C.ExecuteUbergraph_Widget_SettingGame");

	UWidget_SettingGame_C_ExecuteUbergraph_Widget_SettingGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingGame.Widget_SettingGame_C.OnExitWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SettingGame_C::OnExitWidget__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_SettingGame.Widget_SettingGame_C.OnExitWidget__DelegateSignature");

	UWidget_SettingGame_C_OnExitWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
