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

// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.SetImage
struct UIngame_Sticker_Character_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.Construct
struct UIngame_Sticker_Character_C_Construct_Params
{
};

// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.RunSticker
struct UIngame_Sticker_Character_C_RunSticker_Params
{
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.ExecuteUbergraph_Ingame_Sticker_Character
struct UIngame_Sticker_Character_C_ExecuteUbergraph_Ingame_Sticker_Character_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
