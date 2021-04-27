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

// Function LogsComponent.LogsComponent_C.SaveLogsMatchData
// (Public, BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::SaveLogsMatchData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.SaveLogsMatchData");

	ULogsComponent_C_SaveLogsMatchData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.GetUsedPotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool ULogsComponent_C::GetUsedPotion(int PlayerId, int* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.GetUsedPotion");

	ULogsComponent_C_GetUsedPotion_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function LogsComponent.LogsComponent_C.AddedUsedPotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::AddedUsedPotion(const struct FPrimaryAssetId& Item, class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.AddedUsedPotion");

	ULogsComponent_C_AddedUsedPotion_Params params;
	params.Item = Item;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.SaveLogs_GameSparks
// (Public, BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::SaveLogs_GameSparks()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.SaveLogs_GameSparks");

	ULogsComponent_C_SaveLogs_GameSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.DebugPrintLogs
// (Public, BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::DebugPrintLogs()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.DebugPrintLogs");

	ULogsComponent_C_DebugPrintLogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.MakePlayerRole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Role                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::MakePlayerRole(class AController* Controller, struct FString* Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.MakePlayerRole");

	ULogsComponent_C_MakePlayerRole_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role != nullptr)
		*Role = params.Role;

}


// Function LogsComponent.LogsComponent_C.SaveLogs
// (Public, BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::SaveLogs()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.SaveLogs");

	ULogsComponent_C_SaveLogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.MakePlayerStamp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::MakePlayerStamp(class AController* Controller, struct FString* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.MakePlayerStamp");

	ULogsComponent_C_MakePlayerStamp_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function LogsComponent.LogsComponent_C.FindPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::FindPlayerName(int PlayerId, struct FString* Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.FindPlayerName");

	ULogsComponent_C_FindPlayerName_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function LogsComponent.LogsComponent_C.GetGameTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ToString                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::GetGameTime(struct FString* ToString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.GetGameTime");

	ULogsComponent_C_GetGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToString != nullptr)
		*ToString = params.ToString;

}


// Function LogsComponent.LogsComponent_C.DateToString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime               InDateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FString                 ToString                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::DateToString(const struct FDateTime& InDateTime, struct FString* ToString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.DateToString");

	ULogsComponent_C_DateToString_Params params;
	params.InDateTime = InDateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToString != nullptr)
		*ToString = params.ToString;

}


// Function LogsComponent.LogsComponent_C.TimeToString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan               InTimespan                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FString                 ToString                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::TimeToString(const struct FTimespan& InTimespan, struct FString* ToString)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.TimeToString");

	ULogsComponent_C_TimeToString_Params params;
	params.InTimespan = InTimespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToString != nullptr)
		*ToString = params.ToString;

}


// Function LogsComponent.LogsComponent_C.GetPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::GetPlayerName(class AHSURPlayerController_C* PlayerController, struct FString* Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.GetPlayerName");

	ULogsComponent_C_GetPlayerName_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function LogsComponent.LogsComponent_C.LogUseItemSuccess
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         AssetsID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::LogUseItemSuccess(class AController* Controller, const struct FPrimaryAssetId& AssetsID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogUseItemSuccess");

	ULogsComponent_C_LogUseItemSuccess_Params params;
	params.Controller = Controller;
	params.AssetsID = AssetsID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogEndGame
// (BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::LogEndGame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogEndGame");

	ULogsComponent_C_LogEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogOpenChest
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::LogOpenChest(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogOpenChest");

	ULogsComponent_C_LogOpenChest_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogOpenChestCount
// (BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::LogOpenChestCount()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogOpenChestCount");

	ULogsComponent_C_LogOpenChestCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogUseItemUsed
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         AssetsID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::LogUseItemUsed(class AController* Controller, const struct FPrimaryAssetId& AssetsID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogUseItemUsed");

	ULogsComponent_C_LogUseItemUsed_Params params;
	params.Controller = Controller;
	params.AssetsID = AssetsID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogRitualSuccess
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::LogRitualSuccess(class AHSURPlayerController_C* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogRitualSuccess");

	ULogsComponent_C_LogRitualSuccess_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogPlayerDoDmg
// (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::LogPlayerDoDmg(class AController* Controller, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogPlayerDoDmg");

	ULogsComponent_C_LogPlayerDoDmg_Params params;
	params.Controller = Controller;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogAllDmg
// (BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::LogAllDmg()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogAllDmg");

	ULogsComponent_C_LogAllDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogPlayerSkicker
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 StickerName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::LogPlayerSkicker(class AHSURPlayerController_C* PlayerController, const struct FString& StickerName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogPlayerSkicker");

	ULogsComponent_C_LogPlayerSkicker_Params params;
	params.PlayerController = PlayerController;
	params.StickerName = StickerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogPlayerActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ActivityName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Coin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ULogsComponent_C::LogPlayerActivity(class AController* Controller, const struct FString& ActivityName, const struct FString& Coin, const struct FString& Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogPlayerActivity");

	ULogsComponent_C_LogPlayerActivity_Params params;
	params.Controller = Controller;
	params.ActivityName = ActivityName;
	params.Coin = Coin;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogPlayerActivityTotal
// (BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::LogPlayerActivityTotal()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogPlayerActivityTotal");

	ULogsComponent_C_LogPlayerActivityTotal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogPlayerRevive
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::LogPlayerRevive(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogPlayerRevive");

	ULogsComponent_C_LogPlayerRevive_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogPlayerDeath
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::LogPlayerDeath(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogPlayerDeath");

	ULogsComponent_C_LogPlayerDeath_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogUsePotionCount
// (BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::LogUsePotionCount()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogUsePotionCount");

	ULogsComponent_C_LogUsePotionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.LogMatchMakeData
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::LogMatchMakeData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.LogMatchMakeData");

	ULogsComponent_C_LogMatchMakeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.ServerSaveLogs
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::ServerSaveLogs()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.ServerSaveLogs");

	ULogsComponent_C_ServerSaveLogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.MulticastSaveLogs
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ULogsComponent_C::MulticastSaveLogs()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.MulticastSaveLogs");

	ULogsComponent_C_MulticastSaveLogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ULogsComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.ReceiveBeginPlay");

	ULogsComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.ReceiveEndPlay");

	ULogsComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.WriteLogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WithSave                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULogsComponent_C::WriteLogs(bool WithSave)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.WriteLogs");

	ULogsComponent_C_WriteLogs_Params params;
	params.WithSave = WithSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.Response
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::Response(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.Response");

	ULogsComponent_C_Response_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LogsComponent.LogsComponent_C.ExecuteUbergraph_LogsComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULogsComponent_C::ExecuteUbergraph_LogsComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LogsComponent.LogsComponent_C.ExecuteUbergraph_LogsComponent");

	ULogsComponent_C_ExecuteUbergraph_LogsComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
