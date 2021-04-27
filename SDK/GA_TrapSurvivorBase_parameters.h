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

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetPairTrapTarget
struct UGA_TrapSurvivorBase_C_GetPairTrapTarget_Params
{
	TArray<class ATrapTargetActor_C*>                  Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ATrapTargetActor_C*>                  MakeArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.ChangeInteractMode
struct UGA_TrapSurvivorBase_C_ChangeInteractMode_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_InteractState_E_InteractState>       State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetHangPoint
struct UGA_TrapSurvivorBase_C_GetHangPoint_Params
{
	TArray<class ATrapTargetActor_C*>                  TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FTransform>                          HangPoint;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GoToSection
struct UGA_TrapSurvivorBase_C_GoToSection_Params
{
	struct FName                                       SectionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetRotation
struct UGA_TrapSurvivorBase_C_GetRotation_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.GetLocation
struct UGA_TrapSurvivorBase_C_GetLocation_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.EventReceived_B119D4DF4AF0D70862CF2BBCF702EDC4
struct UGA_TrapSurvivorBase_C_EventReceived_B119D4DF4AF0D70862CF2BBCF702EDC4_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnCancelled_B119D4DF4AF0D70862CF2BBCF702EDC4
struct UGA_TrapSurvivorBase_C_OnCancelled_B119D4DF4AF0D70862CF2BBCF702EDC4_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnInterrupted_B119D4DF4AF0D70862CF2BBCF702EDC4
struct UGA_TrapSurvivorBase_C_OnInterrupted_B119D4DF4AF0D70862CF2BBCF702EDC4_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnBlendOut_B119D4DF4AF0D70862CF2BBCF702EDC4
struct UGA_TrapSurvivorBase_C_OnBlendOut_B119D4DF4AF0D70862CF2BBCF702EDC4_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.OnCompleted_B119D4DF4AF0D70862CF2BBCF702EDC4
struct UGA_TrapSurvivorBase_C_OnCompleted_B119D4DF4AF0D70862CF2BBCF702EDC4_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.K2_ActivateAbility
struct UGA_TrapSurvivorBase_C_K2_ActivateAbility_Params
{
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.K2_OnEndAbility
struct UGA_TrapSurvivorBase_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_TrapSurvivorBase.GA_TrapSurvivorBase_C.ExecuteUbergraph_GA_TrapSurvivorBase
struct UGA_TrapSurvivorBase_C_ExecuteUbergraph_GA_TrapSurvivorBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
