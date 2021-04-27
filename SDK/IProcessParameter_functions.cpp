// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function IProcessParameter.IProcessParameter_C.GetGameSession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAWSGameSessionServer   GameSession                    (Parm, OutParm)
void UIProcessParameter_C::GetGameSession(struct FAWSGameSessionServer* GameSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IProcessParameter.IProcessParameter_C.GetGameSession");

	UIProcessParameter_C_GetGameSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameSession != nullptr)
		*GameSession = params.GameSession;

}


// Function IProcessParameter.IProcessParameter_C.GetDebugText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UIProcessParameter_C::GetDebugText(struct FString* String)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IProcessParameter.IProcessParameter_C.GetDebugText");

	UIProcessParameter_C_GetDebugText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
