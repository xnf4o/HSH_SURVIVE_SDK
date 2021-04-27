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

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetHalfSpell
struct UProgressManagerComponent_C_GetHalfSpell_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.RemoveAIController
struct UProgressManagerComponent_C_RemoveAIController_Params
{
	TArray<class AController*>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 Element;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AController*>                         Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.AddedAIController
struct UProgressManagerComponent_C_AddedAIController_Params
{
	TArray<class AController*>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 Element;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AController*>                         Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.DebugRequestProgressAI
struct UProgressManagerComponent_C_DebugRequestProgressAI_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.DebugRequestProgress
struct UProgressManagerComponent_C_DebugRequestProgress_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetProgressRate
struct UProgressManagerComponent_C_GetProgressRate_Params
{
	int                                                PlayerNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.DebugProgressTime
struct UProgressManagerComponent_C_DebugProgressTime_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.DebugProgressList
struct UProgressManagerComponent_C_DebugProgressList_Params
{
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.CommitFailedOnCancel
struct UProgressManagerComponent_C_CommitFailedOnCancel_Params
{
	bool                                               IsSkillCheck;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetProgressTime
struct UProgressManagerComponent_C_GetProgressTime_Params
{
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Defualt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetIsSkillCheck
struct UProgressManagerComponent_C_GetIsSkillCheck_Params
{
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Defualt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetProgressInfoWithTarget
struct UProgressManagerComponent_C_GetProgressInfoWithTarget_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsContain;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSProgressInfo                              Output;                                                    // (Parm, OutParm)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.IsContainTarget
struct UProgressManagerComponent_C_IsContainTarget_Params
{
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PlayerInteract;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.IsCanProgress
struct UProgressManagerComponent_C_IsCanProgress_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Interaction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetPlayerExpertise
struct UProgressManagerComponent_C_GetPlayerExpertise_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Percent;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetProgressLeft
struct UProgressManagerComponent_C_GetProgressLeft_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ProgressLeft;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetResultValue
struct UProgressManagerComponent_C_GetResultValue_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.ChangeBoolean
struct UProgressManagerComponent_C_ChangeBoolean_Params
{
	TArray<bool>                                       Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<bool>                                       Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.GetPlayerProgressInfo
struct UProgressManagerComponent_C_GetPlayerProgressInfo_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsContain;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSProgressInfo                              ProgressInfo;                                              // (Parm, OutParm)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.RemoveBoolean
struct UProgressManagerComponent_C_RemoveBoolean_Params
{
	TArray<bool>                                       Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                       Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.AddedBoolean
struct UProgressManagerComponent_C_AddedBoolean_Params
{
	TArray<bool>                                       Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Element;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<bool>                                       Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.AddedPlayerController
struct UProgressManagerComponent_C_AddedPlayerController_Params
{
	TArray<class AController*>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 Element;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AController*>                         Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.CountPlayerNotSkillCheck
struct UProgressManagerComponent_C_CountPlayerNotSkillCheck_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PlayerNotSkillCheck;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.RemovePlayerController
struct UProgressManagerComponent_C_RemovePlayerController_Params
{
	TArray<class AController*>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 Element;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AController*>                         Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.DebugSkillCheck
struct UProgressManagerComponent_C_DebugSkillCheck_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.SkillCheckChance
struct UProgressManagerComponent_C_SkillCheckChance_Params
{
	float                                              ProgressPercent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProgressFinishTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                progressProbability;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BanSkillCheck;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSkillCheckChance;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.DebugProgress
struct UProgressManagerComponent_C_DebugProgress_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.Initialize
struct UProgressManagerComponent_C_Initialize_Params
{
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.ReceiveTick
struct UProgressManagerComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.RequestProgress
struct UProgressManagerComponent_C_RequestProgress_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefualtProgressTime;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefualtSkillCheck;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.CancelProgress
struct UProgressManagerComponent_C_CancelProgress_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WithDecreasePercent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.UpdateProgress
struct UProgressManagerComponent_C_UpdateProgress_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.FinishProgress
struct UProgressManagerComponent_C_FinishProgress_Params
{
	struct FSProgressInfo                              ProgressInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.SkillCheckCommit
struct UProgressManagerComponent_C_SkillCheckCommit_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.RemoveTargetProgress
struct UProgressManagerComponent_C_RemoveTargetProgress_Params
{
	TArray<class UObject*>                             Target;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.CheckPlayerMovement
struct UProgressManagerComponent_C_CheckPlayerMovement_Params
{
	TArray<class AController*>                         Controller;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       IsSkillCheck;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.MultiCastPlayPerfectSound
struct UProgressManagerComponent_C_MultiCastPlayPerfectSound_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.MultiCastPlayGreatSound
struct UProgressManagerComponent_C_MultiCastPlayGreatSound_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.MultiCastPlayFailedSound
struct UProgressManagerComponent_C_MultiCastPlayFailedSound_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.CannotProgress
struct UProgressManagerComponent_C_CannotProgress_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Interaction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.ForceSkillCheckIfProgress
struct UProgressManagerComponent_C_ForceSkillCheckIfProgress_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.RequestProgressAI
struct UProgressManagerComponent_C_RequestProgressAI_Params
{
	class AAIController*                               AIController;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.ResetDataValue
struct UProgressManagerComponent_C_ResetDataValue_Params
{
};

// Function ProgressManagerComponent.ProgressManagerComponent_C.ExecuteUbergraph_ProgressManagerComponent
struct UProgressManagerComponent_C_ExecuteUbergraph_ProgressManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
