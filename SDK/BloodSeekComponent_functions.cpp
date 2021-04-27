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

// Function BloodSeekComponent.BloodSeekComponent_C.CheckIsHunterSeen
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AHSHCharacterSurvivorBase* survivor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBloodSeekComponent_C::CheckIsHunterSeen(class AHSHCharacterSurvivorBase** survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.CheckIsHunterSeen");

	UBloodSeekComponent_C_CheckIsHunterSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (survivor != nullptr)
		*survivor = params.survivor;


	return params.ReturnValue;
}


// Function BloodSeekComponent.BloodSeekComponent_C.AudioChaseHandle
// (Public, BlueprintCallable, BlueprintEvent)
void UBloodSeekComponent_C::AudioChaseHandle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.AudioChaseHandle");

	UBloodSeekComponent_C_AudioChaseHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.SetChaseAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::SetChaseAlpha(float Alpha)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.SetChaseAlpha");

	UBloodSeekComponent_C_SetChaseAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.GetSeenAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::GetSeenAlpha(float* Result)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.GetSeenAlpha");

	UBloodSeekComponent_C_GetSeenAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BloodSeekComponent.BloodSeekComponent_C.DecreaseSeenAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::DecreaseSeenAlpha(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.DecreaseSeenAlpha");

	UBloodSeekComponent_C_DecreaseSeenAlpha_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.IncreaseSeenAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::IncreaseSeenAlpha(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.IncreaseSeenAlpha");

	UBloodSeekComponent_C_IncreaseSeenAlpha_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.FullfilBloodStack
// (Public, BlueprintCallable, BlueprintEvent)
void UBloodSeekComponent_C::FullfilBloodStack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.FullfilBloodStack");

	UBloodSeekComponent_C_FullfilBloodStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.NearCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Scene                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBloodSeekComponent_C::NearCamera(class AActor* Actor, class USceneComponent* Scene, float Offset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.NearCamera");

	UBloodSeekComponent_C_NearCamera_Params params;
	params.Actor = Actor;
	params.Scene = Scene;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BloodSeekComponent.BloodSeekComponent_C.DebugValue
// (Public, BlueprintCallable, BlueprintEvent)
void UBloodSeekComponent_C::DebugValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.DebugValue");

	UBloodSeekComponent_C_DebugValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.GetNextStepTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::GetNextStepTime(float* Time)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.GetNextStepTime");

	UBloodSeekComponent_C_GetNextStepTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BloodSeekComponent.BloodSeekComponent_C.OnCharacterCountChange
// (BlueprintCallable, BlueprintEvent)
void UBloodSeekComponent_C::OnCharacterCountChange()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.OnCharacterCountChange");

	UBloodSeekComponent_C_OnCharacterCountChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.FindSurvivors
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UBloodSeekComponent_C::FindSurvivors()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.FindSurvivors");

	UBloodSeekComponent_C_FindSurvivors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.UpdateSeenValue
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::UpdateSeenValue(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.UpdateSeenValue");

	UBloodSeekComponent_C_UpdateSeenValue_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.ReceiveTick");

	UBloodSeekComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBloodSeekComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.ReceiveBeginPlay");

	UBloodSeekComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.UpdateUnseenValue
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::UpdateUnseenValue(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.UpdateUnseenValue");

	UBloodSeekComponent_C_UpdateUnseenValue_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.MulticastCharacterCountChange
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBloodSeekComponent_C::MulticastCharacterCountChange()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.MulticastCharacterCountChange");

	UBloodSeekComponent_C_MulticastCharacterCountChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodSeekComponent.BloodSeekComponent_C.ExecuteUbergraph_BloodSeekComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodSeekComponent_C::ExecuteUbergraph_BloodSeekComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodSeekComponent.BloodSeekComponent_C.ExecuteUbergraph_BloodSeekComponent");

	UBloodSeekComponent_C_ExecuteUbergraph_BloodSeekComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
