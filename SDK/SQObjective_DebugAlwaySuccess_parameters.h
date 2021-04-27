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

// Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.GetQuestDetialsNew
struct USQObjective_DebugAlwaySuccess_C_GetQuestDetialsNew_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_QuestDetail>                      Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.GetQuestDetails
struct USQObjective_DebugAlwaySuccess_C_GetQuestDetails_Params
{
	struct FString                                     QuestStr;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.IsQuestComplete
struct USQObjective_DebugAlwaySuccess_C_IsQuestComplete_Params
{
	class UGameStatisticComponent_C*                   GameStatisticComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
