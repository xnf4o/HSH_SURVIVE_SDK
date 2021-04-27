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

// Function Ingame_Sticker.Ingame_Sticker_C.StickerWidgetLoop
struct UIngame_Sticker_C_StickerWidgetLoop_Params
{
};

// Function Ingame_Sticker.Ingame_Sticker_C.SetupSticker
struct UIngame_Sticker_C_SetupSticker_Params
{
	TArray<class UTexture2D*>                          Stickers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Ingame_Sticker.Ingame_Sticker_C.Construct
struct UIngame_Sticker_C_Construct_Params
{
};

// Function Ingame_Sticker.Ingame_Sticker_C.ExecuteUbergraph_Ingame_Sticker
struct UIngame_Sticker_C_ExecuteUbergraph_Ingame_Sticker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
