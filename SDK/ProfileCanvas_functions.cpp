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

// Function ProfileCanvas.ProfileCanvas_C.RefreshRowColumn
// (Public, BlueprintCallable, BlueprintEvent)
void UProfileCanvas_C::RefreshRowColumn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.RefreshRowColumn");

	UProfileCanvas_C_RefreshRowColumn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.OnRecieveNotifyProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UProfileCanvas_C::OnRecieveNotifyProfiles(TArray<struct FString>* Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.OnRecieveNotifyProfiles");

	UProfileCanvas_C_OnRecieveNotifyProfiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profiles != nullptr)
		*Profiles = params.Profiles;

}


// Function ProfileCanvas.ProfileCanvas_C.SetWidgetStateBusy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBusy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfileCanvas_C::SetWidgetStateBusy(bool IsBusy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.SetWidgetStateBusy");

	UProfileCanvas_C_SetWidgetStateBusy_Params params;
	params.IsBusy = IsBusy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UProfileCanvas_C::UpdateValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.UpdateValue");

	UProfileCanvas_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.SetPlayerInfoImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         Profile                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UProfileCanvas_C::SetPlayerInfoImage(const struct FPrimaryAssetId& Profile)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.SetPlayerInfoImage");

	UProfileCanvas_C_SetPlayerInfoImage_Params params;
	params.Profile = Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileCanvas_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.AssignWidgetManager");

	UProfileCanvas_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.OnProfileImageClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UProfileCanvas_C::OnProfileImageClick(const struct FS_ItemInventory& InventoryData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.OnProfileImageClick");

	UProfileCanvas_C_OnProfileImageClick_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UProfileCanvas_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.Initialize");

	UProfileCanvas_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.OnResponse_D08D8C9E424796A9FD5FD49B4A3DC460
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfileCanvas_C::OnResponse_D08D8C9E424796A9FD5FD49B4A3DC460(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.OnResponse_D08D8C9E424796A9FD5FD49B4A3DC460");

	UProfileCanvas_C_OnResponse_D08D8C9E424796A9FD5FD49B4A3DC460_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.SaveProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UProfileCanvas_C::SaveProfile(const struct FS_ItemInventory& InventoryData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.SaveProfile");

	UProfileCanvas_C_SaveProfile_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileCanvas.ProfileCanvas_C.ExecuteUbergraph_ProfileCanvas
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileCanvas_C::ExecuteUbergraph_ProfileCanvas(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileCanvas.ProfileCanvas_C.ExecuteUbergraph_ProfileCanvas");

	UProfileCanvas_C_ExecuteUbergraph_ProfileCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
