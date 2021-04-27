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

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.GetGameplayAbilityCharge
struct UGA_PA_HunterWithCharge_C_GetGameplayAbilityCharge_Params
{
	int                                                CurrentCharge;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCharge;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.EventReceived_8B73BACE47A0D82EB26F258F5A811729
struct UGA_PA_HunterWithCharge_C_EventReceived_8B73BACE47A0D82EB26F258F5A811729_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnCancelled_8B73BACE47A0D82EB26F258F5A811729
struct UGA_PA_HunterWithCharge_C_OnCancelled_8B73BACE47A0D82EB26F258F5A811729_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnInterrupted_8B73BACE47A0D82EB26F258F5A811729
struct UGA_PA_HunterWithCharge_C_OnInterrupted_8B73BACE47A0D82EB26F258F5A811729_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnBlendOut_8B73BACE47A0D82EB26F258F5A811729
struct UGA_PA_HunterWithCharge_C_OnBlendOut_8B73BACE47A0D82EB26F258F5A811729_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnCompleted_8B73BACE47A0D82EB26F258F5A811729
struct UGA_PA_HunterWithCharge_C_OnCompleted_8B73BACE47A0D82EB26F258F5A811729_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.K2_OnEndAbility
struct UGA_PA_HunterWithCharge_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.Update
struct UGA_PA_HunterWithCharge_C_Update_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.OnEventReceived
struct UGA_PA_HunterWithCharge_C_OnEventReceived_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.Initialize
struct UGA_PA_HunterWithCharge_C_Initialize_Params
{
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.K2_ActivateAbility
struct UGA_PA_HunterWithCharge_C_K2_ActivateAbility_Params
{
};

// Function GA_PA_HunterWithCharge.GA_PA_HunterWithCharge_C.ExecuteUbergraph_GA_PA_HunterWithCharge
struct UGA_PA_HunterWithCharge_C_ExecuteUbergraph_GA_PA_HunterWithCharge_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
