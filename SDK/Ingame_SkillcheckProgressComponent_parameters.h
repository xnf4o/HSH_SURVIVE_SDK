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

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomKey
struct UIngame_SkillcheckProgressComponent_C_RandomKey_Params
{
	struct FInputActionKeyMapping                      Output;                                                    // (Parm, OutParm)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.StartSkillCheckKey
struct UIngame_SkillcheckProgressComponent_C_StartSkillCheckKey_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.CreateSkillCheckKey
struct UIngame_SkillcheckProgressComponent_C_CreateSkillCheckKey_Params
{
	class UIngame_SkillcheckKey_C*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndAnimationTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RemapAnimationValue
struct UIngame_SkillcheckProgressComponent_C_RemapAnimationValue_Params
{
	float                                              In;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsNormalCheck
struct UIngame_SkillcheckProgressComponent_C_IsNormalCheck_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsPerfectCheck
struct UIngame_SkillcheckProgressComponent_C_IsPerfectCheck_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.SetUpValue
struct UIngame_SkillcheckProgressComponent_C_SetUpValue_Params
{
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.SetUpSize
struct UIngame_SkillcheckProgressComponent_C_SetUpSize_Params
{
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomRange
struct UIngame_SkillcheckProgressComponent_C_RandomRange_Params
{
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.StartArrow
struct UIngame_SkillcheckProgressComponent_C_StartArrow_Params
{
	float                                              PlaybackSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.IsOwnerHavePerk
struct UIngame_SkillcheckProgressComponent_C_IsOwnerHavePerk_Params
{
	bool                                               HavePerk_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.GetInRange
struct UIngame_SkillcheckProgressComponent_C_GetInRange_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.GetExpertiseValue
struct UIngame_SkillcheckProgressComponent_C_GetExpertiseValue_Params
{
	float                                              Min;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.RandomSpeed
struct UIngame_SkillcheckProgressComponent_C_RandomSpeed_Params
{
	float                                              MinTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.DestroyThis
struct UIngame_SkillcheckProgressComponent_C_DestroyThis_Params
{
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.OnFinishSkillCheck
struct UIngame_SkillcheckProgressComponent_C_OnFinishSkillCheck_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CommitTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerfectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.Construct
struct UIngame_SkillcheckProgressComponent_C_Construct_Params
{
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.CommitSkillCheck
struct UIngame_SkillcheckProgressComponent_C_CommitSkillCheck_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.Tick
struct UIngame_SkillcheckProgressComponent_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.DestroyThisSkipAnim
struct UIngame_SkillcheckProgressComponent_C_DestroyThisSkipAnim_Params
{
};

// Function Ingame_SkillcheckProgressComponent.Ingame_SkillcheckProgressComponent_C.ExecuteUbergraph_Ingame_SkillcheckProgressComponent
struct UIngame_SkillcheckProgressComponent_C_ExecuteUbergraph_Ingame_SkillcheckProgressComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
