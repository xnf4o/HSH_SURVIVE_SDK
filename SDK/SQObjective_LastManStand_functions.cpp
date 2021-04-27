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

// Function SQObjective_LastManStand.SQObjective_LastManStand_C.GetQuestDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 QuestStr                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USQObjective_LastManStand_C::GetQuestDetails(struct FString* QuestStr)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_LastManStand.SQObjective_LastManStand_C.GetQuestDetails");

	USQObjective_LastManStand_C_GetQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestStr != nullptr)
		*QuestStr = params.QuestStr;

}


// Function SQObjective_LastManStand.SQObjective_LastManStand_C.IsQuestComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameStatisticComponent_C* GameStatisticComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USQObjective_LastManStand_C::IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SQObjective_LastManStand.SQObjective_LastManStand_C.IsQuestComplete");

	USQObjective_LastManStand_C_IsQuestComplete_Params params;
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
