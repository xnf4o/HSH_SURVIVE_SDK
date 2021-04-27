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

// Function StickerImage.StickerImage_C.SetStickerEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStickerImage_C::SetStickerEnable(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.SetStickerEnable");

	UStickerImage_C_SetStickerEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerImage.StickerImage_C.SetStickerOwned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOwned                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStickerImage_C::SetStickerOwned(bool IsOwned)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.SetStickerOwned");

	UStickerImage_C_SetStickerOwned_Params params;
	params.IsOwned = IsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerImage.StickerImage_C.SetStickerImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStickerImage_C::SetStickerImage(class UTexture2D* Texture2D)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.SetStickerImage");

	UStickerImage_C_SetStickerImage_Params params;
	params.Texture2D = Texture2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerImage.StickerImage_C.SetStickerEquipped?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStickerImage_C::SetStickerEquipped_(bool Equip)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.SetStickerEquipped?");

	UStickerImage_C_SetStickerEquipped__Params params;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StickerImage.StickerImage_C.GetStickerTexture2D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStickerImage_C::GetStickerTexture2D(class UTexture2D** Texture2D)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.GetStickerTexture2D");

	UStickerImage_C_GetStickerTexture2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;

}


// Function StickerImage.StickerImage_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStickerImage_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.OnDragDetected");

	UStickerImage_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function StickerImage.StickerImage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UStickerImage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.OnMouseButtonDown");

	UStickerImage_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StickerImage.StickerImage_C.OnStickerRequestPurchase__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UStickerImage_C::OnStickerRequestPurchase__DelegateSignature(const struct FS_ItemInventory& InventoryData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StickerImage.StickerImage_C.OnStickerRequestPurchase__DelegateSignature");

	UStickerImage_C_OnStickerRequestPurchase__DelegateSignature_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
