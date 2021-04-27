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

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Gem_ToolTipWidget_1
struct UWidget_PlayerProfile_C_Get_Image_Gem_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Amulet_ToolTipWidget_2
struct UWidget_PlayerProfile_C_Get_Image_Amulet_ToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Coin_ToolTipWidget_1
struct UWidget_PlayerProfile_C_Get_Image_Coin_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetVisibility_1
struct UWidget_PlayerProfile_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetWidgetPlayMode
struct UWidget_PlayerProfile_C_GetWidgetPlayMode_Params
{
	class UWidget_PlaymodeSelection_C*                 Widget_Playmode;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetMemberCount
struct UWidget_PlayerProfile_C_GetMemberCount_Params
{
	int                                                MemberCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.AssignWidgetManager
struct UWidget_PlayerProfile_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_TextBlock_Level_Text_1
struct UWidget_PlayerProfile_C_Get_TextBlock_Level_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.On_Image_Profile_MouseButtonDown_1
struct UWidget_PlayerProfile_C_On_Image_Profile_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.UpdateValue
struct UWidget_PlayerProfile_C_UpdateValue_Params
{
	struct FS_PlayerProfile                            PlayerProfile;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyCreated
struct UWidget_PlayerProfile_C_OnLobbyCreated_Params
{
	struct FString                                     LobbyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.InitializeLobby
struct UWidget_PlayerProfile_C_InitializeLobby_Params
{
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyEntered
struct UWidget_PlayerProfile_C_OnLobbyEntered_Params
{
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyDataUpdated
struct UWidget_PlayerProfile_C_OnLobbyDataUpdated_Params
{
	bool                                               isLobbyDataUpdated;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.BndEvt__LobbyLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_PlayerProfile_C_BndEvt__LobbyLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyChatUpdated
struct UWidget_PlayerProfile_C_OnLobbyChatUpdated_Params
{
	bool                                               isSelfLeave;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.LobbySetButtonState
struct UWidget_PlayerProfile_C_LobbySetButtonState_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.CreateLobby
struct UWidget_PlayerProfile_C_CreateLobby_Params
{
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.UpdateLobbyMember
struct UWidget_PlayerProfile_C_UpdateLobbyMember_Params
{
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.BndEvt__Widget_Button_Invite_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_PlayerProfile_C_BndEvt__Widget_Button_Invite_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.ExecuteUbergraph_Widget_PlayerProfile
struct UWidget_PlayerProfile_C_ExecuteUbergraph_Widget_PlayerProfile_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyDataUpdate__DelegateSignature
struct UWidget_PlayerProfile_C_OnLobbyDataUpdate__DelegateSignature_Params
{
	bool                                               IsLobbyData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     LobbyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ticketId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsSearching;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             playerIds;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             DisplayName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             SurvivorSkills;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnProfileImage__DelegateSignature
struct UWidget_PlayerProfile_C_OnProfileImage__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
