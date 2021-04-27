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

// Function SQObjective_LastManStand.SQObjective_LastManStand_C.GetQuestDetails
struct USQObjective_LastManStand_C_GetQuestDetails_Params
{
	struct FString                                     QuestStr;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SQObjective_LastManStand.SQObjective_LastManStand_C.IsQuestComplete
struct USQObjective_LastManStand_C_IsQuestComplete_Params
{
	class UGameStatisticComponent_C*                   GameStatisticComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
