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

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_6B96793E4578C2C68AFC6BA562F20912
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULootBoxManagerComponent_C::OnResponse_6B96793E4578C2C68AFC6BA562F20912(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_6B96793E4578C2C68AFC6BA562F20912");

	ULootBoxManagerComponent_C_OnResponse_6B96793E4578C2C68AFC6BA562F20912_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_227CDFC24CDE00312CDD8F8C9460FA1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSBuyVirtualGoodResponse BuyVirtualGoodResponse         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULootBoxManagerComponent_C::OnResponse_227CDFC24CDE00312CDD8F8C9460FA1D(const struct FGSBuyVirtualGoodResponse& BuyVirtualGoodResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_227CDFC24CDE00312CDD8F8C9460FA1D");

	ULootBoxManagerComponent_C_OnResponse_227CDFC24CDE00312CDD8F8C9460FA1D_Params params;
	params.BuyVirtualGoodResponse = BuyVirtualGoodResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_959AF35B4441BE736CB9D3816BFE23B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULootBoxManagerComponent_C::OnResponse_959AF35B4441BE736CB9D3816BFE23B6(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_959AF35B4441BE736CB9D3816BFE23B6");

	ULootBoxManagerComponent_C_OnResponse_959AF35B4441BE736CB9D3816BFE23B6_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.GrantCurrency
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxManagerComponent_C::GrantCurrency(int Value, TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.GrantCurrency");

	ULootBoxManagerComponent_C_GrantCurrency_Params params;
	params.Value = Value;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.BuyLootbox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxManagerComponent_C::BuyLootbox(int Quantity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.BuyLootbox");

	ULootBoxManagerComponent_C_BuyLootbox_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.ClearLootDropPreview
// (BlueprintCallable, BlueprintEvent)
void ULootBoxManagerComponent_C::ClearLootDropPreview()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.ClearLootDropPreview");

	ULootBoxManagerComponent_C_ClearLootDropPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxManagerComponent_C::OpenLootBox(int Amount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBox");

	ULootBoxManagerComponent_C_OpenLootBox_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBoxWithName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lootBoxType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ULootBoxManagerComponent_C::OpenLootBoxWithName(const struct FString& lootBoxType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBoxWithName");

	ULootBoxManagerComponent_C_OpenLootBoxWithName_Params params;
	params.lootBoxType = lootBoxType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBoxAmountWithName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lootBoxType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxManagerComponent_C::OpenLootBoxAmountWithName(const struct FString& lootBoxType, int Amount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBoxAmountWithName");

	ULootBoxManagerComponent_C_OpenLootBoxAmountWithName_Params params;
	params.lootBoxType = lootBoxType;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.ExecuteUbergraph_LootBoxManagerComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxManagerComponent_C::ExecuteUbergraph_LootBoxManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.ExecuteUbergraph_LootBoxManagerComponent");

	ULootBoxManagerComponent_C_ExecuteUbergraph_LootBoxManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnOpenLootBoxFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ULootBoxManagerComponent_C::OnOpenLootBoxFailed__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnOpenLootBoxFailed__DelegateSignature");

	ULootBoxManagerComponent_C_OnOpenLootBoxFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnReceiveLootBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameSparksScriptData*   LootDropData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxManagerComponent_C::OnReceiveLootBox__DelegateSignature(class UGameSparksScriptData* LootDropData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnReceiveLootBox__DelegateSignature");

	ULootBoxManagerComponent_C_OnReceiveLootBox__DelegateSignature_Params params;
	params.LootDropData = LootDropData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
