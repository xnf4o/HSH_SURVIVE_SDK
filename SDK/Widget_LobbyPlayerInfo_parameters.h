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

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.Get_ReadyStatus_Visibility_1
struct UWidget_LobbyPlayerInfo_C_Get_ReadyStatus_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.GetText_2
struct UWidget_LobbyPlayerInfo_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.Get_Image_Profile_Brush_1
struct UWidget_LobbyPlayerInfo_C_Get_Image_Profile_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.GetText_1
struct UWidget_LobbyPlayerInfo_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.ScaleByOwner
struct UWidget_LobbyPlayerInfo_C_ScaleByOwner_Params
{
	bool                                               IsOwner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.Get_Player_Visibility
struct UWidget_LobbyPlayerInfo_C_Get_Player_Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.GetPlayerState
struct UWidget_LobbyPlayerInfo_C_GetPlayerState_Params
{
	class AHSURLobbyPS_C*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.GetPlayerInfo
struct UWidget_LobbyPlayerInfo_C_GetPlayerInfo_Params
{
	class UPlayerInfoComponent_C*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.Get_ReadyStatus_Brush_1
struct UWidget_LobbyPlayerInfo_C_Get_ReadyStatus_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.Construct
struct UWidget_LobbyPlayerInfo_C_Construct_Params
{
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.RefreshWidget
struct UWidget_LobbyPlayerInfo_C_RefreshWidget_Params
{
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.RefreshValue
struct UWidget_LobbyPlayerInfo_C_RefreshValue_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.Tick
struct UWidget_LobbyPlayerInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.InitializeWidget
struct UWidget_LobbyPlayerInfo_C_InitializeWidget_Params
{
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               PlayerOwner;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_LobbyPlayerInfo.Widget_LobbyPlayerInfo_C.ExecuteUbergraph_Widget_LobbyPlayerInfo
struct UWidget_LobbyPlayerInfo_C_ExecuteUbergraph_Widget_LobbyPlayerInfo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
