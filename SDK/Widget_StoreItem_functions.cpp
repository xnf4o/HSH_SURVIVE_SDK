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

// Function Widget_StoreItem.Widget_StoreItem_C.GetWidth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreItem_C::GetWidth(float* Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.GetWidth");

	UWidget_StoreItem_C_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;

}


// Function Widget_StoreItem.Widget_StoreItem_C.ShowProfilesShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreItem_C::ShowProfilesShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.ShowProfilesShop");

	UWidget_StoreItem_C_ShowProfilesShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreItem.Widget_StoreItem_C.ShowItemsShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreItem_C::ShowItemsShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.ShowItemsShop");

	UWidget_StoreItem_C_ShowItemsShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreItem.Widget_StoreItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_StoreItem_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.Construct");

	UWidget_StoreItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreItem.Widget_StoreItem_C.ShowStickersShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreItem_C::ShowStickersShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.ShowStickersShop");

	UWidget_StoreItem_C_ShowStickersShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreItem.Widget_StoreItem_C.BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreItem_C::BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_StoreItem_C_BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreItem.Widget_StoreItem_C.ExecuteUbergraph_Widget_StoreItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreItem_C::ExecuteUbergraph_Widget_StoreItem(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.ExecuteUbergraph_Widget_StoreItem");

	UWidget_StoreItem_C_ExecuteUbergraph_Widget_StoreItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreItem.Widget_StoreItem_C.OnChioce__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreItem_C::OnChioce__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreItem.Widget_StoreItem_C.OnChioce__DelegateSignature");

	UWidget_StoreItem_C_OnChioce__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
