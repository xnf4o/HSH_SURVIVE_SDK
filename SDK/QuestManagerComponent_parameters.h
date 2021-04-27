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

// Function QuestManagerComponent.QuestManagerComponent_C.StartCountingOpenDoor
struct UQuestManagerComponent_C_StartCountingOpenDoor_Params
{
};

// Function QuestManagerComponent.QuestManagerComponent_C.UpdatePortalDetail
struct UQuestManagerComponent_C_UpdatePortalDetail_Params
{
};

// Function QuestManagerComponent.QuestManagerComponent_C.GetPortalDetail
struct UQuestManagerComponent_C_GetPortalDetail_Params
{
	struct FS_PortalDetail                             PortalDetail;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.QuestOpenPortalOneDoor
struct UQuestManagerComponent_C_QuestOpenPortalOneDoor_Params
{
};

// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestDetailsNew
struct UQuestManagerComponent_C_CheckQuestDetailsNew_Params
{
	TArray<class UQuestObjective_C*>                   QuestObjectives;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_QuestDetail>                      QuestDetailsList;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.OpenPortalFromQuest
struct UQuestManagerComponent_C_OpenPortalFromQuest_Params
{
	class UClass*                                      QuestClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.QuestOpenPortal
struct UQuestManagerComponent_C_QuestOpenPortal_Params
{
};

// Function QuestManagerComponent.QuestManagerComponent_C.OpenPortal
struct UQuestManagerComponent_C_OpenPortal_Params
{
	bool                                               AutoActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuest
struct UQuestManagerComponent_C_CheckQuest_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.CheckOneQuestSuccess
struct UQuestManagerComponent_C_CheckOneQuestSuccess_Params
{
	class UQuestObjective_C*                           QuestObjective;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest_TeamQuest
struct UQuestManagerComponent_C_RequestQuest_TeamQuest_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     Quests;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest_New
struct UQuestManagerComponent_C_RequestQuest_New_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     Quests;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.RandomQuest
struct UQuestManagerComponent_C_RandomQuest_Params
{
	TArray<struct FPrimaryAssetId>                     Quests;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest
struct UQuestManagerComponent_C_RequestQuest_Params
{
	TArray<struct FPrimaryAssetId>                     Quests;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.DebugQuest
struct UQuestManagerComponent_C_DebugQuest_Params
{
	TArray<struct FPrimaryAssetId>                     QuestDummy;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestSuccess
struct UQuestManagerComponent_C_CheckQuestSuccess_Params
{
	TArray<class UQuestObjective_C*>                   QuestObjectives;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               QuestComplete;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestDetails
struct UQuestManagerComponent_C_CheckQuestDetails_Params
{
	TArray<class UQuestObjective_C*>                   QuestObjectives;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             QuestDetailsList;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.TryGetPlayerController
struct UQuestManagerComponent_C_TryGetPlayerController_Params
{
	TArray<class AHSURPlayerController_C*>             PlayerController;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.RandomQuestWithMaxQuest
struct UQuestManagerComponent_C_RandomQuestWithMaxQuest_Params
{
	TArray<struct FPrimaryAssetId>                     Quests;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.TryCheckQuest
struct UQuestManagerComponent_C_TryCheckQuest_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.ForceOpenPortal
struct UQuestManagerComponent_C_ForceOpenPortal_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.ForceOpenTeamPortal
struct UQuestManagerComponent_C_ForceOpenTeamPortal_Params
{
	bool                                               AutoActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function QuestManagerComponent.QuestManagerComponent_C.DisableRitual
struct UQuestManagerComponent_C_DisableRitual_Params
{
};

// Function QuestManagerComponent.QuestManagerComponent_C.RemoveKeyItems
struct UQuestManagerComponent_C_RemoveKeyItems_Params
{
};

// Function QuestManagerComponent.QuestManagerComponent_C.TryRefreshAllPlayerCheckQuest
struct UQuestManagerComponent_C_TryRefreshAllPlayerCheckQuest_Params
{
};

// Function QuestManagerComponent.QuestManagerComponent_C.Initialize
struct UQuestManagerComponent_C_Initialize_Params
{
	class UGameStatisticComponent_C*                   GameStatisticComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.ReceiveTick
struct UQuestManagerComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.ExecuteUbergraph_QuestManagerComponent
struct UQuestManagerComponent_C_ExecuteUbergraph_QuestManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestManagerComponent.QuestManagerComponent_C.OnQuestSuccess__DelegateSignature
struct UQuestManagerComponent_C_OnQuestSuccess__DelegateSignature_Params
{
	class UClass*                                      QuestObjective;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
