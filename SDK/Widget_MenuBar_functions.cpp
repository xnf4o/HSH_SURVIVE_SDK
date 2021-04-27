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

// Function Widget_MenuBar.Widget_MenuBar_C.EnableSelectMenuActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenuBar_C::EnableSelectMenuActive(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.EnableSelectMenuActive");

	UWidget_MenuBar_C_EnableSelectMenuActive_Params params;
	params.MenuList = MenuList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.DisableSelectMenuActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenuBar_C::DisableSelectMenuActive(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.DisableSelectMenuActive");

	UWidget_MenuBar_C_DisableSelectMenuActive_Params params;
	params.MenuList = MenuList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.ShowSelectMenuList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenuBar_C::ShowSelectMenuList(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.ShowSelectMenuList");

	UWidget_MenuBar_C_ShowSelectMenuList_Params params;
	params.MenuList = MenuList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.HideSelectMenuList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenuBar_C::HideSelectMenuList(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.HideSelectMenuList");

	UWidget_MenuBar_C_HideSelectMenuList_Params params;
	params.MenuList = MenuList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MenuBar_C::InitializeButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.InitializeButton");

	UWidget_MenuBar_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.RefreshRole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_MenuBar_C::RefreshRole(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.RefreshRole");

	UWidget_MenuBar_C_RefreshRole_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenuBar_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.RefreshLootbox");

	UWidget_MenuBar_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.GetSlash
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget_MenuBar_C::GetSlash(class UWidget* ItemToFind)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.GetSlash");

	UWidget_MenuBar_C_GetSlash_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MenuBar.Widget_MenuBar_C.SetWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WidgetObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MenuBar_C::SetWidget(class UWidget* WidgetObject, bool bIsActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.SetWidget");

	UWidget_MenuBar_C_SetWidget_Params params;
	params.WidgetObject = WidgetObject;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Findmatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenuBar_C::BndEvt__Widget_Button_Findmatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Findmatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_MenuBar_C_BndEvt__Widget_Button_Findmatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenuBar_C::BndEvt__Widget_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_MenuBar_C_BndEvt__Widget_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Profile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenuBar_C::BndEvt__Widget_Button_Profile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Profile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_MenuBar_C_BndEvt__Widget_Button_Profile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenuBar_C::BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_MenuBar_C_BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Store_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_MenuBar_C::BndEvt__Widget_Button_Store_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.BndEvt__Widget_Button_Store_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_MenuBar_C_BndEvt__Widget_Button_Store_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_MenuBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.PreConstruct");

	UWidget_MenuBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.ExecuteUbergraph_Widget_MenuBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MenuBar_C::ExecuteUbergraph_Widget_MenuBar(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.ExecuteUbergraph_Widget_MenuBar");

	UWidget_MenuBar_C_ExecuteUbergraph_Widget_MenuBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.OnStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenuBar_C::OnStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.OnStore__DelegateSignature");

	UWidget_MenuBar_C_OnStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.OnProfile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenuBar_C::OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.OnProfile__DelegateSignature");

	UWidget_MenuBar_C_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenuBar_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.OnLootbox__DelegateSignature");

	UWidget_MenuBar_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.OnSwitchRole__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenuBar_C::OnSwitchRole__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.OnSwitchRole__DelegateSignature");

	UWidget_MenuBar_C_OnSwitchRole__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MenuBar.Widget_MenuBar_C.OnCustomize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_MenuBar_C::OnCustomize__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_MenuBar.Widget_MenuBar_C.OnCustomize__DelegateSignature");

	UWidget_MenuBar_C_OnCustomize__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
