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

// Function Widget_Lootbox.Widget_Lootbox_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lootbox_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BeginMenuAnimation");

	UWidget_Lootbox_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_Lootbox.Widget_Lootbox_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lootbox_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.EndMenuAnimation");

	UWidget_Lootbox_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_Lootbox.Widget_Lootbox_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lootbox_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.RefreshLootbox");

	UWidget_Lootbox_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_C_113_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lootbox_C::BndEvt__Widget_Button_C_113_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_C_113_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_Lootbox_C_BndEvt__Widget_Button_C_113_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_109_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lootbox_C::BndEvt__Widget_Button_109_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_109_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_Lootbox_C_BndEvt__Widget_Button_109_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_FindMatch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lootbox_C::BndEvt__Widget_Button_FindMatch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_FindMatch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_Lootbox_C_BndEvt__Widget_Button_FindMatch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lootbox_C::BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_Lootbox_C_BndEvt__Widget_Button_BuyLootbox_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lootbox_C::BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_Lootbox_C_BndEvt__Widget_Button_Setting_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lootbox_C::BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_Lootbox_C_BndEvt__Widget_Button_GrantCurrency_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BackAction");

	UWidget_Lootbox_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_Lootbox_C::BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWidget_Lootbox_C_BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.OpenLootBox
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::OpenLootBox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.OpenLootBox");

	UWidget_Lootbox_C_OpenLootBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.Back");

	UWidget_Lootbox_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.GrantCurrencyCoin
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::GrantCurrencyCoin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.GrantCurrencyCoin");

	UWidget_Lootbox_C_GrantCurrencyCoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.BuyLootbox
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::BuyLootbox()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.BuyLootbox");

	UWidget_Lootbox_C_BuyLootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.GrantCurrencyGem
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::GrantCurrencyGem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.GrantCurrencyGem");

	UWidget_Lootbox_C_GrantCurrencyGem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Lootbox_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.Construct");

	UWidget_Lootbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.OnLootBoxReceive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameSparksScriptData*   GSData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lootbox_C::OnLootBoxReceive(class UGameSparksScriptData* GSData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.OnLootBoxReceive");

	UWidget_Lootbox_C_OnLootBoxReceive_Params params;
	params.GSData = GSData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.OnLootBoxFree
// (BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::OnLootBoxFree()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.OnLootBoxFree");

	UWidget_Lootbox_C_OnLootBoxFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.ExecuteUbergraph_Widget_Lootbox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Lootbox_C::ExecuteUbergraph_Widget_Lootbox(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.ExecuteUbergraph_Widget_Lootbox");

	UWidget_Lootbox_C_ExecuteUbergraph_Widget_Lootbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.OnSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.OnSetting__DelegateSignature");

	UWidget_Lootbox_C_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.OnFindMatch__DelegateSignature");

	UWidget_Lootbox_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Lootbox.Widget_Lootbox_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Lootbox_C::OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Lootbox.Widget_Lootbox_C.OnBack__DelegateSignature");

	UWidget_Lootbox_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
