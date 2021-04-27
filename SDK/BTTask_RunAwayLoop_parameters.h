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

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.DebugPath_Actor
struct UBTTask_RunAwayLoop_C_DebugPath_Actor_Params
{
	TArray<class AActor*>                              Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.TrimTarget
struct UBTTask_RunAwayLoop_C_TrimTarget_Params
{
	TArray<class AActor*>                              Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SortTargetPoint_WithScore
struct UBTTask_RunAwayLoop_C_SortTargetPoint_WithScore_Params
{
	TMap<class AActor*, float>                         Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class AActor*>                              Actors;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.DebugPath
struct UBTTask_RunAwayLoop_C_DebugPath_Params
{
	TMap<class AActor*, float>                         Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GivePathScore
struct UBTTask_RunAwayLoop_C_GivePathScore_Params
{
	TArray<class AActor*>                              Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, float>                         TargetWithScore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.IsPlayerHigher
struct UBTTask_RunAwayLoop_C_IsPlayerHigher_Params
{
	struct FVector                                     StartLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Targets;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsHigher;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GetShouldWalkPath
struct UBTTask_RunAwayLoop_C_GetShouldWalkPath_Params
{
	struct FVector                                     StartLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Targets;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Target;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GetHunter
struct UBTTask_RunAwayLoop_C_GetHunter_Params
{
	class AHunterBase_C*                               Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SortTargetPoint
struct UBTTask_RunAwayLoop_C_SortTargetPoint_Params
{
	TArray<class AActor*>                              Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Actors;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.IsNearHunter
struct UBTTask_RunAwayLoop_C_IsNearHunter_Params
{
	class APawn*                                       OwnerPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeightOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SearchPath
struct UBTTask_RunAwayLoop_C_SearchPath_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ReceiveTickAI
struct UBTTask_RunAwayLoop_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ReceiveExecuteAI
struct UBTTask_RunAwayLoop_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ExecuteUbergraph_BTTask_RunAwayLoop
struct UBTTask_RunAwayLoop_C_ExecuteUbergraph_BTTask_RunAwayLoop_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
