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

// Function Widget_PartyMember.Widget_PartyMember_C.OnViewProfileClick
struct UWidget_PartyMember_C_OnViewProfileClick_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnLeavePartyClick
struct UWidget_PartyMember_C_OnLeavePartyClick_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnPromoteLeaderClick
struct UWidget_PartyMember_C_OnPromoteLeaderClick_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.AssignWidgetManager
struct UWidget_PartyMember_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnKickMemberClick
struct UWidget_PartyMember_C_OnKickMemberClick_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.On_MenuAnchor_Member_GetMenuContent
struct UWidget_PartyMember_C_On_MenuAnchor_Member_GetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.SetDropdownItems
struct UWidget_PartyMember_C_SetDropdownItems_Params
{
	int                                                MemberCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelfPartyLeader;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMemberLeader;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMemberSelf;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnMouseButtonDown
struct UWidget_PartyMember_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_PartyMember.Widget_PartyMember_C.SetProfileIcon
struct UWidget_PartyMember_C_SetProfileIcon_Params
{
	class UObject*                                     Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.Construct
struct UWidget_PartyMember_C_Construct_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.MenuAnchorToggle
struct UWidget_PartyMember_C_MenuAnchorToggle_Params
{
};

// Function Widget_PartyMember.Widget_PartyMember_C.ExecuteUbergraph_Widget_PartyMember
struct UWidget_PartyMember_C_ExecuteUbergraph_Widget_PartyMember_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyMember.Widget_PartyMember_C.OnRightMouseDown__DelegateSignature
struct UWidget_PartyMember_C_OnRightMouseDown__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
