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

// Function IProcessParameter.IProcessParameter_C.GetGameSession
struct UIProcessParameter_C_GetGameSession_Params
{
	struct FAWSGameSessionServer                       GameSession;                                               // (Parm, OutParm)
};

// Function IProcessParameter.IProcessParameter_C.GetDebugText
struct UIProcessParameter_C_GetDebugText_Params
{
	struct FString                                     String;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
