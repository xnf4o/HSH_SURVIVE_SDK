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

// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.DebugPath_Actor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UBTTask_RunAwayLoop_C::DebugPath_Actor(TArray<class AActor*>* Source)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.DebugPath_Actor");

	UBTTask_RunAwayLoop_C_DebugPath_Actor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.TrimTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          Return                         (Parm, OutParm, ZeroConstructor)
void UBTTask_RunAwayLoop_C::TrimTarget(TArray<class AActor*>* Source, float Percent, TArray<class AActor*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.TrimTarget");

	UBTTask_RunAwayLoop_C_TrimTarget_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SortTargetPoint_WithScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class AActor*, float>     Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)
void UBTTask_RunAwayLoop_C::SortTargetPoint_WithScore(TMap<class AActor*, float> Source, TArray<class AActor*>* Actors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SortTargetPoint_WithScore");

	UBTTask_RunAwayLoop_C_SortTargetPoint_WithScore_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.DebugPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class AActor*, float>     Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
void UBTTask_RunAwayLoop_C::DebugPath(TMap<class AActor*, float> Source)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.DebugPath");

	UBTTask_RunAwayLoop_C_DebugPath_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GivePathScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class AActor*, float>     TargetWithScore                (Parm, OutParm, ZeroConstructor)
void UBTTask_RunAwayLoop_C::GivePathScore(TArray<class AActor*>* Source, class APawn* Pawn, TMap<class AActor*, float>* TargetWithScore)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GivePathScore");

	UBTTask_RunAwayLoop_C_GivePathScore_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
	if (TargetWithScore != nullptr)
		*TargetWithScore = params.TargetWithScore;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.IsPlayerHigher
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsHigher                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_RunAwayLoop_C::IsPlayerHigher(const struct FVector& StartLocation, TArray<class AActor*>* Targets, bool* IsHigher)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.IsPlayerHigher");

	UBTTask_RunAwayLoop_C_IsPlayerHigher_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (IsHigher != nullptr)
		*IsHigher = params.IsHigher;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GetShouldWalkPath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_RunAwayLoop_C::GetShouldWalkPath(const struct FVector& StartLocation, class AHunterBase_C* hunter, TArray<class AActor*>* Targets, class AActor** Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GetShouldWalkPath");

	UBTTask_RunAwayLoop_C_GetShouldWalkPath_Params params;
	params.StartLocation = StartLocation;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (Target != nullptr)
		*Target = params.Target;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GetHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_RunAwayLoop_C::GetHunter(class AHunterBase_C** Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.GetHunter");

	UBTTask_RunAwayLoop_C_GetHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SortTargetPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)
void UBTTask_RunAwayLoop_C::SortTargetPoint(TArray<class AActor*>* Source, TArray<class AActor*>* Actors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SortTargetPoint");

	UBTTask_RunAwayLoop_C_SortTargetPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
	if (Actors != nullptr)
		*Actors = params.Actors;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.IsNearHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   OwnerPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HeightOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NearOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBTTask_RunAwayLoop_C::IsNearHunter(class APawn* OwnerPawn, float HeightOffset, float NearOffset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.IsNearHunter");

	UBTTask_RunAwayLoop_C_IsNearHunter_Params params;
	params.OwnerPawn = OwnerPawn;
	params.HeightOffset = HeightOffset;
	params.NearOffset = NearOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SearchPath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_RunAwayLoop_C::SearchPath(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.SearchPath");

	UBTTask_RunAwayLoop_C_SearchPath_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_RunAwayLoop_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ReceiveTickAI");

	UBTTask_RunAwayLoop_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_RunAwayLoop_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ReceiveExecuteAI");

	UBTTask_RunAwayLoop_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ExecuteUbergraph_BTTask_RunAwayLoop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_RunAwayLoop_C::ExecuteUbergraph_BTTask_RunAwayLoop(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_RunAwayLoop.BTTask_RunAwayLoop_C.ExecuteUbergraph_BTTask_RunAwayLoop");

	UBTTask_RunAwayLoop_C_ExecuteUbergraph_BTTask_RunAwayLoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
