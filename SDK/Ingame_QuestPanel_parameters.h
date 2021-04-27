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

// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestWidgetHunter
struct UIngame_QuestPanel_C_UpdateQuestWidgetHunter_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestWidget
struct UIngame_QuestPanel_C_UpdateQuestWidget_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestNew
struct UIngame_QuestPanel_C_UpdateQuestNew_Params
{
	TArray<struct FS_QuestDetail>                      QuestStr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Ingame_QuestPanel.Ingame_QuestPanel_C.Get_Quest_Text
struct UIngame_QuestPanel_C_Get_Quest_Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuest
struct UIngame_QuestPanel_C_UpdateQuest_Params
{
	TArray<struct FString>                             QuestStr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
