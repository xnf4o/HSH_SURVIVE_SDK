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

// Function HSHProcessParameter.HSHProcessParameter_C.GetGameSession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAWSGameSessionServer   GameSession                    (Parm, OutParm)
void UHSHProcessParameter_C::GetGameSession(struct FAWSGameSessionServer* GameSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.GetGameSession");

	UHSHProcessParameter_C_GetGameSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameSession != nullptr)
		*GameSession = params.GameSession;

}


// Function HSHProcessParameter.HSHProcessParameter_C.GetDebugText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UHSHProcessParameter_C::GetDebugText(struct FString* String)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.GetDebugText");

	UHSHProcessParameter_C_GetDebugText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function HSHProcessParameter.HSHProcessParameter_C.HealthCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UHSHProcessParameter_C::HealthCheck()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.HealthCheck");

	UHSHProcessParameter_C_HealthCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHProcessParameter.HSHProcessParameter_C.StartGameSession
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FAWSGameSessionServer   GameSession                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UHSHProcessParameter_C::StartGameSession(const struct FAWSGameSessionServer& GameSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.StartGameSession");

	UHSHProcessParameter_C_StartGameSession_Params params;
	params.GameSession = GameSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHProcessParameter.HSHProcessParameter_C.UpdateGameSession
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FUpdateGameSessionServer UpdateGameSession              (BlueprintVisible, BlueprintReadOnly, Parm)
void UHSHProcessParameter_C::UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.UpdateGameSession");

	UHSHProcessParameter_C_UpdateGameSession_Params params;
	params.UpdateGameSession = UpdateGameSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHProcessParameter.HSHProcessParameter_C.ProcessTerminate
// (Event, Public, BlueprintEvent)
void UHSHProcessParameter_C::ProcessTerminate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.ProcessTerminate");

	UHSHProcessParameter_C_ProcessTerminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHProcessParameter.HSHProcessParameter_C.ExecuteUbergraph_HSHProcessParameter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHSHProcessParameter_C::ExecuteUbergraph_HSHProcessParameter(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.ExecuteUbergraph_HSHProcessParameter");

	UHSHProcessParameter_C_ExecuteUbergraph_HSHProcessParameter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHProcessParameter.HSHProcessParameter_C.OnProcessTerminate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UHSHProcessParameter_C::OnProcessTerminate__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.OnProcessTerminate__DelegateSignature");

	UHSHProcessParameter_C_OnProcessTerminate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHProcessParameter.HSHProcessParameter_C.OnUpdateGameSession__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUpdateGameSessionServer UpdateGameSession              (BlueprintVisible, BlueprintReadOnly, Parm)
void UHSHProcessParameter_C::OnUpdateGameSession__DelegateSignature(const struct FUpdateGameSessionServer& UpdateGameSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.OnUpdateGameSession__DelegateSignature");

	UHSHProcessParameter_C_OnUpdateGameSession__DelegateSignature_Params params;
	params.UpdateGameSession = UpdateGameSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHProcessParameter.HSHProcessParameter_C.OnStartGameSession__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAWSGameSessionServer   GameSession                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UHSHProcessParameter_C::OnStartGameSession__DelegateSignature(const struct FAWSGameSessionServer& GameSession)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHProcessParameter.HSHProcessParameter_C.OnStartGameSession__DelegateSignature");

	UHSHProcessParameter_C_OnStartGameSession__DelegateSignature_Params params;
	params.GameSession = GameSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
