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

// Function Widget_PartyMember.Widget_PartyMember_C.OnViewProfileClick
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_PartyMember_C::OnViewProfileClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnViewProfileClick");

	UWidget_PartyMember_C_OnViewProfileClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.OnLeavePartyClick
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_PartyMember_C::OnLeavePartyClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnLeavePartyClick");

	UWidget_PartyMember_C_OnLeavePartyClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.OnPromoteLeaderClick
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_PartyMember_C::OnPromoteLeaderClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnPromoteLeaderClick");

	UWidget_PartyMember_C_OnPromoteLeaderClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PartyMember_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.AssignWidgetManager");

	UWidget_PartyMember_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.OnKickMemberClick
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_PartyMember_C::OnKickMemberClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnKickMemberClick");

	UWidget_PartyMember_C_OnKickMemberClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.On_MenuAnchor_Member_GetMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget_PartyMember_C::On_MenuAnchor_Member_GetMenuContent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.On_MenuAnchor_Member_GetMenuContent");

	UWidget_PartyMember_C_On_MenuAnchor_Member_GetMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PartyMember.Widget_PartyMember_C.SetDropdownItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MemberCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSelfPartyLeader              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMemberLeader                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMemberSelf                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PartyMember_C::SetDropdownItems(int MemberCount, bool IsSelfPartyLeader, bool IsMemberLeader, bool IsMemberSelf)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.SetDropdownItems");

	UWidget_PartyMember_C_SetDropdownItems_Params params;
	params.MemberCount = MemberCount;
	params.IsSelfPartyLeader = IsSelfPartyLeader;
	params.IsMemberLeader = IsMemberLeader;
	params.IsMemberSelf = IsMemberSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_PartyMember_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnMouseButtonDown");

	UWidget_PartyMember_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PartyMember.Widget_PartyMember_C.SetProfileIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PartyMember_C::SetProfileIcon(class UObject* Image)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.SetProfileIcon");

	UWidget_PartyMember_C_SetProfileIcon_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_PartyMember_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.Construct");

	UWidget_PartyMember_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.MenuAnchorToggle
// (BlueprintCallable, BlueprintEvent)
void UWidget_PartyMember_C::MenuAnchorToggle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.MenuAnchorToggle");

	UWidget_PartyMember_C_MenuAnchorToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.ExecuteUbergraph_Widget_PartyMember
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PartyMember_C::ExecuteUbergraph_Widget_PartyMember(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.ExecuteUbergraph_Widget_PartyMember");

	UWidget_PartyMember_C_ExecuteUbergraph_Widget_PartyMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMember.Widget_PartyMember_C.OnRightMouseDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_PartyMember_C::OnRightMouseDown__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PartyMember.Widget_PartyMember_C.OnRightMouseDown__DelegateSignature");

	UWidget_PartyMember_C_OnRightMouseDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
