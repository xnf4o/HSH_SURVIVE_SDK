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

// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestWidgetHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
void UIngame_QuestPanel_C::UpdateQuestWidgetHunter(const struct FPrimaryAssetId& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestWidgetHunter");

	UIngame_QuestPanel_C_UpdateQuestWidgetHunter_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_QuestPanel_C::UpdateQuestWidget(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestWidget");

	UIngame_QuestPanel_C_UpdateQuestWidget_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestNew
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_QuestDetail>  QuestStr                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_QuestPanel_C::UpdateQuestNew(TArray<struct FS_QuestDetail>* QuestStr)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuestNew");

	UIngame_QuestPanel_C_UpdateQuestNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestStr != nullptr)
		*QuestStr = params.QuestStr;

}


// Function Ingame_QuestPanel.Ingame_QuestPanel_C.Get_Quest_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UIngame_QuestPanel_C::Get_Quest_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestPanel.Ingame_QuestPanel_C.Get_Quest_Text");

	UIngame_QuestPanel_C_Get_Quest_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         QuestStr                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_QuestPanel_C::UpdateQuest(TArray<struct FString>* QuestStr)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestPanel.Ingame_QuestPanel_C.UpdateQuest");

	UIngame_QuestPanel_C_UpdateQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestStr != nullptr)
		*QuestStr = params.QuestStr;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
