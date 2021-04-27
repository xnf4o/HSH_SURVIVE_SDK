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

// Function QuestObjective.QuestObjective_C.InitQuest
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestObjective_C::InitQuest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestObjective.QuestObjective_C.InitQuest");

	UQuestObjective_C_InitQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestObjective.QuestObjective_C.GetQuestDetialsNew
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_QuestDetail>  Return                         (Parm, OutParm, ZeroConstructor)
void UQuestObjective_C::GetQuestDetialsNew(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FS_QuestDetail>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestObjective.QuestObjective_C.GetQuestDetialsNew");

	UQuestObjective_C_GetQuestDetialsNew_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function QuestObjective.QuestObjective_C.GetQuestDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 QuestStr                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UQuestObjective_C::GetQuestDetails(struct FString* QuestStr)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestObjective.QuestObjective_C.GetQuestDetails");

	UQuestObjective_C_GetQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestStr != nullptr)
		*QuestStr = params.QuestStr;

}


// Function QuestObjective.QuestObjective_C.IsQuestComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameStatisticComponent_C* GameStatisticComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQuestObjective_C::IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestObjective.QuestObjective_C.IsQuestComplete");

	UQuestObjective_C_IsQuestComplete_Params params;
	params.GameStatisticComponent = GameStatisticComponent;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
