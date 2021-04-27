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

// Function HSURLobbyHUD.HSURLobbyHUD_C.Refresh
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PlayerLobby>  PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AHSURLobbyHUD_C::Refresh(TArray<struct FS_PlayerLobby> PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.Refresh");

	AHSURLobbyHUD_C_Refresh_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.AddPlayerInfoHUD
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyHUD_C::AddPlayerInfoHUD(const struct FVector& ActorLocation, const struct FString& Name, int PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.AddPlayerInfoHUD");

	AHSURLobbyHUD_C_AddPlayerInfoHUD_Params params;
	params.ActorLocation = ActorLocation;
	params.Name = Name;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.RemovePlayerInfoHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyHUD_C::RemovePlayerInfoHUD(int PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.RemovePlayerInfoHUD");

	AHSURLobbyHUD_C_RemovePlayerInfoHUD_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.ClearAllPlayerInfoHUD
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURLobbyHUD_C::ClearAllPlayerInfoHUD()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.ClearAllPlayerInfoHUD");

	AHSURLobbyHUD_C_ClearAllPlayerInfoHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.RefreshWidget
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyHUD_C::RefreshWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.RefreshWidget");

	AHSURLobbyHUD_C_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyHUD_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.ReceiveTick");

	AHSURLobbyHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.HideWidget
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyHUD_C::HideWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.HideWidget");

	AHSURLobbyHUD_C_HideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.ShowWidget
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyHUD_C::ShowWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.ShowWidget");

	AHSURLobbyHUD_C_ShowWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyHUD.HSURLobbyHUD_C.ExecuteUbergraph_HSURLobbyHUD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyHUD_C::ExecuteUbergraph_HSURLobbyHUD(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyHUD.HSURLobbyHUD_C.ExecuteUbergraph_HSURLobbyHUD");

	AHSURLobbyHUD_C_ExecuteUbergraph_HSURLobbyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
