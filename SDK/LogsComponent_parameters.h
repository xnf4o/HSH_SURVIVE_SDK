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

// Function LogsComponent.LogsComponent_C.SaveLogsMatchData
struct ULogsComponent_C_SaveLogsMatchData_Params
{
};

// Function LogsComponent.LogsComponent_C.GetUsedPotion
struct ULogsComponent_C_GetUsedPotion_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	int                                                Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.AddedUsedPotion
struct ULogsComponent_C_AddedUsedPotion_Params
{
	struct FPrimaryAssetId                             Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.SaveLogs_GameSparks
struct ULogsComponent_C_SaveLogs_GameSparks_Params
{
};

// Function LogsComponent.LogsComponent_C.DebugPrintLogs
struct ULogsComponent_C_DebugPrintLogs_Params
{
};

// Function LogsComponent.LogsComponent_C.MakePlayerRole
struct ULogsComponent_C_MakePlayerRole_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Role;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.SaveLogs
struct ULogsComponent_C_SaveLogs_Params
{
};

// Function LogsComponent.LogsComponent_C.MakePlayerStamp
struct ULogsComponent_C_MakePlayerStamp_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Return;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.FindPlayerName
struct ULogsComponent_C_FindPlayerName_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.GetGameTime
struct ULogsComponent_C_GetGameTime_Params
{
	struct FString                                     ToString;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.DateToString
struct ULogsComponent_C_DateToString_Params
{
	struct FDateTime                                   InDateTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ToString;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.TimeToString
struct ULogsComponent_C_TimeToString_Params
{
	struct FTimespan                                   InTimespan;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ToString;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.GetPlayerName
struct ULogsComponent_C_GetPlayerName_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogUseItemSuccess
struct ULogsComponent_C_LogUseItemSuccess_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             AssetsID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogEndGame
struct ULogsComponent_C_LogEndGame_Params
{
};

// Function LogsComponent.LogsComponent_C.LogOpenChest
struct ULogsComponent_C_LogOpenChest_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogOpenChestCount
struct ULogsComponent_C_LogOpenChestCount_Params
{
};

// Function LogsComponent.LogsComponent_C.LogUseItemUsed
struct ULogsComponent_C_LogUseItemUsed_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             AssetsID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogRitualSuccess
struct ULogsComponent_C_LogRitualSuccess_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogPlayerDoDmg
struct ULogsComponent_C_LogPlayerDoDmg_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dmg;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogAllDmg
struct ULogsComponent_C_LogAllDmg_Params
{
};

// Function LogsComponent.LogsComponent_C.LogPlayerSkicker
struct ULogsComponent_C_LogPlayerSkicker_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     StickerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogPlayerActivity
struct ULogsComponent_C_LogPlayerActivity_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ActivityName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Coin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogPlayerActivityTotal
struct ULogsComponent_C_LogPlayerActivityTotal_Params
{
};

// Function LogsComponent.LogsComponent_C.LogPlayerRevive
struct ULogsComponent_C_LogPlayerRevive_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogPlayerDeath
struct ULogsComponent_C_LogPlayerDeath_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.LogUsePotionCount
struct ULogsComponent_C_LogUsePotionCount_Params
{
};

// Function LogsComponent.LogsComponent_C.LogMatchMakeData
struct ULogsComponent_C_LogMatchMakeData_Params
{
};

// Function LogsComponent.LogsComponent_C.ServerSaveLogs
struct ULogsComponent_C_ServerSaveLogs_Params
{
};

// Function LogsComponent.LogsComponent_C.MulticastSaveLogs
struct ULogsComponent_C_MulticastSaveLogs_Params
{
};

// Function LogsComponent.LogsComponent_C.ReceiveBeginPlay
struct ULogsComponent_C_ReceiveBeginPlay_Params
{
};

// Function LogsComponent.LogsComponent_C.ReceiveEndPlay
struct ULogsComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.WriteLogs
struct ULogsComponent_C_WriteLogs_Params
{
	bool                                               WithSave;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LogsComponent.LogsComponent_C.Response
struct ULogsComponent_C_Response_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LogsComponent.LogsComponent_C.ExecuteUbergraph_LogsComponent
struct ULogsComponent_C_ExecuteUbergraph_LogsComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
