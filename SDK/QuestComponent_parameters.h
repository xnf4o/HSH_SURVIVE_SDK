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

// Function QuestComponent.QuestComponent_C.UpdateQuestDetailsNew
struct UQuestComponent_C_UpdateQuestDetailsNew_Params
{
};

// Function QuestComponent.QuestComponent_C.OnRep_QuestDetailsNew
struct UQuestComponent_C_OnRep_QuestDetailsNew_Params
{
};

// Function QuestComponent.QuestComponent_C.OpenPortal
struct UQuestComponent_C_OpenPortal_Params
{
	class ASecretPortalBase_C*                         Portal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestComponent.QuestComponent_C.TryGetController
struct UQuestComponent_C_TryGetController_Params
{
	class AController*                                 Controller;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestComponent.QuestComponent_C.OnRep_QuestID
struct UQuestComponent_C_OnRep_QuestID_Params
{
};

// Function QuestComponent.QuestComponent_C.RequestQuest
struct UQuestComponent_C_RequestQuest_Params
{
};

// Function QuestComponent.QuestComponent_C.Initialize
struct UQuestComponent_C_Initialize_Params
{
	class AHSURPlayerController_C*                     PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestComponent.QuestComponent_C.ServerOpenPortal
struct UQuestComponent_C_ServerOpenPortal_Params
{
	class ASecretPortalBase_C*                         Portal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestComponent.QuestComponent_C.ClientOpenPortal
struct UQuestComponent_C_ClientOpenPortal_Params
{
	class ASecretPortalBase_C*                         Portal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestComponent.QuestComponent_C.HandleSecrectPortal
struct UQuestComponent_C_HandleSecrectPortal_Params
{
};

// Function QuestComponent.QuestComponent_C.ForcePingPortalSuddenDeath
struct UQuestComponent_C_ForcePingPortalSuddenDeath_Params
{
};

// Function QuestComponent.QuestComponent_C.ForcePingPortal
struct UQuestComponent_C_ForcePingPortal_Params
{
	class ASecretPortalTeamBase_C*                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestComponent.QuestComponent_C.AchievementCheck
struct UQuestComponent_C_AchievementCheck_Params
{
	class APawn*                                       survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function QuestComponent.QuestComponent_C.TryGetRequestQuest
struct UQuestComponent_C_TryGetRequestQuest_Params
{
};

// Function QuestComponent.QuestComponent_C.ExecuteUbergraph_QuestComponent
struct UQuestComponent_C_ExecuteUbergraph_QuestComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
