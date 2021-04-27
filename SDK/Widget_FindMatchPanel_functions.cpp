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

// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_FindMatchPanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BeginMenuAnimation");

	UWidget_FindMatchPanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_FindMatchPanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.EndMenuAnimation");

	UWidget_FindMatchPanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnWidgetActive
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnWidgetActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnWidgetActive");

	UWidget_FindMatchPanel_C_OnWidgetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshCharacterList
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::RefreshCharacterList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshCharacterList");

	UWidget_FindMatchPanel_C_RefreshCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshContent
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::RefreshContent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshContent");

	UWidget_FindMatchPanel_C_RefreshContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshHeaderWithRole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_FindMatchPanel_C::RefreshHeaderWithRole(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshHeaderWithRole");

	UWidget_FindMatchPanel_C_RefreshHeaderWithRole_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshLootbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_FindMatchPanel_C::RefreshLootbox(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshLootbox");

	UWidget_FindMatchPanel_C_RefreshLootbox_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_FindMatchPanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnFocusReceived");

	UWidget_FindMatchPanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_FindMatchPanel_C::RefreshValue(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshValue");

	UWidget_FindMatchPanel_C_RefreshValue_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshItems
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_FindMatchPanel_C::RefreshItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshItems");

	UWidget_FindMatchPanel_C_RefreshItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_FindMatchPanel_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_FindMatchPanel_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshPerks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerPerks                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_FindMatchPanel_C::RefreshPerks(TArray<struct FString>* PlayerPerks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshPerks");

	UWidget_FindMatchPanel_C_RefreshPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerPerks != nullptr)
		*PlayerPerks = params.PlayerPerks;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshSkins
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerSkins                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_FindMatchPanel_C::RefreshSkins(TArray<struct FString>* PlayerSkins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshSkins");

	UWidget_FindMatchPanel_C_RefreshSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerSkins != nullptr)
		*PlayerSkins = params.PlayerSkins;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.BackAction");

	UWidget_FindMatchPanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshHeads
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerHeads                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_FindMatchPanel_C::RefreshHeads(TArray<struct FString> PlayerHeads)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshHeads");

	UWidget_FindMatchPanel_C_RefreshHeads_Params params;
	params.PlayerHeads = PlayerHeads;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshBacks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerBacks                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_FindMatchPanel_C::RefreshBacks(TArray<struct FString> PlayerBacks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.RefreshBacks");

	UWidget_FindMatchPanel_C_RefreshBacks_Params params;
	params.PlayerBacks = PlayerBacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.ExecuteUbergraph_Widget_FindMatchPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_FindMatchPanel_C::ExecuteUbergraph_Widget_FindMatchPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.ExecuteUbergraph_Widget_FindMatchPanel");

	UWidget_FindMatchPanel_C_ExecuteUbergraph_Widget_FindMatchPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnProfile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnProfile__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnProfile__DelegateSignature");

	UWidget_FindMatchPanel_C_OnProfile__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnStore__DelegateSignature");

	UWidget_FindMatchPanel_C_OnStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnShowTutorial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnShowTutorial__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnShowTutorial__DelegateSignature");

	UWidget_FindMatchPanel_C_OnShowTutorial__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnLootbox__DelegateSignature");

	UWidget_FindMatchPanel_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnPlayNow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnPlayNow__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnPlayNow__DelegateSignature");

	UWidget_FindMatchPanel_C_OnPlayNow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnSwitchRole__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnSwitchRole__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnSwitchRole__DelegateSignature");

	UWidget_FindMatchPanel_C_OnSwitchRole__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnSetting__DelegateSignature");

	UWidget_FindMatchPanel_C_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_FindMatchPanel_C::OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_FindMatchPanel.Widget_FindMatchPanel_C.OnBack__DelegateSignature");

	UWidget_FindMatchPanel_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
