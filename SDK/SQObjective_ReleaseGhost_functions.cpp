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

// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.MakeDetailArrayHunter
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FText>           State                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_QuestDetail>  Detail                         (Parm, OutParm, ZeroConstructor)
void USQObjective_ReleaseGhost_C::MakeDetailArrayHunter(TArray<struct FText>* State, TArray<struct FS_QuestDetail>* Detail)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.MakeDetailArrayHunter");

	USQObjective_ReleaseGhost_C_MakeDetailArrayHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
	if (Detail != nullptr)
		*Detail = params.Detail;

}


// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.MakeDetailArray
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FText>           State                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_QuestDetail>  Detail                         (Parm, OutParm, ZeroConstructor)
void USQObjective_ReleaseGhost_C::MakeDetailArray(TArray<struct FText>* State, TArray<struct FS_QuestDetail>* Detail)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.MakeDetailArray");

	USQObjective_ReleaseGhost_C_MakeDetailArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
	if (Detail != nullptr)
		*Detail = params.Detail;

}


// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.GetQuestDetialsNew
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_QuestDetail>  Return                         (Parm, OutParm, ZeroConstructor)
void USQObjective_ReleaseGhost_C::GetQuestDetialsNew(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FS_QuestDetail>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.GetQuestDetialsNew");

	USQObjective_ReleaseGhost_C_GetQuestDetialsNew_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.TryGetCeremonyActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameStatisticComponent_C* GameStatistic                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ARitualBase_C*>   Ceremony                       (Parm, OutParm, ZeroConstructor)
void USQObjective_ReleaseGhost_C::TryGetCeremonyActor(class UGameStatisticComponent_C* GameStatistic, TArray<class ARitualBase_C*>* Ceremony)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.TryGetCeremonyActor");

	USQObjective_ReleaseGhost_C_TryGetCeremonyActor_Params params;
	params.GameStatistic = GameStatistic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ceremony != nullptr)
		*Ceremony = params.Ceremony;

}


// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.GetQuestDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 QuestStr                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USQObjective_ReleaseGhost_C::GetQuestDetails(struct FString* QuestStr)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.GetQuestDetails");

	USQObjective_ReleaseGhost_C_GetQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestStr != nullptr)
		*QuestStr = params.QuestStr;

}


// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.IsQuestComplete
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameStatisticComponent_C* GameStatisticComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USQObjective_ReleaseGhost_C::IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.IsQuestComplete");

	USQObjective_ReleaseGhost_C_IsQuestComplete_Params params;
	params.GameStatisticComponent = GameStatisticComponent;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.InitQuest
// (Public, BlueprintCallable, BlueprintEvent)
void USQObjective_ReleaseGhost_C::InitQuest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.InitQuest");

	USQObjective_ReleaseGhost_C_InitQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.ExecuteUbergraph_SQObjective_ReleaseGhost
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USQObjective_ReleaseGhost_C::ExecuteUbergraph_SQObjective_ReleaseGhost(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C.ExecuteUbergraph_SQObjective_ReleaseGhost");

	USQObjective_ReleaseGhost_C_ExecuteUbergraph_SQObjective_ReleaseGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
