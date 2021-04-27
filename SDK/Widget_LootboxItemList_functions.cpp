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

// Function Widget_LootboxItemList.Widget_LootboxItemList_C.TryGetLootDropTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ALootDropTarget_C*       Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxItemList_C::TryGetLootDropTarget(class ALootDropTarget_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.TryGetLootDropTarget");

	UWidget_LootboxItemList_C_TryGetLootDropTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnPreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_LootboxItemList_C::OnPreviewItem(bool bIsShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnPreviewItem");

	UWidget_LootboxItemList_C_OnPreviewItem_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.TypeToInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWidget_LootboxItemList_C::TypeToInt(const struct FText& InText)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.TypeToInt");

	UWidget_LootboxItemList_C_TypeToInt_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.Sort
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxItemList_C::Sort()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.Sort");

	UWidget_LootboxItemList_C_Sort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.GetProductFromShortcode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ShortCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_LootboxItemList_C::GetProductFromShortcode(const struct FString& ShortCode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.GetProductFromShortcode");

	UWidget_LootboxItemList_C_GetProductFromShortcode_Params params;
	params.ShortCode = ShortCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnResponse_74C2FF2F4EDA19C91455D8890B278309
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_LootboxItemList_C::OnResponse_74C2FF2F4EDA19C91455D8890B278309(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnResponse_74C2FF2F4EDA19C91455D8890B278309");

	UWidget_LootboxItemList_C_OnResponse_74C2FF2F4EDA19C91455D8890B278309_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LootboxItemList_C::BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LootboxItemList_C_BndEvt__Widget_Button_LDBack_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxItemList_C::Initialize(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.Initialize");

	UWidget_LootboxItemList_C_Initialize_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.RefreshData
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxItemList_C::RefreshData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.RefreshData");

	UWidget_LootboxItemList_C_RefreshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.MakeLootboxList
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxItemList_C::MakeLootboxList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.MakeLootboxList");

	UWidget_LootboxItemList_C_MakeLootboxList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_LootboxItemList_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.Construct");

	UWidget_LootboxItemList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.ClearLootDrop
// (BlueprintCallable, BlueprintEvent)
void UWidget_LootboxItemList_C::ClearLootDrop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.ClearLootDrop");

	UWidget_LootboxItemList_C_ClearLootDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.SpawnLootDropPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LootboxProduct       LootDropData                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_LootboxItemList_C::SpawnLootDropPreview(const struct FS_LootboxProduct& LootDropData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.SpawnLootDropPreview");

	UWidget_LootboxItemList_C_SpawnLootDropPreview_Params params;
	params.LootDropData = LootDropData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.ExecuteUbergraph_Widget_LootboxItemList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootboxItemList_C::ExecuteUbergraph_Widget_LootboxItemList(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.ExecuteUbergraph_Widget_LootboxItemList");

	UWidget_LootboxItemList_C_ExecuteUbergraph_Widget_LootboxItemList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_LootboxItemList_C::OnBack__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootboxItemList.Widget_LootboxItemList_C.OnBack__DelegateSignature");

	UWidget_LootboxItemList_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
