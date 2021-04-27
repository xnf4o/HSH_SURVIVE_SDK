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

// Function GA_Cat.GA_Cat_C.GetSpawnTransfrom
struct UGA_Cat_C_GetSpawnTransfrom_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Cat.GA_Cat_C.UpdateItem
struct UGA_Cat_C_UpdateItem_Params
{
};

// Function GA_Cat.GA_Cat_C.EventReceived_F0DCE78043A14E77EEF97BB37FB5325E
struct UGA_Cat_C_EventReceived_F0DCE78043A14E77EEF97BB37FB5325E_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Cat.GA_Cat_C.OnCancelled_F0DCE78043A14E77EEF97BB37FB5325E
struct UGA_Cat_C_OnCancelled_F0DCE78043A14E77EEF97BB37FB5325E_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Cat.GA_Cat_C.OnInterrupted_F0DCE78043A14E77EEF97BB37FB5325E
struct UGA_Cat_C_OnInterrupted_F0DCE78043A14E77EEF97BB37FB5325E_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Cat.GA_Cat_C.OnBlendOut_F0DCE78043A14E77EEF97BB37FB5325E
struct UGA_Cat_C_OnBlendOut_F0DCE78043A14E77EEF97BB37FB5325E_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Cat.GA_Cat_C.OnCompleted_F0DCE78043A14E77EEF97BB37FB5325E
struct UGA_Cat_C_OnCompleted_F0DCE78043A14E77EEF97BB37FB5325E_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Cat.GA_Cat_C.K2_ActivateAbility
struct UGA_Cat_C_K2_ActivateAbility_Params
{
};

// Function GA_Cat.GA_Cat_C.K2_OnEndAbility
struct UGA_Cat_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Cat.GA_Cat_C.ExecuteUbergraph_GA_Cat
struct UGA_Cat_C_ExecuteUbergraph_GA_Cat_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
