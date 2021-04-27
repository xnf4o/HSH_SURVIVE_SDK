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

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunEmote
struct UCommunicationWheelComponent_C_RunEmote_Params
{
	int                                                emote;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetSelectedEmote
struct UCommunicationWheelComponent_C_GetSelectedEmote_Params
{
	int                                                CurrentSelect;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.HideEmoteWidget
struct UCommunicationWheelComponent_C_HideEmoteWidget_Params
{
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ShowEmoteWidget
struct UCommunicationWheelComponent_C_ShowEmoteWidget_Params
{
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.InitializeEmote
struct UCommunicationWheelComponent_C_InitializeEmote_Params
{
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.SetCurrentSticker
struct UCommunicationWheelComponent_C_SetCurrentSticker_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.IsLocallyControlled
struct UCommunicationWheelComponent_C_IsLocallyControlled_Params
{
	bool                                               IsLocal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.IsClientSurvivor
struct UCommunicationWheelComponent_C_IsClientSurvivor_Params
{
	bool                                               IsSurvivor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetPlayerIndexByID
struct UCommunicationWheelComponent_C_GetPlayerIndexByID_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker
struct UCommunicationWheelComponent_C_RunSticker_Params
{
	int                                                PlayerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Sticker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetSelectedSticker
struct UCommunicationWheelComponent_C_GetSelectedSticker_Params
{
	int                                                CurrentSelect;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.InitializeSticker
struct UCommunicationWheelComponent_C_InitializeSticker_Params
{
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.HideStickerWidget
struct UCommunicationWheelComponent_C_HideStickerWidget_Params
{
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ShowStickerWidget
struct UCommunicationWheelComponent_C_ShowStickerWidget_Params
{
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ReceiveBeginPlay
struct UCommunicationWheelComponent_C_ReceiveBeginPlay_Params
{
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Multicast
struct UCommunicationWheelComponent_C_RunSticker_Multicast_Params
{
	int                                                PlayerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Sticker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ReceiveTick
struct UCommunicationWheelComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Server
struct UCommunicationWheelComponent_C_RunSticker_Server_Params
{
	int                                                PlayerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Sticker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Owner
struct UCommunicationWheelComponent_C_RunSticker_Owner_Params
{
	int                                                CurrentSelected;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ExecuteUbergraph_CommunicationWheelComponent
struct UCommunicationWheelComponent_C_ExecuteUbergraph_CommunicationWheelComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
