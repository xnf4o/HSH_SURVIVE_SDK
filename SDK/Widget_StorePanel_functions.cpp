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

// Function Widget_StorePanel.Widget_StorePanel_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.EndMenuAnimation");

	UWidget_StorePanel_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BeginMenuAnimation");

	UWidget_StorePanel_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_StorePanel.Widget_StorePanel_C.UpdatePreviewCharacterRole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::UpdatePreviewCharacterRole(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.UpdatePreviewCharacterRole");

	UWidget_StorePanel_C_UpdatePreviewCharacterRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.GetColorAndOpacity_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWidget_StorePanel_C::GetColorAndOpacity_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.GetColorAndOpacity_2");

	UWidget_StorePanel_C_GetColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StorePanel.Widget_StorePanel_C.GetColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWidget_StorePanel_C::GetColorAndOpacity_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.GetColorAndOpacity_1");

	UWidget_StorePanel_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StorePanel.Widget_StorePanel_C.GetWidthAmethystStore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::GetWidthAmethystStore(float* Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.GetWidthAmethystStore");

	UWidget_StorePanel_C_GetWidthAmethystStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;

}


// Function Widget_StorePanel.Widget_StorePanel_C.NavigatePanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::NavigatePanel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.NavigatePanel");

	UWidget_StorePanel_C_NavigatePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.GetPreferDirectStoreIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsAcc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AccIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::GetPreferDirectStoreIndex(int* Index, bool* bIsAcc, int* AccIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.GetPreferDirectStoreIndex");

	UWidget_StorePanel_C_GetPreferDirectStoreIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (bIsAcc != nullptr)
		*bIsAcc = params.bIsAcc;
	if (AccIndex != nullptr)
		*AccIndex = params.AccIndex;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Get_Hours_remains
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_StorePanel_C::Get_Hours_remains()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Get_Hours_remains");

	UWidget_StorePanel_C_Get_Hours_remains_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StorePanel.Widget_StorePanel_C.Get_Days_remains
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_StorePanel_C::Get_Days_remains()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Get_Days_remains");

	UWidget_StorePanel_C_Get_Days_remains_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StorePanel.Widget_StorePanel_C.OnWidgetActive
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnWidgetActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnWidgetActive");

	UWidget_StorePanel_C_OnWidgetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnWidgetDisplayed
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnWidgetDisplayed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnWidgetDisplayed");

	UWidget_StorePanel_C_OnWidgetDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.GetWidth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::GetWidth(float* Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.GetWidth");

	UWidget_StorePanel_C_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Debug_Grid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_StoreGrid_C*     Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::Debug_Grid(class UWidget_StoreGrid_C* Store)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Debug_Grid");

	UWidget_StorePanel_C_Debug_Grid_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.IsSameCurrentPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_StorePanel_C::IsSameCurrentPanel(class UObject* Panel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.IsSameCurrentPanel");

	UWidget_StorePanel_C_IsSameCurrentPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StorePanel.Widget_StorePanel_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.AssignWidgetManager");

	UWidget_StorePanel_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.MakeTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UGameSparksRequestArray* ReturnGSArray                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::MakeTag(TArray<struct FString>* Tags, class UGameSparksRequestArray** ReturnGSArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.MakeTag");

	UWidget_StorePanel_C_MakeTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
	if (ReturnGSArray != nullptr)
		*ReturnGSArray = params.ReturnGSArray;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_StorePanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnFocusReceived");

	UWidget_StorePanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_0_OnClickToken__DelegateSignature
// (BlueprintEvent)
void UWidget_StorePanel_C::BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_0_OnClickToken__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_0_OnClickToken__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_0_OnClickToken__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowLoading
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::ShowLoading()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowLoading");

	UWidget_StorePanel_C_ShowLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowMagicBoxStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowMagicBoxStore(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowMagicBoxStore");

	UWidget_StorePanel_C_ShowMagicBoxStore_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.HideContent
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::HideContent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.HideContent");

	UWidget_StorePanel_C_HideContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowGemStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowGemStore(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowGemStore");

	UWidget_StorePanel_C_ShowGemStore_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.RefreshStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::RefreshStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.RefreshStore");

	UWidget_StorePanel_C_RefreshStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.TryShowCurrentActive
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::TryShowCurrentActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.TryShowCurrentActive");

	UWidget_StorePanel_C_TryShowCurrentActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowPerksHunterShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowPerksHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowPerksHunterShop");

	UWidget_StorePanel_C_ShowPerksHunterShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowPerksSurvivorShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowPerksSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowPerksSurvivorShop");

	UWidget_StorePanel_C_ShowPerksSurvivorShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowItemsPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowItemsPanel(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowItemsPanel");

	UWidget_StorePanel_C_ShowItemsPanel_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowProfilesPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowProfilesPanel(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowProfilesPanel");

	UWidget_StorePanel_C_ShowProfilesPanel_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowStickersPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowStickersPanel(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowStickersPanel");

	UWidget_StorePanel_C_ShowStickersPanel_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowCharacterStore(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterStore");

	UWidget_StorePanel_C_ShowCharacterStore_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterHunterShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowCharacterHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterHunterShop");

	UWidget_StorePanel_C_ShowCharacterHunterShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterSurvivorShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowCharacterSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowCharacterSurvivorShop");

	UWidget_StorePanel_C_ShowCharacterSurvivorShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowSkinSurvivorShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowSkinSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowSkinSurvivorShop");

	UWidget_StorePanel_C_ShowSkinSurvivorShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ShowBundleShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StorePanel_C::ShowBundleShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ShowBundleShop");

	UWidget_StorePanel_C_ShowBundleShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorPerk
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_SurvivorPerk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorPerk");

	UWidget_StorePanel_C_Direct_SurvivorPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterPerk
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_HunterPerk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterPerk");

	UWidget_StorePanel_C_Direct_HunterPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.EnableStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StorePanel_C::EnableStore(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.EnableStore");

	UWidget_StorePanel_C_EnableStore_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.TryIntializeStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::TryIntializeStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.TryIntializeStore");

	UWidget_StorePanel_C_TryIntializeStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_StorePanel_C::BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnDiscount
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnDiscount()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnDiscount");

	UWidget_StorePanel_C_OnDiscount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnCrystalStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnCrystalStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnCrystalStore");

	UWidget_StorePanel_C_OnCrystalStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnDirectStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnDirectStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnDirectStore");

	UWidget_StorePanel_C_OnDirectStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.LoopAnimation
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::LoopAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.LoopAnimation");

	UWidget_StorePanel_C_LoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_StorePanel_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Construct");

	UWidget_StorePanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_6_OnClickDiscount__DelegateSignature
// (BlueprintEvent)
void UWidget_StorePanel_C::BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_6_OnClickDiscount__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_6_OnClickDiscount__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_6_OnClickDiscount__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickDirectStore__DelegateSignature
// (BlueprintEvent)
void UWidget_StorePanel_C::BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickDirectStore__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickDirectStore__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickDirectStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_StorePanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.PreConstruct");

	UWidget_StorePanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_ButtonChoiceTab_DirectStore_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::BndEvt__Widget_ButtonChoiceTab_DirectStore_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_ButtonChoiceTab_DirectStore_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_ButtonChoiceTab_DirectStore_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChioce__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChioce__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChioce__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChioce__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorCharacter
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_SurvivorCharacter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorCharacter");

	UWidget_StorePanel_C_Direct_SurvivorCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterCharacter
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_HunterCharacter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterCharacter");

	UWidget_StorePanel_C_Direct_HunterCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnFeatures
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnFeatures()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnFeatures");

	UWidget_StorePanel_C_OnFeatures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorSkin
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_SurvivorSkin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorSkin");

	UWidget_StorePanel_C_Direct_SurvivorSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterSkin
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_HunterSkin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterSkin");

	UWidget_StorePanel_C_Direct_HunterSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorAcc_Head
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_SurvivorAcc_Head()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorAcc_Head");

	UWidget_StorePanel_C_Direct_SurvivorAcc_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickFeatures__DelegateSignature
// (BlueprintEvent)
void UWidget_StorePanel_C::BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickFeatures__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickFeatures__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickFeatures__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BackAction");

	UWidget_StorePanel_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorSkin
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Token_SurvivorSkin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorSkin");

	UWidget_StorePanel_C_Token_SurvivorSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterSkin
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Token_HunterSkin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterSkin");

	UWidget_StorePanel_C_Token_HunterSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorAcc_Head
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Token_SurvivorAcc_Head()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorAcc_Head");

	UWidget_StorePanel_C_Token_SurvivorAcc_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterAcc_Head
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_HunterAcc_Head()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterAcc_Head");

	UWidget_StorePanel_C_Direct_HunterAcc_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterAcc_Head
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Token_HunterAcc_Head()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterAcc_Head");

	UWidget_StorePanel_C_Token_HunterAcc_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnTokenStore
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnTokenStore()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnTokenStore");

	UWidget_StorePanel_C_OnTokenStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_ButtonChoiceTab_TokenStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::BndEvt__Widget_ButtonChoiceTab_TokenStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_ButtonChoiceTab_TokenStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_ButtonChoiceTab_TokenStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_10_OnChioce__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_10_OnChioce__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_10_OnChioce__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_10_OnChioce__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_0_OnChoice2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_0_OnChoice2__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_0_OnChoice2__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_0_OnChoice2__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnTokenRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameSparksScriptData*   Response                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::OnTokenRefresh(bool IsError, class UGameSparksScriptData* Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnTokenRefresh");

	UWidget_StorePanel_C_OnTokenRefresh_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorAcc_Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Token_SurvivorAcc_Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Token_SurvivorAcc_Back");

	UWidget_StorePanel_C_Token_SurvivorAcc_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterAcc_Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Token_HunterAcc_Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Token_HunterAcc_Back");

	UWidget_StorePanel_C_Token_HunterAcc_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorAcc_Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_SurvivorAcc_Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_SurvivorAcc_Back");

	UWidget_StorePanel_C_Direct_SurvivorAcc_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterAcc_Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::Direct_HunterAcc_Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.Direct_HunterAcc_Back");

	UWidget_StorePanel_C_Direct_HunterAcc_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnDirectRefresh
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UGameSparksScriptData*> Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_StorePanel_C::OnDirectRefresh(bool IsError, TArray<class UGameSparksScriptData*> Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnDirectRefresh");

	UWidget_StorePanel_C_OnDirectRefresh_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChoice2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChoice2__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChoice2__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChoice2__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.DIrect_Bundle
// (BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::DIrect_Bundle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.DIrect_Bundle");

	UWidget_StorePanel_C_DIrect_Bundle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_1_OnClickCrystal__DelegateSignature
// (BlueprintEvent)
void UWidget_StorePanel_C::BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_1_OnClickCrystal__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_1_OnClickCrystal__DelegateSignature");

	UWidget_StorePanel_C_BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_1_OnClickCrystal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.ExecuteUbergraph_Widget_StorePanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StorePanel_C::ExecuteUbergraph_Widget_StorePanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.ExecuteUbergraph_Widget_StorePanel");

	UWidget_StorePanel_C_ExecuteUbergraph_Widget_StorePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnLootbox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnLootbox__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnLootbox__DelegateSignature");

	UWidget_StorePanel_C_OnLootbox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnFindMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnFindMatch__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnFindMatch__DelegateSignature");

	UWidget_StorePanel_C_OnFindMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnExit__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnExit__DelegateSignature");

	UWidget_StorePanel_C_OnExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StorePanel.Widget_StorePanel_C.OnSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_StorePanel_C::OnSetting__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StorePanel.Widget_StorePanel_C.OnSetting__DelegateSignature");

	UWidget_StorePanel_C_OnSetting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
