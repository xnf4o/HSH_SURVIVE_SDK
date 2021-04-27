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

// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.SetPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TutorialsMainMenu_C::SetPage(int Page)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.SetPage");

	UWidget_TutorialsMainMenu_C_SetPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.InitMediaplayer
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TutorialsMainMenu_C::InitMediaplayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.InitMediaplayer");

	UWidget_TutorialsMainMenu_C_InitMediaplayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.CheckDon'tShowAgain
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TutorialsMainMenu_C::CheckDontShowAgain()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.CheckDon'tShowAgain");

	UWidget_TutorialsMainMenu_C_CheckDontShowAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.Get_TextBlock_Role_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_TutorialsMainMenu_C::Get_TextBlock_Role_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.Get_TextBlock_Role_Text_1");

	UWidget_TutorialsMainMenu_C_Get_TextBlock_Role_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.RefreshPage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_TutorialsMainmenu    S_TutorialsMainmenu            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWidget_TutorialsMainMenu_C::RefreshPage(const struct FS_TutorialsMainmenu& S_TutorialsMainmenu)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.RefreshPage");

	UWidget_TutorialsMainMenu_C_RefreshPage_Params params;
	params.S_TutorialsMainmenu = S_TutorialsMainmenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.Get_Widget_Button_Back_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_TutorialsMainMenu_C::Get_Widget_Button_Back_Visibility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.Get_Widget_Button_Back_Visibility");

	UWidget_TutorialsMainMenu_C_Get_Widget_Button_Back_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Basic_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_Basic_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Basic_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_Basic_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Invisble_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_Invisble_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Invisble_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_Invisble_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Ritual_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_Ritual_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Ritual_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_Ritual_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_SurBasic_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_SurBasic_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_SurBasic_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_SurBasic_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Item_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_Item_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Item_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_Item_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_RitualSur_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_RitualSur_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_RitualSur_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_RitualSur_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Endgame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_Endgame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Endgame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_Endgame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_TutorialsMainMenu_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.Construct");

	UWidget_TutorialsMainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Next_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_Next_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_Next_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_Next_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_81_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_TutorialsMainMenu_C::BndEvt__Widget_Button_81_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.BndEvt__Widget_Button_81_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_TutorialsMainMenu_C_BndEvt__Widget_Button_81_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.ExecuteUbergraph_Widget_TutorialsMainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TutorialsMainMenu_C::ExecuteUbergraph_Widget_TutorialsMainMenu(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TutorialsMainMenu.Widget_TutorialsMainMenu_C.ExecuteUbergraph_Widget_TutorialsMainMenu");

	UWidget_TutorialsMainMenu_C_ExecuteUbergraph_Widget_TutorialsMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
