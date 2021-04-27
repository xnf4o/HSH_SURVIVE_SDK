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

// Function GA_Potion.GA_Potion_C.IsLockCameraOnFinish
struct UGA_Potion_C_IsLockCameraOnFinish_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.GetFinishSection
struct UGA_Potion_C_GetFinishSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.GetSkilcheckFailedSection
struct UGA_Potion_C_GetSkilcheckFailedSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.GetSkilcheckGreatSection
struct UGA_Potion_C_GetSkilcheckGreatSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.GetSkilcheckPerfectSection
struct UGA_Potion_C_GetSkilcheckPerfectSection_Params
{
	struct FName                                       Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.IsForceSkillCheck?
struct UGA_Potion_C_IsForceSkillCheck__Params
{
	bool                                               bForceSkillCheck;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.IsNotCancelProgressonMove
struct UGA_Potion_C_IsNotCancelProgressonMove_Params
{
	bool                                               IsNotCancel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.CanUseProgress
struct UGA_Potion_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.GetProgressTime
struct UGA_Potion_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.IsCanHelp?
struct UGA_Potion_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.IsCanSkillCheck?
struct UGA_Potion_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.IsResetResult?
struct UGA_Potion_C_IsResetResult__Params
{
	bool                                               IsReset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.GetSpeedSkillCheck
struct UGA_Potion_C_GetSpeedSkillCheck_Params
{
	float                                              Speed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.CalculateMagnitude
struct UGA_Potion_C_CalculateMagnitude_Params
{
	float                                              Current;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Require;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Have;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.CalculateUseDurability
struct UGA_Potion_C_CalculateUseDurability_Params
{
	float                                              Current;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DurabilityUse;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.EventReceived_629D1652452EE973C9FBDE8A744F8D17
struct UGA_Potion_C_EventReceived_629D1652452EE973C9FBDE8A744F8D17_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Potion.GA_Potion_C.OnCancelled_629D1652452EE973C9FBDE8A744F8D17
struct UGA_Potion_C_OnCancelled_629D1652452EE973C9FBDE8A744F8D17_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Potion.GA_Potion_C.OnInterrupted_629D1652452EE973C9FBDE8A744F8D17
struct UGA_Potion_C_OnInterrupted_629D1652452EE973C9FBDE8A744F8D17_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Potion.GA_Potion_C.OnBlendOut_629D1652452EE973C9FBDE8A744F8D17
struct UGA_Potion_C_OnBlendOut_629D1652452EE973C9FBDE8A744F8D17_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Potion.GA_Potion_C.OnCompleted_629D1652452EE973C9FBDE8A744F8D17
struct UGA_Potion_C_OnCompleted_629D1652452EE973C9FBDE8A744F8D17_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Potion.GA_Potion_C.OnFinishProgress
struct UGA_Potion_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.OnStopProgress
struct UGA_Potion_C_OnStopProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.OnCannotProgress
struct UGA_Potion_C_OnCannotProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.OnCommitSkillCheck
struct UGA_Potion_C_OnCommitSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.OnStartProgressAction
struct UGA_Potion_C_OnStartProgressAction_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Potion.GA_Potion_C.K2_ActivateAbility
struct UGA_Potion_C_K2_ActivateAbility_Params
{
};

// Function GA_Potion.GA_Potion_C.K2_OnEndAbility
struct UGA_Potion_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Potion.GA_Potion_C.ExecuteUbergraph_GA_Potion
struct UGA_Potion_C_ExecuteUbergraph_GA_Potion_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
