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

// Function Widget_StoreDirect.Widget_StoreDirect_C.SetActiveNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsAcc                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AccIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreDirect_C::SetActiveNavigation(int Index, bool bIsAcc, int AccIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.SetActiveNavigation");

	UWidget_StoreDirect_C_SetActiveNavigation_Params params;
	params.Index = Index;
	params.bIsAcc = bIsAcc;
	params.AccIndex = AccIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.GetWidth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          GetWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreDirect_C::GetWidth(float* GetWidth)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.GetWidth");

	UWidget_StoreDirect_C_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetWidth != nullptr)
		*GetWidth = params.GetWidth;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowPerksHunterShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreDirect_C::ShowPerksHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowPerksHunterShop");

	UWidget_StoreDirect_C_ShowPerksHunterShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowPerksSurvivorShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreDirect_C::ShowPerksSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowPerksSurvivorShop");

	UWidget_StoreDirect_C_ShowPerksSurvivorShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_StoreDirect_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.Construct");

	UWidget_StoreDirect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreDirect_C::BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_StoreDirect_C_BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowCharacterSurvivorShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreDirect_C::ShowCharacterSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowCharacterSurvivorShop");

	UWidget_StoreDirect_C_ShowCharacterSurvivorShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowCharacterHunterShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreDirect_C::ShowCharacterHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowCharacterHunterShop");

	UWidget_StoreDirect_C_ShowCharacterHunterShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowSkinHunterShop
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreDirect_C::ShowSkinHunterShop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowSkinHunterShop");

	UWidget_StoreDirect_C_ShowSkinHunterShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowSkinSurvivorShop
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreDirect_C::ShowSkinSurvivorShop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowSkinSurvivorShop");

	UWidget_StoreDirect_C_ShowSkinSurvivorShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccHunterShop_Head
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreDirect_C::ShowAccHunterShop_Head()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccHunterShop_Head");

	UWidget_StoreDirect_C_ShowAccHunterShop_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccSurvivorShop_Head
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreDirect_C::ShowAccSurvivorShop_Head()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccSurvivorShop_Head");

	UWidget_StoreDirect_C_ShowAccSurvivorShop_Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccHunterShop_Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreDirect_C::ShowAccHunterShop_Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccHunterShop_Back");

	UWidget_StoreDirect_C_ShowAccHunterShop_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccSurvivorShop_Back
// (BlueprintCallable, BlueprintEvent)
void UWidget_StoreDirect_C::ShowAccSurvivorShop_Back()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowAccSurvivorShop_Back");

	UWidget_StoreDirect_C_ShowAccSurvivorShop_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.BndEvt__Widget_ButtonChoiceTab_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreDirect_C::BndEvt__Widget_ButtonChoiceTab_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.BndEvt__Widget_ButtonChoiceTab_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_StoreDirect_C_BndEvt__Widget_ButtonChoiceTab_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ShowBundleShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsError                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGSListVirtualGoodsResponse Response                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StoreDirect_C::ShowBundleShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ShowBundleShop");

	UWidget_StoreDirect_C_ShowBundleShop_Params params;
	params.IsError = IsError;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.ExecuteUbergraph_Widget_StoreDirect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreDirect_C::ExecuteUbergraph_Widget_StoreDirect(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.ExecuteUbergraph_Widget_StoreDirect");

	UWidget_StoreDirect_C_ExecuteUbergraph_Widget_StoreDirect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.OnChoice2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreDirect_C::OnChoice2__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.OnChoice2__DelegateSignature");

	UWidget_StoreDirect_C_OnChoice2__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StoreDirect.Widget_StoreDirect_C.OnChioce__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StoreDirect_C::OnChioce__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StoreDirect.Widget_StoreDirect_C.OnChioce__DelegateSignature");

	UWidget_StoreDirect_C_OnChioce__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
