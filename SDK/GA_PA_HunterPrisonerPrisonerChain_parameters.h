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

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.StartHookTarget
struct UGA_PA_HunterPrisonerPrisonerChain_C_StartHookTarget_Params
{
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.FindSurvivor
struct UGA_PA_HunterPrisonerPrisonerChain_C_FindSurvivor_Params
{
	float                                              TraceLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HalfSize;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorBase_C*                             survivor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.EventReceived_34CEA72B4AD100A32916948C478401D5
struct UGA_PA_HunterPrisonerPrisonerChain_C_EventReceived_34CEA72B4AD100A32916948C478401D5_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnCancelled_34CEA72B4AD100A32916948C478401D5
struct UGA_PA_HunterPrisonerPrisonerChain_C_OnCancelled_34CEA72B4AD100A32916948C478401D5_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnInterrupted_34CEA72B4AD100A32916948C478401D5
struct UGA_PA_HunterPrisonerPrisonerChain_C_OnInterrupted_34CEA72B4AD100A32916948C478401D5_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnBlendOut_34CEA72B4AD100A32916948C478401D5
struct UGA_PA_HunterPrisonerPrisonerChain_C_OnBlendOut_34CEA72B4AD100A32916948C478401D5_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnCompleted_34CEA72B4AD100A32916948C478401D5
struct UGA_PA_HunterPrisonerPrisonerChain_C_OnCompleted_34CEA72B4AD100A32916948C478401D5_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.K2_ActivateAbility
struct UGA_PA_HunterPrisonerPrisonerChain_C_K2_ActivateAbility_Params
{
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.K2_OnEndAbility
struct UGA_PA_HunterPrisonerPrisonerChain_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.OnEndDelegate
struct UGA_PA_HunterPrisonerPrisonerChain_C_OnEndDelegate_Params
{
	bool                                               bHookSuccess;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.CommitPrisonerCooldown
struct UGA_PA_HunterPrisonerPrisonerChain_C_CommitPrisonerCooldown_Params
{
	bool                                               bHookSuccess;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PA_HunterPrisonerPrisonerChain.GA_PA_HunterPrisonerPrisonerChain_C.ExecuteUbergraph_GA_PA_HunterPrisonerPrisonerChain
struct UGA_PA_HunterPrisonerPrisonerChain_C_ExecuteUbergraph_GA_PA_HunterPrisonerPrisonerChain_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
