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

// Function StickerCanvas.StickerCanvas_C.OnStickerRequestPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UStickerCanvas_C::OnStickerRequestPurchase(const struct FS_ItemInventory& InventoryData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.OnStickerRequestPurchase");

	UStickerCanvas_C_OnStickerRequestPurchase_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.GetStickerGSData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGameSparksScriptData*> Return                         (Parm, OutParm, ZeroConstructor)
void UStickerCanvas_C::GetStickerGSData(TArray<class UGameSparksScriptData*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.GetStickerGSData");

	UStickerCanvas_C_GetStickerGSData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function StickerCanvas.StickerCanvas_C.OnRecieveNotifyStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UStickerCanvas_C::OnRecieveNotifyStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.OnRecieveNotifyStickers");

	UStickerCanvas_C_OnRecieveNotifyStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function StickerCanvas.StickerCanvas_C.SetWidgetStateBusy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBusy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStickerCanvas_C::SetWidgetStateBusy(bool IsBusy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.SetWidgetStateBusy");

	UStickerCanvas_C_SetWidgetStateBusy_Params params;
	params.IsBusy = IsBusy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UStickerCanvas_C::UpdateValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.UpdateValue");

	UStickerCanvas_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.SetPlayerInfoStickerAssets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrimaryAssetId> StickerAssets                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UStickerCanvas_C::SetPlayerInfoStickerAssets(TArray<struct FPrimaryAssetId>* StickerAssets)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.SetPlayerInfoStickerAssets");

	UStickerCanvas_C_SetPlayerInfoStickerAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StickerAssets != nullptr)
		*StickerAssets = params.StickerAssets;

}


// Function StickerCanvas.StickerCanvas_C.OnStickerDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UStickerCanvas_C::OnStickerDrop(int SlotIndex, const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.OnStickerDrop");

	UStickerCanvas_C_OnStickerDrop_Params params;
	params.SlotIndex = SlotIndex;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UStickerCanvas_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.Initialize");

	UStickerCanvas_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStickerCanvas_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.AssignWidgetManager");

	UStickerCanvas_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.OnResponse_8133B0984D275E5455A837B3FBB49E30
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStickerCanvas_C::OnResponse_8133B0984D275E5455A837B3FBB49E30(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.OnResponse_8133B0984D275E5455A837B3FBB49E30");

	UStickerCanvas_C_OnResponse_8133B0984D275E5455A837B3FBB49E30_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.SaveSticker
// (BlueprintCallable, BlueprintEvent)
void UStickerCanvas_C::SaveSticker()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.SaveSticker");

	UStickerCanvas_C_SaveSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStickerCanvas_C::BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UStickerCanvas_C_BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UStickerCanvas_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.Construct");

	UStickerCanvas_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerCanvas.StickerCanvas_C.ExecuteUbergraph_StickerCanvas
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStickerCanvas_C::ExecuteUbergraph_StickerCanvas(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerCanvas.StickerCanvas_C.ExecuteUbergraph_StickerCanvas");

	UStickerCanvas_C_ExecuteUbergraph_StickerCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
