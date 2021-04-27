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

// Function BloodSeekComponent.BloodSeekComponent_C.CheckIsHunterSeen
struct UBloodSeekComponent_C_CheckIsHunterSeen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class AHSHCharacterSurvivorBase*                   survivor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.AudioChaseHandle
struct UBloodSeekComponent_C_AudioChaseHandle_Params
{
};

// Function BloodSeekComponent.BloodSeekComponent_C.SetChaseAlpha
struct UBloodSeekComponent_C_SetChaseAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.GetSeenAlpha
struct UBloodSeekComponent_C_GetSeenAlpha_Params
{
	float                                              Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.DecreaseSeenAlpha
struct UBloodSeekComponent_C_DecreaseSeenAlpha_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.IncreaseSeenAlpha
struct UBloodSeekComponent_C_IncreaseSeenAlpha_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.FullfilBloodStack
struct UBloodSeekComponent_C_FullfilBloodStack_Params
{
};

// Function BloodSeekComponent.BloodSeekComponent_C.NearCamera
struct UBloodSeekComponent_C_NearCamera_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BloodSeekComponent.BloodSeekComponent_C.DebugValue
struct UBloodSeekComponent_C_DebugValue_Params
{
};

// Function BloodSeekComponent.BloodSeekComponent_C.GetNextStepTime
struct UBloodSeekComponent_C_GetNextStepTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.OnCharacterCountChange
struct UBloodSeekComponent_C_OnCharacterCountChange_Params
{
};

// Function BloodSeekComponent.BloodSeekComponent_C.FindSurvivors
struct UBloodSeekComponent_C_FindSurvivors_Params
{
};

// Function BloodSeekComponent.BloodSeekComponent_C.UpdateSeenValue
struct UBloodSeekComponent_C_UpdateSeenValue_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.ReceiveTick
struct UBloodSeekComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.ReceiveBeginPlay
struct UBloodSeekComponent_C_ReceiveBeginPlay_Params
{
};

// Function BloodSeekComponent.BloodSeekComponent_C.UpdateUnseenValue
struct UBloodSeekComponent_C_UpdateUnseenValue_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodSeekComponent.BloodSeekComponent_C.MulticastCharacterCountChange
struct UBloodSeekComponent_C_MulticastCharacterCountChange_Params
{
};

// Function BloodSeekComponent.BloodSeekComponent_C.ExecuteUbergraph_BloodSeekComponent
struct UBloodSeekComponent_C_ExecuteUbergraph_BloodSeekComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
