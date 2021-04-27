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

// Function AchievementComponent.AchievementComponent_C.UnlockAchievement
struct UAchievementComponent_C_UnlockAchievement_Params
{
	TEnumAsByte<E_Achievement_E_Achievement>           Achievment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AchievementComponent.AchievementComponent_C.InitAchievement
struct UAchievementComponent_C_InitAchievement_Params
{
};

// Function AchievementComponent.AchievementComponent_C.EndGameAchievementUnlock
struct UAchievementComponent_C_EndGameAchievementUnlock_Params
{
};

// Function AchievementComponent.AchievementComponent_C.CheckRitualCompleteCount
struct UAchievementComponent_C_CheckRitualCompleteCount_Params
{
	int                                                RitualCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AchievementComponent.AchievementComponent_C.SetStats
struct UAchievementComponent_C_SetStats_Params
{
	struct FName                                       StatName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ProgressToIncrease;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AchievementComponent.AchievementComponent_C.SetAchievement
struct UAchievementComponent_C_SetAchievement_Params
{
	struct FName                                       Achievement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AchievementComponent.AchievementComponent_C.ReceiveBeginPlay
struct UAchievementComponent_C_ReceiveBeginPlay_Params
{
};

// Function AchievementComponent.AchievementComponent_C.ExecuteUbergraph_AchievementComponent
struct UAchievementComponent_C_ExecuteUbergraph_AchievementComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
