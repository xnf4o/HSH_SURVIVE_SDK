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

// Function GA_WeaponBase.GA_WeaponBase_C.UnlockCameraToFront
struct UGA_WeaponBase_C_UnlockCameraToFront_Params
{
};

// Function GA_WeaponBase.GA_WeaponBase_C.LockCameraToFront
struct UGA_WeaponBase_C_LockCameraToFront_Params
{
};

// Function GA_WeaponBase.GA_WeaponBase_C.GetAnimationMontage
struct UGA_WeaponBase_C_GetAnimationMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_WeaponBase.GA_WeaponBase_C.OnPlayMontage
struct UGA_WeaponBase_C_OnPlayMontage_Params
{
};

// Function GA_WeaponBase.GA_WeaponBase_C.UpdateItem
struct UGA_WeaponBase_C_UpdateItem_Params
{
};

// Function GA_WeaponBase.GA_WeaponBase_C.SendMeleeDistance
struct UGA_WeaponBase_C_SendMeleeDistance_Params
{
};

// Function GA_WeaponBase.GA_WeaponBase_C.EventReceived_41C7215442396D32690029AD68DF406C
struct UGA_WeaponBase_C_EventReceived_41C7215442396D32690029AD68DF406C_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WeaponBase.GA_WeaponBase_C.OnCancelled_41C7215442396D32690029AD68DF406C
struct UGA_WeaponBase_C_OnCancelled_41C7215442396D32690029AD68DF406C_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WeaponBase.GA_WeaponBase_C.OnInterrupted_41C7215442396D32690029AD68DF406C
struct UGA_WeaponBase_C_OnInterrupted_41C7215442396D32690029AD68DF406C_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WeaponBase.GA_WeaponBase_C.OnBlendOut_41C7215442396D32690029AD68DF406C
struct UGA_WeaponBase_C_OnBlendOut_41C7215442396D32690029AD68DF406C_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WeaponBase.GA_WeaponBase_C.OnCompleted_41C7215442396D32690029AD68DF406C
struct UGA_WeaponBase_C_OnCompleted_41C7215442396D32690029AD68DF406C_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WeaponBase.GA_WeaponBase_C.K2_ActivateAbility
struct UGA_WeaponBase_C_K2_ActivateAbility_Params
{
};

// Function GA_WeaponBase.GA_WeaponBase_C.K2_OnEndAbility
struct UGA_WeaponBase_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_WeaponBase.GA_WeaponBase_C.PlayHeavySound
struct UGA_WeaponBase_C_PlayHeavySound_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_WeaponBase.GA_WeaponBase_C.PlayLightSound
struct UGA_WeaponBase_C_PlayLightSound_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_WeaponBase.GA_WeaponBase_C.ExecuteUbergraph_GA_WeaponBase
struct UGA_WeaponBase_C_ExecuteUbergraph_GA_WeaponBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
