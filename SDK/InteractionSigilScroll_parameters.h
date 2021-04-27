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

// Function InteractionSigilScroll.InteractionSigilScroll_C.GetDestructible
struct AInteractionSigilScroll_C_GetDestructible_Params
{
	bool                                               Destructable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.IsObjectReverse
struct AInteractionSigilScroll_C_IsObjectReverse_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.InverseXAxis
struct AInteractionSigilScroll_C_InverseXAxis_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.SetDestructible
struct AInteractionSigilScroll_C_SetDestructible_Params
{
	bool                                               Destructible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.OnHunterChangeHiddenState
struct AInteractionSigilScroll_C_OnHunterChangeHiddenState_Params
{
	bool                                               InHiddenState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.ShowIndicator
struct AInteractionSigilScroll_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.ReceiveTick
struct AInteractionSigilScroll_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.HideIndicator
struct AInteractionSigilScroll_C_HideIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.ReceiveBeginPlay
struct AInteractionSigilScroll_C_ReceiveBeginPlay_Params
{
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.ShowOutline
struct AInteractionSigilScroll_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.HideOutline
struct AInteractionSigilScroll_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.DestroyedByHunter
struct AInteractionSigilScroll_C_DestroyedByHunter_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               DestroyedBy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.ExecuteUbergraph_InteractionSigilScroll
struct AInteractionSigilScroll_C_ExecuteUbergraph_InteractionSigilScroll_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.OnDestroyedByHunter__DelegateSignature
struct AInteractionSigilScroll_C_OnDestroyedByHunter__DelegateSignature_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               DestroyedBy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.OnHideOutline__DelegateSignature
struct AInteractionSigilScroll_C_OnHideOutline__DelegateSignature_Params
{
};

// Function InteractionSigilScroll.InteractionSigilScroll_C.OnShowOutline__DelegateSignature
struct AInteractionSigilScroll_C_OnShowOutline__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
