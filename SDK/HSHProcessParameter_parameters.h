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

// Function HSHProcessParameter.HSHProcessParameter_C.GetGameSession
struct UHSHProcessParameter_C_GetGameSession_Params
{
	struct FAWSGameSessionServer                       GameSession;                                               // (Parm, OutParm)
};

// Function HSHProcessParameter.HSHProcessParameter_C.GetDebugText
struct UHSHProcessParameter_C_GetDebugText_Params
{
	struct FString                                     String;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HSHProcessParameter.HSHProcessParameter_C.HealthCheck
struct UHSHProcessParameter_C_HealthCheck_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HSHProcessParameter.HSHProcessParameter_C.StartGameSession
struct UHSHProcessParameter_C_StartGameSession_Params
{
	struct FAWSGameSessionServer                       GameSession;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSHProcessParameter.HSHProcessParameter_C.UpdateGameSession
struct UHSHProcessParameter_C_UpdateGameSession_Params
{
	struct FUpdateGameSessionServer                    UpdateGameSession;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSHProcessParameter.HSHProcessParameter_C.ProcessTerminate
struct UHSHProcessParameter_C_ProcessTerminate_Params
{
};

// Function HSHProcessParameter.HSHProcessParameter_C.ExecuteUbergraph_HSHProcessParameter
struct UHSHProcessParameter_C_ExecuteUbergraph_HSHProcessParameter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHProcessParameter.HSHProcessParameter_C.OnProcessTerminate__DelegateSignature
struct UHSHProcessParameter_C_OnProcessTerminate__DelegateSignature_Params
{
};

// Function HSHProcessParameter.HSHProcessParameter_C.OnUpdateGameSession__DelegateSignature
struct UHSHProcessParameter_C_OnUpdateGameSession__DelegateSignature_Params
{
	struct FUpdateGameSessionServer                    UpdateGameSession;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSHProcessParameter.HSHProcessParameter_C.OnStartGameSession__DelegateSignature
struct UHSHProcessParameter_C_OnStartGameSession__DelegateSignature_Params
{
	struct FAWSGameSessionServer                       GameSession;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
