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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StickerCanvas.StickerCanvas_C
// 0x0098 (FullSize[0x02D8] - InheritedSize[0x0240])
class UStickerCanvas_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG;                                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    OverlayBlock;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                                  StickerGridPanel;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                StickerSlotCanvas;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoice_C*                      Widget_ButtonChoice_C_2;                                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_C_1;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStickerImage_C*>                     StickerImageList;                                          // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStickerSlot_C*>                      StickerSlotList;                                           // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPrimaryAssetId>                     StickerAssets;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsBusy;                                                    // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L2HN[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StickerIndex;                                              // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             OwnedStickers;                                             // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass StickerCanvas.StickerCanvas_C");
		return ptr;
	}



	void OnStickerRequestPurchase(const struct FS_ItemInventory& InventoryData);
	void GetStickerGSData(TArray<class UGameSparksScriptData*>* Return);
	void OnRecieveNotifyStickers(TArray<struct FString>* Stickers);
	void SetWidgetStateBusy(bool IsBusy);
	void UpdateValue();
	void SetPlayerInfoStickerAssets(TArray<struct FPrimaryAssetId>* StickerAssets);
	void OnStickerDrop(int SlotIndex, const struct FPrimaryAssetId& PrimaryAssetId);
	void Initialize();
	void AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager);
	void OnResponse_8133B0984D275E5455A837B3FBB49E30(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void SaveSticker();
	void BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index);
	void Construct();
	void ExecuteUbergraph_StickerCanvas(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
