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

// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.SetUpIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LobbyCheckingPlayers_C::SetUpIcon(int MaxPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.SetUpIcon");

	UWidget_LobbyCheckingPlayers_C_SetUpIcon_Params params;
	params.MaxPlayer = MaxPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.SetUpTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LobbyCheckingPlayers_C::SetUpTimer(float Seconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.SetUpTimer");

	UWidget_LobbyCheckingPlayers_C_SetUpTimer_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.CloseChecking
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_LobbyCheckingPlayers_C::CloseChecking()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.CloseChecking");

	UWidget_LobbyCheckingPlayers_C_CloseChecking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.SetUpPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Counts                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LobbyCheckingPlayers_C::SetUpPlayers(int Counts)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.SetUpPlayers");

	UWidget_LobbyCheckingPlayers_C_SetUpPlayers_Params params;
	params.Counts = Counts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_LobbyCheckingPlayers_C::BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LobbyCheckingPlayers_C_BndEvt__Widget_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LobbyCheckingPlayers_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.Tick");

	UWidget_LobbyCheckingPlayers_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.OnConfirm
// (BlueprintCallable, BlueprintEvent)
void UWidget_LobbyCheckingPlayers_C::OnConfirm()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.OnConfirm");

	UWidget_LobbyCheckingPlayers_C_OnConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.OnCancel
// (BlueprintCallable, BlueprintEvent)
void UWidget_LobbyCheckingPlayers_C::OnCancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.OnCancel");

	UWidget_LobbyCheckingPlayers_C_OnCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.LeaveMatch
// (BlueprintCallable, BlueprintEvent)
void UWidget_LobbyCheckingPlayers_C::LeaveMatch()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.LeaveMatch");

	UWidget_LobbyCheckingPlayers_C_LeaveMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.ExecuteUbergraph_Widget_LobbyCheckingPlayers
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LobbyCheckingPlayers_C::ExecuteUbergraph_Widget_LobbyCheckingPlayers(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyCheckingPlayers.Widget_LobbyCheckingPlayers_C.ExecuteUbergraph_Widget_LobbyCheckingPlayers");

	UWidget_LobbyCheckingPlayers_C_ExecuteUbergraph_Widget_LobbyCheckingPlayers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
