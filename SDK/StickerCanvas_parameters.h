#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function StickerCanvas.StickerCanvas_C.OnStickerRequestPurchase
struct UStickerCanvas_C_OnStickerRequestPurchase_Params
{
	struct FS_ItemInventory                            InventoryData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function StickerCanvas.StickerCanvas_C.GetStickerGSData
struct UStickerCanvas_C_GetStickerGSData_Params
{
	TArray<class UGameSparksScriptData*>               Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function StickerCanvas.StickerCanvas_C.OnRecieveNotifyStickers
struct UStickerCanvas_C_OnRecieveNotifyStickers_Params
{
	TArray<struct FString>                             Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StickerCanvas.StickerCanvas_C.SetWidgetStateBusy
struct UStickerCanvas_C_SetWidgetStateBusy_Params
{
	bool                                               IsBusy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StickerCanvas.StickerCanvas_C.UpdateValue
struct UStickerCanvas_C_UpdateValue_Params
{
};

// Function StickerCanvas.StickerCanvas_C.SetPlayerInfoStickerAssets
struct UStickerCanvas_C_SetPlayerInfoStickerAssets_Params
{
	TArray<struct FPrimaryAssetId>                     StickerAssets;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StickerCanvas.StickerCanvas_C.OnStickerDrop
struct UStickerCanvas_C_OnStickerDrop_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function StickerCanvas.StickerCanvas_C.Initialize
struct UStickerCanvas_C_Initialize_Params
{
};

// Function StickerCanvas.StickerCanvas_C.AssignWidgetManager
struct UStickerCanvas_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StickerCanvas.StickerCanvas_C.OnResponse_8133B0984D275E5455A837B3FBB49E30
struct UStickerCanvas_C_OnResponse_8133B0984D275E5455A837B3FBB49E30_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StickerCanvas.StickerCanvas_C.SaveSticker
struct UStickerCanvas_C_SaveSticker_Params
{
};

// Function StickerCanvas.StickerCanvas_C.BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UStickerCanvas_C_BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StickerCanvas.StickerCanvas_C.Construct
struct UStickerCanvas_C_Construct_Params
{
};

// Function StickerCanvas.StickerCanvas_C.ExecuteUbergraph_StickerCanvas
struct UStickerCanvas_C_ExecuteUbergraph_StickerCanvas_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
