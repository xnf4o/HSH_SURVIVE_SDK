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

// Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.GetQuestDetialsNew
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_QuestDetail>  Return                         (Parm, OutParm, ZeroConstructor)
void USQObjective_DebugAlwaySuccess_C::GetQuestDetialsNew(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FS_QuestDetail>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.GetQuestDetialsNew");

	USQObjective_DebugAlwaySuccess_C_GetQuestDetialsNew_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.GetQuestDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 QuestStr                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USQObjective_DebugAlwaySuccess_C::GetQuestDetails(struct FString* QuestStr)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.GetQuestDetails");

	USQObjective_DebugAlwaySuccess_C_GetQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestStr != nullptr)
		*QuestStr = params.QuestStr;

}


// Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.IsQuestComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameStatisticComponent_C* GameStatisticComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USQObjective_DebugAlwaySuccess_C::IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C.IsQuestComplete");

	USQObjective_DebugAlwaySuccess_C_IsQuestComplete_Params params;
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
