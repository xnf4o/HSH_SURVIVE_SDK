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

// Function QuestObjective.QuestObjective_C.InitQuest
struct UQuestObjective_C_InitQuest_Params
{
};

// Function QuestObjective.QuestObjective_C.GetQuestDetialsNew
struct UQuestObjective_C_GetQuestDetialsNew_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_QuestDetail>                      Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function QuestObjective.QuestObjective_C.GetQuestDetails
struct UQuestObjective_C_GetQuestDetails_Params
{
	struct FString                                     QuestStr;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function QuestObjective.QuestObjective_C.IsQuestComplete
struct UQuestObjective_C_IsQuestComplete_Params
{
	class UGameStatisticComponent_C*                   GameStatisticComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
