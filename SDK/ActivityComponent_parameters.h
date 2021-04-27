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

// Function ActivityComponent.ActivityComponent_C.CalculateRitualContributionPoint
struct UActivityComponent_C_CalculateRitualContributionPoint_Params
{
	int                                                CoinValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.CalculateAttackHunterPoint
struct UActivityComponent_C_CalculateAttackHunterPoint_Params
{
	int                                                CoinValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.CalculateAttackSurvivorPoint
struct UActivityComponent_C_CalculateAttackSurvivorPoint_Params
{
	int                                                CoinValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.RefreshPlayerController
struct UActivityComponent_C_RefreshPlayerController_Params
{
};

// Function ActivityComponent.ActivityComponent_C.TryGetPlayerController
struct UActivityComponent_C_TryGetPlayerController_Params
{
	class AHSURPlayerController_C*                     HSURPlayerController;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.TriggerActivity
struct UActivityComponent_C_TriggerActivity_Params
{
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.GetOwnerPlayerID
struct UActivityComponent_C_GetOwnerPlayerID_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.TriggerActivityWithValue
struct UActivityComponent_C_TriggerActivityWithValue_Params
{
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CoinValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.Initialize
struct UActivityComponent_C_Initialize_Params
{
};

// Function ActivityComponent.ActivityComponent_C.CalculateActivityPoint
struct UActivityComponent_C_CalculateActivityPoint_Params
{
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CoinValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ActivityComponent.ActivityComponent_C.Server_TriggerActivity
struct UActivityComponent_C_Server_TriggerActivity_Params
{
	TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CoinValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.Client_TriggerActivity
struct UActivityComponent_C_Client_TriggerActivity_Params
{
	struct FString                                     EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActivityComponent.ActivityComponent_C.ExecuteUbergraph_ActivityComponent
struct UActivityComponent_C_ExecuteUbergraph_ActivityComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
