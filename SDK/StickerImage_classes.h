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

// WidgetBlueprintGeneratedClass StickerImage.StickerImage_C
// 0x0111 (FullSize[0x0351] - InheritedSize[0x0240])
class UStickerImage_C : public UUserWidget
{
public:
	class UImage*                                      Image_BG;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Sticker;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_Equipped;                                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                                   DragOffset;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDragWidget_C*                               DraggedWidget;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemInventory                            InventoryData;                                             // 0x0268(0x00D8) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnStickerRequestPurchase;                                  // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Enable;                                                    // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass StickerImage.StickerImage_C");
		return ptr;
	}



	void SetStickerEnable(bool Enable);
	void SetStickerOwned(bool IsOwned);
	void SetStickerImage(class UTexture2D* Texture2D);
	void SetStickerEquipped_(bool Equip);
	void GetStickerTexture2D(class UTexture2D** Texture2D);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnStickerRequestPurchase__DelegateSignature(const struct FS_ItemInventory& InventoryData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
