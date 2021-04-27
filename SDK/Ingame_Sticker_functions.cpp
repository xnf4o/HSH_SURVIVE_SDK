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

// Function Ingame_Sticker.Ingame_Sticker_C.StickerWidgetLoop
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_Sticker_C::StickerWidgetLoop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker.Ingame_Sticker_C.StickerWidgetLoop");

	UIngame_Sticker_C_StickerWidgetLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Sticker.Ingame_Sticker_C.SetupSticker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_Sticker_C::SetupSticker(TArray<class UTexture2D*>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker.Ingame_Sticker_C.SetupSticker");

	UIngame_Sticker_C_SetupSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function Ingame_Sticker.Ingame_Sticker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_Sticker_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker.Ingame_Sticker_C.Construct");

	UIngame_Sticker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Sticker.Ingame_Sticker_C.ExecuteUbergraph_Ingame_Sticker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Sticker_C::ExecuteUbergraph_Ingame_Sticker(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker.Ingame_Sticker_C.ExecuteUbergraph_Ingame_Sticker");

	UIngame_Sticker_C_ExecuteUbergraph_Ingame_Sticker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
