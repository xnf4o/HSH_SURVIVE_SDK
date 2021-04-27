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

// Function Ingame_QuestObjective.Ingame_QuestObjective_C.PlayUpdateAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_QuestObjective_C::PlayUpdateAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestObjective.Ingame_QuestObjective_C.PlayUpdateAnimation");

	UIngame_QuestObjective_C_PlayUpdateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestObjective.Ingame_QuestObjective_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_QuestDetail          Detail                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UIngame_QuestObjective_C::Update(const struct FS_QuestDetail& Detail)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestObjective.Ingame_QuestObjective_C.Update");

	UIngame_QuestObjective_C_Update_Params params;
	params.Detail = Detail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestObjective.Ingame_QuestObjective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_QuestObjective_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestObjective.Ingame_QuestObjective_C.Construct");

	UIngame_QuestObjective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestObjective.Ingame_QuestObjective_C.ExecuteUbergraph_Ingame_QuestObjective
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_QuestObjective_C::ExecuteUbergraph_Ingame_QuestObjective(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestObjective.Ingame_QuestObjective_C.ExecuteUbergraph_Ingame_QuestObjective");

	UIngame_QuestObjective_C_ExecuteUbergraph_Ingame_QuestObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
