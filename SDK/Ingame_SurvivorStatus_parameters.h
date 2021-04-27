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

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_Img_DeadIcon_Visibility_1
struct UIngame_SurvivorStatus_C_Get_Img_DeadIcon_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_Visibility_1
struct UIngame_SurvivorStatus_C_Get_TextBlock_Time_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_ColorAndOpacity_1
struct UIngame_SurvivorStatus_C_Get_TextBlock_Time_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_Text
struct UIngame_SurvivorStatus_C_Get_TextBlock_Time_Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.RefreshSoulTime
struct UIngame_SurvivorStatus_C_RefreshSoulTime_Params
{
	bool                                               bIsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_FrameIMG_Brush_1
struct UIngame_SurvivorStatus_C_Get_FrameIMG_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_StatusIMG_Brush_1
struct UIngame_SurvivorStatus_C_Get_StatusIMG_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Construct
struct UIngame_SurvivorStatus_C_Construct_Params
{
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.SetPlayerStatusIMG
struct UIngame_SurvivorStatus_C_SetPlayerStatusIMG_Params
{
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.RunStickerImg
struct UIngame_SurvivorStatus_C_RunStickerImg_Params
{
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.ExecuteUbergraph_Ingame_SurvivorStatus
struct UIngame_SurvivorStatus_C_ExecuteUbergraph_Ingame_SurvivorStatus_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
