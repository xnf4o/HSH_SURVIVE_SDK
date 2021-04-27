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

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.MakeDetailArrayHunter
struct USQObjective_ReleaseGhost_C_MakeDetailArrayHunter_Params
{
	TArray<struct FText>                               State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_QuestDetail>                      Detail;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.MakeDetailArray
struct USQObjective_ReleaseGhost_C_MakeDetailArray_Params
{
	TArray<struct FText>                               State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_QuestDetail>                      Detail;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.GetQuestDetialsNew
struct USQObjective_ReleaseGhost_C_GetQuestDetialsNew_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_QuestDetail>                      Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.TryGetCeremonyActor
struct USQObjective_ReleaseGhost_C_TryGetCeremonyActor_Params
{
	class UGameStatisticComponent_C*                   GameStatistic;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ARitualBase_C*>                       Ceremony;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.GetQuestDetails
struct USQObjective_ReleaseGhost_C_GetQuestDetails_Params
{
	struct FString                                     QuestStr;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.IsQuestComplete
struct USQObjective_ReleaseGhost_C_IsQuestComplete_Params
{
	class UGameStatisticComponent_C*                   GameStatisticComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.InitQuest
struct USQObjective_ReleaseGhost_C_InitQuest_Params
{
};

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.ExecuteUbergraph_SQObjective_ReleaseGhost
struct USQObjective_ReleaseGhost_C_ExecuteUbergraph_SQObjective_ReleaseGhost_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
