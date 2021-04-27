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

// Function Ingame_Emote.Ingame_Emote_C.EmoteWidgetLoop
struct UIngame_Emote_C_EmoteWidgetLoop_Params
{
};

// Function Ingame_Emote.Ingame_Emote_C.SetupEmote
struct UIngame_Emote_C_SetupEmote_Params
{
	TArray<class UTexture2D*>                          Emotes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Ingame_Emote.Ingame_Emote_C.Construct
struct UIngame_Emote_C_Construct_Params
{
};

// Function Ingame_Emote.Ingame_Emote_C.ExecuteUbergraph_Ingame_Emote
struct UIngame_Emote_C_ExecuteUbergraph_Ingame_Emote_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
