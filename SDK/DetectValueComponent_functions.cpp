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

// Function DetectValueComponent.DetectValueComponent_C.CheckingPlayerDoOverScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDetectValueComponent_C::CheckingPlayerDoOverScore(const struct FString& PlayerId, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.CheckingPlayerDoOverScore");

	UDetectValueComponent_C_CheckingPlayerDoOverScore_Params params;
	params.PlayerId = PlayerId;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DetectValueComponent.DetectValueComponent_C.CheckingAFK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDetectValueComponent_C::CheckingAFK(float Time)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.CheckingAFK");

	UDetectValueComponent_C_CheckingAFK_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DetectValueComponent.DetectValueComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDetectValueComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.ReceiveTick");

	UDetectValueComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DetectValueComponent.DetectValueComponent_C.ReportCase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_ReportCase_E_ReportCase> Case                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDetectValueComponent_C::ReportCase(const struct FString& PlayerId, TEnumAsByte<E_ReportCase_E_ReportCase> Case)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.ReportCase");

	UDetectValueComponent_C_ReportCase_Params params;
	params.PlayerId = PlayerId;
	params.Case = Case;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DetectValueComponent.DetectValueComponent_C.CheckingPlayerDoOverDmg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDetectValueComponent_C::CheckingPlayerDoOverDmg(const struct FString& PlayerId, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.CheckingPlayerDoOverDmg");

	UDetectValueComponent_C_CheckingPlayerDoOverDmg_Params params;
	params.PlayerId = PlayerId;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DetectValueComponent.DetectValueComponent_C.CheckingPlayerDoOverSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDetectValueComponent_C::CheckingPlayerDoOverSpeed(const struct FString& PlayerId, float Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.CheckingPlayerDoOverSpeed");

	UDetectValueComponent_C_CheckingPlayerDoOverSpeed_Params params;
	params.PlayerId = PlayerId;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DetectValueComponent.DetectValueComponent_C.OnReported
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDetectValueComponent_C::OnReported(class UVaRestRequestJSON* Request)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.OnReported");

	UDetectValueComponent_C_OnReported_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DetectValueComponent.DetectValueComponent_C.ExecuteUbergraph_DetectValueComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDetectValueComponent_C::ExecuteUbergraph_DetectValueComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DetectValueComponent.DetectValueComponent_C.ExecuteUbergraph_DetectValueComponent");

	UDetectValueComponent_C_ExecuteUbergraph_DetectValueComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
