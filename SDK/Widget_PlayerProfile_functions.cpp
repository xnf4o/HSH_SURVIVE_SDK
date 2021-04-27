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

// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Gem_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget_PlayerProfile_C::Get_Image_Gem_ToolTipWidget_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Gem_ToolTipWidget_1");

	UWidget_PlayerProfile_C_Get_Image_Gem_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Amulet_ToolTipWidget_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget_PlayerProfile_C::Get_Image_Amulet_ToolTipWidget_2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Amulet_ToolTipWidget_2");

	UWidget_PlayerProfile_C_Get_Image_Amulet_ToolTipWidget_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Coin_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWidget_PlayerProfile_C::Get_Image_Coin_ToolTipWidget_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_Image_Coin_ToolTipWidget_1");

	UWidget_PlayerProfile_C_Get_Image_Coin_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_PlayerProfile_C::GetVisibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetVisibility_1");

	UWidget_PlayerProfile_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetWidgetPlayMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget_PlaymodeSelection_C* Widget_Playmode                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlayerProfile_C::GetWidgetPlayMode(class UWidget_PlaymodeSelection_C** Widget_Playmode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetWidgetPlayMode");

	UWidget_PlayerProfile_C_GetWidgetPlayMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget_Playmode != nullptr)
		*Widget_Playmode = params.Widget_Playmode;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetMemberCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MemberCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlayerProfile_C::GetMemberCount(int* MemberCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.GetMemberCount");

	UWidget_PlayerProfile_C_GetMemberCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MemberCount != nullptr)
		*MemberCount = params.MemberCount;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlayerProfile_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.AssignWidgetManager");

	UWidget_PlayerProfile_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_TextBlock_Level_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_PlayerProfile_C::Get_TextBlock_Level_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.Get_TextBlock_Level_Text_1");

	UWidget_PlayerProfile_C_Get_TextBlock_Level_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.On_Image_Profile_MouseButtonDown_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWidget_PlayerProfile_C::On_Image_Profile_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.On_Image_Profile_MouseButtonDown_1");

	UWidget_PlayerProfile_C_On_Image_Profile_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PlayerProfile        PlayerProfile                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_PlayerProfile_C::UpdateValue(const struct FS_PlayerProfile& PlayerProfile)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.UpdateValue");

	UWidget_PlayerProfile_C_UpdateValue_Params params;
	params.PlayerProfile = PlayerProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_PlayerProfile_C::OnLobbyCreated(const struct FString& LobbyID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyCreated");

	UWidget_PlayerProfile_C_OnLobbyCreated_Params params;
	params.LobbyID = LobbyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.InitializeLobby
// (BlueprintCallable, BlueprintEvent)
void UWidget_PlayerProfile_C::InitializeLobby()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.InitializeLobby");

	UWidget_PlayerProfile_C_InitializeLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyEntered
// (BlueprintCallable, BlueprintEvent)
void UWidget_PlayerProfile_C::OnLobbyEntered()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyEntered");

	UWidget_PlayerProfile_C_OnLobbyEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyDataUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isLobbyDataUpdated             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PlayerProfile_C::OnLobbyDataUpdated(bool isLobbyDataUpdated)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyDataUpdated");

	UWidget_PlayerProfile_C_OnLobbyDataUpdated_Params params;
	params.isLobbyDataUpdated = isLobbyDataUpdated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.BndEvt__LobbyLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_PlayerProfile_C::BndEvt__LobbyLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.BndEvt__LobbyLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_PlayerProfile_C_BndEvt__LobbyLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyChatUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isSelfLeave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PlayerProfile_C::OnLobbyChatUpdated(bool isSelfLeave)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyChatUpdated");

	UWidget_PlayerProfile_C_OnLobbyChatUpdated_Params params;
	params.isSelfLeave = isSelfLeave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.LobbySetButtonState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PlayerProfile_C::LobbySetButtonState(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.LobbySetButtonState");

	UWidget_PlayerProfile_C_LobbySetButtonState_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.CreateLobby
// (BlueprintCallable, BlueprintEvent)
void UWidget_PlayerProfile_C::CreateLobby()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.CreateLobby");

	UWidget_PlayerProfile_C_CreateLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.UpdateLobbyMember
// (BlueprintCallable, BlueprintEvent)
void UWidget_PlayerProfile_C::UpdateLobbyMember()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.UpdateLobbyMember");

	UWidget_PlayerProfile_C_UpdateLobbyMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.BndEvt__Widget_Button_Invite_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_PlayerProfile_C::BndEvt__Widget_Button_Invite_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.BndEvt__Widget_Button_Invite_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_PlayerProfile_C_BndEvt__Widget_Button_Invite_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.ExecuteUbergraph_Widget_PlayerProfile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PlayerProfile_C::ExecuteUbergraph_Widget_PlayerProfile(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.ExecuteUbergraph_Widget_PlayerProfile");

	UWidget_PlayerProfile_C_ExecuteUbergraph_Widget_PlayerProfile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyDataUpdate__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLobbyData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ticketId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IsSearching                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FString>         playerIds                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         SurvivorSkills                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_PlayerProfile_C::OnLobbyDataUpdate__DelegateSignature(bool IsLobbyData, const struct FString& LobbyID, const struct FString& ticketId, bool IsSearching, TArray<struct FString>* playerIds, TArray<struct FString>* DisplayName, TArray<struct FString>* SurvivorSkills)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnLobbyDataUpdate__DelegateSignature");

	UWidget_PlayerProfile_C_OnLobbyDataUpdate__DelegateSignature_Params params;
	params.IsLobbyData = IsLobbyData;
	params.LobbyID = LobbyID;
	params.ticketId = ticketId;
	params.IsSearching = IsSearching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerIds != nullptr)
		*playerIds = params.playerIds;
	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
	if (SurvivorSkills != nullptr)
		*SurvivorSkills = params.SurvivorSkills;

}


// Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnProfileImage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_PlayerProfile_C::OnProfileImage__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_PlayerProfile.Widget_PlayerProfile_C.OnProfileImage__DelegateSignature");

	UWidget_PlayerProfile_C_OnProfileImage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
