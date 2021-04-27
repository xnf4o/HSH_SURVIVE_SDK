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

// Function TutorialIngameBase.TutorialIngameBase_C.IsDeprecate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bDeprecate                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorialIngameBase_C::IsDeprecate(const struct FName& EventName, bool* bDeprecate)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.IsDeprecate");

	UTutorialIngameBase_C_IsDeprecate_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bDeprecate != nullptr)
		*bDeprecate = params.bDeprecate;

}


// Function TutorialIngameBase.TutorialIngameBase_C.DebugList
// (Public, BlueprintCallable, BlueprintEvent)
void UTutorialIngameBase_C::DebugList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.DebugList");

	UTutorialIngameBase_C_DebugList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialIngameBase.TutorialIngameBase_C.ShowTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTutorialIngameBase_C::ShowTutorial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.ShowTutorial");

	UTutorialIngameBase_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialIngameBase.TutorialIngameBase_C.NextTutorialEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsNext                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorialIngameBase_C::NextTutorialEvent(bool* bIsNext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.NextTutorialEvent");

	UTutorialIngameBase_C_NextTutorialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsNext != nullptr)
		*bIsNext = params.bIsNext;

}


// Function TutorialIngameBase.TutorialIngameBase_C.UpdateCurrentEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTutorialIngameBase_C::UpdateCurrentEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.UpdateCurrentEvent");

	UTutorialIngameBase_C_UpdateCurrentEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialIngameBase.TutorialIngameBase_C.UpdateTutorialEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialIngameBase_C::UpdateTutorialEvent(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.UpdateTutorialEvent");

	UTutorialIngameBase_C_UpdateTutorialEvent_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialIngameBase.TutorialIngameBase_C.AssignTutorialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorialIngameBase_C::AssignTutorialEvent(const struct FName& EventName, bool* Success)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.AssignTutorialEvent");

	UTutorialIngameBase_C_AssignTutorialEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function TutorialIngameBase.TutorialIngameBase_C.CheckTutorialEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorialIngameBase_C::CheckTutorialEvent(const struct FName& EventName, bool* bSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.CheckTutorialEvent");

	UTutorialIngameBase_C_CheckTutorialEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function TutorialIngameBase.TutorialIngameBase_C.Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialIngameBase_C::Tick(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.Tick");

	UTutorialIngameBase_C_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialIngameBase.TutorialIngameBase_C.ExecuteUbergraph_TutorialIngameBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialIngameBase_C::ExecuteUbergraph_TutorialIngameBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.ExecuteUbergraph_TutorialIngameBase");

	UTutorialIngameBase_C_ExecuteUbergraph_TutorialIngameBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialIngameBase.TutorialIngameBase_C.OnHideTutorial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTutorialIngameBase_C::OnHideTutorial__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.OnHideTutorial__DelegateSignature");

	UTutorialIngameBase_C_OnHideTutorial__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialIngameBase.TutorialIngameBase_C.OnShowTutorial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialIngameBase_C::OnShowTutorial__DelegateSignature(const struct FText& Header, const struct FText& Description, float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialIngameBase.TutorialIngameBase_C.OnShowTutorial__DelegateSignature");

	UTutorialIngameBase_C_OnShowTutorial__DelegateSignature_Params params;
	params.Header = Header;
	params.Description = Description;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
