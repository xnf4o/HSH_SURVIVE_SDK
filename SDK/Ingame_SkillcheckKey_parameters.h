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

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.IsCorrectKey
struct UIngame_SkillcheckKey_C_IsCorrectKey_Params
{
	struct FKey                                        CheckKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.SetStartCountingIsTrue
struct UIngame_SkillcheckKey_C_SetStartCountingIsTrue_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.DeactiveRender
struct UIngame_SkillcheckKey_C_DeactiveRender_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ActiveRender
struct UIngame_SkillcheckKey_C_ActiveRender_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ReceiveKey
struct UIngame_SkillcheckKey_C_ReceiveKey_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                PerfectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.SetKey
struct UIngame_SkillcheckKey_C_SetKey_Params
{
	struct FInputActionKeyMapping                      Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.GetPerfectRange
struct UIngame_SkillcheckKey_C_GetPerfectRange_Params
{
	float                                              Min;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.PrintValue
struct UIngame_SkillcheckKey_C_PrintValue_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.RandomPerfect
struct UIngame_SkillcheckKey_C_RandomPerfect_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Refresh
struct UIngame_SkillcheckKey_C_Refresh_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.GetResult
struct UIngame_SkillcheckKey_C_GetResult_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.StopCounting
struct UIngame_SkillcheckKey_C_StopCounting_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.StartCounting
struct UIngame_SkillcheckKey_C_StartCounting_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Construct
struct UIngame_SkillcheckKey_C_Construct_Params
{
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.Tick
struct UIngame_SkillcheckKey_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.PlayBeginAnimation
struct UIngame_SkillcheckKey_C_PlayBeginAnimation_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnSkillcheckCommit
struct UIngame_SkillcheckKey_C_OnSkillcheckCommit_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CommitTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerfectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.ExecuteUbergraph_Ingame_SkillcheckKey
struct UIngame_SkillcheckKey_C_ExecuteUbergraph_Ingame_SkillcheckKey_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnReceiveKey__DelegateSignature
struct UIngame_SkillcheckKey_C_OnReceiveKey__DelegateSignature_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                PerfectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_SkillcheckKey.Ingame_SkillcheckKey_C.OnFinishCheck__DelegateSignature
struct UIngame_SkillcheckKey_C_OnFinishCheck__DelegateSignature_Params
{
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CommitTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerfectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
