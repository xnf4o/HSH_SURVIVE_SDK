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

// Function StickerImage.StickerImage_C.SetStickerEnable
struct UStickerImage_C_SetStickerEnable_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StickerImage.StickerImage_C.SetStickerOwned
struct UStickerImage_C_SetStickerOwned_Params
{
	bool                                               IsOwned;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StickerImage.StickerImage_C.SetStickerImage
struct UStickerImage_C_SetStickerImage_Params
{
	class UTexture2D*                                  Texture2D;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StickerImage.StickerImage_C.SetStickerEquipped?
struct UStickerImage_C_SetStickerEquipped__Params
{
	bool                                               Equip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StickerImage.StickerImage_C.GetStickerTexture2D
struct UStickerImage_C_GetStickerTexture2D_Params
{
	class UTexture2D*                                  Texture2D;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StickerImage.StickerImage_C.OnDragDetected
struct UStickerImage_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StickerImage.StickerImage_C.OnMouseButtonDown
struct UStickerImage_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function StickerImage.StickerImage_C.OnStickerRequestPurchase__DelegateSignature
struct UStickerImage_C_OnStickerRequestPurchase__DelegateSignature_Params
{
	struct FS_ItemInventory                            InventoryData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
