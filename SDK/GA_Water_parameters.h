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

// Function GA_Water.GA_Water_C.CalculateMagnitude
struct UGA_Water_C_CalculateMagnitude_Params
{
	float                                              Durability;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Water.GA_Water_C.EventReceived_D7EB39DF43AE8D26BFF2908AB5C5E736
struct UGA_Water_C_EventReceived_D7EB39DF43AE8D26BFF2908AB5C5E736_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Water.GA_Water_C.OnCancelled_D7EB39DF43AE8D26BFF2908AB5C5E736
struct UGA_Water_C_OnCancelled_D7EB39DF43AE8D26BFF2908AB5C5E736_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Water.GA_Water_C.OnInterrupted_D7EB39DF43AE8D26BFF2908AB5C5E736
struct UGA_Water_C_OnInterrupted_D7EB39DF43AE8D26BFF2908AB5C5E736_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Water.GA_Water_C.OnBlendOut_D7EB39DF43AE8D26BFF2908AB5C5E736
struct UGA_Water_C_OnBlendOut_D7EB39DF43AE8D26BFF2908AB5C5E736_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Water.GA_Water_C.OnCompleted_D7EB39DF43AE8D26BFF2908AB5C5E736
struct UGA_Water_C_OnCompleted_D7EB39DF43AE8D26BFF2908AB5C5E736_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Water.GA_Water_C.K2_OnEndAbility
struct UGA_Water_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Water.GA_Water_C.K2_ActivateAbility
struct UGA_Water_C_K2_ActivateAbility_Params
{
};

// Function GA_Water.GA_Water_C.ExecuteUbergraph_GA_Water
struct UGA_Water_C_ExecuteUbergraph_GA_Water_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
