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

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.OnSurvivorMakeSoundIcon
struct UBTTask_SelectTarget_Belle_C_OnSurvivorMakeSoundIcon_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceSoundIcon
struct UBTTask_SelectTarget_Belle_C_GetBestChoiceSoundIcon_Params
{
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BestChoiceSoundIcon;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.CanChasePreviousTarget
struct UBTTask_SelectTarget_Belle_C_CanChasePreviousTarget_Params
{
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanChasePreviousTarget;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.OnSurvivorVent
struct UBTTask_SelectTarget_Belle_C_OnSurvivorVent_Params
{
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ShouldTargetSurvivor
struct UBTTask_SelectTarget_Belle_C_ShouldTargetSurvivor_Params
{
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Survivors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.IsTargettingSurvivor
struct UBTTask_SelectTarget_Belle_C_IsTargettingSurvivor_Params
{
	bool                                               IsTargettingSurvivor;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ExecuteFailed
struct UBTTask_SelectTarget_Belle_C_ExecuteFailed_Params
{
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetCanActivePerk
struct UBTTask_SelectTarget_Belle_C_GetCanActivePerk_Params
{
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanActivePerk;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetCanSpecter
struct UBTTask_SelectTarget_Belle_C_GetCanSpecter_Params
{
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSpecter;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceRitual
struct UBTTask_SelectTarget_Belle_C_GetBestChoiceRitual_Params
{
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BestChoiceRitual;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceSurvivor
struct UBTTask_SelectTarget_Belle_C_GetBestChoiceSurvivor_Params
{
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       BestChoiceSurvivor;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ReceiveExecuteAI
struct UBTTask_SelectTarget_Belle_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ExecuteUbergraph_BTTask_SelectTarget_Belle
struct UBTTask_SelectTarget_Belle_C_ExecuteUbergraph_BTTask_SelectTarget_Belle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
