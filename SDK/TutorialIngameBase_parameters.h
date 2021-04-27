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

// Function TutorialIngameBase.TutorialIngameBase_C.IsDeprecate
struct UTutorialIngameBase_C_IsDeprecate_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDeprecate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TutorialIngameBase.TutorialIngameBase_C.DebugList
struct UTutorialIngameBase_C_DebugList_Params
{
};

// Function TutorialIngameBase.TutorialIngameBase_C.ShowTutorial
struct UTutorialIngameBase_C_ShowTutorial_Params
{
};

// Function TutorialIngameBase.TutorialIngameBase_C.NextTutorialEvent
struct UTutorialIngameBase_C_NextTutorialEvent_Params
{
	bool                                               bIsNext;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TutorialIngameBase.TutorialIngameBase_C.UpdateCurrentEvent
struct UTutorialIngameBase_C_UpdateCurrentEvent_Params
{
};

// Function TutorialIngameBase.TutorialIngameBase_C.UpdateTutorialEvent
struct UTutorialIngameBase_C_UpdateTutorialEvent_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TutorialIngameBase.TutorialIngameBase_C.AssignTutorialEvent
struct UTutorialIngameBase_C_AssignTutorialEvent_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TutorialIngameBase.TutorialIngameBase_C.CheckTutorialEvent
struct UTutorialIngameBase_C_CheckTutorialEvent_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSuccess;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TutorialIngameBase.TutorialIngameBase_C.Tick
struct UTutorialIngameBase_C_Tick_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TutorialIngameBase.TutorialIngameBase_C.ExecuteUbergraph_TutorialIngameBase
struct UTutorialIngameBase_C_ExecuteUbergraph_TutorialIngameBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TutorialIngameBase.TutorialIngameBase_C.OnHideTutorial__DelegateSignature
struct UTutorialIngameBase_C_OnHideTutorial__DelegateSignature_Params
{
};

// Function TutorialIngameBase.TutorialIngameBase_C.OnShowTutorial__DelegateSignature
struct UTutorialIngameBase_C_OnShowTutorial__DelegateSignature_Params
{
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
