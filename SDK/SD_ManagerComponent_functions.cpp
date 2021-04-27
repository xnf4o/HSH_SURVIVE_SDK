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

// Function SD_ManagerComponent.SD_ManagerComponent_C.IsRitualCompleteAll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USD_ManagerComponent_C::IsRitualCompleteAll()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.IsRitualCompleteAll");

	USD_ManagerComponent_C_IsRitualCompleteAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SD_ManagerComponent.SD_ManagerComponent_C.OpenAllGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USD_ManagerComponent_C::OpenAllGate(bool AutoActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.OpenAllGate");

	USD_ManagerComponent_C_OpenAllGate_Params params;
	params.AutoActive = AutoActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.OpenAllChest
// (BlueprintCallable, BlueprintEvent)
void USD_ManagerComponent_C::OpenAllChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.OpenAllChest");

	USD_ManagerComponent_C_OpenAllChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.Buff
// (BlueprintCallable, BlueprintEvent)
void USD_ManagerComponent_C::Buff()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.Buff");

	USD_ManagerComponent_C_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.SpawnSuddenDeathEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USD_ManagerComponent_C::SpawnSuddenDeathEffect(class AActor* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.SpawnSuddenDeathEffect");

	USD_ManagerComponent_C_SpawnSuddenDeathEffect_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.PlayBGM
// (BlueprintCallable, BlueprintEvent)
void USD_ManagerComponent_C::PlayBGM()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.PlayBGM");

	USD_ManagerComponent_C_PlayBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void USD_ManagerComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.Initialize");

	USD_ManagerComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USD_ManagerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.ReceiveTick");

	USD_ManagerComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.EnterSuddenMode
// (BlueprintCallable, BlueprintEvent)
void USD_ManagerComponent_C::EnterSuddenMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.EnterSuddenMode");

	USD_ManagerComponent_C_EnterSuddenMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.OnCharacterChanged
// (BlueprintCallable, BlueprintEvent)
void USD_ManagerComponent_C::OnCharacterChanged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.OnCharacterChanged");

	USD_ManagerComponent_C_OnCharacterChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.EnterSuddenModeOnePersonLeft
// (BlueprintCallable, BlueprintEvent)
void USD_ManagerComponent_C::EnterSuddenModeOnePersonLeft()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.EnterSuddenModeOnePersonLeft");

	USD_ManagerComponent_C_EnterSuddenModeOnePersonLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SD_ManagerComponent.SD_ManagerComponent_C.ExecuteUbergraph_SD_ManagerComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USD_ManagerComponent_C::ExecuteUbergraph_SD_ManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SD_ManagerComponent.SD_ManagerComponent_C.ExecuteUbergraph_SD_ManagerComponent");

	USD_ManagerComponent_C_ExecuteUbergraph_SD_ManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
