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

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdatePortalWidget
struct UIngame_QuestReleaseGhost_C_UpdatePortalWidget_Params
{
	struct FS_PortalDetail                             PortalDetails;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.TryGetSDManager
struct UIngame_QuestReleaseGhost_C_TryGetSDManager_Params
{
	class USD_ManagerComponent_C*                      Cache;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdateIconWidget
struct UIngame_QuestReleaseGhost_C_UpdateIconWidget_Params
{
	TArray<struct FS_QuestDetail>                      Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.GetRitualImage
struct UIngame_QuestReleaseGhost_C_GetRitualImage_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm)
};

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdateQuestWidget
struct UIngame_QuestReleaseGhost_C_UpdateQuestWidget_Params
{
	TArray<struct FS_QuestDetail>                      QuestDetail;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.Tick
struct UIngame_QuestReleaseGhost_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.ExecuteUbergraph_Ingame_QuestReleaseGhost
struct UIngame_QuestReleaseGhost_C_ExecuteUbergraph_Ingame_QuestReleaseGhost_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
