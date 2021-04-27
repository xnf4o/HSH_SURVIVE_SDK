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

// Function GA_ProjectileBase.GA_ProjectileBase_C.OnEventPlayMontage
struct UGA_ProjectileBase_C_OnEventPlayMontage_Params
{
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.Debug
struct UGA_ProjectileBase_C_Debug_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.TraceTarget
struct UGA_ProjectileBase_C_TraceTarget_Params
{
	struct FVector                                     Start;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefualtDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.GetAnimationMontage
struct UGA_ProjectileBase_C_GetAnimationMontage_Params
{
	class UAnimMontage*                                Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.GetSpawnLocation
struct UGA_ProjectileBase_C_GetSpawnLocation_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InSocketName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.Change
struct UGA_ProjectileBase_C_Change_Params
{
	float                                              Percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.UpdateItem
struct UGA_ProjectileBase_C_UpdateItem_Params
{
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.OnEventReceived
struct UGA_ProjectileBase_C_OnEventReceived_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.GetRotation
struct UGA_ProjectileBase_C_GetRotation_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.GetLocation
struct UGA_ProjectileBase_C_GetLocation_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.EventReceived_5011CA2745EDF3960A85889E69BE0041
struct UGA_ProjectileBase_C_EventReceived_5011CA2745EDF3960A85889E69BE0041_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.OnCancelled_5011CA2745EDF3960A85889E69BE0041
struct UGA_ProjectileBase_C_OnCancelled_5011CA2745EDF3960A85889E69BE0041_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.OnInterrupted_5011CA2745EDF3960A85889E69BE0041
struct UGA_ProjectileBase_C_OnInterrupted_5011CA2745EDF3960A85889E69BE0041_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.OnBlendOut_5011CA2745EDF3960A85889E69BE0041
struct UGA_ProjectileBase_C_OnBlendOut_5011CA2745EDF3960A85889E69BE0041_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.OnCompleted_5011CA2745EDF3960A85889E69BE0041
struct UGA_ProjectileBase_C_OnCompleted_5011CA2745EDF3960A85889E69BE0041_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.K2_ActivateAbility
struct UGA_ProjectileBase_C_K2_ActivateAbility_Params
{
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.K2_OnEndAbility
struct UGA_ProjectileBase_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_ProjectileBase.GA_ProjectileBase_C.ExecuteUbergraph_GA_ProjectileBase
struct UGA_ProjectileBase_C_ExecuteUbergraph_GA_ProjectileBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
