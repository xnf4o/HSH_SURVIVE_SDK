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

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetEscapedSurvivor
struct UActivityManagerComponent_C_GetEscapedSurvivor_Params
{
	int                                                EscapedSurvivor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetCompletelyDeadSurvivor
struct UActivityManagerComponent_C_GetCompletelyDeadSurvivor_Params
{
	int                                                DeadSurvivor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestRitualComplete
struct UActivityManagerComponent_C_GetHighestRitualComplete_Params
{
	int                                                HighestRitualComplete;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestRitualContribute
struct UActivityManagerComponent_C_GetHighestRitualContribute_Params
{
	float                                              HighestRitualContribute;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.AddPenaltyScore
struct UActivityManagerComponent_C_AddPenaltyScore_Params
{
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.InitializeByController
struct UActivityManagerComponent_C_InitializeByController_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestHPRemain
struct UActivityManagerComponent_C_GetHighestHPRemain_Params
{
	float                                              HighestHPRemain;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateTotalScoreAndExpWithIndex
struct UActivityManagerComponent_C_CalculateTotalScoreAndExpWithIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestDecoyTime
struct UActivityManagerComponent_C_GetHighestDecoyTime_Params
{
	int                                                HighestDecoyTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.AddHighestScore
struct UActivityManagerComponent_C_AddHighestScore_Params
{
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.AddCustomMatchScore
struct UActivityManagerComponent_C_AddCustomMatchScore_Params
{
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerIndexByGameID
struct UActivityManagerComponent_C_GetPlayerIndexByGameID_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.AddActivityPointByID
struct UActivityManagerComponent_C_AddActivityPointByID_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.RemovePlayerData
struct UActivityManagerComponent_C_RemovePlayerData_Params
{
	class APlayerState*                                PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetUnresurrectSurvivor
struct UActivityManagerComponent_C_GetUnresurrectSurvivor_Params
{
	int                                                UnResurrectCnt;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.IsActivityCapped
struct UActivityManagerComponent_C_IsActivityCapped_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCapped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.ReplaceActivityPoint
struct UActivityManagerComponent_C_ReplaceActivityPoint_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateTotalScoreAndExp
struct UActivityManagerComponent_C_CalculateTotalScoreAndExp_Params
{
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestScore
struct UActivityManagerComponent_C_GetHighestScore_Params
{
	int                                                HighestScore;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestDamageDoneToHunter
struct UActivityManagerComponent_C_GetHighestDamageDoneToHunter_Params
{
	float                                              HighestDamageDone;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestResurrectSurvivor
struct UActivityManagerComponent_C_GetHighestResurrectSurvivor_Params
{
	int                                                HighestResurrect;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetHighestPerfectSkillCheck
struct UActivityManagerComponent_C_GetHighestPerfectSkillCheck_Params
{
	int                                                HighestSkillCheck;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.CalculateFinalScoreSummary
struct UActivityManagerComponent_C_CalculateFinalScoreSummary_Params
{
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerDataSummary
struct UActivityManagerComponent_C_GetPlayerDataSummary_Params
{
	int                                                PlayerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSTR_PlayerActivityData                     PlayerActivity;                                            // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.Initialize
struct UActivityManagerComponent_C_Initialize_Params
{
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.PrintDebugPlayerActivity
struct UActivityManagerComponent_C_PrintDebugPlayerActivity_Params
{
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerActivityData
struct UActivityManagerComponent_C_GetPlayerActivityData_Params
{
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     EventName;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasCap;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CoinCap;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreCap;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.GetPlayerIndexByID
struct UActivityManagerComponent_C_GetPlayerIndexByID_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityManagerComponent.ActivityManagerComponent_C.AddActivityPoint
struct UActivityManagerComponent_C_AddActivityPoint_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
